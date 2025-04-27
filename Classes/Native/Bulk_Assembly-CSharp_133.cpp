#include "il2cpp-config.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,iTweenPath>[]
struct EntryU5BU5D_t2C29FAFBE13ABEDD924C2061CA64C0A42168E00F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,iTweenPath>
struct KeyCollection_t14AA10ECDF5D70C8A55A79AE648BD20C56E38C1D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,iTweenPath>
struct ValueCollection_tC434B61E8C6F098AFBC9E03ECD233CAE141FA98D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,iTweenPath>
struct Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t8C9961F7F97EEE458417814CE8B514983FCAA4DC;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Color[0...,0...]
struct ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Rect[]
struct RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// iTween
struct iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185;
// iTween/<Start>d__240
struct U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D;
// iTween/<TweenDelay>d__149
struct U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4;
// iTween/<TweenRestart>d__151
struct U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435;
// iTween/ApplyTween
struct ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487;
// iTween/CRSpline
struct CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF;
// iTween/EasingFunction
struct EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4;
// iTweenPath
struct iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92;
// iTweenPathEX
struct iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern RuntimeClass* iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var;
extern RuntimeClass* iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral31F1C6560FB961284D6589281FA4661A1C74D1B6;
extern String_t* _stringLiteral478048BCDCCE4D20C70B4E48D2C1AF5B9749A2FD;
extern String_t* _stringLiteral4B5B9210577C56BCBA682A29973DF957881FADF5;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern const RuntimeMethod* Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m264AC0515C7B663191AD2BC7320AB02BF31BA428_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mB9CFE4CE6243725ECC766A060A7A82FB6BCB1399_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ed__240_System_Collections_IEnumerator_Reset_mE72EF7443CB4786A01B64D741B77B9E64D1D61BD_RuntimeMethod_var;
extern const RuntimeMethod* U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_Reset_m2404E3CA41A57D10CB837F90780C7E01D908DDB2_RuntimeMethod_var;
extern const RuntimeMethod* U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_Reset_m0AEE53712755C276B4BF085CF73DF966D6805117_RuntimeMethod_var;
extern const uint32_t CRSpline_Interp_m4CA75A75B5AA2951E64FBD808A2EE7D60725C6F7_MetadataUsageId;
extern const uint32_t CRSpline__ctor_m9FC31924B7B1F8F00C0BCAB967743C89E2878B93_MetadataUsageId;
extern const uint32_t Defaults__cctor_m295C4B16354C0493605BBE885EB21B0DF8E745DE_MetadataUsageId;
extern const uint32_t EasingFunction_BeginInvoke_m00E3593801C799AF30053922A6B8491B480A3C6D_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__240_MoveNext_m9542FCE3706F6DE8D21BFB0C43AB2514A1BF48A4_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__240_System_Collections_IEnumerator_Reset_mE72EF7443CB4786A01B64D741B77B9E64D1D61BD_MetadataUsageId;
extern const uint32_t U3CTweenDelayU3Ed__149_MoveNext_m4E9A8DAF87CEB56DA1612CEB347BA207D8BD0D7E_MetadataUsageId;
extern const uint32_t U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_Reset_m2404E3CA41A57D10CB837F90780C7E01D908DDB2_MetadataUsageId;
extern const uint32_t U3CTweenRestartU3Ed__151_MoveNext_m726A6A0CD0A567F193C26238AA86E0B91CAD15F4_MetadataUsageId;
extern const uint32_t U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_Reset_m0AEE53712755C276B4BF085CF73DF966D6805117_MetadataUsageId;
extern const uint32_t iTweenPathEX_AddPathName_m7F9E1ECF57053F0CF266D1CC2A95787B4CF2EF82_MetadataUsageId;
extern const uint32_t iTweenPathEX__ctor_m5F5858ACEE9A47B31538BC2299064AA1A215CC9F_MetadataUsageId;
extern const uint32_t iTweenPath_GetPathReversed_mB89441443ACC9E74ED14F9B3D463CF4FB21EA300_MetadataUsageId;
extern const uint32_t iTweenPath_GetPath_mE3C12B9B30F760E337BFF317D5212FE3CAE550F8_MetadataUsageId;
extern const uint32_t iTweenPath_OnDisable_mF96CE29633A59A991B72E13D2DE15D20A52501DE_MetadataUsageId;
extern const uint32_t iTweenPath_OnDrawGizmosSelected_m24CB24B965D0A934C43CFA17DD4728BE29CEC0DB_MetadataUsageId;
extern const uint32_t iTweenPath_OnEnable_m9EC24CAA64FCD45E261C20A12B996D1387516570_MetadataUsageId;
extern const uint32_t iTweenPath__cctor_m0CD3D392D8D400C777EF2E7FFC4241AB49D0BD56_MetadataUsageId;
extern const uint32_t iTweenPath__ctor_m55B208E1EB73F6516511378B033E72F755BBD488_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


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
#ifndef DICTIONARY_2_T13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16_H
#define DICTIONARY_2_T13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,iTweenPath>
struct  Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2C29FAFBE13ABEDD924C2061CA64C0A42168E00F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t14AA10ECDF5D70C8A55A79AE648BD20C56E38C1D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC434B61E8C6F098AFBC9E03ECD233CAE141FA98D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___entries_1)); }
	inline EntryU5BU5D_t2C29FAFBE13ABEDD924C2061CA64C0A42168E00F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2C29FAFBE13ABEDD924C2061CA64C0A42168E00F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2C29FAFBE13ABEDD924C2061CA64C0A42168E00F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___keys_7)); }
	inline KeyCollection_t14AA10ECDF5D70C8A55A79AE648BD20C56E38C1D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t14AA10ECDF5D70C8A55A79AE648BD20C56E38C1D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t14AA10ECDF5D70C8A55A79AE648BD20C56E38C1D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ___values_8)); }
	inline ValueCollection_tC434B61E8C6F098AFBC9E03ECD233CAE141FA98D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC434B61E8C6F098AFBC9E03ECD233CAE141FA98D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC434B61E8C6F098AFBC9E03ECD233CAE141FA98D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16_H
#ifndef LIST_1_T9EE625A1B4AEF2D72DE1813A59F97164EE142485_H
#define LIST_1_T9EE625A1B4AEF2D72DE1813A59F97164EE142485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T9EE625A1B4AEF2D72DE1813A59F97164EE142485_H
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
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef U3CSTARTU3ED__240_TC1998168B98DE80D974096AFD750F674FC35C50D_H
#define U3CSTARTU3ED__240_TC1998168B98DE80D974096AFD750F674FC35C50D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_<Start>d__240
struct  U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D  : public RuntimeObject
{
public:
	// System.Int32 iTween_<Start>d__240::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween_<Start>d__240::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween_<Start>d__240::<>4__this
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D, ___U3CU3E4__this_2)); }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3ED__240_TC1998168B98DE80D974096AFD750F674FC35C50D_H
#ifndef U3CTWEENDELAYU3ED__149_T08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4_H
#define U3CTWEENDELAYU3ED__149_T08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_<TweenDelay>d__149
struct  U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4  : public RuntimeObject
{
public:
	// System.Int32 iTween_<TweenDelay>d__149::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween_<TweenDelay>d__149::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween_<TweenDelay>d__149::<>4__this
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4, ___U3CU3E4__this_2)); }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENDELAYU3ED__149_T08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4_H
#ifndef U3CTWEENRESTARTU3ED__151_TDABA2A1FD37E5E188821B18CF1B27F5F8988B435_H
#define U3CTWEENRESTARTU3ED__151_TDABA2A1FD37E5E188821B18CF1B27F5F8988B435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_<TweenRestart>d__151
struct  U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435  : public RuntimeObject
{
public:
	// System.Int32 iTween_<TweenRestart>d__151::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween_<TweenRestart>d__151::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// iTween iTween_<TweenRestart>d__151::<>4__this
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435, ___U3CU3E4__this_2)); }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENRESTARTU3ED__151_TDABA2A1FD37E5E188821B18CF1B27F5F8988B435_H
#ifndef CRSPLINE_T0825BAFFC75F5391A3041A24B8FE1F843086F2CF_H
#define CRSPLINE_T0825BAFFC75F5391A3041A24B8FE1F843086F2CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_CRSpline
struct  CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] iTween_CRSpline::pts
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pts_0;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF, ___pts_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier((&___pts_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRSPLINE_T0825BAFFC75F5391A3041A24B8FE1F843086F2CF_H
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
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
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
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
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
#ifndef SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#define SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
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
#endif // SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifndef EASETYPE_TF90158E52866DA48482DBA8C4193D40B996DBED0_H
#define EASETYPE_TF90158E52866DA48482DBA8C4193D40B996DBED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_EaseType
struct  EaseType_tF90158E52866DA48482DBA8C4193D40B996DBED0 
{
public:
	// System.Int32 iTween_EaseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EaseType_tF90158E52866DA48482DBA8C4193D40B996DBED0, ___value___2)); }
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
#endif // EASETYPE_TF90158E52866DA48482DBA8C4193D40B996DBED0_H
#ifndef LOOPTYPE_T5F7B264C96C15A33ED933376EBDAA629E4D5CC5E_H
#define LOOPTYPE_T5F7B264C96C15A33ED933376EBDAA629E4D5CC5E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_LoopType
struct  LoopType_t5F7B264C96C15A33ED933376EBDAA629E4D5CC5E 
{
public:
	// System.Int32 iTween_LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_t5F7B264C96C15A33ED933376EBDAA629E4D5CC5E, ___value___2)); }
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
#endif // LOOPTYPE_T5F7B264C96C15A33ED933376EBDAA629E4D5CC5E_H
#ifndef NAMEDVALUECOLOR_TD33C5F4C3A522269471F5FFDB023155284CF863E_H
#define NAMEDVALUECOLOR_TD33C5F4C3A522269471F5FFDB023155284CF863E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_NamedValueColor
struct  NamedValueColor_tD33C5F4C3A522269471F5FFDB023155284CF863E 
{
public:
	// System.Int32 iTween_NamedValueColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamedValueColor_tD33C5F4C3A522269471F5FFDB023155284CF863E, ___value___2)); }
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
#endif // NAMEDVALUECOLOR_TD33C5F4C3A522269471F5FFDB023155284CF863E_H
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
#ifndef DEFAULTS_TFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_H
#define DEFAULTS_TFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_Defaults
struct  Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8  : public RuntimeObject
{
public:

public:
};

struct Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields
{
public:
	// System.Single iTween_Defaults::time
	float ___time_0;
	// System.Single iTween_Defaults::delay
	float ___delay_1;
	// iTween_NamedValueColor iTween_Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween_LoopType iTween_Defaults::loopType
	int32_t ___loopType_3;
	// iTween_EaseType iTween_Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween_Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween_Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween_Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween_Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween_Defaults::color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_9;
	// System.Single iTween_Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween_Defaults::updateTime
	float ___updateTime_11;
	// System.Int32 iTween_Defaults::cameraFadeDepth
	int32_t ___cameraFadeDepth_12;
	// System.Single iTween_Defaults::lookAhead
	float ___lookAhead_13;
	// System.Boolean iTween_Defaults::useRealTime
	bool ___useRealTime_14;
	// UnityEngine.Vector3 iTween_Defaults::up
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up_15;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_namedColorValue_2() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___namedColorValue_2)); }
	inline int32_t get_namedColorValue_2() const { return ___namedColorValue_2; }
	inline int32_t* get_address_of_namedColorValue_2() { return &___namedColorValue_2; }
	inline void set_namedColorValue_2(int32_t value)
	{
		___namedColorValue_2 = value;
	}

	inline static int32_t get_offset_of_loopType_3() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___loopType_3)); }
	inline int32_t get_loopType_3() const { return ___loopType_3; }
	inline int32_t* get_address_of_loopType_3() { return &___loopType_3; }
	inline void set_loopType_3(int32_t value)
	{
		___loopType_3 = value;
	}

	inline static int32_t get_offset_of_easeType_4() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___easeType_4)); }
	inline int32_t get_easeType_4() const { return ___easeType_4; }
	inline int32_t* get_address_of_easeType_4() { return &___easeType_4; }
	inline void set_easeType_4(int32_t value)
	{
		___easeType_4 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_5() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___lookSpeed_5)); }
	inline float get_lookSpeed_5() const { return ___lookSpeed_5; }
	inline float* get_address_of_lookSpeed_5() { return &___lookSpeed_5; }
	inline void set_lookSpeed_5(float value)
	{
		___lookSpeed_5 = value;
	}

	inline static int32_t get_offset_of_isLocal_6() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___isLocal_6)); }
	inline bool get_isLocal_6() const { return ___isLocal_6; }
	inline bool* get_address_of_isLocal_6() { return &___isLocal_6; }
	inline void set_isLocal_6(bool value)
	{
		___isLocal_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}

	inline static int32_t get_offset_of_orientToPath_8() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___orientToPath_8)); }
	inline bool get_orientToPath_8() const { return ___orientToPath_8; }
	inline bool* get_address_of_orientToPath_8() { return &___orientToPath_8; }
	inline void set_orientToPath_8(bool value)
	{
		___orientToPath_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___color_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_color_9() const { return ___color_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_updateTimePercentage_10() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___updateTimePercentage_10)); }
	inline float get_updateTimePercentage_10() const { return ___updateTimePercentage_10; }
	inline float* get_address_of_updateTimePercentage_10() { return &___updateTimePercentage_10; }
	inline void set_updateTimePercentage_10(float value)
	{
		___updateTimePercentage_10 = value;
	}

	inline static int32_t get_offset_of_updateTime_11() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___updateTime_11)); }
	inline float get_updateTime_11() const { return ___updateTime_11; }
	inline float* get_address_of_updateTime_11() { return &___updateTime_11; }
	inline void set_updateTime_11(float value)
	{
		___updateTime_11 = value;
	}

	inline static int32_t get_offset_of_cameraFadeDepth_12() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___cameraFadeDepth_12)); }
	inline int32_t get_cameraFadeDepth_12() const { return ___cameraFadeDepth_12; }
	inline int32_t* get_address_of_cameraFadeDepth_12() { return &___cameraFadeDepth_12; }
	inline void set_cameraFadeDepth_12(int32_t value)
	{
		___cameraFadeDepth_12 = value;
	}

	inline static int32_t get_offset_of_lookAhead_13() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___lookAhead_13)); }
	inline float get_lookAhead_13() const { return ___lookAhead_13; }
	inline float* get_address_of_lookAhead_13() { return &___lookAhead_13; }
	inline void set_lookAhead_13(float value)
	{
		___lookAhead_13 = value;
	}

	inline static int32_t get_offset_of_useRealTime_14() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___useRealTime_14)); }
	inline bool get_useRealTime_14() const { return ___useRealTime_14; }
	inline bool* get_address_of_useRealTime_14() { return &___useRealTime_14; }
	inline void set_useRealTime_14(bool value)
	{
		___useRealTime_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields, ___up_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_up_15() const { return ___up_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___up_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTS_TFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_H
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
#ifndef APPLYTWEEN_T0470935767C7B4CC05367D151B0A05DCFCFEA487_H
#define APPLYTWEEN_T0470935767C7B4CC05367D151B0A05DCFCFEA487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_ApplyTween
struct  ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYTWEEN_T0470935767C7B4CC05367D151B0A05DCFCFEA487_H
#ifndef EASINGFUNCTION_TF1283C559771F12F114B03C2946E131A6B75BBE4_H
#define EASINGFUNCTION_TF1283C559771F12F114B03C2946E131A6B75BBE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween_EasingFunction
struct  EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASINGFUNCTION_TF1283C559771F12F114B03C2946E131A6B75BBE4_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ITWEEN_TDA707E2527E6175B97BA51001FD2B4295FC19185_H
#define ITWEEN_TDA707E2527E6175B97BA51001FD2B4295FC19185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween
struct  iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String iTween::id
	String_t* ___id_6;
	// System.String iTween::type
	String_t* ___type_7;
	// System.String iTween::method
	String_t* ___method_8;
	// iTween_EaseType iTween::easeType
	int32_t ___easeType_9;
	// System.Single iTween::time
	float ___time_10;
	// System.Single iTween::delay
	float ___delay_11;
	// iTween_LoopType iTween::loopType
	int32_t ___loopType_12;
	// System.Boolean iTween::isRunning
	bool ___isRunning_13;
	// System.Boolean iTween::isPaused
	bool ___isPaused_14;
	// System.String iTween::_name
	String_t* ____name_15;
	// System.Single iTween::runningTime
	float ___runningTime_16;
	// System.Single iTween::percentage
	float ___percentage_17;
	// System.Single iTween::delayStarted
	float ___delayStarted_18;
	// System.Boolean iTween::isLocal
	bool ___isLocal_19;
	// System.Boolean iTween::loop
	bool ___loop_20;
	// System.Boolean iTween::reverse
	bool ___reverse_21;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_22;
	// System.Boolean iTween::physics
	bool ___physics_23;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___tweenArguments_24;
	// UnityEngine.Space iTween::space
	int32_t ___space_25;
	// iTween_EasingFunction iTween::ease
	EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * ___ease_26;
	// iTween_ApplyTween iTween::apply
	ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * ___apply_27;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_28;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vector3s_29;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___vector2s_30;
	// UnityEngine.Color[0...,0...] iTween::colors
	ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* ___colors_31;
	// System.Single[] iTween::floats
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floats_32;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* ___rects_33;
	// iTween_CRSpline iTween::path
	CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF * ___path_34;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___preUpdate_35;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___postUpdate_36;
	// iTween_NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_37;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_38;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_39;
	// UnityEngine.Transform iTween::thisTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___thisTransform_40;

public:
	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((&___id_6), value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier((&___type_7), value);
	}

	inline static int32_t get_offset_of_method_8() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___method_8)); }
	inline String_t* get_method_8() const { return ___method_8; }
	inline String_t** get_address_of_method_8() { return &___method_8; }
	inline void set_method_8(String_t* value)
	{
		___method_8 = value;
		Il2CppCodeGenWriteBarrier((&___method_8), value);
	}

	inline static int32_t get_offset_of_easeType_9() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___easeType_9)); }
	inline int32_t get_easeType_9() const { return ___easeType_9; }
	inline int32_t* get_address_of_easeType_9() { return &___easeType_9; }
	inline void set_easeType_9(int32_t value)
	{
		___easeType_9 = value;
	}

	inline static int32_t get_offset_of_time_10() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___time_10)); }
	inline float get_time_10() const { return ___time_10; }
	inline float* get_address_of_time_10() { return &___time_10; }
	inline void set_time_10(float value)
	{
		___time_10 = value;
	}

	inline static int32_t get_offset_of_delay_11() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___delay_11)); }
	inline float get_delay_11() const { return ___delay_11; }
	inline float* get_address_of_delay_11() { return &___delay_11; }
	inline void set_delay_11(float value)
	{
		___delay_11 = value;
	}

	inline static int32_t get_offset_of_loopType_12() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___loopType_12)); }
	inline int32_t get_loopType_12() const { return ___loopType_12; }
	inline int32_t* get_address_of_loopType_12() { return &___loopType_12; }
	inline void set_loopType_12(int32_t value)
	{
		___loopType_12 = value;
	}

	inline static int32_t get_offset_of_isRunning_13() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___isRunning_13)); }
	inline bool get_isRunning_13() const { return ___isRunning_13; }
	inline bool* get_address_of_isRunning_13() { return &___isRunning_13; }
	inline void set_isRunning_13(bool value)
	{
		___isRunning_13 = value;
	}

	inline static int32_t get_offset_of_isPaused_14() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___isPaused_14)); }
	inline bool get_isPaused_14() const { return ___isPaused_14; }
	inline bool* get_address_of_isPaused_14() { return &___isPaused_14; }
	inline void set_isPaused_14(bool value)
	{
		___isPaused_14 = value;
	}

	inline static int32_t get_offset_of__name_15() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ____name_15)); }
	inline String_t* get__name_15() const { return ____name_15; }
	inline String_t** get_address_of__name_15() { return &____name_15; }
	inline void set__name_15(String_t* value)
	{
		____name_15 = value;
		Il2CppCodeGenWriteBarrier((&____name_15), value);
	}

	inline static int32_t get_offset_of_runningTime_16() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___runningTime_16)); }
	inline float get_runningTime_16() const { return ___runningTime_16; }
	inline float* get_address_of_runningTime_16() { return &___runningTime_16; }
	inline void set_runningTime_16(float value)
	{
		___runningTime_16 = value;
	}

	inline static int32_t get_offset_of_percentage_17() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___percentage_17)); }
	inline float get_percentage_17() const { return ___percentage_17; }
	inline float* get_address_of_percentage_17() { return &___percentage_17; }
	inline void set_percentage_17(float value)
	{
		___percentage_17 = value;
	}

	inline static int32_t get_offset_of_delayStarted_18() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___delayStarted_18)); }
	inline float get_delayStarted_18() const { return ___delayStarted_18; }
	inline float* get_address_of_delayStarted_18() { return &___delayStarted_18; }
	inline void set_delayStarted_18(float value)
	{
		___delayStarted_18 = value;
	}

	inline static int32_t get_offset_of_isLocal_19() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___isLocal_19)); }
	inline bool get_isLocal_19() const { return ___isLocal_19; }
	inline bool* get_address_of_isLocal_19() { return &___isLocal_19; }
	inline void set_isLocal_19(bool value)
	{
		___isLocal_19 = value;
	}

	inline static int32_t get_offset_of_loop_20() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___loop_20)); }
	inline bool get_loop_20() const { return ___loop_20; }
	inline bool* get_address_of_loop_20() { return &___loop_20; }
	inline void set_loop_20(bool value)
	{
		___loop_20 = value;
	}

	inline static int32_t get_offset_of_reverse_21() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___reverse_21)); }
	inline bool get_reverse_21() const { return ___reverse_21; }
	inline bool* get_address_of_reverse_21() { return &___reverse_21; }
	inline void set_reverse_21(bool value)
	{
		___reverse_21 = value;
	}

	inline static int32_t get_offset_of_wasPaused_22() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___wasPaused_22)); }
	inline bool get_wasPaused_22() const { return ___wasPaused_22; }
	inline bool* get_address_of_wasPaused_22() { return &___wasPaused_22; }
	inline void set_wasPaused_22(bool value)
	{
		___wasPaused_22 = value;
	}

	inline static int32_t get_offset_of_physics_23() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___physics_23)); }
	inline bool get_physics_23() const { return ___physics_23; }
	inline bool* get_address_of_physics_23() { return &___physics_23; }
	inline void set_physics_23(bool value)
	{
		___physics_23 = value;
	}

	inline static int32_t get_offset_of_tweenArguments_24() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___tweenArguments_24)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_tweenArguments_24() const { return ___tweenArguments_24; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_tweenArguments_24() { return &___tweenArguments_24; }
	inline void set_tweenArguments_24(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___tweenArguments_24 = value;
		Il2CppCodeGenWriteBarrier((&___tweenArguments_24), value);
	}

	inline static int32_t get_offset_of_space_25() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___space_25)); }
	inline int32_t get_space_25() const { return ___space_25; }
	inline int32_t* get_address_of_space_25() { return &___space_25; }
	inline void set_space_25(int32_t value)
	{
		___space_25 = value;
	}

	inline static int32_t get_offset_of_ease_26() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___ease_26)); }
	inline EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * get_ease_26() const { return ___ease_26; }
	inline EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 ** get_address_of_ease_26() { return &___ease_26; }
	inline void set_ease_26(EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * value)
	{
		___ease_26 = value;
		Il2CppCodeGenWriteBarrier((&___ease_26), value);
	}

	inline static int32_t get_offset_of_apply_27() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___apply_27)); }
	inline ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * get_apply_27() const { return ___apply_27; }
	inline ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 ** get_address_of_apply_27() { return &___apply_27; }
	inline void set_apply_27(ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * value)
	{
		___apply_27 = value;
		Il2CppCodeGenWriteBarrier((&___apply_27), value);
	}

	inline static int32_t get_offset_of_audioSource_28() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___audioSource_28)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_28() const { return ___audioSource_28; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_28() { return &___audioSource_28; }
	inline void set_audioSource_28(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_28 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_28), value);
	}

	inline static int32_t get_offset_of_vector3s_29() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___vector3s_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vector3s_29() const { return ___vector3s_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vector3s_29() { return &___vector3s_29; }
	inline void set_vector3s_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vector3s_29 = value;
		Il2CppCodeGenWriteBarrier((&___vector3s_29), value);
	}

	inline static int32_t get_offset_of_vector2s_30() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___vector2s_30)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_vector2s_30() const { return ___vector2s_30; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_vector2s_30() { return &___vector2s_30; }
	inline void set_vector2s_30(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___vector2s_30 = value;
		Il2CppCodeGenWriteBarrier((&___vector2s_30), value);
	}

	inline static int32_t get_offset_of_colors_31() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___colors_31)); }
	inline ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* get_colors_31() const { return ___colors_31; }
	inline ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039** get_address_of_colors_31() { return &___colors_31; }
	inline void set_colors_31(ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* value)
	{
		___colors_31 = value;
		Il2CppCodeGenWriteBarrier((&___colors_31), value);
	}

	inline static int32_t get_offset_of_floats_32() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___floats_32)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_floats_32() const { return ___floats_32; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_floats_32() { return &___floats_32; }
	inline void set_floats_32(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___floats_32 = value;
		Il2CppCodeGenWriteBarrier((&___floats_32), value);
	}

	inline static int32_t get_offset_of_rects_33() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___rects_33)); }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* get_rects_33() const { return ___rects_33; }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B** get_address_of_rects_33() { return &___rects_33; }
	inline void set_rects_33(RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* value)
	{
		___rects_33 = value;
		Il2CppCodeGenWriteBarrier((&___rects_33), value);
	}

	inline static int32_t get_offset_of_path_34() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___path_34)); }
	inline CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF * get_path_34() const { return ___path_34; }
	inline CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF ** get_address_of_path_34() { return &___path_34; }
	inline void set_path_34(CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF * value)
	{
		___path_34 = value;
		Il2CppCodeGenWriteBarrier((&___path_34), value);
	}

	inline static int32_t get_offset_of_preUpdate_35() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___preUpdate_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_preUpdate_35() const { return ___preUpdate_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_preUpdate_35() { return &___preUpdate_35; }
	inline void set_preUpdate_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___preUpdate_35 = value;
	}

	inline static int32_t get_offset_of_postUpdate_36() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___postUpdate_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_postUpdate_36() const { return ___postUpdate_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_postUpdate_36() { return &___postUpdate_36; }
	inline void set_postUpdate_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___postUpdate_36 = value;
	}

	inline static int32_t get_offset_of_namedcolorvalue_37() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___namedcolorvalue_37)); }
	inline int32_t get_namedcolorvalue_37() const { return ___namedcolorvalue_37; }
	inline int32_t* get_address_of_namedcolorvalue_37() { return &___namedcolorvalue_37; }
	inline void set_namedcolorvalue_37(int32_t value)
	{
		___namedcolorvalue_37 = value;
	}

	inline static int32_t get_offset_of_lastRealTime_38() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___lastRealTime_38)); }
	inline float get_lastRealTime_38() const { return ___lastRealTime_38; }
	inline float* get_address_of_lastRealTime_38() { return &___lastRealTime_38; }
	inline void set_lastRealTime_38(float value)
	{
		___lastRealTime_38 = value;
	}

	inline static int32_t get_offset_of_useRealTime_39() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___useRealTime_39)); }
	inline bool get_useRealTime_39() const { return ___useRealTime_39; }
	inline bool* get_address_of_useRealTime_39() { return &___useRealTime_39; }
	inline void set_useRealTime_39(bool value)
	{
		___useRealTime_39 = value;
	}

	inline static int32_t get_offset_of_thisTransform_40() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185, ___thisTransform_40)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_thisTransform_40() const { return ___thisTransform_40; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_thisTransform_40() { return &___thisTransform_40; }
	inline void set_thisTransform_40(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___thisTransform_40 = value;
		Il2CppCodeGenWriteBarrier((&___thisTransform_40), value);
	}
};

struct iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t8C9961F7F97EEE458417814CE8B514983FCAA4DC * ___tweens_4;
	// UnityEngine.GameObject iTween::cameraFade
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cameraFade_5;

public:
	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185_StaticFields, ___tweens_4)); }
	inline List_1_t8C9961F7F97EEE458417814CE8B514983FCAA4DC * get_tweens_4() const { return ___tweens_4; }
	inline List_1_t8C9961F7F97EEE458417814CE8B514983FCAA4DC ** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(List_1_t8C9961F7F97EEE458417814CE8B514983FCAA4DC * value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier((&___tweens_4), value);
	}

	inline static int32_t get_offset_of_cameraFade_5() { return static_cast<int32_t>(offsetof(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185_StaticFields, ___cameraFade_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cameraFade_5() const { return ___cameraFade_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cameraFade_5() { return &___cameraFade_5; }
	inline void set_cameraFade_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cameraFade_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraFade_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITWEEN_TDA707E2527E6175B97BA51001FD2B4295FC19185_H
#ifndef ITWEENPATH_T4B19D7BDE3145FCA907722FF54DE5BFA60545C92_H
#define ITWEENPATH_T4B19D7BDE3145FCA907722FF54DE5BFA60545C92_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTweenPath
struct  iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String iTweenPath::pathName
	String_t* ___pathName_4;
	// UnityEngine.Color iTweenPath::pathColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___pathColor_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> iTweenPath::nodes
	List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * ___nodes_6;
	// System.Int32 iTweenPath::nodeCount
	int32_t ___nodeCount_7;
	// System.Boolean iTweenPath::initialized
	bool ___initialized_9;
	// System.String iTweenPath::initialName
	String_t* ___initialName_10;
	// System.Boolean iTweenPath::pathVisible
	bool ___pathVisible_11;

public:
	inline static int32_t get_offset_of_pathName_4() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___pathName_4)); }
	inline String_t* get_pathName_4() const { return ___pathName_4; }
	inline String_t** get_address_of_pathName_4() { return &___pathName_4; }
	inline void set_pathName_4(String_t* value)
	{
		___pathName_4 = value;
		Il2CppCodeGenWriteBarrier((&___pathName_4), value);
	}

	inline static int32_t get_offset_of_pathColor_5() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___pathColor_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_pathColor_5() const { return ___pathColor_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_pathColor_5() { return &___pathColor_5; }
	inline void set_pathColor_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___pathColor_5 = value;
	}

	inline static int32_t get_offset_of_nodes_6() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___nodes_6)); }
	inline List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * get_nodes_6() const { return ___nodes_6; }
	inline List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 ** get_address_of_nodes_6() { return &___nodes_6; }
	inline void set_nodes_6(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * value)
	{
		___nodes_6 = value;
		Il2CppCodeGenWriteBarrier((&___nodes_6), value);
	}

	inline static int32_t get_offset_of_nodeCount_7() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___nodeCount_7)); }
	inline int32_t get_nodeCount_7() const { return ___nodeCount_7; }
	inline int32_t* get_address_of_nodeCount_7() { return &___nodeCount_7; }
	inline void set_nodeCount_7(int32_t value)
	{
		___nodeCount_7 = value;
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}

	inline static int32_t get_offset_of_initialName_10() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___initialName_10)); }
	inline String_t* get_initialName_10() const { return ___initialName_10; }
	inline String_t** get_address_of_initialName_10() { return &___initialName_10; }
	inline void set_initialName_10(String_t* value)
	{
		___initialName_10 = value;
		Il2CppCodeGenWriteBarrier((&___initialName_10), value);
	}

	inline static int32_t get_offset_of_pathVisible_11() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92, ___pathVisible_11)); }
	inline bool get_pathVisible_11() const { return ___pathVisible_11; }
	inline bool* get_address_of_pathVisible_11() { return &___pathVisible_11; }
	inline void set_pathVisible_11(bool value)
	{
		___pathVisible_11 = value;
	}
};

struct iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,iTweenPath> iTweenPath::paths
	Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * ___paths_8;

public:
	inline static int32_t get_offset_of_paths_8() { return static_cast<int32_t>(offsetof(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields, ___paths_8)); }
	inline Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * get_paths_8() const { return ___paths_8; }
	inline Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 ** get_address_of_paths_8() { return &___paths_8; }
	inline void set_paths_8(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * value)
	{
		___paths_8 = value;
		Il2CppCodeGenWriteBarrier((&___paths_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITWEENPATH_T4B19D7BDE3145FCA907722FF54DE5BFA60545C92_H
#ifndef ITWEENPATHEX_T5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D_H
#define ITWEENPATHEX_T5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTweenPathEX
struct  iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D  : public iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92
{
public:
	// System.Single iTweenPathEX::totalePlayTime
	float ___totalePlayTime_12;
	// System.Boolean iTweenPathEX::adjustViewDirAuto
	bool ___adjustViewDirAuto_13;

public:
	inline static int32_t get_offset_of_totalePlayTime_12() { return static_cast<int32_t>(offsetof(iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D, ___totalePlayTime_12)); }
	inline float get_totalePlayTime_12() const { return ___totalePlayTime_12; }
	inline float* get_address_of_totalePlayTime_12() { return &___totalePlayTime_12; }
	inline void set_totalePlayTime_12(float value)
	{
		___totalePlayTime_12 = value;
	}

	inline static int32_t get_offset_of_adjustViewDirAuto_13() { return static_cast<int32_t>(offsetof(iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D, ___adjustViewDirAuto_13)); }
	inline bool get_adjustViewDirAuto_13() const { return ___adjustViewDirAuto_13; }
	inline bool* get_address_of_adjustViewDirAuto_13() { return &___adjustViewDirAuto_13; }
	inline void set_adjustViewDirAuto_13(bool value)
	{
		___adjustViewDirAuto_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITWEENPATHEX_T5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D_H
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" IL2CPP_METHOD_ATTR void List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void iTween::TweenStart()
extern "C" IL2CPP_METHOD_ATTR void iTween_TweenStart_mE7D21DD11F796123CD625DABCD8665349F9AE320 (iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,iTweenPath>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89 (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.String System.String::ToLower()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,iTweenPath>::Add(!0,!1)
inline void Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * __this, String_t* p0, iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *, String_t*, iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,iTweenPath>::Remove(!0)
inline bool Dictionary_2_Remove_m264AC0515C7B663191AD2BC7320AB02BF31BA428 (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, const RuntimeMethod*))List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229 (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, const RuntimeMethod*))List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_gshared)(__this, method);
}
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void iTween_DrawPath_m8C55FBC2A6ADB1559C96062AA9D95C0A2C9A9046 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___path0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,iTweenPath>::get_Item(!0)
inline iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629 (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * (*) (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
inline List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601 (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
inline void List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8 (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, const RuntimeMethod*))List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, const RuntimeMethod*))List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21 (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared)(__this, p0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,iTweenPath>::.ctor()
inline void Dictionary_2__ctor_mB9CFE4CE6243725ECC766A060A7A82FB6BCB1399 (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void iTweenPathEX::AddPathName()
extern "C" IL2CPP_METHOD_ATTR void iTweenPathEX_AddPathName_m7F9E1ECF57053F0CF266D1CC2A95787B4CF2EF82 (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, const RuntimeMethod* method);
// System.Void iTweenPath::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath__ctor_m55B208E1EB73F6516511378B033E72F755BBD488 (iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween_<Start>d__240::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__240__ctor_m012F90B06A587BC340C16FC173B2B45CFBCE74BC (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween_<Start>d__240::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__240_System_IDisposable_Dispose_mCBA15D52A1B8F4F54E0C735FF1D450882C8EC4DF (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween_<Start>d__240::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ed__240_MoveNext_m9542FCE3706F6DE8D21BFB0C43AB2514A1BF48A4 (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__240_MoveNext_m9542FCE3706F6DE8D21BFB0C43AB2514A1BF48A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_11();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_6 = V_1;
		NullCheck(L_6);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_7 = MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(L_6, _stringLiteral31F1C6560FB961284D6589281FA4661A1C74D1B6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_8 = V_1;
		NullCheck(L_8);
		iTween_TweenStart_mE7D21DD11F796123CD625DABCD8665349F9AE320(L_8, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object iTween_<Start>d__240::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__240_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB6D647753B875745A020F867EEFB728B8F02773A (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween_<Start>d__240::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__240_System_Collections_IEnumerator_Reset_mE72EF7443CB4786A01B64D741B77B9E64D1D61BD (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__240_System_Collections_IEnumerator_Reset_mE72EF7443CB4786A01B64D741B77B9E64D1D61BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__240_System_Collections_IEnumerator_Reset_mE72EF7443CB4786A01B64D741B77B9E64D1D61BD_RuntimeMethod_var);
	}
}
// System.Object iTween_<Start>d__240::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__240_System_Collections_IEnumerator_get_Current_m474555D6B8C28A0858283FA89892DDCC923AF485 (U3CStartU3Ed__240_tC1998168B98DE80D974096AFD750F674FC35C50D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void iTween_<TweenDelay>d__149::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__149__ctor_m65BBDFB34AECEF613AB8B70050DE42C18BFF1A4C (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween_<TweenDelay>d__149::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__149_System_IDisposable_Dispose_m48D3DBC345FE3BE579B694EF48F52D72FAA84F42 (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween_<TweenDelay>d__149::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ed__149_MoveNext_m4E9A8DAF87CEB56DA1612CEB347BA207D8BD0D7E (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenDelayU3Ed__149_MoveNext_m4E9A8DAF87CEB56DA1612CEB347BA207D8BD0D7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_4 = V_1;
		float L_5 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_delayStarted_18(L_5);
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_delay_11();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->get_wasPaused_22();
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_wasPaused_22((bool)0);
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mE7D21DD11F796123CD625DABCD8665349F9AE320(L_12, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return (bool)0;
	}
}
// System.Object iTween_<TweenDelay>d__149::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ed__149_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6D6A2E21A15A464AF45F9A2FA9A2650D2ED723D6 (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween_<TweenDelay>d__149::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_Reset_m2404E3CA41A57D10CB837F90780C7E01D908DDB2 (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_Reset_m2404E3CA41A57D10CB837F90780C7E01D908DDB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_Reset_m2404E3CA41A57D10CB837F90780C7E01D908DDB2_RuntimeMethod_var);
	}
}
// System.Object iTween_<TweenDelay>d__149::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ed__149_System_Collections_IEnumerator_get_Current_m18B45169CE86E93A200A16CDE54B3A18799056F1 (U3CTweenDelayU3Ed__149_t08006FEBBB8FEC5CA6301DE1CDEE6FD94DB594E4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void iTween_<TweenRestart>d__151::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__151__ctor_mFD2DCFE0E1F81BF725F7463816A0F0B55B3C84E2 (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void iTween_<TweenRestart>d__151::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__151_System_IDisposable_Dispose_m73BECF6828220C41435D7904FA9D48A10109FE76 (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean iTween_<TweenRestart>d__151::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ed__151_MoveNext_m726A6A0CD0A567F193C26238AA86E0B91CAD15F4 (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenRestartU3Ed__151_MoveNext_m726A6A0CD0A567F193C26238AA86E0B91CAD15F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_11();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_6 = V_1;
		float L_7 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_delayStarted_18(L_7);
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_delay_11();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_10 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0057:
	{
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_loop_20((bool)1);
		iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185 * L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mE7D21DD11F796123CD625DABCD8665349F9AE320(L_12, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object iTween_<TweenRestart>d__151::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ed__151_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0E4D2D5BBDAE11C1C429F051C142394D9950D135 (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void iTween_<TweenRestart>d__151::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_Reset_m0AEE53712755C276B4BF085CF73DF966D6805117 (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_Reset_m0AEE53712755C276B4BF085CF73DF966D6805117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_Reset_m0AEE53712755C276B4BF085CF73DF966D6805117_RuntimeMethod_var);
	}
}
// System.Object iTween_<TweenRestart>d__151::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ed__151_System_Collections_IEnumerator_get_Current_mDD19CD909746C04EB89F29347D5F643C3FA39B3D (U3CTweenRestartU3Ed__151_tDABA2A1FD37E5E188821B18CF1B27F5F8988B435 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
extern "C"  void DelegatePInvokeWrapper_ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 (ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void iTween_ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ApplyTween__ctor_m95991A365E379D2D7003D798D0CD7D5DD2E67D32 (ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void iTween_ApplyTween::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ApplyTween_Invoke_m50224D1520FB5C891A1184BF35B84236BF3408D9 (ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * __this, const RuntimeMethod* method)
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
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult iTween_ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_m0CAB00B3B4588C8F5174A4D95A38370A2046D3C1 (ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void iTween_ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_mA987C01C143C49E54EC6D0B01269E98AE222FD8E (ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void iTween_CRSpline::.ctor(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void CRSpline__ctor_m9FC31924B7B1F8F00C0BCAB967743C89E2878B93 (CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRSpline__ctor_m9FC31924B7B1F8F00C0BCAB967743C89E2878B93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___pts0;
		NullCheck(L_0);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		__this->set_pts_0(L_1);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ___pts0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_pts_0();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ___pts0;
		NullCheck(L_4);
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 iTween_CRSpline::Interp(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CRSpline_Interp_m4CA75A75B5AA2951E64FBD808A2EE7D60725C6F7 (CRSpline_t0825BAFFC75F5391A3041A24B8FE1F843086F2CF * __this, float ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRSpline_Interp_m4CA75A75B5AA2951E64FBD808A2EE7D60725C6F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = __this->get_pts_0();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)3));
		float L_1 = ___t0;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C(((float)il2cpp_codegen_multiply((float)L_1, (float)(((float)((float)L_2))))), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ___t0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(((float)((float)L_7))))), (float)(((float)((float)L_8)))));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = __this->get_pts_0();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = __this->get_pts_0();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = __this->get_pts_0();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)2));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = __this->get_pts_0();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)3));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_29, L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_32, L_33, /*hidden argument*/NULL);
		float L_35 = V_2;
		float L_36 = V_2;
		float L_37 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_34, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((2.0f), L_39, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((5.0f), L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_40, L_42, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((4.0f), L_44, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_43, L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_46, L_47, /*hidden argument*/NULL);
		float L_49 = V_2;
		float L_50 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_48, ((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_54, L_55, /*hidden argument*/NULL);
		float L_57 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_56, L_57, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_52, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((2.0f), L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_59, L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((0.5f), L_62, /*hidden argument*/NULL);
		return L_63;
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
// System.Void iTween_Defaults::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Defaults__cctor_m295C4B16354C0493605BBE885EB21B0DF8E745DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Defaults__cctor_m295C4B16354C0493605BBE885EB21B0DF8E745DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_time_0((1.0f));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_delay_1((0.0f));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_namedColorValue_2(0);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_loopType_3(0);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_easeType_4(((int32_t)16));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_lookSpeed_5((3.0f));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_isLocal_6((bool)0);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_space_7(1);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_orientToPath_8((bool)0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_color_9(L_0);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_updateTimePercentage_10((0.05f));
		float L_1 = ((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->get_updateTimePercentage_10();
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_updateTime_11(((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_cameraFadeDepth_12(((int32_t)999999));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_lookAhead_13((0.05f));
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_useRealTime_14((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		((Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tFEE37DD0F2726DB5A968F2776D2E4D288C7172C8_il2cpp_TypeInfo_var))->set_up_15(L_2);
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
extern "C"  float DelegatePInvokeWrapper_EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 (EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___start0, ___end1, ___Value2);

	return returnValue;
}
// System.Void iTween_EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasingFunction__ctor_m743BF613E5E05D628FAB74BA3B640E25CDF9A9F9 (EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single iTween_EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float EasingFunction_Invoke_mE3BCADF47E1ECA5B82D0A029B5D1C427208F5EEB (EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	float result = 0.0f;
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
					typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
				}
				else
				{
					// closed
					typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
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
							typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
							else
								result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___Value2);
							else
								result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___Value2);
						}
					}
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
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
				typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
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
						typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
						else
							result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___Value2);
						else
							result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___Value2);
					}
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult iTween_EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m00E3593801C799AF30053922A6B8491B480A3C6D (EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * __this, float ___start0, float ___end1, float ___Value2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasingFunction_BeginInvoke_m00E3593801C799AF30053922A6B8491B480A3C6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___start0);
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___end1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___Value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single iTween_EasingFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_mB14F2C49056C31CB9735907B6734C4E3B8A1CACB (EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTweenPath::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath_OnEnable_m9EC24CAA64FCD45E261C20A12B996D1387516570 (iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath_OnEnable_m9EC24CAA64FCD45E261C20A12B996D1387516570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_0 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_1 = __this->get_pathName_4();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_3 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_4 = __this->get_pathName_4();
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE(L_3, L_5, __this, /*hidden argument*/Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE_RuntimeMethod_var);
	}

IL_0028:
	{
		return;
	}
}
// System.Void iTweenPath::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath_OnDisable_mF96CE29633A59A991B72E13D2DE15D20A52501DE (iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath_OnDisable_mF96CE29633A59A991B72E13D2DE15D20A52501DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_0 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_1 = __this->get_pathName_4();
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Remove_m264AC0515C7B663191AD2BC7320AB02BF31BA428(L_0, L_2, /*hidden argument*/Dictionary_2_Remove_m264AC0515C7B663191AD2BC7320AB02BF31BA428_RuntimeMethod_var);
		return;
	}
}
// System.Void iTweenPath::OnDrawGizmosSelected()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath_OnDrawGizmosSelected_m24CB24B965D0A934C43CFA17DD4728BE29CEC0DB (iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath_OnDrawGizmosSelected_m24CB24B965D0A934C43CFA17DD4728BE29CEC0DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_pathVisible_11();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_1 = __this->get_nodes_6();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC(L_1, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_3 = __this->get_nodes_6();
		NullCheck(L_3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229(L_3, /*hidden argument*/List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_RuntimeMethod_var);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = __this->get_pathColor_5();
		IL2CPP_RUNTIME_CLASS_INIT(iTween_tDA707E2527E6175B97BA51001FD2B4295FC19185_il2cpp_TypeInfo_var);
		iTween_DrawPath_m8C55FBC2A6ADB1559C96062AA9D95C0A2C9A9046(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// UnityEngine.Vector3[] iTweenPath::GetPath(System.String)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* iTweenPath_GetPath_mE3C12B9B30F760E337BFF317D5212FE3CAE550F8 (String_t* ___requestedName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath_GetPath_mE3C12B9B30F760E337BFF317D5212FE3CAE550F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___requestedName0;
		NullCheck(L_0);
		String_t* L_1 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_0, /*hidden argument*/NULL);
		___requestedName0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_2 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_3 = ___requestedName0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_5 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_6 = ___requestedName0;
		NullCheck(L_5);
		iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * L_7 = Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_8 = L_7->get_nodes_6();
		NullCheck(L_8);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229(L_8, /*hidden argument*/List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_RuntimeMethod_var);
		return L_9;
	}

IL_002b:
	{
		String_t* L_10 = ___requestedName0;
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral4B5B9210577C56BCBA682A29973DF957881FADF5, L_10, _stringLiteral478048BCDCCE4D20C70B4E48D2C1AF5B9749A2FD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_11, /*hidden argument*/NULL);
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}
}
// UnityEngine.Vector3[] iTweenPath::GetPathReversed(System.String)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* iTweenPath_GetPathReversed_mB89441443ACC9E74ED14F9B3D463CF4FB21EA300 (String_t* ___requestedName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath_GetPathReversed_mB89441443ACC9E74ED14F9B3D463CF4FB21EA300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___requestedName0;
		NullCheck(L_0);
		String_t* L_1 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_0, /*hidden argument*/NULL);
		___requestedName0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_2 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_3 = ___requestedName0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_5 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_6 = ___requestedName0;
		NullCheck(L_5);
		iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * L_7 = Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_8 = L_7->get_nodes_6();
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_9 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_10 = ___requestedName0;
		NullCheck(L_9);
		iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * L_11 = Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_mCC123035AB20B182B329874B163DB4D3A98BA629_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_12 = L_11->get_nodes_6();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC(L_12, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_14 = List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601(L_8, 0, L_13, /*hidden argument*/List_1_GetRange_m5DBB0A26533A52872917F75895BED9B23B4B0601_RuntimeMethod_var);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_15 = L_14;
		NullCheck(L_15);
		List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8(L_15, /*hidden argument*/List_1_Reverse_m170BE785B0E0B80B9414AA64A5F7D866189187E8_RuntimeMethod_var);
		NullCheck(L_15);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229(L_15, /*hidden argument*/List_1_ToArray_m9499CDCB3F589539CF24AD774093852534117229_RuntimeMethod_var);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = ___requestedName0;
		String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral4B5B9210577C56BCBA682A29973DF957881FADF5, L_17, _stringLiteral478048BCDCCE4D20C70B4E48D2C1AF5B9749A2FD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_18, /*hidden argument*/NULL);
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}
}
// System.Void iTweenPath::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath__ctor_m55B208E1EB73F6516511378B033E72F755BBD488 (iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath__ctor_m55B208E1EB73F6516511378B033E72F755BBD488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_pathName_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		__this->set_pathColor_5(L_0);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_1 = (List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 *)il2cpp_codegen_object_new(List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485_il2cpp_TypeInfo_var);
		List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A(L_1, /*hidden argument*/List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21(L_2, L_3, /*hidden argument*/List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var);
		List_1_t9EE625A1B4AEF2D72DE1813A59F97164EE142485 * L_4 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21(L_4, L_5, /*hidden argument*/List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var);
		__this->set_nodes_6(L_4);
		__this->set_initialName_10(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_pathVisible_11((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTweenPath::.cctor()
extern "C" IL2CPP_METHOD_ATTR void iTweenPath__cctor_m0CD3D392D8D400C777EF2E7FFC4241AB49D0BD56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPath__cctor_m0CD3D392D8D400C777EF2E7FFC4241AB49D0BD56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_0 = (Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 *)il2cpp_codegen_object_new(Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB9CFE4CE6243725ECC766A060A7A82FB6BCB1399(L_0, /*hidden argument*/Dictionary_2__ctor_mB9CFE4CE6243725ECC766A060A7A82FB6BCB1399_RuntimeMethod_var);
		((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->set_paths_8(L_0);
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
// System.String iTweenPathEX::get_PathName()
extern "C" IL2CPP_METHOD_ATTR String_t* iTweenPathEX_get_PathName_m65446DA026C2182F23A0D0C055065BB04D8D9E25 (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 *)__this)->get_pathName_4();
		return L_0;
	}
}
// System.Void iTweenPathEX::set_PathName(System.String)
extern "C" IL2CPP_METHOD_ATTR void iTweenPathEX_set_PathName_mF378ED828AE3BC789C88A2A59149725C2C079DB4 (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 *)__this)->set_pathName_4(L_0);
		iTweenPathEX_AddPathName_m7F9E1ECF57053F0CF266D1CC2A95787B4CF2EF82(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iTweenPathEX::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void iTweenPathEX_OnEnable_m9E8084B3C8DAB1A115164EE99229A178C2A5381C (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void iTweenPathEX::AddPathName()
extern "C" IL2CPP_METHOD_ATTR void iTweenPathEX_AddPathName_m7F9E1ECF57053F0CF266D1CC2A95787B4CF2EF82 (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPathEX_AddPathName_m7F9E1ECF57053F0CF266D1CC2A95787B4CF2EF82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_0 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_1 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 *)__this)->get_pathName_4();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mB4FFBD5749EF154300397A312156DC4B8DA2CD89_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		Dictionary_2_t13CF5136792CE7B1E1AC8CCD3F6AC79CAA337A16 * L_3 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_StaticFields*)il2cpp_codegen_static_fields_for(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var))->get_paths_8();
		String_t* L_4 = ((iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92 *)__this)->get_pathName_4();
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE(L_3, L_5, __this, /*hidden argument*/Dictionary_2_Add_mED9B124E43C3AC40029093BFD0EC33E80734ABEE_RuntimeMethod_var);
	}

IL_0028:
	{
		return;
	}
}
// System.Void iTweenPathEX::.ctor()
extern "C" IL2CPP_METHOD_ATTR void iTweenPathEX__ctor_m5F5858ACEE9A47B31538BC2299064AA1A215CC9F (iTweenPathEX_t5DCC220ED99C02E66D5B13B4A13F43F7967C3E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iTweenPathEX__ctor_m5F5858ACEE9A47B31538BC2299064AA1A215CC9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_totalePlayTime_12((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(iTweenPath_t4B19D7BDE3145FCA907722FF54DE5BFA60545C92_il2cpp_TypeInfo_var);
		iTweenPath__ctor_m55B208E1EB73F6516511378B033E72F755BBD488(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
