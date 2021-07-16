#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// ARFoundationRemote.Runtime.IXRMeshSubsystem
struct IXRMeshSubsystem_tCE8F8BDB51087933008E2AC7099374D5E0179467;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager
struct _Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_tB65047F63C202D437988E0695DB005617E4E93E8;

IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Loader_tB65047F63C202D437988E0695DB005617E4E93E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63_m81C8B9968485ECE8C7294DA6C3915D8CCB26F122_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4C22CBCD83FE234F5748F1587C3DBDA0C76E3FC6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// ARFoundationRemote.Runtime.Extensions
struct Extensions_t86F19A3B1A36BCD1352E8DC157CB630ACADCFD3C  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02  : public RuntimeObject
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Manager
	_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * ___Manager_1;

public:
	inline static int32_t get_offset_of_Manager_1() { return static_cast<int32_t>(offsetof(XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02, ___Manager_1)); }
	inline _Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * get_Manager_1() const { return ___Manager_1; }
	inline _Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB ** get_address_of_Manager_1() { return &___Manager_1; }
	inline void set_Manager_1(_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * value)
	{
		___Manager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Manager_1), (void*)value);
	}
};

struct XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_StaticFields
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Instance
	XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_StaticFields, ___Instance_0)); }
	inline XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * get_Instance_0() const { return ___Instance_0; }
	inline XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A  : public RuntimeObject
{
public:

public:
};

struct XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_StaticFields
{
public:
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRMeshSubsystemRemote::subsystemDelegate
	RuntimeObject* ___subsystemDelegate_0;

public:
	inline static int32_t get_offset_of_subsystemDelegate_0() { return static_cast<int32_t>(offsetof(XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_StaticFields, ___subsystemDelegate_0)); }
	inline RuntimeObject* get_subsystemDelegate_0() const { return ___subsystemDelegate_0; }
	inline RuntimeObject** get_address_of_subsystemDelegate_0() { return &___subsystemDelegate_0; }
	inline void set_subsystemDelegate_0(RuntimeObject* value)
	{
		___subsystemDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsystemDelegate_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager
struct _Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB  : public RuntimeObject
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::activeLoader
	_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * ___activeLoader_0;

public:
	inline static int32_t get_offset_of_activeLoader_0() { return static_cast<int32_t>(offsetof(_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB, ___activeLoader_0)); }
	inline _Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * get_activeLoader_0() const { return ___activeLoader_0; }
	inline _Loader_tB65047F63C202D437988E0695DB005617E4E93E8 ** get_address_of_activeLoader_0() { return &___activeLoader_0; }
	inline void set_activeLoader_0(_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * value)
	{
		___activeLoader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeLoader_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_tB65047F63C202D437988E0695DB005617E4E93E8  : public RuntimeObject
{
public:

public:
};

struct _Loader_tB65047F63C202D437988E0695DB005617E4E93E8_StaticFields
{
public:
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::subsystem
	RuntimeObject* ___subsystem_0;

public:
	inline static int32_t get_offset_of_subsystem_0() { return static_cast<int32_t>(offsetof(_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_StaticFields, ___subsystem_0)); }
	inline RuntimeObject* get_subsystem_0() const { return ___subsystem_0; }
	inline RuntimeObject** get_address_of_subsystem_0() { return &___subsystem_0; }
	inline void set_subsystem_0(RuntimeObject* value)
	{
		___subsystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsystem_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544 (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m96B92FB8C26D8BF28889E32D8F902B11D15B7850 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___settings0, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_mB7089CE65F62509FB62195A1242A92AC34BD0245 (_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mC97CEC1B00478A9A8C1AC6E9CDE250150A503C29 (XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m2458C2B5ECB6EC7446DAA8E54B575400C5F5154C (_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mB59850DC5A67E21BF4F559A9FA79EF1B04C86B28 (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m96B92FB8C26D8BF28889E32D8F902B11D15B7850 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___settings0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!settings.isInitializationComplete) {
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = ___settings0;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRManagerSettings_get_isInitializationComplete_m1559C8B12004C52CBAC825FFE823C2C4DF7C719D(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// settings.InitializeLoaderSync();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_3 = ___settings0;
		NullCheck(L_3);
		XRManagerSettings_InitializeLoaderSync_m97C5BA258C318867D1B8B8183AAC454D5EAA23F5(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.XRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetRealSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRGeneralSettingsRemote_GetRealSubsystem_m0BFBB2F3559368DFBEE53E83E7B48B4B510565A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63_m81C8B9968485ECE8C7294DA6C3915D8CCB26F122_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * V_0 = NULL;
	bool V_1 = false;
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * V_2 = NULL;
	bool V_3 = false;
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * V_4 = NULL;
	bool V_5 = false;
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * V_6 = NULL;
	{
		// var xrGeneralSettings = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0;
		L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (xrGeneralSettings != null) {
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// var manager = xrGeneralSettings.Manager;
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_4 = V_0;
		NullCheck(L_4);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_5;
		L_5 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (manager != null) {
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// manager.InitializeLoaderSyncIfNotInitialized();
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_9 = V_2;
		Extensions_InitializeLoaderSyncIfNotInitialized_m96B92FB8C26D8BF28889E32D8F902B11D15B7850(L_9, /*hidden argument*/NULL);
		// var loader = manager.activeLoader;
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_10 = V_2;
		NullCheck(L_10);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_11;
		L_11 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// if (loader != null) {
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// return loader.GetLoadedSubsystem<XRMeshSubsystem>();
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_15 = V_4;
		NullCheck(L_15);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_16;
		L_16 = GenericVirtFuncInvoker0< XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63_m81C8B9968485ECE8C7294DA6C3915D8CCB26F122_RuntimeMethod_var, L_15);
		V_6 = L_16;
		goto IL_0056;
	}

IL_004f:
	{
	}

IL_0050:
	{
	}

IL_0051:
	{
		// return null;
		V_6 = (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 *)NULL;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_17 = V_6;
		return L_17;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mC97CEC1B00478A9A8C1AC6E9CDE250150A503C29 (XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Manager Manager = new _Manager();
		_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * L_0 = (_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB *)il2cpp_codegen_object_new(_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB_il2cpp_TypeInfo_var);
		_Manager__ctor_mB7089CE65F62509FB62195A1242A92AC34BD0245(L_0, /*hidden argument*/NULL);
		__this->set_Manager_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__cctor_m7F5038C9AEE2AD9665A9BAC03337DB582C409AC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly XRGeneralSettingsRemote Instance = new XRGeneralSettingsRemote();
		XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 * L_0 = (XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02 *)il2cpp_codegen_object_new(XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_il2cpp_TypeInfo_var);
		XRGeneralSettingsRemote__ctor_mC97CEC1B00478A9A8C1AC6E9CDE250150A503C29(L_0, /*hidden argument*/NULL);
		((XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t70812E8C6E7EE5CA0E602F2EB42950062BA77D02_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_m0C91B2BD336FB377C3D43BEC9F55561BCF814ADE (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Start();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_Stop_mEF5A4CA587BC6F7601ED7815D60CF5A285680D02 (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Stop();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_Destroy_mD580A12FB3AA2ED9273A954751E25F97755E60D7 (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Destroy();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mB59850DC5A67E21BF4F559A9FA79EF1B04C86B28 (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_mB7089CE65F62509FB62195A1242A92AC34BD0245 (_Manager_tE9395809B70B1D6E7EA57C62C635363EFDD3F5EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Loader activeLoader = new _Loader();
		_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * L_0 = (_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 *)il2cpp_codegen_object_new(_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_il2cpp_TypeInfo_var);
		_Loader__ctor_m2458C2B5ECB6EC7446DAA8E54B575400C5F5154C(L_0, /*hidden argument*/NULL);
		__this->set_activeLoader_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m2458C2B5ECB6EC7446DAA8E54B575400C5F5154C (_Loader_tB65047F63C202D437988E0695DB005617E4E93E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__cctor_m4BE1A7E0D6759547627ED7E02DF5660239BF201B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly IXRMeshSubsystem subsystem = new XRMeshSubsystemRemote();
		XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A * L_0 = (XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A *)il2cpp_codegen_object_new(XRMeshSubsystemRemote_t584F3060D76AD2C904673618616D908F3269E90A_il2cpp_TypeInfo_var);
		XRMeshSubsystemRemote__ctor_mB59850DC5A67E21BF4F559A9FA79EF1B04C86B28(L_0, /*hidden argument*/NULL);
		((_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_tB65047F63C202D437988E0695DB005617E4E93E8_il2cpp_TypeInfo_var))->set_subsystem_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
