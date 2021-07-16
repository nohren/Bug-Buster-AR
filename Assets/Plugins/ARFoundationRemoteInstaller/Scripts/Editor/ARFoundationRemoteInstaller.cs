using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using JetBrains.Annotations;
using UnityEditor;
using UnityEditor.PackageManager;
using UnityEditor.PackageManager.Requests;
using UnityEngine;
using UnityEngine.Assertions;
using Debug = UnityEngine.Debug;
using PackageInfo = UnityEditor.PackageManager.PackageInfo;


namespace ARFoundationRemote.Editor {
    public class ARFoundationRemoteInstaller : ScriptableObject {
        [SerializeField] public InstallerSettings settings = new InstallerSettings();
        public const string pluginId = "com.kyrylokuzyk.arfoundationremote";
        const string arFoundationPackageId = "com.unity.xr.arfoundation";
        public const string displayName = "AR Foundation Editor Remote";
        const string packagesFolderName = "Packages";
        static readonly Dictionary<string, string> minDependencies = new Dictionary<string, string> {
            {arFoundationPackageId, "3.0.1"},
            {"com.unity.xr.arsubsystems", "3.0.0"},
            {"com.unity.xr.arcore", "3.0.1"},
            {"com.unity.xr.arkit", "3.0.1"},
            {"com.unity.xr.arkit-face-tracking", "3.0.1"}
        };

        static DirectoryInfo dataPathParent => Directory.GetParent(Application.dataPath);
        static char slash => Path.DirectorySeparatorChar;
        static string sourceFolderName => $"{dataPathParent}{slash}Assets{slash}Plugins{slash}ARFoundationRemoteInstaller{slash}{pluginId}";
        static string destinationFolderName => $"{dataPathParent}{slash}{packagesFolderName}{slash}{pluginId}";
        static string tempFolder => $"{dataPathParent}{slash}{pluginId}";


        [CanBeNull] static ARFoundationRemoteInstaller _instance;
        [CanBeNull] public static ARFoundationRemoteInstaller Instance {
            get {
                if (_instance == null) {
                    _instance = AssetDatabase.LoadAssetAtPath<ARFoundationRemoteInstaller>("Assets/Plugins/ARFoundationRemoteInstaller/Installer.asset"); 
                }

                return _instance;
            }
        }

        public void UnInstallPlugin() {
            settings.shouldInstall = false;
            log("settings.shouldInstall = false;");
            #if AR_FOUNDATION_REMOTE_INSTALLED
            #if AR_FOUNDATION_REMOTE_4_12_0_OR_NEWER
            if (EditorUtility.IsDirty(Runtime.SessionRecordings.Instance)) {
                Debug.LogError($"{displayName}: please save the SessionRecordings.asset before uninstall to prevent file corruption.");
                return;
            }
            #endif
            
            if (FixesForEditorSupport.Undo()) {
                Debug.LogError($"{displayName}: undoing AR Foundation fixes... Please press the 'Un-install Plugin' button again.");
                return;
            }
            #endif
            
            var listRequest = Client.List(true, false);
            runRequest(listRequest, () => {
                Assert.AreEqual(StatusCode.Success, listRequest.Status);
                var plugin = listRequest.Result.SingleOrDefault(_ => _.name == pluginId);
                Assert.IsNotNull(plugin);
                EditorUtility.DisplayDialog(displayName, "If you'll encounter compilation errors after uninstallation, please restart Unity Editor.", "Got it!");
                if (plugin.source == PackageSource.Embedded) {
                    moveFolder(destinationFolderName, tempFolder);
                    resolvePackageManager();
                    logUninstallSuccess();
                } else {
                    Debug.LogError("Removing plugin via Package Manager. This error should not be visible in production!");
                    var removeRequest = Client.Remove(pluginId);
                    runRequest(removeRequest, () => {
                        if (removeRequest.Status == StatusCode.Success) {
                            logUninstallSuccess();
                        } else {
                            Debug.LogError($"removeRequest failed {removeRequest.Error}");
                        }
                    });
                }    
            });
            
            void logUninstallSuccess() {
                Debug.Log($"{displayName} was uninstalled from Packages folder. To uninstall the plugin completely, please delete the ARFoundationRemoteInstaller folder.");
            }
        }

        static void checkDependencies(Action<bool> callback) {
            var listRequest = Client.List(true, true);
            runRequest(listRequest, () => {
                callback(checkVersions(listRequest.Result));
            });
        }

        static bool checkVersions(PackageCollection packages) {
            var result = true;
            foreach (var package in packages) {
                var packageName = package.name;
                var currentVersion = parseUnityPackageManagerVersion(package.version);
                if (minDependencies.TryGetValue(packageName, out string dependency)) {
                    //Debug.Log(packageName);
                    var minRequiredVersion = new Version(dependency);
                    if (currentVersion < minRequiredVersion) {
                        result = false;
                        Debug.LogError("Please update this package to the required version via Window -> Package Manager: " + packageName + ":" + minRequiredVersion);
                    }
                }
            }

            if (EditorUserBuildSettings.activeBuildTarget == BuildTarget.iOS) {
                if (packages.All(_ => _.name != "com.unity.xr.arkit-face-tracking")) {
                    Debug.Log("To enable iOS face tracking, install ARKit Face Tracking 3.0.1 via Package Manager.");
                }
            }
            
            return result;
        }

        static Version parseUnityPackageManagerVersion(string version) {
            var versionNumbersStrings = version.Split('.', '-');
            const int numOfVersionComponents = 3;
            Assert.IsTrue(versionNumbersStrings.Length >= numOfVersionComponents);
            var numbers = new List<int>();
            for (int i = 0; i < numOfVersionComponents; i++) {
                var str = versionNumbersStrings[i];
                if (int.TryParse(str, out int num)) {
                    numbers.Add(num);
                } else {
                    throw new Exception("cant parse " + str + " in " + version);
                }
            }

            return new Version(numbers[0], numbers[1], numbers[2]);
        }

        static Action requestCompletedCallback;
        static Request currentRequest;

        public static void runRequest(Request request, Action callback) {
            if (currentRequest != null) {
                Debug.Log(currentRequest.GetType().Name + " is already running, skipping new " + request.GetType().Name);
                return;
            }
        
            Assert.IsNull(requestCompletedCallback);
            Assert.IsNull(currentRequest);
            currentRequest = request;
            requestCompletedCallback = callback;
            EditorApplication.update += editorUpdate;
        }

        static void editorUpdate() {
            Assert.IsNotNull(currentRequest);
            if (currentRequest.IsCompleted) {
                EditorApplication.update -= editorUpdate;
                currentRequest = null;
                var cachedCallback = requestCompletedCallback;
                requestCompletedCallback = null;
                cachedCallback();
            }
        }

        [Conditional("_")]
        static void log(string msg) {
            Debug.Log(msg);
        }
        
        public void InstallPlugin(bool verbose) {
            settings.shouldInstall = true;
            installPlugin_internal(verbose);
        }

        static void installPlugin_internal(bool verbose) {
            log("settings.shouldInstall = true;");
            checkDependencies(success => {
                if (success) {
                    if (!Directory.Exists(sourceFolderName)) {
                        if (verbose) {
                            Debug.LogError(
                                $"{displayName}: please re-import the plugin or buy the additional license if you're trying to install the plugin on different development machine.");
                        }

                        return;
                    }

                    if (Directory.Exists(destinationFolderName)) {
                        Directory.Delete(destinationFolderName, true);
                    }

                    moveFolder(sourceFolderName, tempFolder);
                    addGitIgnore();
                    AssetDatabase.Refresh();
                } else {
                    Debug.LogError(displayName + " installation failed. Please fix errors and press 'Installer-Install Plugin'");
                }
            });
        }

        public void tryContinueInstallOrUninstall() {
            if (Directory.Exists(tempFolder)) {
                if (settings.shouldInstall) {
                    log("continue install");
                    moveFolder(tempFolder, destinationFolderName);
                    resolvePackageManager();        
                    Debug.Log(displayName + " installed successfully. Please read DOCUMENTATION located at Assets/Plugins/ARFoundationRemoteInstaller/DOCUMENTATION.txt");
                } else {
                    log("continue uninstall");
                    moveFolder(tempFolder, sourceFolderName);
                    AssetDatabase.Refresh();
                }
            }
        }

        static void moveFolder(string source, string dest) {
            Assert.IsTrue(Directory.Exists(source));
            if (Directory.Exists(dest)) {
                Directory.Delete(dest, true);
            }
            
            Directory.Move(source, dest);
            File.Delete($"{source}.meta");
        }

        static void resolvePackageManager() {
            #if UNITY_2020_1_OR_NEWER
            Client.Resolve();
            #elif UNITY_2019_4_OR_NEWER
            var method = typeof(Client).GetMethod("Resolve", System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.NonPublic);
            Assert.IsNotNull(method);
            method.Invoke(null, null);
            #else
            AssetDatabase.Refresh();
            #endif
        }

        static void addGitIgnore() {
            var currentFolder = dataPathParent;
            while (true) {
                var path = $"{currentFolder}{slash}.gitignore";
                if (File.Exists(path)) {
                    log($"gitignore found at path {path}");
                    var text = File.ReadAllText(path);
                    var installerFolderName = "ARFoundationRemoteInstaller";
                    var modified = false;
                    if (!text.Contains(pluginId)) {
                        text += $"\n{pluginId}";
                        modified = true;
                    }

                    if (!text.Contains(installerFolderName)) {
                        text += $"\n{installerFolderName}";
                        modified = true;
                    }
                    
                    if (modified) {
                        File.WriteAllText(path, text);
                    }
                    
                    return;
                }

                currentFolder = currentFolder.Parent;
                if (currentFolder == null) {
                    log("gitignore not found in any parent folder");
                    return;
                }
            }
        }

        public static void OnImport() {
            log("OnImport");
            installPlugin_internal(false);
        }

        public static void EmbedARFoundation() {
            var arf = getArf();
            Assert.AreEqual(PackageSource.Registry, arf.source);
            var from = arf.resolvedPath;
            var to = $"{dataPathParent}{slash}{packagesFolderName}{slash}{new DirectoryInfo(from).Name}";
            Assert.IsTrue(Directory.Exists(from), from);
            Assert.IsFalse(Directory.Exists(to), to);
            Copy(from, to);
            resolvePackageManager();
        }

        public static void UnEmbedARFoundation() {
            var arf = getArf();
            Assert.AreEqual(PackageSource.Embedded, arf.source);
            Directory.Delete(arf.resolvedPath, true);
            resolvePackageManager();
        }

        public static PackageInfo getArf() {
            var listRequest = Client.List(true, false);
            runPackageManagerRequestBlocking(listRequest);
            return listRequest.Result.Single(_ => _.name == arFoundationPackageId);
        }
        
        static void runPackageManagerRequestBlocking(Request request) {
            var stopwatch = Stopwatch.StartNew();
            while (!request.IsCompleted) {
                if (stopwatch.Elapsed > TimeSpan.FromSeconds(5)) {
                    throw new Exception();
                }
            }
            
            Assert.AreEqual(StatusCode.Success, request.Status);
        }
        
        static void Copy(string sourceDirectory, string targetDirectory)
        {
            DirectoryInfo diSource = new DirectoryInfo(sourceDirectory);
            DirectoryInfo diTarget = new DirectoryInfo(targetDirectory);

            CopyAll(diSource, diTarget);
        }
        
        static void CopyAll(DirectoryInfo source, DirectoryInfo target)
        {
            Directory.CreateDirectory(target.FullName);

            // Copy each file into the new directory.
            foreach (FileInfo fi in source.GetFiles())
            {
                Console.WriteLine(@"Copying {0}\{1}", target.FullName, fi.Name);
                fi.CopyTo(Path.Combine(target.FullName, fi.Name), true);
            }

            // Copy each subdirectory using recursion.
            foreach (DirectoryInfo diSourceSubDir in source.GetDirectories())
            {
                DirectoryInfo nextTargetSubDir =
                    target.CreateSubdirectory(diSourceSubDir.Name);
                CopyAll(diSourceSubDir, nextTargetSubDir);
            }
        }
    }
    
    
    [Serializable]
    public class InstallerSettings {
        [Tooltip("Use this field if your platform require additional extension when making a build.")]
        [SerializeField] public string optionalCompanionAppExtension = "";
        const string modifyAppIdAndNameTooltip = "By default, the plugin modifies the app name and ID while making the AR Companion build so it doesn't override your real app on your AR device.";
        [Tooltip(modifyAppIdAndNameTooltip)]
        [SerializeField] public bool modifyAppId = true;
        [Tooltip(modifyAppIdAndNameTooltip)]
        [SerializeField] public bool modifyAppName = true;
        [SerializeField] public bool removeCompanionAppDefineAfterBuild = true;

        [SerializeField]
        [HideInInspector]
        public bool shouldInstall = true;
    }
}
