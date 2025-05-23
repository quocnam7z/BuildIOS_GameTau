﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4;
// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB;
// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioAmbisonicExtensionDefinition
struct AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417;
// UnityEngine.AudioAmbisonicExtensionDefinition[]
struct AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88;
// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioExtensionDefinition
struct AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC;
// UnityEngine.AudioListener
struct AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1;
// UnityEngine.AudioSourceExtension[]
struct AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231;
// UnityEngine.AudioSpatializerExtensionDefinition
struct AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7;
// UnityEngine.AudioSpatializerExtensionDefinition[]
struct AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913;
// UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction
struct ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;

extern RuntimeClass* AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral01DEFA05B661532C154351EDC5311960DBBC53B9;
extern String_t* _stringLiteral0C0397D0D0570E58797662AD4FFF54DE9D446B1D;
extern String_t* _stringLiteral238F741028355562F523A6ACA910C9563A955065;
extern String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
extern String_t* _stringLiteralA788A98107C74D8F9B61D7F6098E39919B69E276;
extern String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
extern const RuntimeMethod* AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65_RuntimeMethod_var;
extern const RuntimeMethod* AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71_RuntimeMethod_var;
extern const RuntimeMethod* AudioPlayableBinding_CreateAudioOutput_mDE1EA50611F66F0A5D3BBC13D2751EB11621E157_RuntimeMethod_var;
extern const RuntimeMethod* AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mEBC7D75C2A8487FC3446C99B1D3762996DB2FB62_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mFCC2DE20868C4BC2A3E84598F90B65500FCAA01B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mFDDA5D2B63191CC12FF602C3BD92BCE3253726C6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mC1569F3CAA26DEF3D86683E8177004C3C085645F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m155CE02D7F2F90329E010D25EF2397F8ADB8B164_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_mD346619B716861C192281DAC0CC6D4EEF7B49161_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m19FA77D650658381D95E4324E6B91BBA93076062_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mCAA30996286EED7639EB78B7DD866819AEE2D2F9_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_mA8237FCBE84FBA3E34A8C6F4B0CF81F2143CBF8A_RuntimeMethod_var;
extern const RuntimeMethod* PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D_RuntimeMethod_var;
extern const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709_RuntimeMethod_var;
extern const RuntimeType* AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_0_0_0_var;
extern const uint32_t AudioClipPlayable_CreateHandle_mDE1336C3DBE31A50391ECB46C63B9203566CACD5_MetadataUsageId;
extern const uint32_t AudioClipPlayable_Create_m84E90BEBEABF05FBE217F45B69C744CEFDE9343F_MetadataUsageId;
extern const uint32_t AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_MetadataUsageId;
extern const uint32_t AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65_MetadataUsageId;
extern const uint32_t AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_MetadataUsageId;
extern const uint32_t AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827_MetadataUsageId;
extern const uint32_t AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddExtensionToManager_mF67FFAD6749CF9AB4AFA123DA83F6D53E83D5643_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m308292561D9B4CAF4B66BD3905885267A78B2533_MetadataUsageId;
extern const uint32_t AudioExtensionManager_AddSpatializerExtension_m7CB5E033FF869B212B56D9180B460764BECBA3F4_MetadataUsageId;
extern const uint32_t AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3_MetadataUsageId;
extern const uint32_t AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E_MetadataUsageId;
extern const uint32_t AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C_MetadataUsageId;
extern const uint32_t AudioExtensionManager_Update_m484C1E7616C543D727E8EB673188846CD5987382_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m445848E71B4139FEE237367139F75751A0425974_MetadataUsageId;
extern const uint32_t AudioExtensionManager_WriteExtensionProperties_m51EDE1F77BF1FF1677F4C85C9067A2B48FC58C97_MetadataUsageId;
extern const uint32_t AudioExtensionManager__cctor_m8558C140E3B10D18B24349BEE84D0C30FC44889C_MetadataUsageId;
extern const uint32_t AudioListener_AddExtension_m4D1DD3D583145A51A71D1811C8F489C03AFF77C1_MetadataUsageId;
extern const uint32_t AudioMixerPlayable_CreateHandle_mAA4D0D55FB6CBAAF841E1D444A1586D52E0759D3_MetadataUsageId;
extern const uint32_t AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_MetadataUsageId;
extern const uint32_t AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71_MetadataUsageId;
extern const uint32_t AudioPlayableBinding_Create_mA9118B41199C444FD28C84E7DA945ABE1BDD7F30_MetadataUsageId;
extern const uint32_t AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C_MetadataUsageId;
extern const uint32_t AudioPlayableOutput_get_Null_m33FF94F426450F5F386FE9C34B111568FA69DF8D_MetadataUsageId;
extern const uint32_t AudioSampleProvider_Dispose_mA11D514354EDA94E8B6AA83B726DF85169C8E29A_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioManagerUpdate_m8903294EA9A21219DD89D2D4DA58E8F92E2241D7_MetadataUsageId;
extern const uint32_t AudioSettings_InvokeOnAudioSourcePlay_mD51DB37900113BD1FCF3E34F357A717CF751E126_MetadataUsageId;
extern const uint32_t AudioSourceExtension_OnDestroy_mD8E128CF5A04AAEA4A1865107D241E5C8CAFBE3D_MetadataUsageId;
extern const uint32_t AudioSource_AddAmbisonicExtension_m7D073528C0FAF70863AF8F14761ED4DA2CD986EF_MetadataUsageId;
extern const uint32_t AudioSource_AddSpatializerExtension_mEA48D6DCCBFA6EF941158C6A0AF5844519AC3DA7_MetadataUsageId;
extern const uint32_t AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_MetadataUsageId;
extern const uint32_t ConsumeSampleFramesNativeFunction_BeginInvoke_mCFD45D186107B1FD87B1A492904CBCF49DDA28CB_MetadataUsageId;
extern const uint32_t PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093_MetadataUsageId;
extern const uint32_t SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T2E16431D825A5D233BFED659B3C516DAB0AC0286_H
#define U3CMODULEU3E_T2E16431D825A5D233BFED659B3C516DAB0AC0286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2E16431D825A5D233BFED659B3C516DAB0AC0286 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2E16431D825A5D233BFED659B3C516DAB0AC0286_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_H
#define LIST_1_T3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4, ____items_1)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* get__items_1() const { return ____items_1; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_StaticFields, ____emptyArray_5)); }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioAmbisonicExtensionDefinitionU5BU5D_t1FA20CDA9168EF5657AC5EA5DD51F4816CC55A88* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_H
#ifndef LIST_1_T9540CDE5EC8583EFB0B58048F20080ED322C99BB_H
#define LIST_1_T9540CDE5EC8583EFB0B58048F20080ED322C99BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct  List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB, ____items_1)); }
	inline AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* get__items_1() const { return ____items_1; }
	inline AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB_StaticFields, ____emptyArray_5)); }
	inline AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioSourceExtensionU5BU5D_t5219BE1ED04C085D52DB912F50C33ADC6D6C0231* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T9540CDE5EC8583EFB0B58048F20080ED322C99BB_H
#ifndef LIST_1_T2C012B76D568CE6A7307A2EA9FF650F49761D78A_H
#define LIST_1_T2C012B76D568CE6A7307A2EA9FF650F49761D78A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct  List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A, ____items_1)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* get__items_1() const { return ____items_1; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A_StaticFields, ____emptyArray_5)); }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioSpatializerExtensionDefinitionU5BU5D_t9A4CEE6535C15AA5BA128DEE1F1F37EEE949FC9E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2C012B76D568CE6A7307A2EA9FF650F49761D78A_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef AUDIOPLAYABLEBINDING_T1DC27F398E1925C5933F545345104931AABF5914_H
#define AUDIOPLAYABLEBINDING_T1DC27F398E1925C5933F545345104931AABF5914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableBinding
struct  AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914  : public RuntimeObject
{
public:

public:
};

struct AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding_CreateOutputMethod UnityEngine.Audio.AudioPlayableBinding::<>f__mgU24cache0
	CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEBINDING_T1DC27F398E1925C5933F545345104931AABF5914_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T61660580C7B3B5AF5A186332FEE166B51132305D_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T61660580C7B3B5AF5A186332FEE166B51132305D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t61660580C7B3B5AF5A186332FEE166B51132305D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T61660580C7B3B5AF5A186332FEE166B51132305D_H
#ifndef AUDIOEXTENSIONDEFINITION_TC2DA8CE3B7C53B001C90479C1954DE00649808CC_H
#define AUDIOEXTENSIONDEFINITION_TC2DA8CE3B7C53B001C90479C1954DE00649808CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionDefinition
struct  AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC  : public RuntimeObject
{
public:
	// System.String UnityEngine.AudioExtensionDefinition::assemblyName
	String_t* ___assemblyName_0;
	// System.String UnityEngine.AudioExtensionDefinition::extensionNamespace
	String_t* ___extensionNamespace_1;
	// System.String UnityEngine.AudioExtensionDefinition::extensionTypeName
	String_t* ___extensionTypeName_2;
	// System.Type UnityEngine.AudioExtensionDefinition::extensionType
	Type_t * ___extensionType_3;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_extensionNamespace_1() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC, ___extensionNamespace_1)); }
	inline String_t* get_extensionNamespace_1() const { return ___extensionNamespace_1; }
	inline String_t** get_address_of_extensionNamespace_1() { return &___extensionNamespace_1; }
	inline void set_extensionNamespace_1(String_t* value)
	{
		___extensionNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionNamespace_1), value);
	}

	inline static int32_t get_offset_of_extensionTypeName_2() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC, ___extensionTypeName_2)); }
	inline String_t* get_extensionTypeName_2() const { return ___extensionTypeName_2; }
	inline String_t** get_address_of_extensionTypeName_2() { return &___extensionTypeName_2; }
	inline void set_extensionTypeName_2(String_t* value)
	{
		___extensionTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionTypeName_2), value);
	}

	inline static int32_t get_offset_of_extensionType_3() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC, ___extensionType_3)); }
	inline Type_t * get_extensionType_3() const { return ___extensionType_3; }
	inline Type_t ** get_address_of_extensionType_3() { return &___extensionType_3; }
	inline void set_extensionType_3(Type_t * value)
	{
		___extensionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___extensionType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONDEFINITION_TC2DA8CE3B7C53B001C90479C1954DE00649808CC_H
#ifndef AUDIOSETTINGS_T77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_H
#define AUDIOSETTINGS_T77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields
{
public:
	// UnityEngine.AudioSettings_AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_H
#ifndef AUDIOSAMPLEPROVIDER_TD5B209D07C5F1D4714F92069F4071068B9BC6913_H
#define AUDIOSAMPLEPROVIDER_TD5B209D07C5F1D4714F92069F4071068B9BC6913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct  AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction UnityEngine.Experimental.Audio.AudioSampleProvider::m_ConsumeSampleFramesNativeFunction
	ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * ___m_ConsumeSampleFramesNativeFunction_0;
	// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::<id>k__BackingField
	uint32_t ___U3CidU3Ek__BackingField_1;
	// System.UInt16 UnityEngine.Experimental.Audio.AudioSampleProvider::<trackIndex>k__BackingField
	uint16_t ___U3CtrackIndexU3Ek__BackingField_2;
	// UnityEngine.Object UnityEngine.Experimental.Audio.AudioSampleProvider::<owner>k__BackingField
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___U3CownerU3Ek__BackingField_3;
	// System.UInt16 UnityEngine.Experimental.Audio.AudioSampleProvider::<channelCount>k__BackingField
	uint16_t ___U3CchannelCountU3Ek__BackingField_4;
	// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::<sampleRate>k__BackingField
	uint32_t ___U3CsampleRateU3Ek__BackingField_5;
	// UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * ___sampleFramesAvailable_6;
	// UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * ___sampleFramesOverflow_7;

public:
	inline static int32_t get_offset_of_m_ConsumeSampleFramesNativeFunction_0() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___m_ConsumeSampleFramesNativeFunction_0)); }
	inline ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * get_m_ConsumeSampleFramesNativeFunction_0() const { return ___m_ConsumeSampleFramesNativeFunction_0; }
	inline ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D ** get_address_of_m_ConsumeSampleFramesNativeFunction_0() { return &___m_ConsumeSampleFramesNativeFunction_0; }
	inline void set_m_ConsumeSampleFramesNativeFunction_0(ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * value)
	{
		___m_ConsumeSampleFramesNativeFunction_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConsumeSampleFramesNativeFunction_0), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___U3CidU3Ek__BackingField_1)); }
	inline uint32_t get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(uint32_t value)
	{
		___U3CidU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtrackIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___U3CtrackIndexU3Ek__BackingField_2)); }
	inline uint16_t get_U3CtrackIndexU3Ek__BackingField_2() const { return ___U3CtrackIndexU3Ek__BackingField_2; }
	inline uint16_t* get_address_of_U3CtrackIndexU3Ek__BackingField_2() { return &___U3CtrackIndexU3Ek__BackingField_2; }
	inline void set_U3CtrackIndexU3Ek__BackingField_2(uint16_t value)
	{
		___U3CtrackIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CownerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___U3CownerU3Ek__BackingField_3)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_U3CownerU3Ek__BackingField_3() const { return ___U3CownerU3Ek__BackingField_3; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_U3CownerU3Ek__BackingField_3() { return &___U3CownerU3Ek__BackingField_3; }
	inline void set_U3CownerU3Ek__BackingField_3(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___U3CownerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CownerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CchannelCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___U3CchannelCountU3Ek__BackingField_4)); }
	inline uint16_t get_U3CchannelCountU3Ek__BackingField_4() const { return ___U3CchannelCountU3Ek__BackingField_4; }
	inline uint16_t* get_address_of_U3CchannelCountU3Ek__BackingField_4() { return &___U3CchannelCountU3Ek__BackingField_4; }
	inline void set_U3CchannelCountU3Ek__BackingField_4(uint16_t value)
	{
		___U3CchannelCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsampleRateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___U3CsampleRateU3Ek__BackingField_5)); }
	inline uint32_t get_U3CsampleRateU3Ek__BackingField_5() const { return ___U3CsampleRateU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CsampleRateU3Ek__BackingField_5() { return &___U3CsampleRateU3Ek__BackingField_5; }
	inline void set_U3CsampleRateU3Ek__BackingField_5(uint32_t value)
	{
		___U3CsampleRateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_sampleFramesAvailable_6() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___sampleFramesAvailable_6)); }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * get_sampleFramesAvailable_6() const { return ___sampleFramesAvailable_6; }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF ** get_address_of_sampleFramesAvailable_6() { return &___sampleFramesAvailable_6; }
	inline void set_sampleFramesAvailable_6(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * value)
	{
		___sampleFramesAvailable_6 = value;
		Il2CppCodeGenWriteBarrier((&___sampleFramesAvailable_6), value);
	}

	inline static int32_t get_offset_of_sampleFramesOverflow_7() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913, ___sampleFramesOverflow_7)); }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * get_sampleFramesOverflow_7() const { return ___sampleFramesOverflow_7; }
	inline SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF ** get_address_of_sampleFramesOverflow_7() { return &___sampleFramesOverflow_7; }
	inline void set_sampleFramesOverflow_7(SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * value)
	{
		___sampleFramesOverflow_7 = value;
		Il2CppCodeGenWriteBarrier((&___sampleFramesOverflow_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSAMPLEPROVIDER_TD5B209D07C5F1D4714F92069F4071068B9BC6913_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T4C00B449B1E5C0CC84D7474572B59B042DB541AE_H
#define ENUMERATOR_T4C00B449B1E5C0CC84D7474572B59B042DB541AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>
struct  Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE, ___list_0)); }
	inline List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * get_list_0() const { return ___list_0; }
	inline List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE, ___current_3)); }
	inline AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * get_current_3() const { return ___current_3; }
	inline AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4C00B449B1E5C0CC84D7474572B59B042DB541AE_H
#ifndef ENUMERATOR_T05820D7A93AA056242BEF86A46BF2C0314A4A9A3_H
#define ENUMERATOR_T05820D7A93AA056242BEF86A46BF2C0314A4A9A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>
struct  Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3, ___list_0)); }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * get_list_0() const { return ___list_0; }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3, ___current_3)); }
	inline AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * get_current_3() const { return ___current_3; }
	inline AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T05820D7A93AA056242BEF86A46BF2C0314A4A9A3_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#define PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T75EB843FEA2EC372093479A35C24364D2DF98529_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#define INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef AUDIOAMBISONICEXTENSIONDEFINITION_T4BCCD3A1E75B8DFBA3749F3007E33490E8536417_H
#define AUDIOAMBISONICEXTENSIONDEFINITION_T4BCCD3A1E75B8DFBA3749F3007E33490E8536417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioAmbisonicExtensionDefinition
struct  AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioAmbisonicExtensionDefinition::ambisonicPluginName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___ambisonicPluginName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioAmbisonicExtensionDefinition::definition
	AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * ___definition_1;

public:
	inline static int32_t get_offset_of_ambisonicPluginName_0() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417, ___ambisonicPluginName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_ambisonicPluginName_0() const { return ___ambisonicPluginName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_ambisonicPluginName_0() { return &___ambisonicPluginName_0; }
	inline void set_ambisonicPluginName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___ambisonicPluginName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417, ___definition_1)); }
	inline AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOAMBISONICEXTENSIONDEFINITION_T4BCCD3A1E75B8DFBA3749F3007E33490E8536417_H
#ifndef AUDIOEXTENSIONMANAGER_TC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_H
#define AUDIOEXTENSIONMANAGER_TC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionManager
struct  AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB  : public RuntimeObject
{
public:

public:
};

struct AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionDefinitions
	List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * ___m_ListenerSpatializerExtensionDefinitions_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceSpatializerExtensionDefinitions
	List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * ___m_SourceSpatializerExtensionDefinitions_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceAmbisonicDecoderExtensionDefinitions
	List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * ___m_SourceAmbisonicDecoderExtensionDefinitions_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> UnityEngine.AudioExtensionManager::m_SourceExtensionsToUpdate
	List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * ___m_SourceExtensionsToUpdate_3;
	// System.Int32 UnityEngine.AudioExtensionManager::m_NextStopIndex
	int32_t ___m_NextStopIndex_4;
	// System.Boolean UnityEngine.AudioExtensionManager::m_BuiltinDefinitionsRegistered
	bool ___m_BuiltinDefinitionsRegistered_5;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___m_SpatializerName_6;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerExtensionName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___m_SpatializerExtensionName_7;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___m_ListenerSpatializerExtensionName_8;

public:
	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionDefinitions_0() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_ListenerSpatializerExtensionDefinitions_0)); }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * get_m_ListenerSpatializerExtensionDefinitions_0() const { return ___m_ListenerSpatializerExtensionDefinitions_0; }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A ** get_address_of_m_ListenerSpatializerExtensionDefinitions_0() { return &___m_ListenerSpatializerExtensionDefinitions_0; }
	inline void set_m_ListenerSpatializerExtensionDefinitions_0(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * value)
	{
		___m_ListenerSpatializerExtensionDefinitions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ListenerSpatializerExtensionDefinitions_0), value);
	}

	inline static int32_t get_offset_of_m_SourceSpatializerExtensionDefinitions_1() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_SourceSpatializerExtensionDefinitions_1)); }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * get_m_SourceSpatializerExtensionDefinitions_1() const { return ___m_SourceSpatializerExtensionDefinitions_1; }
	inline List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A ** get_address_of_m_SourceSpatializerExtensionDefinitions_1() { return &___m_SourceSpatializerExtensionDefinitions_1; }
	inline void set_m_SourceSpatializerExtensionDefinitions_1(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * value)
	{
		___m_SourceSpatializerExtensionDefinitions_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceSpatializerExtensionDefinitions_1), value);
	}

	inline static int32_t get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_SourceAmbisonicDecoderExtensionDefinitions_2)); }
	inline List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * get_m_SourceAmbisonicDecoderExtensionDefinitions_2() const { return ___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 ** get_address_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return &___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline void set_m_SourceAmbisonicDecoderExtensionDefinitions_2(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * value)
	{
		___m_SourceAmbisonicDecoderExtensionDefinitions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceAmbisonicDecoderExtensionDefinitions_2), value);
	}

	inline static int32_t get_offset_of_m_SourceExtensionsToUpdate_3() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_SourceExtensionsToUpdate_3)); }
	inline List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * get_m_SourceExtensionsToUpdate_3() const { return ___m_SourceExtensionsToUpdate_3; }
	inline List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB ** get_address_of_m_SourceExtensionsToUpdate_3() { return &___m_SourceExtensionsToUpdate_3; }
	inline void set_m_SourceExtensionsToUpdate_3(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * value)
	{
		___m_SourceExtensionsToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceExtensionsToUpdate_3), value);
	}

	inline static int32_t get_offset_of_m_NextStopIndex_4() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_NextStopIndex_4)); }
	inline int32_t get_m_NextStopIndex_4() const { return ___m_NextStopIndex_4; }
	inline int32_t* get_address_of_m_NextStopIndex_4() { return &___m_NextStopIndex_4; }
	inline void set_m_NextStopIndex_4(int32_t value)
	{
		___m_NextStopIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_BuiltinDefinitionsRegistered_5() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_BuiltinDefinitionsRegistered_5)); }
	inline bool get_m_BuiltinDefinitionsRegistered_5() const { return ___m_BuiltinDefinitionsRegistered_5; }
	inline bool* get_address_of_m_BuiltinDefinitionsRegistered_5() { return &___m_BuiltinDefinitionsRegistered_5; }
	inline void set_m_BuiltinDefinitionsRegistered_5(bool value)
	{
		___m_BuiltinDefinitionsRegistered_5 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerName_6() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_SpatializerName_6)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_m_SpatializerName_6() const { return ___m_SpatializerName_6; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_m_SpatializerName_6() { return &___m_SpatializerName_6; }
	inline void set_m_SpatializerName_6(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___m_SpatializerName_6 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerExtensionName_7() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_SpatializerExtensionName_7)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_m_SpatializerExtensionName_7() const { return ___m_SpatializerExtensionName_7; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_m_SpatializerExtensionName_7() { return &___m_SpatializerExtensionName_7; }
	inline void set_m_SpatializerExtensionName_7(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___m_SpatializerExtensionName_7 = value;
	}

	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionName_8() { return static_cast<int32_t>(offsetof(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields, ___m_ListenerSpatializerExtensionName_8)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_m_ListenerSpatializerExtensionName_8() const { return ___m_ListenerSpatializerExtensionName_8; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_m_ListenerSpatializerExtensionName_8() { return &___m_ListenerSpatializerExtensionName_8; }
	inline void set_m_ListenerSpatializerExtensionName_8(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___m_ListenerSpatializerExtensionName_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONMANAGER_TC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_H
#ifndef AUDIOSPATIALIZEREXTENSIONDEFINITION_TF4C5755345CD7C3A169E9FB21164785ABD9EFDD7_H
#define AUDIOSPATIALIZEREXTENSIONDEFINITION_TF4C5755345CD7C3A169E9FB21164785ABD9EFDD7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpatializerExtensionDefinition
struct  AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioSpatializerExtensionDefinition::spatializerName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___spatializerName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::definition
	AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * ___definition_1;

public:
	inline static int32_t get_offset_of_spatializerName_0() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7, ___spatializerName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_spatializerName_0() const { return ___spatializerName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_spatializerName_0() { return &___spatializerName_0; }
	inline void set_spatializerName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___spatializerName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7, ___definition_1)); }
	inline AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZEREXTENSIONDEFINITION_TF4C5755345CD7C3A169E9FB21164785ABD9EFDD7_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#define PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#define PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef AUDIOCLIPPLAYABLE_T6094311F945E65BC29F85B23A81E8426D596553C_H
#define AUDIOCLIPPLAYABLE_T6094311F945E65BC29F85B23A81E8426D596553C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T6094311F945E65BC29F85B23A81E8426D596553C_H
#ifndef AUDIOMIXERPLAYABLE_T2C445EB39F9111CCFF7E2E1F813B22007862FA9F_H
#define AUDIOMIXERPLAYABLE_T2C445EB39F9111CCFF7E2E1F813B22007862FA9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T2C445EB39F9111CCFF7E2E1F813B22007862FA9F_H
#ifndef AUDIOPLAYABLEOUTPUT_TD2671908FEE2832112E8A3B611089A2558A4DA6B_H
#define AUDIOPLAYABLEOUTPUT_TD2671908FEE2832112E8A3B611089A2558A4DA6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_TD2671908FEE2832112E8A3B611089A2558A4DA6B_H
#ifndef AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#define AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#define PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifndef PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#define PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding_CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamName_0), value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceObject_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceObject_1), value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceBindingType_2), value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CreateOutputMethod_3), value);
	}
};

struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((&___None_4), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
#endif // PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#ifndef PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#define PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef PCMREADERCALLBACK_T9B87AB13DCD37957B045554BF28A57697E6B8EFB_H
#define PCMREADERCALLBACK_T9B87AB13DCD37957B045554BF28A57697E6B8EFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip_PCMReaderCallback
struct  PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T9B87AB13DCD37957B045554BF28A57697E6B8EFB_H
#ifndef PCMSETPOSITIONCALLBACK_T092ED33043C0279B5E4D343EBCBD516CEF260801_H
#define PCMSETPOSITIONCALLBACK_T092ED33043C0279B5E4D343EBCBD516CEF260801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip_PCMSetPositionCallback
struct  PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T092ED33043C0279B5E4D343EBCBD516CEF260801_H
#ifndef AUDIOLISTENEREXTENSION_T1407D9FB8E79B710574DA30045A97C9C2216F03E_H
#define AUDIOLISTENEREXTENSION_T1407D9FB8E79B710574DA30045A97C9C2216F03E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListenerExtension
struct  AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::m_audioListener
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___m_audioListener_4;

public:
	inline static int32_t get_offset_of_m_audioListener_4() { return static_cast<int32_t>(offsetof(AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E, ___m_audioListener_4)); }
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * get_m_audioListener_4() const { return ___m_audioListener_4; }
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 ** get_address_of_m_audioListener_4() { return &___m_audioListener_4; }
	inline void set_m_audioListener_4(AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * value)
	{
		___m_audioListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioListener_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENEREXTENSION_T1407D9FB8E79B710574DA30045A97C9C2216F03E_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T8E0E05D0198D95B5412DC716F87D97020EF54926_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T8E0E05D0198D95B5412DC716F87D97020EF54926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings_AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T8E0E05D0198D95B5412DC716F87D97020EF54926_H
#ifndef AUDIOSOURCEEXTENSION_T9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_H
#define AUDIOSOURCEEXTENSION_T9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSourceExtension
struct  AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::m_audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___m_audioSource_4;
	// System.Int32 UnityEngine.AudioSourceExtension::m_ExtensionManagerUpdateIndex
	int32_t ___m_ExtensionManagerUpdateIndex_5;

public:
	inline static int32_t get_offset_of_m_audioSource_4() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1, ___m_audioSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_m_audioSource_4() const { return ___m_audioSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_m_audioSource_4() { return &___m_audioSource_4; }
	inline void set_m_audioSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___m_audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioSource_4), value);
	}

	inline static int32_t get_offset_of_m_ExtensionManagerUpdateIndex_5() { return static_cast<int32_t>(offsetof(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1, ___m_ExtensionManagerUpdateIndex_5)); }
	inline int32_t get_m_ExtensionManagerUpdateIndex_5() const { return ___m_ExtensionManagerUpdateIndex_5; }
	inline int32_t* get_address_of_m_ExtensionManagerUpdateIndex_5() { return &___m_ExtensionManagerUpdateIndex_5; }
	inline void set_m_ExtensionManagerUpdateIndex_5(int32_t value)
	{
		___m_ExtensionManagerUpdateIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCEEXTENSION_T9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef CONSUMESAMPLEFRAMESNATIVEFUNCTION_TC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_H
#define CONSUMESAMPLEFRAMESNATIVEFUNCTION_TC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction
struct  ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSUMESAMPLEFRAMESNATIVEFUNCTION_TC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_H
#ifndef SAMPLEFRAMESHANDLER_T5179C92AFBB393A85144E9134A862C161726F6AF_H
#define SAMPLEFRAMESHANDLER_T5179C92AFBB393A85144E9134A862C161726F6AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler
struct  SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLEFRAMESHANDLER_T5179C92AFBB393A85144E9134A862C161726F6AF_H
#ifndef CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#define CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding_CreateOutputMethod
struct  CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#ifndef AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#define AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifndef AUDIOLISTENER_TE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_H
#define AUDIOLISTENER_TE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * ___spatializerExtension_4;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099, ___spatializerExtension_4)); }
	inline AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_TE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_H
#ifndef AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#define AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioClipPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Audio.AudioClipPlayable>(!!0,System.Double)
extern "C" IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB_gshared (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  p0, double p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioMixerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709_gshared (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_CreateHandle_mDE1336C3DBE31A50391ECB46C63B9203566CACD5 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___looping2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Audio.AudioClipPlayable>(!!0,System.Double)
inline void PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  p0, double p1, const RuntimeMethod* method)
{
	((  void (*) (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C , double, const RuntimeMethod*))PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB_gshared)(p0, p1, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___looping2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClipPlayable_GetClip_mF03FD2F5B2D78A074727D66641DD4776FD2CDE69 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLooped()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLooped_m57303D27A3FDCB672AC69E995A038388C401DF33 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::IsChannelPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsChannelPlaying_m0A9FAFB7308A37DF01F0BCAE71565909E7B7C8A8 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsPlaying_m3C249A1DC551D1EBA71415A19630DFD115F3F9D1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method);
// System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method);
// System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelay()
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelay_m2E4BF5832AE4510CAE5B87950CA424C62AFE1665 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method);
// System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelay()
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelay_mDDC2AF01E85032AB1F3E45FA8C2B47AF3433C3BA (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, double ___delay1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration(System.Double)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m5B09ACEE91DD6BD8BEB60ED70F2FB6AA2234D86A (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, double p0, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, double ___delay1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetTime(System.Double)
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m7E476CBE063B34248747BADE4D8D16A8AAE2024D (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, double p0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::Play()
extern "C" IL2CPP_METHOD_ATTR void PlayableHandle_Play_m7BA72E142FBBA4E752FEEE3EEF6A7C27598DC5FB (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioClipPlayable::Seek(System.Double,System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m18F2173DE20BF2A22346B45548A834778C0FB47E (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D_gshared)(__this, method);
}
// System.Void UnityEngine.Audio.AudioMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_CreateHandle_mAA4D0D55FB6CBAAF841E1D444A1586D52E0759D3 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m252187F08E76732D791C8458AF5629F29BDDB8F2 (CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
extern "C" IL2CPP_METHOD_ATTR PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  PlayableBinding_CreateInternal_mA2A8810B76E843A40B9BC55D72D960AE155B9801 (String_t* p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, Type_t * p2, CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * p3, const RuntimeMethod* method);
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  AudioPlayableOutput_Create_m35E910DEA4AD9FAF64030EFB3EC20596DF601804 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___target2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Implicit(UnityEngine.Audio.AudioPlayableOutput)
extern "C" IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AudioPlayableOutput_op_Implicit_m8A6C9AC3C9505F2541CEC982CEA4178AE64A6D3A (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  ___output0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mF2C0EDE99960D68E4FD017EB063680D82A9CBD6F (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709_gshared)(__this, method);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, String_t* ___name1, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::get_Null()
extern "C" IL2CPP_METHOD_ATTR AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  AudioPlayableOutput_get_Null_m33FF94F426450F5F386FE9C34B111568FA69DF8D (const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetTarget(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_mF4F402AA74C14DBDA6FC21C300BD99B23B586DED (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  PlayableOutputHandle_get_Null_mA462EF24F3B0CDD5B3C3F0C57073D49CED316FA4 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AudioPlayableOutput_GetHandle_mD9ECA84E42A89A99F6FDA1FC0177D549BAD3AC1D (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
extern "C" IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m881EC9E4BAD358971373EE1D6BF9C37DDB7A4943 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  p0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  PlayableOutput_GetHandle_m079ADC0139E95AA914CD7502F27EC79BB1A876F3 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::GetTarget()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioPlayableOutput_GetTarget_m608EF7D7A4601C85646963C94FCCE034941FC26D (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___target1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioPlayableOutput::InternalGetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&)
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioPlayableOutput::GetEvaluateOnSeek()
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableOutput_GetEvaluateOnSeek_mEA4DF223F5EF62D3F90A14150F3EA9FCF71B2002 (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetEvaluateOnSeek(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_m004D115461A747AEF6401A10B42B924B941F9993 (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m8CC430356EDE4FF4BD31A5F5509028B7DDCC4C11 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::GetEnumerator()
inline Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  (*) (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::get_Current()
inline AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 * __this, const RuntimeMethod* method)
{
	return ((  AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * (*) (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC (const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78 (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PropertyName::op_Equality(UnityEngine.PropertyName,UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR bool PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68 (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  p0, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  p1, const RuntimeMethod* method);
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260 (AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioSource_AddSpatializerExtension_mEA48D6DCCBFA6EF941158C6A0AF5844519AC3DA7 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m62B17CFE5F303CC29EE023B36DE39BFD7726A79B (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m51EDE1F77BF1FF1677F4C85C9067A2B48FC58C97 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::MoveNext()
inline bool Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioSpatializerExtensionDefinition>::Dispose()
inline void Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::GetEnumerator()
inline Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE  List_1_GetEnumerator_m155CE02D7F2F90329E010D25EF2397F8ADB8B164 (List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE  (*) (List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::get_Current()
inline AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * Enumerator_get_Current_mFDDA5D2B63191CC12FF602C3BD92BCE3253726C6 (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE * __this, const RuntimeMethod* method)
{
	return ((  AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * (*) (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE (const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioSource_AddAmbisonicExtension_m7D073528C0FAF70863AF8F14761ED4DA2CD986EF (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::MoveNext()
inline bool Enumerator_MoveNext_mFCC2DE20868C4BC2A3E84598F90B65500FCAA01B (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AudioAmbisonicExtensionDefinition>::Dispose()
inline void Enumerator_Dispose_mEBC7D75C2A8487FC3446C99B1D3762996DB2FB62 (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// UnityEngine.PropertyName UnityEngine.PropertyName::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB (int32_t p0, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioSource_ReadExtensionName_m05F7B0E213B85084EFC1B989A6E7195172398893 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioSource_ReadExtensionPropertyName_m4D99B210E19B6968A339CBFDB068962C338151D8 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m8D8CB048725E07A391A9469A0E27910A39786E77 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___extensionName0, const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * AudioListener_AddExtension_m4D1DD3D583145A51A71D1811C8F489C03AFF77C1 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, Type_t * ___extensionType0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m6274F6DF41C2674CE8886CEDD40EF9EE643F2239 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m445848E71B4139FEE237367139F75751A0425974 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method);
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioListener_ReadExtensionName_m2D1B5C5FC7F2A80988749C1D89D32B49591FBDA3 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioListener_ReadExtensionPropertyName_m6090CCC677C262F7580489A0C8E57D76EABD218B (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m24EEE507EBDA0ED3F216AD57600012E367586450 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___extensionName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::Add(!0)
inline void List_1_Add_mC1569F3CAA26DEF3D86683E8177004C3C085645F (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Count()
inline int32_t List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::get_Item(System.Int32)
inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201 (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mA8237FCBE84FBA3E34A8C6F4B0CF81F2143CBF8A (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, int32_t p0, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, int32_t, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *, const RuntimeMethod*))List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD346619B716861C192281DAC0CC6D4EEF7B49161 (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, p0, method);
}
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595 (const RuntimeMethod* method);
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * AudioExtensionManager_AddSpatializerExtension_m7CB5E033FF869B212B56D9180B460764BECBA3F4 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___listener0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_mF67FFAD6749CF9AB4AFA123DA83F6D53E83D5643 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>::.ctor()
inline void List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>::.ctor()
inline void List_1__ctor_m19FA77D650658381D95E4324E6B91BBA93076062 (List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>::.ctor()
inline void List_1__ctor_mCAA30996286EED7639EB78B7DD866819AEE2D2F9 (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, int32_t ___listenerIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, int32_t ___listenerIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___extensionName1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D (Type_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m484C1E7616C543D727E8EB673188846CD5987382 (const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioExtensionManager_AddSpatializerExtension_m308292561D9B4CAF4B66BD3905885267A78B2533 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m43B1C08196D937549E20DE6370263646C1D81F59 (AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, uint64_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, int32_t ___sourceIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, int32_t ___sourceIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___extensionName1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_mA11D514354EDA94E8B6AA83B726DF85169C8E29A (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m9E16910C6A2335F87E6B257D3059A8BBC8D7253A (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9 (uint32_t ___providerId0, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::set_id(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_mB98E8435407CAD305BBEAA91B18CBC12562DFAF9 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method);
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
// System.Void UnityEngine.Audio.AudioClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m505D63DCD8E1A9774E0BEA59FD7C142C3A424FE5_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteralA788A98107C74D8F9B61D7F6098E39919B69E276, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Audio.AudioClipPlayable UnityEngine.Audio.AudioClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  AudioClipPlayable_Create_m84E90BEBEABF05FBE217F45B69C744CEFDE9343F (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___looping2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable_Create_m84E90BEBEABF05FBE217F45B69C744CEFDE9343F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  V_1;
	memset(&V_1, 0, sizeof(V_1));
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip1;
		bool L_2 = ___looping2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = AudioClipPlayable_CreateHandle_mDE1336C3DBE31A50391ECB46C63B9203566CACD5(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = V_0;
		AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)(&V_1), L_4, /*hidden argument*/NULL);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = ___clip1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  L_7 = V_1;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_8 = ___clip1;
		NullCheck(L_8);
		float L_9 = AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317(L_8, /*hidden argument*/NULL);
		PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB(L_7, (((double)((double)(double)L_9))), /*hidden argument*/PlayableExtensions_SetDuration_TisAudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C_m40F2E393C0DF5F93DE559EC05F962F7068377DAB_RuntimeMethod_var);
	}

IL_002b:
	{
		AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  L_10 = V_1;
		V_2 = L_10;
		goto IL_0032;
	}

IL_0032:
	{
		AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_CreateHandle_mDE1336C3DBE31A50391ECB46C63B9203566CACD5 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___looping2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable_CreateHandle_mDE1336C3DBE31A50391ECB46C63B9203566CACD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip1;
		bool L_2 = ___looping2;
		bool L_3 = AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_1, L_2, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0029;
	}

IL_0022:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = V_0;
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Audio.AudioClipPlayable::op_Implicit(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AudioClipPlayable_op_Implicit_m5431F59C264DAFF3185B6BB9B7EBE83EE3639990 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioClipPlayable UnityEngine.Audio.AudioClipPlayable::op_Explicit(UnityEngine.Playables.Playable)
extern "C" IL2CPP_METHOD_ATTR AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  AudioClipPlayable_op_Explicit_mFDDA7CA440BA4AB5FA62A8E7011471089B9FFA91 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AudioClipPlayable__ctor_mAF560FE7B1026B0A3AC9CC83C0005B7F04F29E65((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AudioClipPlayable_GetHandle_mEE8F62E9DA2A0DDDB064A9AA2391909C425CB3B1((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C  ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_Equals_mEB47B5F2E1C643D403FA916C8961F117593DCFC0(_thisAdjusted, ___other0, method);
}
// UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClipPlayable_GetClip_mF03FD2F5B2D78A074727D66641DD4776FD2CDE69 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * V_0 = NULL;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClipPlayable_GetClip_mF03FD2F5B2D78A074727D66641DD4776FD2CDE69_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_GetClip_mF03FD2F5B2D78A074727D66641DD4776FD2CDE69(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLooped()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLooped_m57303D27A3FDCB672AC69E995A038388C401DF33 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool AudioClipPlayable_GetLooped_m57303D27A3FDCB672AC69E995A038388C401DF33_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_GetLooped_m57303D27A3FDCB672AC69E995A038388C401DF33(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::IsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsPlaying_m3C249A1DC551D1EBA71415A19630DFD115F3F9D1 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = AudioClipPlayable_IsChannelPlaying_m0A9FAFB7308A37DF01F0BCAE71565909E7B7C8A8((AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AudioClipPlayable_IsPlaying_m3C249A1DC551D1EBA71415A19630DFD115F3F9D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_IsPlaying_m3C249A1DC551D1EBA71415A19630DFD115F3F9D1(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::IsChannelPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsChannelPlaying_m0A9FAFB7308A37DF01F0BCAE71565909E7B7C8A8 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool AudioClipPlayable_IsChannelPlaying_m0A9FAFB7308A37DF01F0BCAE71565909E7B7C8A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_IsChannelPlaying_m0A9FAFB7308A37DF01F0BCAE71565909E7B7C8A8(_thisAdjusted, method);
}
// System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelay()
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelay_m2E4BF5832AE4510CAE5B87950CA424C62AFE1665 (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		double L_1 = AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double AudioClipPlayable_GetStartDelay_m2E4BF5832AE4510CAE5B87950CA424C62AFE1665_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_GetStartDelay_m2E4BF5832AE4510CAE5B87950CA424C62AFE1665(_thisAdjusted, method);
}
// System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelay()
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelay_mDDC2AF01E85032AB1F3E45FA8C2B47AF3433C3BA (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		double L_1 = AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		double L_2 = V_0;
		return L_2;
	}
}
extern "C"  double AudioClipPlayable_GetPauseDelay_mDDC2AF01E85032AB1F3E45FA8C2B47AF3433C3BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	return AudioClipPlayable_GetPauseDelay_mDDC2AF01E85032AB1F3E45FA8C2B47AF3433C3BA(_thisAdjusted, method);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::Seek(System.Double,System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m18F2173DE20BF2A22346B45548A834778C0FB47E (AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method)
{
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		double L_1 = ___startDelay1;
		AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		double L_2 = ___duration2;
		if ((!(((double)L_2) > ((double)(0.0)))))
		{
			goto IL_003f;
		}
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_3 = __this->get_address_of_m_Handle_0();
		double L_4 = ___duration2;
		double L_5 = ___startTime0;
		PlayableHandle_SetDuration_m5B09ACEE91DD6BD8BEB60ED70F2FB6AA2234D86A((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_3, ((double)il2cpp_codegen_add((double)L_4, (double)L_5)), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_6 = __this->get_address_of_m_Handle_0();
		double L_7 = ___startDelay1;
		double L_8 = ___duration2;
		AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_6, ((double)il2cpp_codegen_add((double)L_7, (double)L_8)), /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_003f:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_9 = __this->get_address_of_m_Handle_0();
		PlayableHandle_SetDuration_m5B09ACEE91DD6BD8BEB60ED70F2FB6AA2234D86A((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_9, (1.7976931348623157E+308), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_10 = __this->get_address_of_m_Handle_0();
		AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_10, (0.0), /*hidden argument*/NULL);
	}

IL_0069:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_11 = __this->get_address_of_m_Handle_0();
		double L_12 = ___startTime0;
		PlayableHandle_SetTime_m7E476CBE063B34248747BADE4D8D16A8AAE2024D((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_11, L_12, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_13 = __this->get_address_of_m_Handle_0();
		PlayableHandle_Play_m7BA72E142FBBA4E752FEEE3EEF6A7C27598DC5FB((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_13, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AudioClipPlayable_Seek_m18F2173DE20BF2A22346B45548A834778C0FB47E_AdjustorThunk (RuntimeObject * __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method)
{
	AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t6094311F945E65BC29F85B23A81E8426D596553C *>(__this + 1);
	AudioClipPlayable_Seek_m18F2173DE20BF2A22346B45548A834778C0FB47E(_thisAdjusted, ___startTime0, ___startDelay1, ___duration2, method);
}
// UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method)
{
	typedef AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetClipInternal_m8ED01AEDED5086A55201CCF444C4B2918B7F2ADF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandle&)");
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * retVal = _il2cpp_icall_func(___hdl0);
	return retVal;
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method)
{
	typedef bool (*AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetLoopedInternal_m36C2463636AAD729714A7E1456F7639A56F0D164_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___hdl0);
	return retVal;
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method)
{
	typedef bool (*AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetIsChannelPlayingInternal_mCB0718C6CF5B40071E4B482E26649C7DD9D5225D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___hdl0);
	return retVal;
}
// System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method)
{
	typedef double (*AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetStartDelayInternal_m5C92D00CF45AFB390E2A667F4398AE4E42FDEEFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandle&)");
	double retVal = _il2cpp_icall_func(___hdl0);
	return retVal;
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandleU26,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, double ___delay1, const RuntimeMethod* method)
{
	typedef void (*AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, double);
	static AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStartDelayInternal_m6228A772D517DF72CCE22259779272B68991C415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___hdl0, ___delay1);
}
// System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, const RuntimeMethod* method)
{
	typedef double (*AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetPauseDelayInternal_m8DE970C89DFAED2123A33942AE332A2FD270048C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&)");
	double retVal = _il2cpp_icall_func(___hdl0);
	return retVal;
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandleU26,System.Double)
extern "C" IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___hdl0, double ___delay1, const RuntimeMethod* method)
{
	typedef void (*AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, double);
	static AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetPauseDelayInternal_m560CC3E38C1B55C65AC2C1FEFCFA788D9B1358B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___hdl0, ___delay1);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraphU26,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___looping2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method)
{
	typedef bool (*AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, bool, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_InternalCreateAudioClipPlayable_mA9B50A226C88032AD74A6C0E2B70F3E9165093F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___clip1, ___looping2, ___handle3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Audio.AudioMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F_m96F18E12BFB63E0B4DE4A3AAD3D3192D053A391D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral0C0397D0D0570E58797662AD4FFF54DE9D446B1D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *>(__this + 1);
	AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Audio.AudioMixerPlayable UnityEngine.Audio.AudioMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  AudioMixerPlayable_Create_m47C3CAAAA147F1C7F3C111DAF5B273F78F0B2956 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		bool L_2 = ___normalizeInputVolumes2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = AudioMixerPlayable_CreateHandle_mAA4D0D55FB6CBAAF841E1D444A1586D52E0759D3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = V_0;
		AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  L_5;
		memset(&L_5, 0, sizeof(L_5));
		AudioMixerPlayable__ctor_m3AA11BDD38CFE380A908B39C019DB98782F95F71((&L_5), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_CreateHandle_mAA4D0D55FB6CBAAF841E1D444A1586D52E0759D3 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerPlayable_CreateHandle_mAA4D0D55FB6CBAAF841E1D444A1586D52E0759D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___inputCount1;
		bool L_2 = ___normalizeInputVolumes2;
		bool L_3 = AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_1, L_2, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0029;
	}

IL_0022:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = V_0;
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *>(__this + 1);
	return AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Audio.AudioMixerPlayable::op_Implicit(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AudioMixerPlayable_op_Implicit_m325ED6D59A21F2D85A45B859A7EF279DFCEFAA50 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D((AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4 (AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D((AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AudioMixerPlayable_GetHandle_mDBC7135DF653E0E19675B6694EA89958E609587D((AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F  ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t2C445EB39F9111CCFF7E2E1F813B22007862FA9F *>(__this + 1);
	return AudioMixerPlayable_Equals_m6B84D1A5AEDEAAE12AEFB77319B2662506ABC9C4(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraphU26,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method)
{
	typedef bool (*AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, int32_t, bool, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerPlayable_CreateAudioMixerPlayableInternal_m2FC6AE9FB65421253BAC606379F2483739E1553A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___inputCount1, ___normalizeInputVolumes2, ___handle3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableBinding UnityEngine.Audio.AudioPlayableBinding::Create(System.String,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  AudioPlayableBinding_Create_mA9118B41199C444FD28C84E7DA945ABE1BDD7F30 (String_t* ___name0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioPlayableBinding_Create_mA9118B41199C444FD28C84E7DA945ABE1BDD7F30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Type_t * G_B2_0 = NULL;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Type_t * G_B1_0 = NULL;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		String_t* L_0 = ___name0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = ___key1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * L_4 = ((AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * L_5 = (CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 *)il2cpp_codegen_object_new(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_il2cpp_TypeInfo_var);
		CreateOutputMethod__ctor_m252187F08E76732D791C8458AF5629F29BDDB8F2(L_5, NULL, (intptr_t)((intptr_t)AudioPlayableBinding_CreateAudioOutput_mDE1EA50611F66F0A5D3BBC13D2751EB11621E157_RuntimeMethod_var), /*hidden argument*/NULL);
		((AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_5);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * L_6 = ((AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayableBinding_t1DC27F398E1925C5933F545345104931AABF5914_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		IL2CPP_RUNTIME_CLASS_INIT(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_il2cpp_TypeInfo_var);
		PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  L_7 = PlayableBinding_CreateInternal_mA2A8810B76E843A40B9BC55D72D960AE155B9801(G_B2_2, G_B2_1, G_B2_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0035;
	}

IL_0035:
	{
		PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableBinding::CreateAudioOutput(UnityEngine.Playables.PlayableGraph,System.String)
extern "C" IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AudioPlayableBinding_CreateAudioOutput_mDE1EA50611F66F0A5D3BBC13D2751EB11621E157 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		String_t* L_1 = ___name1;
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_2 = AudioPlayableOutput_Create_m35E910DEA4AD9FAF64030EFB3EC20596DF601804(L_0, L_1, (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *)NULL, /*hidden argument*/NULL);
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_3 = AudioPlayableOutput_op_Implicit_m8A6C9AC3C9505F2541CEC982CEA4178AE64A6D3A(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_4 = V_0;
		return L_4;
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
// System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraphU26,System.String,UnityEngine.Playables.PlayableOutputHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, String_t* ___name1, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, String_t*, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *);
	static AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Audio.AudioPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableOutputHandle_IsValid_mF2C0EDE99960D68E4FD017EB063680D82A9CBD6F((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___handle0), /*hidden argument*/PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B_m05F0F08476C9FCC420190CAE270EDAD662180709_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral238F741028355562F523A6ACA910C9563A955065, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C_AdjustorThunk (RuntimeObject * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  AudioPlayableOutput_Create_m35E910DEA4AD9FAF64030EFB3EC20596DF601804 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___target2, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  V_1;
	memset(&V_1, 0, sizeof(V_1));
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		String_t* L_0 = ___name1;
		bool L_1 = AudioPlayableGraphExtensions_InternalCreateAudioOutput_mAEF2C4D366FEA7BA2FB8973F32D613EEA9FB3F51((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_0, (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_2 = AudioPlayableOutput_get_Null_m33FF94F426450F5F386FE9C34B111568FA69DF8D(/*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0032;
	}

IL_001b:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_3 = V_0;
		AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C((AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *)(&V_2), L_3, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = ___target2;
		AudioPlayableOutput_SetTarget_mF4F402AA74C14DBDA6FC21C300BD99B23B586DED((AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *)(&V_2), L_4, /*hidden argument*/NULL);
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_5 = V_2;
		V_1 = L_5;
		goto IL_0032;
	}

IL_0032:
	{
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::get_Null()
extern "C" IL2CPP_METHOD_ATTR AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  AudioPlayableOutput_get_Null_m33FF94F426450F5F386FE9C34B111568FA69DF8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioPlayableOutput_get_Null_m33FF94F426450F5F386FE9C34B111568FA69DF8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_il2cpp_TypeInfo_var);
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = PlayableOutputHandle_get_Null_mA462EF24F3B0CDD5B3C3F0C57073D49CED316FA4(/*hidden argument*/NULL);
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AudioPlayableOutput_GetHandle_mD9ECA84E42A89A99F6FDA1FC0177D549BAD3AC1D (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AudioPlayableOutput_GetHandle_mD9ECA84E42A89A99F6FDA1FC0177D549BAD3AC1D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	return AudioPlayableOutput_GetHandle_mD9ECA84E42A89A99F6FDA1FC0177D549BAD3AC1D(_thisAdjusted, method);
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Implicit(UnityEngine.Audio.AudioPlayableOutput)
extern "C" IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AudioPlayableOutput_op_Implicit_m8A6C9AC3C9505F2541CEC982CEA4178AE64A6D3A (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  ___output0, const RuntimeMethod* method)
{
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AudioPlayableOutput_GetHandle_mD9ECA84E42A89A99F6FDA1FC0177D549BAD3AC1D((AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *)(&___output0), /*hidden argument*/NULL);
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_1;
		memset(&L_1, 0, sizeof(L_1));
		PlayableOutput__ctor_m881EC9E4BAD358971373EE1D6BF9C37DDB7A4943((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Explicit(UnityEngine.Playables.PlayableOutput)
extern "C" IL2CPP_METHOD_ATTR AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  AudioPlayableOutput_op_Explicit_m0317279E0EF70E2AD9794C5C0563717F285F3A63 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___output0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = PlayableOutput_GetHandle_m079ADC0139E95AA914CD7502F27EC79BB1A876F3((PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 *)(&___output0), /*hidden argument*/NULL);
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AudioPlayableOutput__ctor_m9D5893F558EE5F1A326BACF38745649D9844773C((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::GetTarget()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioPlayableOutput_GetTarget_m608EF7D7A4601C85646963C94FCCE034941FC26D (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method)
{
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * V_0 = NULL;
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * L_0 = __this->get_address_of_m_Handle_0();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = V_0;
		return L_2;
	}
}
extern "C"  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioPlayableOutput_GetTarget_m608EF7D7A4601C85646963C94FCCE034941FC26D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	return AudioPlayableOutput_GetTarget_m608EF7D7A4601C85646963C94FCCE034941FC26D(_thisAdjusted, method);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetTarget(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_mF4F402AA74C14DBDA6FC21C300BD99B23B586DED (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___value0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * L_0 = __this->get_address_of_m_Handle_0();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = ___value0;
		AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AudioPlayableOutput_SetTarget_mF4F402AA74C14DBDA6FC21C300BD99B23B586DED_AdjustorThunk (RuntimeObject * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___value0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	AudioPlayableOutput_SetTarget_mF4F402AA74C14DBDA6FC21C300BD99B23B586DED(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Audio.AudioPlayableOutput::GetEvaluateOnSeek()
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableOutput_GetEvaluateOnSeek_mEA4DF223F5EF62D3F90A14150F3EA9FCF71B2002 (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool AudioPlayableOutput_GetEvaluateOnSeek_mEA4DF223F5EF62D3F90A14150F3EA9FCF71B2002_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	return AudioPlayableOutput_GetEvaluateOnSeek_mEA4DF223F5EF62D3F90A14150F3EA9FCF71B2002(_thisAdjusted, method);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetEvaluateOnSeek(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_m004D115461A747AEF6401A10B42B924B941F9993 (AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AudioPlayableOutput_SetEvaluateOnSeek_m004D115461A747AEF6401A10B42B924B941F9993_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B * _thisAdjusted = reinterpret_cast<AudioPlayableOutput_tD2671908FEE2832112E8A3B611089A2558A4DA6B *>(__this + 1);
	AudioPlayableOutput_SetEvaluateOnSeek_m004D115461A747AEF6401A10B42B924B941F9993(_thisAdjusted, ___value0, method);
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandleU26)
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, const RuntimeMethod* method)
{
	typedef AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *);
	static AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalGetTarget_m82F3E322A1E87DC83F6BC84A07F45C7443581A5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)");
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * retVal = _il2cpp_icall_func(___output0);
	return retVal;
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandleU26,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___target1, const RuntimeMethod* method)
{
	typedef void (*AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetTarget_m79FBD90771A3FA47E1B3AACB2918313669C53C02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)");
	_il2cpp_icall_func(___output0, ___target1);
}
// System.Boolean UnityEngine.Audio.AudioPlayableOutput::InternalGetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandleU26)
extern "C" IL2CPP_METHOD_ATTR bool AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, const RuntimeMethod* method)
{
	typedef bool (*AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *);
	static AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalGetEvaluateOnSeek_m79F1884618FBA26392002E8CA163A9996797ACD9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalGetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&)");
	bool retVal = _il2cpp_icall_func(___output0);
	return retVal;
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandleU26,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, bool);
	static AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetEvaluateOnSeek_m25BE082DBA10836ADD6118EAC3F6B7C2837FEB39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)");
	_il2cpp_icall_func(___output0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.AudioBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m43B1C08196D937549E20DE6370263646C1D81F59 (AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.AudioClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioClip__ctor_m52425138C3A036FC847A0E4C4ADA31CEF81CD10D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_PCMReaderCallback_4((PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB *)NULL);
		__this->set_m_PCMSetPositionCallback_5((PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef float (*AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioClip::get_ambisonic()
extern "C" IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4_ftn) (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_mF087FCAD425EAC299C1156BA809DC535D00757F9 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	{
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_0 = __this->get_m_PCMReaderCallback_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * L_1 = __this->get_m_PCMReaderCallback_4();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___data0;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_mBB8265A5BFF660F8AF39718DDB193319AB7EFA6F (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_0 = __this->get_m_PCMSetPositionCallback_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * L_1 = __this->get_m_PCMSetPositionCallback_5();
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
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
extern "C"  void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___data0U27 to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip_PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF9EB2467704F5E13196BBA93F41FA275AC5432F6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip_PCMReaderCallback::Invoke(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m7B101820DB35BEFC8D2724DF96900367863B93B6 (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
							else
								GenericVirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
							else
								VirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
						else
							GenericVirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
						else
							VirtActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip_PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMReaderCallback_BeginInvoke_m94035E11B2B9BD6114EF3D7F4B7E367572E7AE1F (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip_PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMReaderCallback_EndInvoke_m6730FD7DFD7246F137C437BC470F995D6C75E15B (PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip_PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_m31EA578C3CCFDFC9335B8C67353878AEE4B3905F (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip_PCMSetPositionCallback::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m8EA4736B43191A8E6F95E1548AFF124519EC533C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip_PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093 (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, int32_t ___position0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PCMSetPositionCallback_BeginInvoke_m88CDF70D75854621CA69ED3D53CD53B8206A5093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioClip_PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PCMSetPositionCallback_EndInvoke_mB711E23CFD370348A1680B281A3DFE04F970792C (PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.AudioExtensionDefinition::GetExtensionType()
extern "C" IL2CPP_METHOD_ATTR Type_t * AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260 (AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = __this->get_extensionType_3();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = __this->get_extensionNamespace_1();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = __this->get_extensionTypeName_2();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = __this->get_assemblyName_0();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_10, "UnityEngine.AudioModule, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		__this->set_extensionType_3(L_11);
	}

IL_004d:
	{
		Type_t * L_12 = __this->get_extensionType_3();
		V_0 = L_12;
		goto IL_0059;
	}

IL_0059:
	{
		Type_t * L_13 = V_0;
		return L_13;
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
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioExtensionManager_AddSpatializerExtension_m308292561D9B4CAF4B66BD3905885267A78B2533 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m308292561D9B4CAF4B66BD3905885267A78B2533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * V_1 = NULL;
	Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = ___source0;
		NullCheck(L_0);
		bool L_1 = AudioSource_get_spatialize_m8CC430356EDE4FF4BD31A5F5509028B7DDCC4C11(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL;
		goto IL_00dc;
	}

IL_0013:
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = ___source0;
		NullCheck(L_2);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_3 = L_2->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = ___source0;
		NullCheck(L_5);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_6 = L_5->get_spatializerExtension_4();
		V_0 = L_6;
		goto IL_00dc;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E(/*hidden argument*/NULL);
		List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * L_7 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceSpatializerExtensionDefinitions_1();
		NullCheck(L_7);
		Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  L_8 = List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE(L_7, /*hidden argument*/List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0046:
		{
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_9 = Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA_RuntimeMethod_var);
			V_1 = L_9;
			String_t* L_10 = AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC(/*hidden argument*/NULL);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_11 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_10, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_12 = V_1;
			NullCheck(L_12);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_13 = L_12->get_spatializerName_0();
			bool L_14 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_11, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00b5;
			}
		}

IL_0069:
		{
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_15 = ___source0;
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_16 = V_1;
			NullCheck(L_16);
			AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * L_17 = L_16->get_definition_1();
			NullCheck(L_17);
			Type_t * L_18 = AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_19 = AudioSource_AddSpatializerExtension_mEA48D6DCCBFA6EF941158C6A0AF5844519AC3DA7(L_15, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00b4;
			}
		}

IL_0088:
		{
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_22 = V_3;
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_23 = ___source0;
			NullCheck(L_22);
			AudioSourceExtension_set_audioSource_m62B17CFE5F303CC29EE023B36DE39BFD7726A79B(L_22, L_23, /*hidden argument*/NULL);
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_24 = ___source0;
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_25 = V_3;
			NullCheck(L_24);
			L_24->set_spatializerExtension_4(L_25);
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_26 = V_3;
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_27 = V_1;
			NullCheck(L_27);
			AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * L_28 = L_27->get_definition_1();
			NullCheck(L_28);
			Type_t * L_29 = AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m51EDE1F77BF1FF1677F4C85C9067A2B48FC58C97(L_26, L_30, /*hidden argument*/NULL);
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_31 = V_3;
			V_0 = L_31;
			IL2CPP_LEAVE(0xDC, FINALLY_00c7);
		}

IL_00b4:
		{
		}

IL_00b5:
		{
		}

IL_00b6:
		{
			bool L_32 = Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0046;
			}
		}

IL_00c2:
		{
			IL2CPP_LEAVE(0xD5, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
		IL2CPP_JUMP_TBL(0xD5, IL_00d5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d5:
	{
		V_0 = (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL;
		goto IL_00dc;
	}

IL_00dc:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_33 = V_0;
		return L_33;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioExtensionManager::AddAmbisonicDecoderExtension(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * V_1 = NULL;
	Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = ___source0;
		NullCheck(L_0);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_1 = L_0->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = ___source0;
		NullCheck(L_3);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = L_3->get_ambisonicExtension_5();
		V_0 = L_4;
		goto IL_00b4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E(/*hidden argument*/NULL);
		List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * L_5 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceAmbisonicDecoderExtensionDefinitions_2();
		NullCheck(L_5);
		Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE  L_6 = List_1_GetEnumerator_m155CE02D7F2F90329E010D25EF2397F8ADB8B164(L_5, /*hidden argument*/List_1_GetEnumerator_m155CE02D7F2F90329E010D25EF2397F8ADB8B164_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0034:
		{
			AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * L_7 = Enumerator_get_Current_mFDDA5D2B63191CC12FF602C3BD92BCE3253726C6((Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *)(&V_2), /*hidden argument*/Enumerator_get_Current_mFDDA5D2B63191CC12FF602C3BD92BCE3253726C6_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE(/*hidden argument*/NULL);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_9 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_8, /*hidden argument*/NULL);
			AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_11 = L_10->get_ambisonicPluginName_0();
			bool L_12 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_008d;
			}
		}

IL_0057:
		{
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_13 = ___source0;
			AudioAmbisonicExtensionDefinition_t4BCCD3A1E75B8DFBA3749F3007E33490E8536417 * L_14 = V_1;
			NullCheck(L_14);
			AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * L_15 = L_14->get_definition_1();
			NullCheck(L_15);
			Type_t * L_16 = AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260(L_15, /*hidden argument*/NULL);
			NullCheck(L_13);
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_17 = AudioSource_AddAmbisonicExtension_m7D073528C0FAF70863AF8F14761ED4DA2CD986EF(L_13, L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_008c;
			}
		}

IL_0076:
		{
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_20 = V_3;
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_21 = ___source0;
			NullCheck(L_20);
			AudioSourceExtension_set_audioSource_m62B17CFE5F303CC29EE023B36DE39BFD7726A79B(L_20, L_21, /*hidden argument*/NULL);
			AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_22 = ___source0;
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_23 = V_3;
			NullCheck(L_22);
			L_22->set_ambisonicExtension_5(L_23);
			AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_24 = V_3;
			V_0 = L_24;
			IL2CPP_LEAVE(0xB4, FINALLY_009f);
		}

IL_008c:
		{
		}

IL_008d:
		{
		}

IL_008e:
		{
			bool L_25 = Enumerator_MoveNext_mFCC2DE20868C4BC2A3E84598F90B65500FCAA01B((Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mFCC2DE20868C4BC2A3E84598F90B65500FCAA01B_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0034;
			}
		}

IL_009a:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEBC7D75C2A8487FC3446C99B1D3762996DB2FB62((Enumerator_t4C00B449B1E5C0CC84D7474572B59B042DB541AE *)(&V_2), /*hidden argument*/Enumerator_Dispose_mEBC7D75C2A8487FC3446C99B1D3762996DB2FB62_RuntimeMethod_var);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		V_0 = (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL;
		goto IL_00b4;
	}

IL_00b4:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_26 = V_0;
		return L_26;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioSourceExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m51EDE1F77BF1FF1677F4C85C9067A2B48FC58C97 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m51EDE1F77BF1FF1677F4C85C9067A2B48FC58C97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_0 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB(0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_4 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_5 = ___extension0;
		NullCheck(L_5);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_8 = AudioSource_ReadExtensionName_m05F7B0E213B85084EFC1B989A6E7195172398893(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_9 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		bool L_10 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_11 = ___extension0;
		NullCheck(L_11);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_12 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_14 = AudioSource_ReadExtensionPropertyName_m4D99B210E19B6968A339CBFDB068962C338151D8(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_15 = ___extension0;
		NullCheck(L_15);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_16 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_19 = ___extension0;
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 , float >::Invoke(5 /* System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_24 = ___extension0;
		NullCheck(L_24);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_25 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_27 = ___extension0;
		NullCheck(L_27);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_28 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_29 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SpatializerExtensionName_7();
		NullCheck(L_28);
		AudioSource_ClearExtensionProperties_m8D8CB048725E07A391A9469A0E27910A39786E77(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioExtensionManager::AddSpatializerExtension(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * AudioExtensionManager_AddSpatializerExtension_m7CB5E033FF869B212B56D9180B460764BECBA3F4 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddSpatializerExtension_m7CB5E033FF869B212B56D9180B460764BECBA3F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * V_0 = NULL;
	AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * V_1 = NULL;
	Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  V_2;
	memset(&V_2, 0, sizeof(V_2));
	AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = ___listener0;
		NullCheck(L_0);
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_1 = L_0->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_3 = ___listener0;
		NullCheck(L_3);
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_4 = L_3->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_00e4;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E(/*hidden argument*/NULL);
		List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * L_5 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionDefinitions_0();
		NullCheck(L_5);
		Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3  L_6 = List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE(L_5, /*hidden argument*/List_1_GetEnumerator_m6061E11D46BD23298B953811E7F957AEF90536DE_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00be;
		}

IL_0034:
		{
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_7 = Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m29373BF51E5B0C5EDCB41450B58299A4C0959DEA_RuntimeMethod_var);
			V_1 = L_7;
			String_t* L_8 = AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC(/*hidden argument*/NULL);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_9 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_8, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_10 = V_1;
			NullCheck(L_10);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_11 = L_10->get_spatializerName_0();
			bool L_12 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_9, L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0071;
			}
		}

IL_0057:
		{
			String_t* L_13 = AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE(/*hidden argument*/NULL);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_14 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_13, /*hidden argument*/NULL);
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_15 = V_1;
			NullCheck(L_15);
			PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_16 = L_15->get_spatializerName_0();
			bool L_17 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_14, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_18 = ___listener0;
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_19 = V_1;
			NullCheck(L_19);
			AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * L_20 = L_19->get_definition_1();
			NullCheck(L_20);
			Type_t * L_21 = AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_22 = AudioListener_AddExtension_m4D1DD3D583145A51A71D1811C8F489C03AFF77C1(L_18, L_21, /*hidden argument*/NULL);
			V_3 = L_22;
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00bc;
			}
		}

IL_0090:
		{
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_25 = V_3;
			AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_26 = ___listener0;
			NullCheck(L_25);
			AudioListenerExtension_set_audioListener_m6274F6DF41C2674CE8886CEDD40EF9EE643F2239(L_25, L_26, /*hidden argument*/NULL);
			AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_27 = ___listener0;
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_28 = V_3;
			NullCheck(L_27);
			L_27->set_spatializerExtension_4(L_28);
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_29 = V_3;
			AudioSpatializerExtensionDefinition_tF4C5755345CD7C3A169E9FB21164785ABD9EFDD7 * L_30 = V_1;
			NullCheck(L_30);
			AudioExtensionDefinition_tC2DA8CE3B7C53B001C90479C1954DE00649808CC * L_31 = L_30->get_definition_1();
			NullCheck(L_31);
			Type_t * L_32 = AudioExtensionDefinition_GetExtensionType_mA3CC9D2F26A5188863150BCC39CD6EBE6D175260(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
			AudioExtensionManager_WriteExtensionProperties_m445848E71B4139FEE237367139F75751A0425974(L_29, L_33, /*hidden argument*/NULL);
			AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_34 = V_3;
			V_0 = L_34;
			IL2CPP_LEAVE(0xE4, FINALLY_00cf);
		}

IL_00bc:
		{
		}

IL_00bd:
		{
		}

IL_00be:
		{
			bool L_35 = Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m101DA6C4C793B474605C4F145765372E9A28D1DC_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0034;
			}
		}

IL_00ca:
		{
			IL2CPP_LEAVE(0xDD, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF((Enumerator_t05820D7A93AA056242BEF86A46BF2C0314A4A9A3 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mD4FC13F2E1D438EB6390E2F588A180EEE0C942BF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(207)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		V_0 = (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E *)NULL;
		goto IL_00e4;
	}

IL_00e4:
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_36 = V_0;
		return L_36;
	}
}
// System.Void UnityEngine.AudioExtensionManager::WriteExtensionProperties(UnityEngine.AudioListenerExtension,System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_WriteExtensionProperties_m445848E71B4139FEE237367139F75751A0425974 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * ___extension0, String_t* ___extensionName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_WriteExtensionProperties_m445848E71B4139FEE237367139F75751A0425974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_0 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB(0, /*hidden argument*/NULL);
		bool L_2 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___extensionName1;
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_4 = PropertyName_op_Implicit_mAC7E93673BED899446D260154297F91C8D8EEF78(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_4);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0028:
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_5 = ___extension0;
		NullCheck(L_5);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_6 = AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_8 = AudioListener_ReadExtensionName_m2D1B5C5FC7F2A80988749C1D89D32B49591FBDA3(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_9 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		bool L_10 = PropertyName_op_Equality_m15312EA01DB9104A41667A1F7CFF6841E31DBD68(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_11 = ___extension0;
		NullCheck(L_11);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_12 = AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_14 = AudioListener_ReadExtensionPropertyName_m6090CCC677C262F7580489A0C8E57D76EABD218B(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_15 = ___extension0;
		NullCheck(L_15);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_16 = AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		float L_18 = AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_19 = ___extension0;
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_20 = V_1;
		float L_21 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 , float >::Invoke(5 /* System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single) */, L_19, L_20, L_21);
	}

IL_0068:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_23 = V_0;
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_24 = ___extension0;
		NullCheck(L_24);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_25 = AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0028;
		}
	}
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_27 = ___extension0;
		NullCheck(L_27);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_28 = AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_29 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_ListenerSpatializerExtensionName_8();
		NullCheck(L_28);
		AudioListener_ClearExtensionProperties_m24EEE507EBDA0ED3F216AD57600012E367586450(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::AddExtensionToManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_AddExtensionToManager_mF67FFAD6749CF9AB4AFA123DA83F6D53E83D5643 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_AddExtensionToManager_mF67FFAD6749CF9AB4AFA123DA83F6D53E83D5643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E(/*hidden argument*/NULL);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_2 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_3 = ___extension0;
		NullCheck(L_2);
		List_1_Add_mC1569F3CAA26DEF3D86683E8177004C3C085645F(L_2, L_3, /*hidden argument*/List_1_Add_mC1569F3CAA26DEF3D86683E8177004C3C085645F_RuntimeMethod_var);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = ___extension0;
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_5 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_5, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_m_ExtensionManagerUpdateIndex_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RemoveExtensionFromManager(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_0 = ___extension0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_ExtensionManagerUpdateIndex_5();
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_4 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_4, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_6 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_6, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_8 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_0;
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_10 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_12 = List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201(L_10, L_11, /*hidden argument*/List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_set_Item_mA8237FCBE84FBA3E34A8C6F4B0CF81F2143CBF8A(L_8, L_9, L_12, /*hidden argument*/List_1_set_Item_mA8237FCBE84FBA3E34A8C6F4B0CF81F2143CBF8A_RuntimeMethod_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_13 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_15 = List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201(L_13, L_14, /*hidden argument*/List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201_RuntimeMethod_var);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		L_15->set_m_ExtensionManagerUpdateIndex_5(L_16);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_17 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		List_1_RemoveAt_mD346619B716861C192281DAC0CC6D4EEF7B49161(L_17, L_18, /*hidden argument*/List_1_RemoveAt_mD346619B716861C192281DAC0CC6D4EEF7B49161_RuntimeMethod_var);
	}

IL_0060:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_19 = ___extension0;
		NullCheck(L_19);
		L_19->set_m_ExtensionManagerUpdateIndex_5((-1));
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::Update()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_Update_m484C1E7616C543D727E8EB673188846CD5987382 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_Update_m484C1E7616C543D727E8EB673188846CD5987382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * V_0 = NULL;
	AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E(/*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595(/*hidden argument*/NULL);
		V_0 = ((AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *)IsInstSealed((RuntimeObject*)L_0, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_il2cpp_TypeInfo_var));
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_4 = AudioExtensionManager_AddSpatializerExtension_m7CB5E033FF869B212B56D9180B460764BECBA3F4(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate() */, L_7);
	}

IL_0037:
	{
	}

IL_0038:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_8 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_10 = List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201(L_8, L_9, /*hidden argument*/List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201_RuntimeMethod_var);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate() */, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_13 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_13, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		int32_t L_15 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_16 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_16, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_007d;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0082;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		int32_t L_18 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B10_0 = L_18;
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B10_0);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_19 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_19, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_21 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_21, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		G_B13_0 = ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)L_22/(int32_t)8))));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B13_0 = 0;
	}

IL_00ab:
	{
		V_3 = G_B13_0;
		V_4 = 0;
		goto IL_0148;
	}

IL_00b4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_23 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		int32_t L_24 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		NullCheck(L_23);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_25 = List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201(L_23, L_24, /*hidden argument*/List_1_get_Item_m6C4222C8C68150B82B86E61778E8F93A4C0E6201_RuntimeMethod_var);
		V_5 = L_25;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_26 = V_5;
		NullCheck(L_26);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_27 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_27, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_29 = V_5;
		NullCheck(L_29);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_30 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_31 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fa;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_32 = V_5;
		NullCheck(L_32);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_33 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_010f;
		}
	}

IL_00fa:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_35 = V_5;
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, L_35);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C(L_36, /*hidden argument*/NULL);
		goto IL_0141;
	}

IL_010f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		int32_t L_38 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_39 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_SourceExtensionsToUpdate_3();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF(L_39, /*hidden argument*/List_1_get_Count_m5DE658EF3748514DC5521D6C0066ABFB533034EF_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0136;
		}
	}
	{
		G_B21_0 = 0;
		goto IL_013b;
	}

IL_0136:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		int32_t L_41 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_NextStopIndex_4();
		G_B21_0 = L_41;
	}

IL_013b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(G_B21_0);
	}

IL_0141:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0148:
	{
		int32_t L_43 = V_4;
		int32_t L_44 = V_3;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00b4;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::GetReadyToPlay(UnityEngine.AudioSourceExtension)
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_0 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_2 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.AudioSourceExtension::Play() */, L_2);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_3 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_AddExtensionToManager_mF67FFAD6749CF9AB4AFA123DA83F6D53E83D5643(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioExtensionManager::RegisterBuiltinDefinitions()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager_RegisterBuiltinDefinitions_m3109CA80CA352C9732A56EBD0A1A4BBD79F86C5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->get_m_BuiltinDefinitionsRegistered_5();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC(/*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral01DEFA05B661532C154351EDC5311960DBBC53B9, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
	}

IL_002a:
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_5 = AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE(/*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteral01DEFA05B661532C154351EDC5311960DBBC53B9, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)1);
	}

IL_004d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595 (const RuntimeMethod* method)
{
	typedef Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * (*AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595_ftn) ();
	static AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioExtensionManager_GetAudioListener_mF0FA3E4A19A7785E698D33E163CFBCBB882C3595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioExtensionManager::GetAudioListener()");
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AudioExtensionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AudioExtensionManager__cctor_m8558C140E3B10D18B24349BEE84D0C30FC44889C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioExtensionManager__cctor_m8558C140E3B10D18B24349BEE84D0C30FC44889C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * L_0 = (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A *)il2cpp_codegen_object_new(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A_il2cpp_TypeInfo_var);
		List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF(L_0, /*hidden argument*/List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF_RuntimeMethod_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionDefinitions_0(L_0);
		List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A * L_1 = (List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A *)il2cpp_codegen_object_new(List_1_t2C012B76D568CE6A7307A2EA9FF650F49761D78A_il2cpp_TypeInfo_var);
		List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF(L_1, /*hidden argument*/List_1__ctor_mD7D96EB4046EECF056A422844F5603BCAC944EBF_RuntimeMethod_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SourceSpatializerExtensionDefinitions_1(L_1);
		List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 * L_2 = (List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4 *)il2cpp_codegen_object_new(List_1_t3A2613038CB1BCAC2EAF5A2489FCDEB71322B1D4_il2cpp_TypeInfo_var);
		List_1__ctor_m19FA77D650658381D95E4324E6B91BBA93076062(L_2, /*hidden argument*/List_1__ctor_m19FA77D650658381D95E4324E6B91BBA93076062_RuntimeMethod_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SourceAmbisonicDecoderExtensionDefinitions_2(L_2);
		List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB * L_3 = (List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB *)il2cpp_codegen_object_new(List_1_t9540CDE5EC8583EFB0B58048F20080ED322C99BB_il2cpp_TypeInfo_var);
		List_1__ctor_mCAA30996286EED7639EB78B7DD866819AEE2D2F9(L_3, /*hidden argument*/List_1__ctor_mCAA30996286EED7639EB78B7DD866819AEE2D2F9_RuntimeMethod_var);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SourceExtensionsToUpdate_3(L_3);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_NextStopIndex_4(0);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_BuiltinDefinitionsRegistered_5((bool)0);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_4 = PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB(0, /*hidden argument*/NULL);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SpatializerName_6(L_4);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_5 = PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB(0, /*hidden argument*/NULL);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_SpatializerExtensionName_7(L_5);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_6 = PropertyName_op_Implicit_m037981C0855974C6FF5D946E53387BCAC8AA17FB(0, /*hidden argument*/NULL);
		((AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_StaticFields*)il2cpp_codegen_static_fields_for(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var))->set_m_ListenerSpatializerExtensionName_8(L_6);
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
// System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260_ftn) (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *);
	static AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetNumExtensionProperties_m25EA8050804F66436031AE390FD6A8675511C260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioListener_ReadExtensionName_m2D1B5C5FC7F2A80988749C1D89D32B49591FBDA3 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5(__this, L_0, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, int32_t ___listenerIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5_ftn) (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *, int32_t, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionName_m6EE209E0DE59023903A93CF4FC4BAA4F42B26DE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioListener::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioListener_ReadExtensionPropertyName_m6090CCC677C262F7580489A0C8E57D76EABD218B (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___listenerIndex0;
		AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE(__this, L_0, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, int32_t ___listenerIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE_ftn) (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *, int32_t, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ReadExtensionPropertyName_mCCE32A7F9F577EAF90BA62637B064742EC2663CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___listenerIndex1, ___value2);
}
// System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, int32_t ___listenerIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B_ftn) (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *, int32_t);
	static AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_ReadExtensionPropertyValue_m35EFD2B46A6541295B00D530C87373005566338B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___listenerIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioListener::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_ClearExtensionProperties_m24EEE507EBDA0ED3F216AD57600012E367586450 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882(__this, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___self0, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882_ftn) (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_INTERNAL_CALL_ClearExtensionProperties_m9B9B2AB6B474FC2FD0F38A056E2CA54A316FC882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::AddExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * AudioListener_AddExtension_m4D1DD3D583145A51A71D1811C8F489C03AFF77C1 (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioListener_AddExtension_m4D1DD3D583145A51A71D1811C8F489C03AFF77C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * V_0 = NULL;
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_0 = __this->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_3 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D(L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_4(((AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E *)IsInstClass((RuntimeObject*)L_3, AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_4 = __this->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * L_5 = V_0;
		return L_5;
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
// System.Void UnityEngine.AudioListenerExtension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension__ctor_m1BCEEC53C3762BCF69A44CB41F096D08C5261173 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::get_audioListener()
extern "C" IL2CPP_METHOD_ATTR AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * AudioListenerExtension_get_audioListener_mB8F0961BAA008B4FFCC59A4AA1E9A9E9B15274E9 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, const RuntimeMethod* method)
{
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * V_0 = NULL;
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = __this->get_m_audioListener_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioListenerExtension::set_audioListener(UnityEngine.AudioListener)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_set_audioListener_m6274F6DF41C2674CE8886CEDD40EF9EE643F2239 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___value0, const RuntimeMethod* method)
{
	{
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = ___value0;
		__this->set_m_audioListener_4(L_0);
		return;
	}
}
// System.Single UnityEngine.AudioListenerExtension::ReadExtensionProperty(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR float AudioListenerExtension_ReadExtensionProperty_mB76B1DFD58F53977751D2D2024051A76618603E3 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___propertyName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_000c;
	}

IL_000c:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AudioListenerExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_WriteExtensionProperty_m71355EAC97C82FFDEB44F7BF5C10248464874BEB (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioListenerExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioListenerExtension_ExtensionUpdate_mA2B534583085FF965A44192B26518A894DF0D8D9 (AudioListenerExtension_t1407D9FB8E79B710574DA30045A97C9C2216F03E * __this, const RuntimeMethod* method)
{
	{
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
// System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC (const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC_ftn) ();
	static AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpatializerPluginName_mB972ACF5EF94BF57E3C59B0237B7722345896ACC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpatializerPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7 (bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioConfigurationChanged_m8D251791C6A402B12E93C22F43475DE3033FC8E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * L_0 = ((AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * L_1 = ((AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t77B5D69F704CF3B710B0B6970BB62A4BF25A5B31_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_2 = ___deviceWasChanged0;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioManagerUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioManagerUpdate_m8903294EA9A21219DD89D2D4DA58E8F92E2241D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioManagerUpdate_m8903294EA9A21219DD89D2D4DA58E8F92E2241D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_Update_m484C1E7616C543D727E8EB673188846CD5987382(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSourcePlay(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSourcePlay_mD51DB37900113BD1FCF3E34F357A717CF751E126 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSettings_InvokeOnAudioSourcePlay_mD51DB37900113BD1FCF3E34F357A717CF751E126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_1 = NULL;
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_1 = AudioExtensionManager_AddSpatializerExtension_m308292561D9B4CAF4B66BD3905885267A78B2533(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = ___source0;
		NullCheck(L_5);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_6 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_8 = ___source0;
		NullCheck(L_8);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_9 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_11 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_12 = AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3(L_15, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		return;
	}
}
// System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
extern "C" IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE (const RuntimeMethod* method)
{
	typedef String_t* (*AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE_ftn) ();
	static AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetAmbisonicDecoderPluginName_mA1D556DB7A558388778C7610BB300BBE654FBCFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings_AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mF9399769D5BB18D740774B9E3129958868BD6D9A (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings_AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m62D72B397E1DC117C8C92A450D2C86C535A2BF49 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
							else
								GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
							else
								VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
						else
							GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
						else
							VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioSettings_AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, bool ___deviceWasChanged0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioConfigurationChangeHandler_BeginInvoke_mB0B0ACF6281B999FA11037CA130CA3C72BEC7827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.AudioSettings_AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_EndInvoke_mBB53599C34E3944D3A1DD71EFD2D73AF105CF830 (AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AudioSource::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioSource__ctor_m16DE45CD7FEFDEDC97B279769B399D0F995F7299 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	{
		__this->set_spatializerExtension_4((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL);
		__this->set_ambisonicExtension_5((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL);
		AudioBehaviour__ctor_m43B1C08196D937549E20DE6370263646C1D81F59(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.AudioSource::get_volume()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_mBD65DB423F0520CDCB935CC593565343965A4CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, float);
	static AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mF1757D70EE113871724334D13F70EF1ED033BA06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C" IL2CPP_METHOD_ATTR float AudioSource_get_pitch_m70F33CAA7F869F88AB78BFEFA7385CF533F9B50D (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef float (*AudioSource_get_pitch_m70F33CAA7F869F88AB78BFEFA7385CF533F9B50D_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_pitch_m70F33CAA7F869F88AB78BFEFA7385CF533F9B50D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_pitch_m70F33CAA7F869F88AB78BFEFA7385CF533F9B50D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_pitch()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, float);
	static AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_pitch(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *);
	static AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, uint64_t ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, uint64_t);
	static AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		uint64_t L_0 = V_0;
		AudioSource_Play_m442DC027196BE23536B5806E13B2F9D6D1A2ED74(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m5112A878573652681F40C82F0D8103C999978F3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		float L_1 = V_0;
		AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_PlayOneShot_mA65B809A4480039CD8337ABF45C0E57E137EED41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = ___clip0;
		NullCheck(L_2);
		bool L_3 = AudioClip_get_ambisonic_m9C97B0E60B6AD2A70849439DFCB08D3F3968A1A4(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = AudioExtensionManager_AddAmbisonicDecoderExtension_mB073B510A9DCA9A83B078F1A9910F391A1F2C659(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_GetReadyToPlay_m90C33154EC056C95F569EF46C606AC44EFD5C6F3(L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
	}

IL_0033:
	{
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_8 = ___clip0;
		float L_9 = ___volumeScale1;
		AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE(__this, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, float ___volumeScale1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *, float);
	static AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_m984380B06707633611ACDDCF4AFC91B659EEF8AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip0, ___volumeScale1);
}
// System.Boolean UnityEngine.AudioSource::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m576259B36687CA2327106F945A3E49E3D74A7F90 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_loop_m576259B36687CA2327106F945A3E49E3D74A7F90_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_loop_m576259B36687CA2327106F945A3E49E3D74A7F90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_m576259B36687CA2327106F945A3E49E3D74A7F90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m4DEE785C31213E964D7014B633F0FFC7E98B79F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, bool);
	static AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m5E4C76260D66898EEFEB20E4F42B6249AACB4128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializeInternal()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AudioSource::get_spatialize()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m8CC430356EDE4FF4BD31A5F5509028B7DDCC4C11 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = AudioSource_get_spatializeInternal_mFA756EEB0BD4DC62422DEE11E7E6013BC0F23224(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSource::set_priority(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_priority_m2560D32385E544B7706071B38F2A195C72E50AB6 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_priority_m2560D32385E544B7706071B38F2A195C72E50AB6_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, int32_t);
	static AudioSource_set_priority_m2560D32385E544B7706071B38F2A195C72E50AB6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_m2560D32385E544B7706071B38F2A195C72E50AB6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *);
	static AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetNumExtensionProperties_m587290B91EE48986EC862690A77A609CAEEA4E67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetNumExtensionProperties()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioSource_ReadExtensionName_m05F7B0E213B85084EFC1B989A6E7195172398893 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081(__this, L_0, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, int32_t ___sourceIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, int32_t, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionName_m8CD94E3A9AE86B516FEE157BA8EB24B90C8F3081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// UnityEngine.PropertyName UnityEngine.AudioSource::ReadExtensionPropertyName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  AudioSource_ReadExtensionPropertyName_m4D99B210E19B6968A339CBFDB068962C338151D8 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___sourceIndex0;
		AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F(__this, L_0, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&V_0), /*hidden argument*/NULL);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, int32_t ___sourceIndex1, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___value2, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, int32_t, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ReadExtensionPropertyName_m492F5C801FB68FC7438FD3D9A00128F034C7212F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___sourceIndex1, ___value2);
}
// System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___sourceIndex0, const RuntimeMethod* method)
{
	typedef float (*AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, int32_t);
	static AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_ReadExtensionPropertyValue_m4160AE7E016E58B1D17767A105AB453148DDC0DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___sourceIndex0);
	return retVal;
}
// System.Void UnityEngine.AudioSource::ClearExtensionProperties(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_ClearExtensionProperties_m8D8CB048725E07A391A9469A0E27910A39786E77 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___extensionName0, const RuntimeMethod* method)
{
	{
		AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15(__this, (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *)(&___extensionName0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyNameU26)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___self0, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * ___extensionName1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15_ftn) (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C *, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 *);
	static AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_ClearExtensionProperties_mCE3E0A4C8D26BEA0B4FC8B775ADEAD9F494C1A15_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)");
	_il2cpp_icall_func(___self0, ___extensionName1);
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddSpatializerExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioSource_AddSpatializerExtension_mEA48D6DCCBFA6EF941158C6A0AF5844519AC3DA7 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddSpatializerExtension_mEA48D6DCCBFA6EF941158C6A0AF5844519AC3DA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_0 = __this->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_3 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D(L_2, /*hidden argument*/NULL);
		__this->set_spatializerExtension_4(((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = __this->get_spatializerExtension_4();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::AddAmbisonicExtension(System.Type)
extern "C" IL2CPP_METHOD_ATTR AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * AudioSource_AddAmbisonicExtension_m7D073528C0FAF70863AF8F14761ED4DA2CD986EF (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, Type_t * ___extensionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSource_AddAmbisonicExtension_m7D073528C0FAF70863AF8F14761ED4DA2CD986EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * V_0 = NULL;
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_0 = __this->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_2 = ___extensionType0;
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_3 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D(L_2, /*hidden argument*/NULL);
		__this->set_ambisonicExtension_5(((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)IsInstClass((RuntimeObject*)L_3, AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1_il2cpp_TypeInfo_var)));
	}

IL_0025:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_4 = __this->get_ambisonicExtension_5();
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_5 = V_0;
		return L_5;
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
// System.Void UnityEngine.AudioSourceExtension::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension__ctor_mD19AFD51DDEB5C889BFAA75773587D5CCBE6DD94 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ExtensionManagerUpdateIndex_5((-1));
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioSource UnityEngine.AudioSourceExtension::get_audioSource()
extern "C" IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * V_0 = NULL;
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_m_audioSource_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSourceExtension::set_audioSource(UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_set_audioSource_m62B17CFE5F303CC29EE023B36DE39BFD7726A79B (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___value0, const RuntimeMethod* method)
{
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = ___value0;
		__this->set_m_audioSource_4(L_0);
		return;
	}
}
// System.Single UnityEngine.AudioSourceExtension::ReadExtensionProperty(UnityEngine.PropertyName)
extern "C" IL2CPP_METHOD_ATTR float AudioSourceExtension_ReadExtensionProperty_m78D048633DA14DC61E16486B26E564FE2818A120 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___propertyName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_000c;
	}

IL_000c:
	{
		float L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AudioSourceExtension::WriteExtensionProperty(UnityEngine.PropertyName,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_WriteExtensionProperty_m91D56B8F26AD85526A81D472AE8EC5D56AD2264D (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___propertyName0, float ___propertyValue1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Play_m52FEAE1C491E36B2CD28635BD5A37573C59A0785 (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_Stop_mFB7AD0EA97399DC3A4BB7F1B04BD821A1C6EF94E (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::ExtensionUpdate()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_ExtensionUpdate_mE718BD9BF44413C65C86AC747F3F86C411E7D01A (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.AudioSourceExtension::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void AudioSourceExtension_OnDestroy_mD8E128CF5A04AAEA4A1865107D241E5C8CAFBE3D (AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSourceExtension_OnDestroy_mD8E128CF5A04AAEA4A1865107D241E5C8CAFBE3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.AudioSourceExtension::Stop() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(AudioExtensionManager_tC973F0DD47CBACBEA5C3A9D845082BAC1149CFDB_il2cpp_TypeInfo_var);
		AudioExtensionManager_RemoveExtensionFromManager_mFA4CE4317A4C5DF0C5E77F6D47F75F29C65F697C(__this, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_3 = L_2->get_spatializerExtension_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_spatializerExtension_4((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL);
	}

IL_0041:
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * L_7 = L_6->get_ambisonicExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, __this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_9 = AudioSourceExtension_get_audioSource_m917E04DA5D5A62ED47FCA12CC56C05495E7E1CE3(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_ambisonicExtension_5((AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 *)NULL);
	}

IL_0063:
	{
	}

IL_0064:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Finalize()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Finalize_mACCDEE1F5F0F602DC35AE68875EB8DB16830544C (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		AudioSampleProvider_Dispose_mA11D514354EDA94E8B6AA83B726DF85169C8E29A(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_mA11D514354EDA94E8B6AA83B726DF85169C8E29A (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSampleProvider_Dispose_mA11D514354EDA94E8B6AA83B726DF85169C8E29A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = AudioSampleProvider_get_id_m9E16910C6A2335F87E6B257D3059A8BBC8D7253A(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_1 = AudioSampleProvider_get_id_m9E16910C6A2335F87E6B257D3059A8BBC8D7253A(__this, /*hidden argument*/NULL);
		AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9(L_1, (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *)NULL, /*hidden argument*/NULL);
		AudioSampleProvider_set_id_mB98E8435407CAD305BBEAA91B18CBC12562DFAF9(__this, 0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider::get_id()
extern "C" IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m9E16910C6A2335F87E6B257D3059A8BBC8D7253A (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_U3CidU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::set_id(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_mB98E8435407CAD305BBEAA91B18CBC12562DFAF9 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_m7604AAF1AC01473A29DCDAD1AEC06165504BE832 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method)
{
	{
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_0 = __this->get_sampleFramesAvailable_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_1 = __this->get_sampleFramesAvailable_6();
		int32_t L_2 = ___sampleFrameCount0;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_mC81A014388E535569EF02E3DA6B9831B0FB8A8D4 (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method)
{
	{
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_0 = __this->get_sampleFramesOverflow_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * L_1 = __this->get_sampleFramesOverflow_7();
		int32_t L_2 = ___droppedSampleFrameCount0;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
extern "C" IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9 (uint32_t ___providerId0, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider1, const RuntimeMethod* method)
{
	typedef void (*AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9_ftn) (uint32_t, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *);
	static AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetScriptingPtr_m018841DA2C6D92E2322F1D041E4C88A054991AF9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)");
	_il2cpp_icall_func(___providerId0, ___provider1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  uint32_t DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D (ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(uint32_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);

	return returnValue;
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConsumeSampleFramesNativeFunction__ctor_m10D2C92ADC2CC0F2731CC790036CF84E7E6E97F6 (ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction::Invoke(System.UInt32,System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_Invoke_mA644FB7343047BEC754D81AC2AFABDC300DF5D74 (ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
				}
				else
				{
					// closed
					typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
							else
								result = GenericVirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
							else
								result = VirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						}
					}
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						else
							result = GenericVirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
						else
							result = VirtFuncInvoker3< uint32_t, uint32_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2);
					}
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___providerId0, ___interleavedSampleFrames1, ___sampleFrameCount2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction::BeginInvoke(System.UInt32,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConsumeSampleFramesNativeFunction_BeginInvoke_mCFD45D186107B1FD87B1A492904CBCF49DDA28CB (ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * __this, uint32_t ___providerId0, intptr_t ___interleavedSampleFrames1, uint32_t ___sampleFrameCount2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConsumeSampleFramesNativeFunction_BeginInvoke_mCFD45D186107B1FD87B1A492904CBCF49DDA28CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___providerId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interleavedSampleFrames1);
	__d_args[2] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___sampleFrameCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.UInt32 UnityEngine.Experimental.Audio.AudioSampleProvider_ConsumeSampleFramesNativeFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_EndInvoke_m4F91AA6FC2DFEF1495E3BA8D7BF1098C9E043711 (ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_mFDA0769E55F136D1B8EC8AA4B40EF43069934EB5 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m52F0148F680B36E04A7F850E617FBEF1CA9809FD (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
							else
								GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
							else
								VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
							else
								GenericVirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
							else
								VirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
						else
							GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
						else
							VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
						else
							GenericVirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
						else
							VirtActionInvoker2< AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, AudioSampleProvider_tD5B209D07C5F1D4714F92069F4071068B9BC6913 * ___provider0, uint32_t ___sampleFrameCount1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SampleFramesHandler_BeginInvoke_mE516B77CCC50738663D10DDD2D7BDB4391FDFF92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___provider0;
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___sampleFrameCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider_SampleFramesHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SampleFramesHandler_EndInvoke_mF5305B3BA179CE3C49836790DE3FEB02EB088D28 (SampleFramesHandler_t5179C92AFBB393A85144E9134A862C161726F6AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
