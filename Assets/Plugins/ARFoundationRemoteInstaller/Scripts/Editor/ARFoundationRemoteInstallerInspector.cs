#if UNITY_EDITOR
using System;
using System.Linq;
using UnityEditor;
using UnityEditor.PackageManager;
using UnityEngine;
using UnityEngine.Assertions;
using Object = UnityEngine.Object;


namespace ARFoundationRemote.Editor {
    [CustomEditor(typeof(ARFoundationRemoteInstaller), true), CanEditMultipleObjects]
    public class ARFoundationRemoteInstallerInspector : UnityEditor.Editor {
        bool isARFoundationEmbedded;
        
        
        void OnEnable() {
            isARFoundationEmbedded = ARFoundationRemoteInstaller.getArf().source == PackageSource.Embedded;
            var instance = (ARFoundationRemoteInstaller) target;
            if (isARFoundationEmbedded && instance.settings.shouldInstall) {
                #if AR_FOUNDATION_REMOTE_INSTALLED
                FixesForEditorSupport.Apply();
                #endif
            }

            instance.tryContinueInstallOrUninstall();
        }

        public override void OnInspectorGUI() {
            if (EditorApplication.isCompiling) {
                return;
            }
            
            DrawDefaultInspector();
            showMethodsInInspector(targets);
        }

        void showMethodsInInspector(params Object[] inspectorTargets) {
            var instance = inspectorTargets.First() as ARFoundationRemoteInstaller;
            Assert.IsNotNull(instance);

            if (isInstalled) {
                if (isARFoundationEmbedded) {
                    GUILayout.Space(16);
                    GUILayout.Label("AR Companion app", EditorStyles.boldLabel);
                    if (GUILayout.Button("Install AR Companion App", new GUIStyle(GUI.skin.button) {fontStyle = FontStyle.Bold})) {
                        /*AutoARFoundationFixes.Enabled = true;
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                        if (FixesForEditorSupport.Apply()) {
                            Debug.LogError($"{ARFoundationRemoteInstaller.displayName}: applying AR Foundation fixes... Please retry the AR Companion app installation.");
                            return;
                        }
                        #endif*/

                        execute(CompanionAppInstaller.BuildAndRun);
                    }

                    if (GUILayout.Button("Build AR Companion and show in folder", new GUIStyle(GUI.skin.button))) {
                        execute(CompanionAppInstaller.Build);
                    }

                    if (GUILayout.Button("Open Plugin Settings")) {
                    #if AR_FOUNDATION_REMOTE_INSTALLED
                        Selection.activeObject = Runtime.Settings.Instance;
                    #endif
                    }

                    if (GUILayout.Button("Delete AR Companion app build folder")) {
                        execute(CompanionAppInstaller.DeleteCompanionAppBuildFolder);
                    }

                    GUILayout.Space(16);
                    /*if (GUILayout.Button("Apply AR Foundation fixes")) {
                        AutoARFoundationFixes.Enabled = true;
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                            FixesForEditorSupport.Apply();
                        #endif
                    }*/

                    /*if (GUILayout.Button("Undo AR Foundation fixes")) {
                        AutoARFoundationFixes.Enabled = false;
                        #if AR_FOUNDATION_REMOTE_INSTALLED
                        FixesForEditorSupport.Undo();
                        #endif
                    }*/
                } else {
                    if (GUILayout.Button("Embed AR Foundation Package")) {
                        ARFoundationRemoteInstaller.EmbedARFoundation();
                    }        
                }
            
                GUILayout.Space(16);
                GUILayout.Label(ARFoundationRemoteInstaller.displayName, EditorStyles.boldLabel);
                if (GUILayout.Button("Un-install Plugin", new GUIStyle(GUI.skin.button) {normal = {textColor = Color.red}})) {
                    instance.UnInstallPlugin();
                }
            } else {
                if (GUILayout.Button("Install Plugin")) {
                    instance.InstallPlugin(true);
                }
            }
            
            if (isARFoundationEmbedded && GUILayout.Button("Un-embed AR Foundation")) {
                ARFoundationRemoteInstaller.UnEmbedARFoundation();
            }
            
            /*if (GUILayout.Button("DEBUG")) {
            }*/
        }
    
        static bool isInstalled {
            get {
                return
                #if AR_FOUNDATION_REMOTE_INSTALLED
                    true;
                #else
                    false;
                #endif
            }
        }
        
        static void execute(Action action) {
            action();
        }
    }
}
#endif // UNITY_EDITOR
