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


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>,System.Int32>
struct Func_2_t848F3E985184C424F49CF3DF654C7C90ED8BEF99;
// System.Func`2<<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>,XLua.TemplateEngine.Chunk>
struct Func_2_t5BE192E0FFB0C400FD99B3C4405E5F83DA00F286;
// System.Func`2<System.Text.RegularExpressions.Capture,<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>>
struct Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// XLua.LuaDLL.lua_CSFunction
struct lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef UICAMERAWRAP_T9650209D6916170EB96B976169EF8A00185D1548_H
#define UICAMERAWRAP_T9650209D6916170EB96B976169EF8A00185D1548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UICameraWrap
struct  UICameraWrap_t9650209D6916170EB96B976169EF8A00185D1548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICAMERAWRAP_T9650209D6916170EB96B976169EF8A00185D1548_H
#ifndef UIEVENTLISTENERWRAP_TB0393B72F83B3A885394902E18ABD9B82C423BAB_H
#define UIEVENTLISTENERWRAP_TB0393B72F83B3A885394902E18ABD9B82C423BAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIEventListenerWrap
struct  UIEventListenerWrap_tB0393B72F83B3A885394902E18ABD9B82C423BAB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIEVENTLISTENERWRAP_TB0393B72F83B3A885394902E18ABD9B82C423BAB_H
#ifndef UIGRIDWRAP_TB990A7F657541BD2E79D22AA6415A6BE5F06E5E9_H
#define UIGRIDWRAP_TB990A7F657541BD2E79D22AA6415A6BE5F06E5E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIGridWrap
struct  UIGridWrap_tB990A7F657541BD2E79D22AA6415A6BE5F06E5E9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIGRIDWRAP_TB990A7F657541BD2E79D22AA6415A6BE5F06E5E9_H
#ifndef UIINPUTWRAP_T8F93E853692F9E6E387FE41689366EB292FDFE54_H
#define UIINPUTWRAP_T8F93E853692F9E6E387FE41689366EB292FDFE54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIInputWrap
struct  UIInputWrap_t8F93E853692F9E6E387FE41689366EB292FDFE54  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIINPUTWRAP_T8F93E853692F9E6E387FE41689366EB292FDFE54_H
#ifndef UILABELWRAP_TE379CB18CE5FC43E09801C0E96115DAE081F22A4_H
#define UILABELWRAP_TE379CB18CE5FC43E09801C0E96115DAE081F22A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UILabelWrap
struct  UILabelWrap_tE379CB18CE5FC43E09801C0E96115DAE081F22A4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILABELWRAP_TE379CB18CE5FC43E09801C0E96115DAE081F22A4_H
#ifndef UIPANELWRAP_T71C152FEC8349FD72EDB8182951B2A6F9677EBF1_H
#define UIPANELWRAP_T71C152FEC8349FD72EDB8182951B2A6F9677EBF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIPanelWrap
struct  UIPanelWrap_t71C152FEC8349FD72EDB8182951B2A6F9677EBF1  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPANELWRAP_T71C152FEC8349FD72EDB8182951B2A6F9677EBF1_H
#ifndef UIPROGRESSBARWRAP_T43B07B1823EDA367DB2A0066D18E503CBD056217_H
#define UIPROGRESSBARWRAP_T43B07B1823EDA367DB2A0066D18E503CBD056217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIProgressBarWrap
struct  UIProgressBarWrap_t43B07B1823EDA367DB2A0066D18E503CBD056217  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPROGRESSBARWRAP_T43B07B1823EDA367DB2A0066D18E503CBD056217_H
#ifndef UIRECTANCHORPOINTWRAP_T2D3DC0EB6A133936E5A30F2F9F9E31ACF7F69AED_H
#define UIRECTANCHORPOINTWRAP_T2D3DC0EB6A133936E5A30F2F9F9E31ACF7F69AED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIRectAnchorPointWrap
struct  UIRectAnchorPointWrap_t2D3DC0EB6A133936E5A30F2F9F9E31ACF7F69AED  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIRECTANCHORPOINTWRAP_T2D3DC0EB6A133936E5A30F2F9F9E31ACF7F69AED_H
#ifndef UIRECTWRAP_T6FB447ADB841352DC66E3E4179FEBF79395F288E_H
#define UIRECTWRAP_T6FB447ADB841352DC66E3E4179FEBF79395F288E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIRectWrap
struct  UIRectWrap_t6FB447ADB841352DC66E3E4179FEBF79395F288E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIRECTWRAP_T6FB447ADB841352DC66E3E4179FEBF79395F288E_H
#ifndef UIROOTWRAP_T4F9822E751564FBA124F77FC551025277970E2A5_H
#define UIROOTWRAP_T4F9822E751564FBA124F77FC551025277970E2A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIRootWrap
struct  UIRootWrap_t4F9822E751564FBA124F77FC551025277970E2A5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIROOTWRAP_T4F9822E751564FBA124F77FC551025277970E2A5_H
#ifndef UISCROLLVIEWWRAP_TF6157CBF43DC57C3EC30DEB3C98225EE1888F165_H
#define UISCROLLVIEWWRAP_TF6157CBF43DC57C3EC30DEB3C98225EE1888F165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIScrollViewWrap
struct  UIScrollViewWrap_tF6157CBF43DC57C3EC30DEB3C98225EE1888F165  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISCROLLVIEWWRAP_TF6157CBF43DC57C3EC30DEB3C98225EE1888F165_H
#ifndef UISHANDOWPLANEWRAP_TF08FBCEE1D08D267B18096A5E9AFF526419DAEBD_H
#define UISHANDOWPLANEWRAP_TF08FBCEE1D08D267B18096A5E9AFF526419DAEBD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIShandowPlaneWrap
struct  UIShandowPlaneWrap_tF08FBCEE1D08D267B18096A5E9AFF526419DAEBD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISHANDOWPLANEWRAP_TF08FBCEE1D08D267B18096A5E9AFF526419DAEBD_H
#ifndef UISLIDERWRAP_TD49A0FB215700159BA7A570919AA1A196BDCE00A_H
#define UISLIDERWRAP_TD49A0FB215700159BA7A570919AA1A196BDCE00A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISliderWrap
struct  UISliderWrap_tD49A0FB215700159BA7A570919AA1A196BDCE00A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISLIDERWRAP_TD49A0FB215700159BA7A570919AA1A196BDCE00A_H
#ifndef UISPRITEANIMATIONWRAP_T4364AD9FA038412C24D2F8449CDE22322EF11560_H
#define UISPRITEANIMATIONWRAP_T4364AD9FA038412C24D2F8449CDE22322EF11560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISpriteAnimationWrap
struct  UISpriteAnimationWrap_t4364AD9FA038412C24D2F8449CDE22322EF11560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISPRITEANIMATIONWRAP_T4364AD9FA038412C24D2F8449CDE22322EF11560_H
#ifndef UISPRITEDATAWRAP_TFA1AF9BA11535901C3C898DAA8B507B7691C72CD_H
#define UISPRITEDATAWRAP_TFA1AF9BA11535901C3C898DAA8B507B7691C72CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISpriteDataWrap
struct  UISpriteDataWrap_tFA1AF9BA11535901C3C898DAA8B507B7691C72CD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISPRITEDATAWRAP_TFA1AF9BA11535901C3C898DAA8B507B7691C72CD_H
#ifndef UISPRITEWRAP_T4171B930B9CC4C6F4532607BDABDF0CBEDF5294D_H
#define UISPRITEWRAP_T4171B930B9CC4C6F4532607BDABDF0CBEDF5294D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISpriteWrap
struct  UISpriteWrap_t4171B930B9CC4C6F4532607BDABDF0CBEDF5294D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISPRITEWRAP_T4171B930B9CC4C6F4532607BDABDF0CBEDF5294D_H
#ifndef UISUTURETEXTUREDATAWRAP_TD20F8F1E8B1BEDBCEDDFA18C926471E509070893_H
#define UISUTURETEXTUREDATAWRAP_TD20F8F1E8B1BEDBCEDDFA18C926471E509070893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISutureTextureDataWrap
struct  UISutureTextureDataWrap_tD20F8F1E8B1BEDBCEDDFA18C926471E509070893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISUTURETEXTUREDATAWRAP_TD20F8F1E8B1BEDBCEDDFA18C926471E509070893_H
#ifndef UISUTURETEXTUREWRAP_T9EEFA605E06A0B04F16A7B53162CB9FD9A0DD6E2_H
#define UISUTURETEXTUREWRAP_T9EEFA605E06A0B04F16A7B53162CB9FD9A0DD6E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UISutureTextureWrap
struct  UISutureTextureWrap_t9EEFA605E06A0B04F16A7B53162CB9FD9A0DD6E2  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISUTURETEXTUREWRAP_T9EEFA605E06A0B04F16A7B53162CB9FD9A0DD6E2_H
#ifndef UITABLEWRAP_T0ADF95AF71110D872CFD88B48BDA86959284A298_H
#define UITABLEWRAP_T0ADF95AF71110D872CFD88B48BDA86959284A298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UITableWrap
struct  UITableWrap_t0ADF95AF71110D872CFD88B48BDA86959284A298  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UITABLEWRAP_T0ADF95AF71110D872CFD88B48BDA86959284A298_H
#ifndef UITEXTUREWRAP_T6F56B246E1218BB00563E2D1B97C400BC71B5DA1_H
#define UITEXTUREWRAP_T6F56B246E1218BB00563E2D1B97C400BC71B5DA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UITextureWrap
struct  UITextureWrap_t6F56B246E1218BB00563E2D1B97C400BC71B5DA1  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UITEXTUREWRAP_T6F56B246E1218BB00563E2D1B97C400BC71B5DA1_H
#ifndef UITOGGLEWRAP_TC4D74128A62ADEB4E04C81FB82EDD3731DCB7AB2_H
#define UITOGGLEWRAP_TC4D74128A62ADEB4E04C81FB82EDD3731DCB7AB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIToggleWrap
struct  UIToggleWrap_tC4D74128A62ADEB4E04C81FB82EDD3731DCB7AB2  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UITOGGLEWRAP_TC4D74128A62ADEB4E04C81FB82EDD3731DCB7AB2_H
#ifndef UITWEENERWRAP_TD47B82C4E701DD249E5F0A4C287435A42DE96DE4_H
#define UITWEENERWRAP_TD47B82C4E701DD249E5F0A4C287435A42DE96DE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UITweenerWrap
struct  UITweenerWrap_tD47B82C4E701DD249E5F0A4C287435A42DE96DE4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UITWEENERWRAP_TD47B82C4E701DD249E5F0A4C287435A42DE96DE4_H
#ifndef UIWIDGETCONTAINERWRAP_TCC7C3AE9728E5CB245747BC6353D47FF5E0A5DFE_H
#define UIWIDGETCONTAINERWRAP_TCC7C3AE9728E5CB245747BC6353D47FF5E0A5DFE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIWidgetContainerWrap
struct  UIWidgetContainerWrap_tCC7C3AE9728E5CB245747BC6353D47FF5E0A5DFE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIWIDGETCONTAINERWRAP_TCC7C3AE9728E5CB245747BC6353D47FF5E0A5DFE_H
#ifndef UIWIDGETWRAP_T972BFACC568A4B847F790D6DB9C16BF17874C478_H
#define UIWIDGETWRAP_T972BFACC568A4B847F790D6DB9C16BF17874C478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UIWidgetWrap
struct  UIWidgetWrap_t972BFACC568A4B847F790D6DB9C16BF17874C478  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIWIDGETWRAP_T972BFACC568A4B847F790D6DB9C16BF17874C478_H
#ifndef UNITYENGINEANIMATIONCLIPWRAP_T073F4304A5D63D210481C2EEFFC15C62F6316691_H
#define UNITYENGINEANIMATIONCLIPWRAP_T073F4304A5D63D210481C2EEFFC15C62F6316691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineAnimationClipWrap
struct  UnityEngineAnimationClipWrap_t073F4304A5D63D210481C2EEFFC15C62F6316691  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEANIMATIONCLIPWRAP_T073F4304A5D63D210481C2EEFFC15C62F6316691_H
#ifndef UNITYENGINEANIMATIONCURVEWRAP_TC66ADE29301B2BA4273E3EB2C2B1BD52EB8B5C8B_H
#define UNITYENGINEANIMATIONCURVEWRAP_TC66ADE29301B2BA4273E3EB2C2B1BD52EB8B5C8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineAnimationCurveWrap
struct  UnityEngineAnimationCurveWrap_tC66ADE29301B2BA4273E3EB2C2B1BD52EB8B5C8B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEANIMATIONCURVEWRAP_TC66ADE29301B2BA4273E3EB2C2B1BD52EB8B5C8B_H
#ifndef UNITYENGINEANIMATORWRAP_T4E6C989BE4B7EDFC6F6215164F0CDB417969054C_H
#define UNITYENGINEANIMATORWRAP_T4E6C989BE4B7EDFC6F6215164F0CDB417969054C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineAnimatorWrap
struct  UnityEngineAnimatorWrap_t4E6C989BE4B7EDFC6F6215164F0CDB417969054C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEANIMATORWRAP_T4E6C989BE4B7EDFC6F6215164F0CDB417969054C_H
#ifndef UNITYENGINEASYNCOPERATIONWRAP_TCA2290627D56C0F8605F1A530A2C91280F3EC012_H
#define UNITYENGINEASYNCOPERATIONWRAP_TCA2290627D56C0F8605F1A530A2C91280F3EC012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineAsyncOperationWrap
struct  UnityEngineAsyncOperationWrap_tCA2290627D56C0F8605F1A530A2C91280F3EC012  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEASYNCOPERATIONWRAP_TCA2290627D56C0F8605F1A530A2C91280F3EC012_H
#ifndef UNITYENGINEBEHAVIOURWRAP_TB61302BFC257C0604F60FF74354D0265810D3464_H
#define UNITYENGINEBEHAVIOURWRAP_TB61302BFC257C0604F60FF74354D0265810D3464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineBehaviourWrap
struct  UnityEngineBehaviourWrap_tB61302BFC257C0604F60FF74354D0265810D3464  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEBEHAVIOURWRAP_TB61302BFC257C0604F60FF74354D0265810D3464_H
#ifndef UNITYENGINEBOUNDSWRAP_T33DAC5849EEDCB51364A417DAD75FDBAC140F022_H
#define UNITYENGINEBOUNDSWRAP_T33DAC5849EEDCB51364A417DAD75FDBAC140F022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineBoundsWrap
struct  UnityEngineBoundsWrap_t33DAC5849EEDCB51364A417DAD75FDBAC140F022  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEBOUNDSWRAP_T33DAC5849EEDCB51364A417DAD75FDBAC140F022_H
#ifndef UNITYENGINEBOXCOLLIDERWRAP_T9F83F44BCE7A6952F10771A76C064109DA11EBEA_H
#define UNITYENGINEBOXCOLLIDERWRAP_T9F83F44BCE7A6952F10771A76C064109DA11EBEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineBoxColliderWrap
struct  UnityEngineBoxColliderWrap_t9F83F44BCE7A6952F10771A76C064109DA11EBEA  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEBOXCOLLIDERWRAP_T9F83F44BCE7A6952F10771A76C064109DA11EBEA_H
#ifndef UNITYENGINECAMERAGATEFITPARAMETERSWRAP_T8505F29654E29EC764F3E0C877A3F15D77F34DAC_H
#define UNITYENGINECAMERAGATEFITPARAMETERSWRAP_T8505F29654E29EC764F3E0C877A3F15D77F34DAC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineCameraGateFitParametersWrap
struct  UnityEngineCameraGateFitParametersWrap_t8505F29654E29EC764F3E0C877A3F15D77F34DAC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINECAMERAGATEFITPARAMETERSWRAP_T8505F29654E29EC764F3E0C877A3F15D77F34DAC_H
#ifndef UNITYENGINECAMERAWRAP_TEF0F8D84ADB258DA3E475BF07EFF48A986742D8F_H
#define UNITYENGINECAMERAWRAP_TEF0F8D84ADB258DA3E475BF07EFF48A986742D8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineCameraWrap
struct  UnityEngineCameraWrap_tEF0F8D84ADB258DA3E475BF07EFF48A986742D8F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINECAMERAWRAP_TEF0F8D84ADB258DA3E475BF07EFF48A986742D8F_H
#ifndef UNITYENGINECOLLIDERWRAP_TBA7AD5997CFAA3CDD02ADA897DD2CE107A4CB41B_H
#define UNITYENGINECOLLIDERWRAP_TBA7AD5997CFAA3CDD02ADA897DD2CE107A4CB41B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineColliderWrap
struct  UnityEngineColliderWrap_tBA7AD5997CFAA3CDD02ADA897DD2CE107A4CB41B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINECOLLIDERWRAP_TBA7AD5997CFAA3CDD02ADA897DD2CE107A4CB41B_H
#ifndef UNITYENGINECOLORWRAP_T60F00C0253D9C193CAF5083599653D86C2E52A26_H
#define UNITYENGINECOLORWRAP_T60F00C0253D9C193CAF5083599653D86C2E52A26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineColorWrap
struct  UnityEngineColorWrap_t60F00C0253D9C193CAF5083599653D86C2E52A26  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINECOLORWRAP_T60F00C0253D9C193CAF5083599653D86C2E52A26_H
#ifndef UNITYENGINECOMPONENTWRAP_T0CF90DCB6ACA61A599FA4E7941623E773BED4A6A_H
#define UNITYENGINECOMPONENTWRAP_T0CF90DCB6ACA61A599FA4E7941623E773BED4A6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineComponentWrap
struct  UnityEngineComponentWrap_t0CF90DCB6ACA61A599FA4E7941623E773BED4A6A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINECOMPONENTWRAP_T0CF90DCB6ACA61A599FA4E7941623E773BED4A6A_H
#ifndef UNITYENGINEDEBUGWRAP_TD351B314C2A328B1DEC5CD2CF18FEB4AA19AE793_H
#define UNITYENGINEDEBUGWRAP_TD351B314C2A328B1DEC5CD2CF18FEB4AA19AE793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineDebugWrap
struct  UnityEngineDebugWrap_tD351B314C2A328B1DEC5CD2CF18FEB4AA19AE793  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEDEBUGWRAP_TD351B314C2A328B1DEC5CD2CF18FEB4AA19AE793_H
#ifndef UNITYENGINEGAMEOBJECTWRAP_TA62B97A0F54068BDAAD860468D4FD944F0652AB5_H
#define UNITYENGINEGAMEOBJECTWRAP_TA62B97A0F54068BDAAD860468D4FD944F0652AB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGameObjectWrap
struct  UnityEngineGameObjectWrap_tA62B97A0F54068BDAAD860468D4FD944F0652AB5  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGAMEOBJECTWRAP_TA62B97A0F54068BDAAD860468D4FD944F0652AB5_H
#ifndef UNITYENGINEGONBESTMAGICCUBEAPPASSETFILEINFOWRAP_TE03123113B1037EEED1844F723294406DEBEFDC6_H
#define UNITYENGINEGONBESTMAGICCUBEAPPASSETFILEINFOWRAP_TE03123113B1037EEED1844F723294406DEBEFDC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeAppAssetFileInfoWrap
struct  UnityEngineGonbestMagicCubeAppAssetFileInfoWrap_tE03123113B1037EEED1844F723294406DEBEFDC6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEAPPASSETFILEINFOWRAP_TE03123113B1037EEED1844F723294406DEBEFDC6_H
#ifndef UNITYENGINEGONBESTMAGICCUBEAPPMANAGERWRAP_TB00097D9258C874D3E0FB795F4642D5EFD7A4D48_H
#define UNITYENGINEGONBESTMAGICCUBEAPPMANAGERWRAP_TB00097D9258C874D3E0FB795F4642D5EFD7A4D48_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeAppManagerWrap
struct  UnityEngineGonbestMagicCubeAppManagerWrap_tB00097D9258C874D3E0FB795F4642D5EFD7A4D48  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEAPPMANAGERWRAP_TB00097D9258C874D3E0FB795F4642D5EFD7A4D48_H
#ifndef UNITYENGINEGONBESTMAGICCUBEAPPPERSISTDATAWRAP_T3CA2BE994FD0041F8AADB261EB6F7E10CD7C2068_H
#define UNITYENGINEGONBESTMAGICCUBEAPPPERSISTDATAWRAP_T3CA2BE994FD0041F8AADB261EB6F7E10CD7C2068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeAppPersistDataWrap
struct  UnityEngineGonbestMagicCubeAppPersistDataWrap_t3CA2BE994FD0041F8AADB261EB6F7E10CD7C2068  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEAPPPERSISTDATAWRAP_T3CA2BE994FD0041F8AADB261EB6F7E10CD7C2068_H
#ifndef UNITYENGINEGONBESTMAGICCUBEASSEMBLYUTILSWRAP_TC1322A2090D0652C1EBBC65F6DF1696A99A9DEB0_H
#define UNITYENGINEGONBESTMAGICCUBEASSEMBLYUTILSWRAP_TC1322A2090D0652C1EBBC65F6DF1696A99A9DEB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeAssemblyUtilsWrap
struct  UnityEngineGonbestMagicCubeAssemblyUtilsWrap_tC1322A2090D0652C1EBBC65F6DF1696A99A9DEB0  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEASSEMBLYUTILSWRAP_TC1322A2090D0652C1EBBC65F6DF1696A99A9DEB0_H
#ifndef UNITYENGINEGONBESTMAGICCUBECOROUTINEPOOLWRAP_T6FB14B12B9F7DDF6A37B81FEB80819EA60D44B10_H
#define UNITYENGINEGONBESTMAGICCUBECOROUTINEPOOLWRAP_T6FB14B12B9F7DDF6A37B81FEB80819EA60D44B10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeCoroutinePoolWrap
struct  UnityEngineGonbestMagicCubeCoroutinePoolWrap_t6FB14B12B9F7DDF6A37B81FEB80819EA60D44B10  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBECOROUTINEPOOLWRAP_T6FB14B12B9F7DDF6A37B81FEB80819EA60D44B10_H
#ifndef UNITYENGINEGONBESTMAGICCUBEEVENTCONSTDEFINEWRAP_T61AEBFEF6A12882B7F07E820B315FF004E2DEDF3_H
#define UNITYENGINEGONBESTMAGICCUBEEVENTCONSTDEFINEWRAP_T61AEBFEF6A12882B7F07E820B315FF004E2DEDF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeEventConstDefineWrap
struct  UnityEngineGonbestMagicCubeEventConstDefineWrap_t61AEBFEF6A12882B7F07E820B315FF004E2DEDF3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEEVENTCONSTDEFINEWRAP_T61AEBFEF6A12882B7F07E820B315FF004E2DEDF3_H
#ifndef UNITYENGINEGONBESTMAGICCUBEFLANGUAGEWRAP_TFCA787D9527ACBBD62D743249B2B3D991541F119_H
#define UNITYENGINEGONBESTMAGICCUBEFLANGUAGEWRAP_TFCA787D9527ACBBD62D743249B2B3D991541F119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeFLanguageWrap
struct  UnityEngineGonbestMagicCubeFLanguageWrap_tFCA787D9527ACBBD62D743249B2B3D991541F119  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEFLANGUAGEWRAP_TFCA787D9527ACBBD62D743249B2B3D991541F119_H
#ifndef UNITYENGINEGONBESTMAGICCUBEFLOGUPLOADERWRAP_T6E883C6FBF9A4E6A70BEF3A2F8DA6E60C2ACAEDF_H
#define UNITYENGINEGONBESTMAGICCUBEFLOGUPLOADERWRAP_T6E883C6FBF9A4E6A70BEF3A2F8DA6E60C2ACAEDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeFLogUploaderWrap
struct  UnityEngineGonbestMagicCubeFLogUploaderWrap_t6E883C6FBF9A4E6A70BEF3A2F8DA6E60C2ACAEDF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEFLOGUPLOADERWRAP_T6E883C6FBF9A4E6A70BEF3A2F8DA6E60C2ACAEDF_H
#ifndef UNITYENGINEGONBESTMAGICCUBEMD5UTILSWRAP_T12AFF4ED509EA5FB3B88CC55840FCD7693AC9B8B_H
#define UNITYENGINEGONBESTMAGICCUBEMD5UTILSWRAP_T12AFF4ED509EA5FB3B88CC55840FCD7693AC9B8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeMD5UtilsWrap
struct  UnityEngineGonbestMagicCubeMD5UtilsWrap_t12AFF4ED509EA5FB3B88CC55840FCD7693AC9B8B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEMD5UTILSWRAP_T12AFF4ED509EA5FB3B88CC55840FCD7693AC9B8B_H
#ifndef UNITYENGINEGONBESTMAGICCUBEMACHINEUUIDWRAP_T553236984FD41AF370A3DD58B44869A7FE33C8F4_H
#define UNITYENGINEGONBESTMAGICCUBEMACHINEUUIDWRAP_T553236984FD41AF370A3DD58B44869A7FE33C8F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubeMachineUUIDWrap
struct  UnityEngineGonbestMagicCubeMachineUUIDWrap_t553236984FD41AF370A3DD58B44869A7FE33C8F4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEMACHINEUUIDWRAP_T553236984FD41AF370A3DD58B44869A7FE33C8F4_H
#ifndef UNITYENGINEGONBESTMAGICCUBEPATHUTILSWRAP_T4B835E1201E356967B231027C97F17847B34F229_H
#define UNITYENGINEGONBESTMAGICCUBEPATHUTILSWRAP_T4B835E1201E356967B231027C97F17847B34F229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineGonbestMagicCubePathUtilsWrap
struct  UnityEngineGonbestMagicCubePathUtilsWrap_t4B835E1201E356967B231027C97F17847B34F229  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEGONBESTMAGICCUBEPATHUTILSWRAP_T4B835E1201E356967B231027C97F17847B34F229_H
#ifndef UNITYENGINEINPUTWRAP_T26BE34EEEF17292BF8CB7608DAD2E27EECFF366D_H
#define UNITYENGINEINPUTWRAP_T26BE34EEEF17292BF8CB7608DAD2E27EECFF366D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineInputWrap
struct  UnityEngineInputWrap_t26BE34EEEF17292BF8CB7608DAD2E27EECFF366D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEINPUTWRAP_T26BE34EEEF17292BF8CB7608DAD2E27EECFF366D_H
#ifndef UNITYENGINEKEYFRAMEWRAP_T3E5C745AFAD1F4ED9FDB5FE29FAE2834C1EB6479_H
#define UNITYENGINEKEYFRAMEWRAP_T3E5C745AFAD1F4ED9FDB5FE29FAE2834C1EB6479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineKeyframeWrap
struct  UnityEngineKeyframeWrap_t3E5C745AFAD1F4ED9FDB5FE29FAE2834C1EB6479  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEKEYFRAMEWRAP_T3E5C745AFAD1F4ED9FDB5FE29FAE2834C1EB6479_H
#ifndef UNITYENGINELIGHTWRAP_T894CA5E0AD1273DAD2755AC51CF80FDAAA6398D2_H
#define UNITYENGINELIGHTWRAP_T894CA5E0AD1273DAD2755AC51CF80FDAAA6398D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineLightWrap
struct  UnityEngineLightWrap_t894CA5E0AD1273DAD2755AC51CF80FDAAA6398D2  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINELIGHTWRAP_T894CA5E0AD1273DAD2755AC51CF80FDAAA6398D2_H
#ifndef UNITYENGINEMATERIALWRAP_TD86432BD140845294B5ACFFE6CE2ECAFEFFF6111_H
#define UNITYENGINEMATERIALWRAP_TD86432BD140845294B5ACFFE6CE2ECAFEFFF6111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineMaterialWrap
struct  UnityEngineMaterialWrap_tD86432BD140845294B5ACFFE6CE2ECAFEFFF6111  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEMATERIALWRAP_TD86432BD140845294B5ACFFE6CE2ECAFEFFF6111_H
#ifndef UNITYENGINEMATHFWRAP_TF2D6D5F261CDCF4CDCC0D29D7DA5A88B1A37AADE_H
#define UNITYENGINEMATHFWRAP_TF2D6D5F261CDCF4CDCC0D29D7DA5A88B1A37AADE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineMathfWrap
struct  UnityEngineMathfWrap_tF2D6D5F261CDCF4CDCC0D29D7DA5A88B1A37AADE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEMATHFWRAP_TF2D6D5F261CDCF4CDCC0D29D7DA5A88B1A37AADE_H
#ifndef UNITYENGINEMONOBEHAVIOURWRAP_T0D155B4A633AA5277454348249744B39BAEE7F04_H
#define UNITYENGINEMONOBEHAVIOURWRAP_T0D155B4A633AA5277454348249744B39BAEE7F04_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineMonoBehaviourWrap
struct  UnityEngineMonoBehaviourWrap_t0D155B4A633AA5277454348249744B39BAEE7F04  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEMONOBEHAVIOURWRAP_T0D155B4A633AA5277454348249744B39BAEE7F04_H
#ifndef UNITYENGINENETWORKINGUNITYWEBREQUESTASYNCOPERATIONWRAP_T67A3C8D1BEEC5B77B1C3E0BD8C9BCCABA2939359_H
#define UNITYENGINENETWORKINGUNITYWEBREQUESTASYNCOPERATIONWRAP_T67A3C8D1BEEC5B77B1C3E0BD8C9BCCABA2939359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineNetworkingUnityWebRequestAsyncOperationWrap
struct  UnityEngineNetworkingUnityWebRequestAsyncOperationWrap_t67A3C8D1BEEC5B77B1C3E0BD8C9BCCABA2939359  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINENETWORKINGUNITYWEBREQUESTASYNCOPERATIONWRAP_T67A3C8D1BEEC5B77B1C3E0BD8C9BCCABA2939359_H
#ifndef UNITYENGINENETWORKINGUNITYWEBREQUESTWRAP_T42335B8824CCB7364ECB2E834F0AF57431BA905F_H
#define UNITYENGINENETWORKINGUNITYWEBREQUESTWRAP_T42335B8824CCB7364ECB2E834F0AF57431BA905F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineNetworkingUnityWebRequestWrap
struct  UnityEngineNetworkingUnityWebRequestWrap_t42335B8824CCB7364ECB2E834F0AF57431BA905F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINENETWORKINGUNITYWEBREQUESTWRAP_T42335B8824CCB7364ECB2E834F0AF57431BA905F_H
#ifndef UNITYENGINEOBJECTWRAP_T9FC3B98CF6CEA9EE06B507674F7BF5D1A56628DE_H
#define UNITYENGINEOBJECTWRAP_T9FC3B98CF6CEA9EE06B507674F7BF5D1A56628DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineObjectWrap
struct  UnityEngineObjectWrap_t9FC3B98CF6CEA9EE06B507674F7BF5D1A56628DE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEOBJECTWRAP_T9FC3B98CF6CEA9EE06B507674F7BF5D1A56628DE_H
#ifndef UNITYENGINEPHYSICSWRAP_T76CF613C4E0B2E40C8779F2F4B9F15B91804A7DC_H
#define UNITYENGINEPHYSICSWRAP_T76CF613C4E0B2E40C8779F2F4B9F15B91804A7DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEnginePhysicsWrap
struct  UnityEnginePhysicsWrap_t76CF613C4E0B2E40C8779F2F4B9F15B91804A7DC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEPHYSICSWRAP_T76CF613C4E0B2E40C8779F2F4B9F15B91804A7DC_H
#ifndef UNITYENGINEPLAYABLESPLAYABLEASSETWRAP_T05993637ED575DCE55EFE6B1D0448EB88551A003_H
#define UNITYENGINEPLAYABLESPLAYABLEASSETWRAP_T05993637ED575DCE55EFE6B1D0448EB88551A003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEnginePlayablesPlayableAssetWrap
struct  UnityEnginePlayablesPlayableAssetWrap_t05993637ED575DCE55EFE6B1D0448EB88551A003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEPLAYABLESPLAYABLEASSETWRAP_T05993637ED575DCE55EFE6B1D0448EB88551A003_H
#ifndef UNITYENGINEPLAYABLESPLAYABLEDIRECTORWRAP_T9E49E9B58CF70FEDE770FF9F4B2882A03A28C572_H
#define UNITYENGINEPLAYABLESPLAYABLEDIRECTORWRAP_T9E49E9B58CF70FEDE770FF9F4B2882A03A28C572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEnginePlayablesPlayableDirectorWrap
struct  UnityEnginePlayablesPlayableDirectorWrap_t9E49E9B58CF70FEDE770FF9F4B2882A03A28C572  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEPLAYABLESPLAYABLEDIRECTORWRAP_T9E49E9B58CF70FEDE770FF9F4B2882A03A28C572_H
#ifndef UNITYENGINEPLAYERPREFSWRAP_T323F53AB70EABAD49A95EB4D063E2B84F2BFE150_H
#define UNITYENGINEPLAYERPREFSWRAP_T323F53AB70EABAD49A95EB4D063E2B84F2BFE150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEnginePlayerPrefsWrap
struct  UnityEnginePlayerPrefsWrap_t323F53AB70EABAD49A95EB4D063E2B84F2BFE150  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEPLAYERPREFSWRAP_T323F53AB70EABAD49A95EB4D063E2B84F2BFE150_H
#ifndef UNITYENGINEQUATERNIONWRAP_TB22330AD7277592A55A78C5061DB114A6E0D012E_H
#define UNITYENGINEQUATERNIONWRAP_TB22330AD7277592A55A78C5061DB114A6E0D012E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineQuaternionWrap
struct  UnityEngineQuaternionWrap_tB22330AD7277592A55A78C5061DB114A6E0D012E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEQUATERNIONWRAP_TB22330AD7277592A55A78C5061DB114A6E0D012E_H
#ifndef UNITYENGINERAY2DWRAP_TA59B2F10442373E35D9954C2A29CB43B7B177534_H
#define UNITYENGINERAY2DWRAP_TA59B2F10442373E35D9954C2A29CB43B7B177534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRay2DWrap
struct  UnityEngineRay2DWrap_tA59B2F10442373E35D9954C2A29CB43B7B177534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERAY2DWRAP_TA59B2F10442373E35D9954C2A29CB43B7B177534_H
#ifndef UNITYENGINERAYWRAP_T7D165C08CDF466852171E97421DDF7A1BC1B1DAD_H
#define UNITYENGINERAYWRAP_T7D165C08CDF466852171E97421DDF7A1BC1B1DAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRayWrap
struct  UnityEngineRayWrap_t7D165C08CDF466852171E97421DDF7A1BC1B1DAD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERAYWRAP_T7D165C08CDF466852171E97421DDF7A1BC1B1DAD_H
#ifndef UNITYENGINERAYCASTHITWRAP_T26493A9BE4B0CF12C74ABC6EDEEA3166E3A15E8D_H
#define UNITYENGINERAYCASTHITWRAP_T26493A9BE4B0CF12C74ABC6EDEEA3166E3A15E8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRaycastHitWrap
struct  UnityEngineRaycastHitWrap_t26493A9BE4B0CF12C74ABC6EDEEA3166E3A15E8D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERAYCASTHITWRAP_T26493A9BE4B0CF12C74ABC6EDEEA3166E3A15E8D_H
#ifndef UNITYENGINERECTWRAP_T0D1D5AF02379D8314D830B6F6F1DD0E8D937C33A_H
#define UNITYENGINERECTWRAP_T0D1D5AF02379D8314D830B6F6F1DD0E8D937C33A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRectWrap
struct  UnityEngineRectWrap_t0D1D5AF02379D8314D830B6F6F1DD0E8D937C33A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERECTWRAP_T0D1D5AF02379D8314D830B6F6F1DD0E8D937C33A_H
#ifndef UNITYENGINERENDERTEXTUREWRAP_T85F18556E5B8CCF2FEBD915CF8102D6160712302_H
#define UNITYENGINERENDERTEXTUREWRAP_T85F18556E5B8CCF2FEBD915CF8102D6160712302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRenderTextureWrap
struct  UnityEngineRenderTextureWrap_t85F18556E5B8CCF2FEBD915CF8102D6160712302  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERENDERTEXTUREWRAP_T85F18556E5B8CCF2FEBD915CF8102D6160712302_H
#ifndef UNITYENGINERENDERERWRAP_TAB8F6F97820D304D5C4ADE93C999A7DFF1354225_H
#define UNITYENGINERENDERERWRAP_TAB8F6F97820D304D5C4ADE93C999A7DFF1354225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRendererWrap
struct  UnityEngineRendererWrap_tAB8F6F97820D304D5C4ADE93C999A7DFF1354225  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERENDERERWRAP_TAB8F6F97820D304D5C4ADE93C999A7DFF1354225_H
#ifndef UNITYENGINERENDERINGCOMMANDBUFFERWRAP_TE6B7993564E6EF3D5D730FE20496CB16336CED72_H
#define UNITYENGINERENDERINGCOMMANDBUFFERWRAP_TE6B7993564E6EF3D5D730FE20496CB16336CED72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRenderingCommandBufferWrap
struct  UnityEngineRenderingCommandBufferWrap_tE6B7993564E6EF3D5D730FE20496CB16336CED72  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERENDERINGCOMMANDBUFFERWRAP_TE6B7993564E6EF3D5D730FE20496CB16336CED72_H
#ifndef UNITYENGINERENDERINGRENDERTARGETIDENTIFIERWRAP_T798C3A19691D7503D077C51358E9CB85058C17E8_H
#define UNITYENGINERENDERINGRENDERTARGETIDENTIFIERWRAP_T798C3A19691D7503D077C51358E9CB85058C17E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineRenderingRenderTargetIdentifierWrap
struct  UnityEngineRenderingRenderTargetIdentifierWrap_t798C3A19691D7503D077C51358E9CB85058C17E8  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERENDERINGRENDERTARGETIDENTIFIERWRAP_T798C3A19691D7503D077C51358E9CB85058C17E8_H
#ifndef UNITYENGINERESOURCESWRAP_T770C02591AEA612F108EEB4F657A54A10C405B42_H
#define UNITYENGINERESOURCESWRAP_T770C02591AEA612F108EEB4F657A54A10C405B42_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineResourcesWrap
struct  UnityEngineResourcesWrap_t770C02591AEA612F108EEB4F657A54A10C405B42  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINERESOURCESWRAP_T770C02591AEA612F108EEB4F657A54A10C405B42_H
#ifndef UNITYENGINESCREENWRAP_T066413934A6896FD7A2C2180EF45B4CE5F27A778_H
#define UNITYENGINESCREENWRAP_T066413934A6896FD7A2C2180EF45B4CE5F27A778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineScreenWrap
struct  UnityEngineScreenWrap_t066413934A6896FD7A2C2180EF45B4CE5F27A778  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINESCREENWRAP_T066413934A6896FD7A2C2180EF45B4CE5F27A778_H
#ifndef UNITYENGINESHADERWRAP_T14284C0318D1150ED543A2A7D6F7DF0C09619C8E_H
#define UNITYENGINESHADERWRAP_T14284C0318D1150ED543A2A7D6F7DF0C09619C8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineShaderWrap
struct  UnityEngineShaderWrap_t14284C0318D1150ED543A2A7D6F7DF0C09619C8E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINESHADERWRAP_T14284C0318D1150ED543A2A7D6F7DF0C09619C8E_H
#ifndef UNITYENGINESYSTEMINFOWRAP_T017A90AEB7BE114E82328508F5A3FA71789AD9C6_H
#define UNITYENGINESYSTEMINFOWRAP_T017A90AEB7BE114E82328508F5A3FA71789AD9C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineSystemInfoWrap
struct  UnityEngineSystemInfoWrap_t017A90AEB7BE114E82328508F5A3FA71789AD9C6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINESYSTEMINFOWRAP_T017A90AEB7BE114E82328508F5A3FA71789AD9C6_H
#ifndef UNITYENGINETEXTASSETWRAP_T2F21CBD35916DB653F93A6A1C555E4F80EAA7EF3_H
#define UNITYENGINETEXTASSETWRAP_T2F21CBD35916DB653F93A6A1C555E4F80EAA7EF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineTextAssetWrap
struct  UnityEngineTextAssetWrap_t2F21CBD35916DB653F93A6A1C555E4F80EAA7EF3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINETEXTASSETWRAP_T2F21CBD35916DB653F93A6A1C555E4F80EAA7EF3_H
#ifndef UNITYENGINETEXTUREWRAP_TCF9F440F28A84C55B160D312BF95B03DE59F9AE8_H
#define UNITYENGINETEXTUREWRAP_TCF9F440F28A84C55B160D312BF95B03DE59F9AE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineTextureWrap
struct  UnityEngineTextureWrap_tCF9F440F28A84C55B160D312BF95B03DE59F9AE8  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINETEXTUREWRAP_TCF9F440F28A84C55B160D312BF95B03DE59F9AE8_H
#ifndef UNITYENGINETIMEWRAP_T0C6B60D19F20BB75B270539DF52A274BF4532829_H
#define UNITYENGINETIMEWRAP_T0C6B60D19F20BB75B270539DF52A274BF4532829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineTimeWrap
struct  UnityEngineTimeWrap_t0C6B60D19F20BB75B270539DF52A274BF4532829  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINETIMEWRAP_T0C6B60D19F20BB75B270539DF52A274BF4532829_H
#ifndef UNITYENGINETRANSFORMWRAP_T3F583E71DE579E761870193A8B3CEF4778A19F49_H
#define UNITYENGINETRANSFORMWRAP_T3F583E71DE579E761870193A8B3CEF4778A19F49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineTransformWrap
struct  UnityEngineTransformWrap_t3F583E71DE579E761870193A8B3CEF4778A19F49  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINETRANSFORMWRAP_T3F583E71DE579E761870193A8B3CEF4778A19F49_H
#ifndef UNITYENGINEVECTOR2WRAP_TAA41CF47425BC7EFE11FCA5BC29C76F1259E2027_H
#define UNITYENGINEVECTOR2WRAP_TAA41CF47425BC7EFE11FCA5BC29C76F1259E2027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineVector2Wrap
struct  UnityEngineVector2Wrap_tAA41CF47425BC7EFE11FCA5BC29C76F1259E2027  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEVECTOR2WRAP_TAA41CF47425BC7EFE11FCA5BC29C76F1259E2027_H
#ifndef UNITYENGINEVECTOR3WRAP_T617151FAA14C4592FCC4A9876A6BDB095641280E_H
#define UNITYENGINEVECTOR3WRAP_T617151FAA14C4592FCC4A9876A6BDB095641280E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineVector3Wrap
struct  UnityEngineVector3Wrap_t617151FAA14C4592FCC4A9876A6BDB095641280E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEVECTOR3WRAP_T617151FAA14C4592FCC4A9876A6BDB095641280E_H
#ifndef UNITYENGINEVECTOR4WRAP_TB975E077B1F76DBC85E4CC1611E9941DC208F836_H
#define UNITYENGINEVECTOR4WRAP_TB975E077B1F76DBC85E4CC1611E9941DC208F836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineVector4Wrap
struct  UnityEngineVector4Wrap_tB975E077B1F76DBC85E4CC1611E9941DC208F836  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEVECTOR4WRAP_TB975E077B1F76DBC85E4CC1611E9941DC208F836_H
#ifndef UNITYENGINEWWWFORMWRAP_TDED05888B8FBEF67E2E71C21A990623735EADF2C_H
#define UNITYENGINEWWWFORMWRAP_TDED05888B8FBEF67E2E71C21A990623735EADF2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.UnityEngineWWWFormWrap
struct  UnityEngineWWWFormWrap_tDED05888B8FBEF67E2E71C21A990623735EADF2C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEWWWFORMWRAP_TDED05888B8FBEF67E2E71C21A990623735EADF2C_H
#ifndef XLUA_GEN_INITER_REGISTER___T6A670E147D21CD3E275F66834C4A05BE36E318E1_H
#define XLUA_GEN_INITER_REGISTER___T6A670E147D21CD3E275F66834C4A05BE36E318E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.XLua_Gen_Initer_Register__
struct  XLua_Gen_Initer_Register___t6A670E147D21CD3E275F66834C4A05BE36E318E1  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XLUA_GEN_INITER_REGISTER___T6A670E147D21CD3E275F66834C4A05BE36E318E1_H
#ifndef U3CU3EC_TDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_H
#define U3CU3EC_TDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.CSObjectWrap.XLua_Gen_Initer_Register___<>c
struct  U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_StaticFields
{
public:
	// XLua.CSObjectWrap.XLua_Gen_Initer_Register___<>c XLua.CSObjectWrap.XLua_Gen_Initer_Register___<>c::<>9
	U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_H
#ifndef ANY_1_TD58EB098318C0989343A210A2922F7847EA26BEF_H
#define ANY_1_TD58EB098318C0989343A210A2922F7847EA26BEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.Byte>
struct  Any_1_tD58EB098318C0989343A210A2922F7847EA26BEF  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	uint8_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_tD58EB098318C0989343A210A2922F7847EA26BEF, ___mTarget_0)); }
	inline uint8_t get_mTarget_0() const { return ___mTarget_0; }
	inline uint8_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(uint8_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_TD58EB098318C0989343A210A2922F7847EA26BEF_H
#ifndef ANY_1_TCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7_H
#define ANY_1_TCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.Char>
struct  Any_1_tCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	Il2CppChar ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_tCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7, ___mTarget_0)); }
	inline Il2CppChar get_mTarget_0() const { return ___mTarget_0; }
	inline Il2CppChar* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(Il2CppChar value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_TCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7_H
#ifndef ANY_1_TC7A261181201BD4982E10CE0C26920A812FE928D_H
#define ANY_1_TC7A261181201BD4982E10CE0C26920A812FE928D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.Int16>
struct  Any_1_tC7A261181201BD4982E10CE0C26920A812FE928D  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	int16_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_tC7A261181201BD4982E10CE0C26920A812FE928D, ___mTarget_0)); }
	inline int16_t get_mTarget_0() const { return ___mTarget_0; }
	inline int16_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(int16_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_TC7A261181201BD4982E10CE0C26920A812FE928D_H
#ifndef ANY_1_T52BA114BA8791B9792269515A820F5AA2752F8B3_H
#define ANY_1_T52BA114BA8791B9792269515A820F5AA2752F8B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.Int32>
struct  Any_1_t52BA114BA8791B9792269515A820F5AA2752F8B3  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	int32_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_t52BA114BA8791B9792269515A820F5AA2752F8B3, ___mTarget_0)); }
	inline int32_t get_mTarget_0() const { return ___mTarget_0; }
	inline int32_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(int32_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_T52BA114BA8791B9792269515A820F5AA2752F8B3_H
#ifndef ANY_1_T9F822C32B6DDEB514D5E4D163E4ED28BD738C850_H
#define ANY_1_T9F822C32B6DDEB514D5E4D163E4ED28BD738C850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.Int64>
struct  Any_1_t9F822C32B6DDEB514D5E4D163E4ED28BD738C850  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	int64_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_t9F822C32B6DDEB514D5E4D163E4ED28BD738C850, ___mTarget_0)); }
	inline int64_t get_mTarget_0() const { return ___mTarget_0; }
	inline int64_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(int64_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_T9F822C32B6DDEB514D5E4D163E4ED28BD738C850_H
#ifndef ANY_1_TBD1B738846D2B35652B0C6BA44947B32EE556FB1_H
#define ANY_1_TBD1B738846D2B35652B0C6BA44947B32EE556FB1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.SByte>
struct  Any_1_tBD1B738846D2B35652B0C6BA44947B32EE556FB1  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	int8_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_tBD1B738846D2B35652B0C6BA44947B32EE556FB1, ___mTarget_0)); }
	inline int8_t get_mTarget_0() const { return ___mTarget_0; }
	inline int8_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(int8_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_TBD1B738846D2B35652B0C6BA44947B32EE556FB1_H
#ifndef ANY_1_TF85A36F47B93FBF16483B1D0CB8E381DE3719AE6_H
#define ANY_1_TF85A36F47B93FBF16483B1D0CB8E381DE3719AE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.UInt16>
struct  Any_1_tF85A36F47B93FBF16483B1D0CB8E381DE3719AE6  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	uint16_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_tF85A36F47B93FBF16483B1D0CB8E381DE3719AE6, ___mTarget_0)); }
	inline uint16_t get_mTarget_0() const { return ___mTarget_0; }
	inline uint16_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(uint16_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_TF85A36F47B93FBF16483B1D0CB8E381DE3719AE6_H
#ifndef ANY_1_T87F63FB4A75B0D433A69F4B132C762ABA619912C_H
#define ANY_1_T87F63FB4A75B0D433A69F4B132C762ABA619912C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Any`1<System.UInt32>
struct  Any_1_t87F63FB4A75B0D433A69F4B132C762ABA619912C  : public RuntimeObject
{
public:
	// T XLua.Cast.Any`1::mTarget
	uint32_t ___mTarget_0;

public:
	inline static int32_t get_offset_of_mTarget_0() { return static_cast<int32_t>(offsetof(Any_1_t87F63FB4A75B0D433A69F4B132C762ABA619912C, ___mTarget_0)); }
	inline uint32_t get_mTarget_0() const { return ___mTarget_0; }
	inline uint32_t* get_address_of_mTarget_0() { return &___mTarget_0; }
	inline void set_mTarget_0(uint32_t value)
	{
		___mTarget_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANY_1_T87F63FB4A75B0D433A69F4B132C762ABA619912C_H
#ifndef LUATEMPLATE_T7A2DA9338A12C1E40AE91696CAC61B9814613A04_H
#define LUATEMPLATE_T7A2DA9338A12C1E40AE91696CAC61B9814613A04_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.LuaTemplate
struct  LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04  : public RuntimeObject
{
public:

public:
};

struct LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields
{
public:
	// XLua.LuaDLL.lua_CSFunction XLua.TemplateEngine.LuaTemplate::templateCompileFunction
	lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * ___templateCompileFunction_0;
	// XLua.LuaDLL.lua_CSFunction XLua.TemplateEngine.LuaTemplate::templateExecuteFunction
	lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * ___templateExecuteFunction_1;

public:
	inline static int32_t get_offset_of_templateCompileFunction_0() { return static_cast<int32_t>(offsetof(LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields, ___templateCompileFunction_0)); }
	inline lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * get_templateCompileFunction_0() const { return ___templateCompileFunction_0; }
	inline lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 ** get_address_of_templateCompileFunction_0() { return &___templateCompileFunction_0; }
	inline void set_templateCompileFunction_0(lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * value)
	{
		___templateCompileFunction_0 = value;
		Il2CppCodeGenWriteBarrier((&___templateCompileFunction_0), value);
	}

	inline static int32_t get_offset_of_templateExecuteFunction_1() { return static_cast<int32_t>(offsetof(LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields, ___templateExecuteFunction_1)); }
	inline lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * get_templateExecuteFunction_1() const { return ___templateExecuteFunction_1; }
	inline lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 ** get_address_of_templateExecuteFunction_1() { return &___templateExecuteFunction_1; }
	inline void set_templateExecuteFunction_1(lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2 * value)
	{
		___templateExecuteFunction_1 = value;
		Il2CppCodeGenWriteBarrier((&___templateExecuteFunction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUATEMPLATE_T7A2DA9338A12C1E40AE91696CAC61B9814613A04_H
#ifndef PARSER_T8B20E7A580949ECD6481AE9046B665E15952D34E_H
#define PARSER_T8B20E7A580949ECD6481AE9046B665E15952D34E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.Parser
struct  Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E  : public RuntimeObject
{
public:

public:
};

struct Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E_StaticFields
{
public:
	// System.String XLua.TemplateEngine.Parser::<RegexString>k__BackingField
	String_t* ___U3CRegexStringU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRegexStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E_StaticFields, ___U3CRegexStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CRegexStringU3Ek__BackingField_0() const { return ___U3CRegexStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRegexStringU3Ek__BackingField_0() { return &___U3CRegexStringU3Ek__BackingField_0; }
	inline void set_U3CRegexStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CRegexStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRegexStringU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T8B20E7A580949ECD6481AE9046B665E15952D34E_H
#ifndef U3CU3EC_TADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_H
#define U3CU3EC_TADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.Parser_<>c
struct  U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields
{
public:
	// XLua.TemplateEngine.Parser_<>c XLua.TemplateEngine.Parser_<>c::<>9
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6 * ___U3CU3E9_0;
	// System.Func`2<System.Text.RegularExpressions.Capture,<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>> XLua.TemplateEngine.Parser_<>c::<>9__7_0
	Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * ___U3CU3E9__7_0_1;
	// System.Func`2<System.Text.RegularExpressions.Capture,<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>> XLua.TemplateEngine.Parser_<>c::<>9__7_1
	Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * ___U3CU3E9__7_1_2;
	// System.Func`2<System.Text.RegularExpressions.Capture,<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>> XLua.TemplateEngine.Parser_<>c::<>9__7_2
	Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * ___U3CU3E9__7_2_3;
	// System.Func`2<<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>,System.Int32> XLua.TemplateEngine.Parser_<>c::<>9__7_3
	Func_2_t848F3E985184C424F49CF3DF654C7C90ED8BEF99 * ___U3CU3E9__7_3_4;
	// System.Func`2<<>f__AnonymousType0`3<XLua.TemplateEngine.TokenType,System.String,System.Int32>,XLua.TemplateEngine.Chunk> XLua.TemplateEngine.Parser_<>c::<>9__7_4
	Func_2_t5BE192E0FFB0C400FD99B3C4405E5F83DA00F286 * ___U3CU3E9__7_4_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9__7_2_3)); }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * get_U3CU3E9__7_2_3() const { return ___U3CU3E9__7_2_3; }
	inline Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A ** get_address_of_U3CU3E9__7_2_3() { return &___U3CU3E9__7_2_3; }
	inline void set_U3CU3E9__7_2_3(Func_2_t71DF9E51B60FABFD93BED53C989878A1393D1D6A * value)
	{
		___U3CU3E9__7_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9__7_3_4)); }
	inline Func_2_t848F3E985184C424F49CF3DF654C7C90ED8BEF99 * get_U3CU3E9__7_3_4() const { return ___U3CU3E9__7_3_4; }
	inline Func_2_t848F3E985184C424F49CF3DF654C7C90ED8BEF99 ** get_address_of_U3CU3E9__7_3_4() { return &___U3CU3E9__7_3_4; }
	inline void set_U3CU3E9__7_3_4(Func_2_t848F3E985184C424F49CF3DF654C7C90ED8BEF99 * value)
	{
		___U3CU3E9__7_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_3_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields, ___U3CU3E9__7_4_5)); }
	inline Func_2_t5BE192E0FFB0C400FD99B3C4405E5F83DA00F286 * get_U3CU3E9__7_4_5() const { return ___U3CU3E9__7_4_5; }
	inline Func_2_t5BE192E0FFB0C400FD99B3C4405E5F83DA00F286 ** get_address_of_U3CU3E9__7_4_5() { return &___U3CU3E9__7_4_5; }
	inline void set_U3CU3E9__7_4_5(Func_2_t5BE192E0FFB0C400FD99B3C4405E5F83DA00F286 * value)
	{
		___U3CU3E9__7_4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_4_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_H
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
#ifndef BYTE_T2E41D488C0054D9830735685E008F0E399917B6D_H
#define BYTE_T2E41D488C0054D9830735685E008F0E399917B6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Byte
struct  Byte_t2E41D488C0054D9830735685E008F0E399917B6D  : public Any_1_tD58EB098318C0989343A210A2922F7847EA26BEF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T2E41D488C0054D9830735685E008F0E399917B6D_H
#ifndef CHAR_T26007D5CAE1892F7BC6CABC704C52E4235EFD5FB_H
#define CHAR_T26007D5CAE1892F7BC6CABC704C52E4235EFD5FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Char
struct  Char_t26007D5CAE1892F7BC6CABC704C52E4235EFD5FB  : public Any_1_tCC2D3DE071D281B3AC6C93C3F071235DF6ED77B7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T26007D5CAE1892F7BC6CABC704C52E4235EFD5FB_H
#ifndef INT16_T69548ADD37D5CE60DBC69EC0C1BD929C4BF15658_H
#define INT16_T69548ADD37D5CE60DBC69EC0C1BD929C4BF15658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Int16
struct  Int16_t69548ADD37D5CE60DBC69EC0C1BD929C4BF15658  : public Any_1_tC7A261181201BD4982E10CE0C26920A812FE928D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T69548ADD37D5CE60DBC69EC0C1BD929C4BF15658_H
#ifndef INT32_T35815143D26324A037EC7E012E50E1E14AFAC0AB_H
#define INT32_T35815143D26324A037EC7E012E50E1E14AFAC0AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Int32
struct  Int32_t35815143D26324A037EC7E012E50E1E14AFAC0AB  : public Any_1_t52BA114BA8791B9792269515A820F5AA2752F8B3
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T35815143D26324A037EC7E012E50E1E14AFAC0AB_H
#ifndef INT64_TAC0D9B75FCCCA4A078438FEC5AAE0AEC869880A4_H
#define INT64_TAC0D9B75FCCCA4A078438FEC5AAE0AEC869880A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.Int64
struct  Int64_tAC0D9B75FCCCA4A078438FEC5AAE0AEC869880A4  : public Any_1_t9F822C32B6DDEB514D5E4D163E4ED28BD738C850
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_TAC0D9B75FCCCA4A078438FEC5AAE0AEC869880A4_H
#ifndef SBYTE_T233883277289B7CEDFF26F47DB04699E12BCE143_H
#define SBYTE_T233883277289B7CEDFF26F47DB04699E12BCE143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.SByte
struct  SByte_t233883277289B7CEDFF26F47DB04699E12BCE143  : public Any_1_tBD1B738846D2B35652B0C6BA44947B32EE556FB1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T233883277289B7CEDFF26F47DB04699E12BCE143_H
#ifndef UINT16_TC6B8692325A07D928C069D3D3D708301A5C2E910_H
#define UINT16_TC6B8692325A07D928C069D3D3D708301A5C2E910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.UInt16
struct  UInt16_tC6B8692325A07D928C069D3D3D708301A5C2E910  : public Any_1_tF85A36F47B93FBF16483B1D0CB8E381DE3719AE6
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TC6B8692325A07D928C069D3D3D708301A5C2E910_H
#ifndef UINT32_T6AC795B1D5E07F8F30B433F34189525BDFB96B70_H
#define UINT32_T6AC795B1D5E07F8F30B433F34189525BDFB96B70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Cast.UInt32
struct  UInt32_t6AC795B1D5E07F8F30B433F34189525BDFB96B70  : public Any_1_t87F63FB4A75B0D433A69F4B132C762ABA619912C
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T6AC795B1D5E07F8F30B433F34189525BDFB96B70_H
#ifndef TEMPLATEFORMATEXCEPTION_TCBD9F3BFA699018F9E493C40667C214B8EB0BF67_H
#define TEMPLATEFORMATEXCEPTION_TCBD9F3BFA699018F9E493C40667C214B8EB0BF67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.TemplateFormatException
struct  TemplateFormatException_tCBD9F3BFA699018F9E493C40667C214B8EB0BF67  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEMPLATEFORMATEXCEPTION_TCBD9F3BFA699018F9E493C40667C214B8EB0BF67_H
#ifndef TOKENTYPE_T78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0_H
#define TOKENTYPE_T78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.TokenType
struct  TokenType_t78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0 
{
public:
	// System.Int32 XLua.TemplateEngine.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0, ___value___2)); }
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
#endif // TOKENTYPE_T78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0_H
#ifndef CHUNK_TCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC_H
#define CHUNK_TCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.TemplateEngine.Chunk
struct  Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC  : public RuntimeObject
{
public:
	// XLua.TemplateEngine.TokenType XLua.TemplateEngine.Chunk::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// System.String XLua.TemplateEngine.Chunk::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC, ___U3CTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUNK_TCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5900 = { sizeof (UICameraWrap_t9650209D6916170EB96B976169EF8A00185D1548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5901 = { sizeof (UIEventListenerWrap_tB0393B72F83B3A885394902E18ABD9B82C423BAB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5902 = { sizeof (UIGridWrap_tB990A7F657541BD2E79D22AA6415A6BE5F06E5E9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5903 = { sizeof (UIInputWrap_t8F93E853692F9E6E387FE41689366EB292FDFE54), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5904 = { sizeof (UILabelWrap_tE379CB18CE5FC43E09801C0E96115DAE081F22A4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5905 = { sizeof (UIPanelWrap_t71C152FEC8349FD72EDB8182951B2A6F9677EBF1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5906 = { sizeof (UIProgressBarWrap_t43B07B1823EDA367DB2A0066D18E503CBD056217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5907 = { sizeof (UIRectAnchorPointWrap_t2D3DC0EB6A133936E5A30F2F9F9E31ACF7F69AED), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5908 = { sizeof (UIRectWrap_t6FB447ADB841352DC66E3E4179FEBF79395F288E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5909 = { sizeof (UIRootWrap_t4F9822E751564FBA124F77FC551025277970E2A5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5910 = { sizeof (UIScrollViewWrap_tF6157CBF43DC57C3EC30DEB3C98225EE1888F165), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5911 = { sizeof (UIShandowPlaneWrap_tF08FBCEE1D08D267B18096A5E9AFF526419DAEBD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5912 = { sizeof (UISliderWrap_tD49A0FB215700159BA7A570919AA1A196BDCE00A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5913 = { sizeof (UISpriteAnimationWrap_t4364AD9FA038412C24D2F8449CDE22322EF11560), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5914 = { sizeof (UISpriteDataWrap_tFA1AF9BA11535901C3C898DAA8B507B7691C72CD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5915 = { sizeof (UISpriteWrap_t4171B930B9CC4C6F4532607BDABDF0CBEDF5294D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5916 = { sizeof (UISutureTextureDataWrap_tD20F8F1E8B1BEDBCEDDFA18C926471E509070893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5917 = { sizeof (UISutureTextureWrap_t9EEFA605E06A0B04F16A7B53162CB9FD9A0DD6E2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5918 = { sizeof (UITableWrap_t0ADF95AF71110D872CFD88B48BDA86959284A298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5919 = { sizeof (UITextureWrap_t6F56B246E1218BB00563E2D1B97C400BC71B5DA1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5920 = { sizeof (UIToggleWrap_tC4D74128A62ADEB4E04C81FB82EDD3731DCB7AB2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5921 = { sizeof (UITweenerWrap_tD47B82C4E701DD249E5F0A4C287435A42DE96DE4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5922 = { sizeof (UIWidgetContainerWrap_tCC7C3AE9728E5CB245747BC6353D47FF5E0A5DFE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5923 = { sizeof (UIWidgetWrap_t972BFACC568A4B847F790D6DB9C16BF17874C478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5924 = { sizeof (UnityEngineAnimationClipWrap_t073F4304A5D63D210481C2EEFFC15C62F6316691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5925 = { sizeof (UnityEngineAnimationCurveWrap_tC66ADE29301B2BA4273E3EB2C2B1BD52EB8B5C8B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5926 = { sizeof (UnityEngineAnimatorWrap_t4E6C989BE4B7EDFC6F6215164F0CDB417969054C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5927 = { sizeof (UnityEngineAsyncOperationWrap_tCA2290627D56C0F8605F1A530A2C91280F3EC012), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5928 = { sizeof (UnityEngineBehaviourWrap_tB61302BFC257C0604F60FF74354D0265810D3464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5929 = { sizeof (UnityEngineBoundsWrap_t33DAC5849EEDCB51364A417DAD75FDBAC140F022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5930 = { sizeof (UnityEngineBoxColliderWrap_t9F83F44BCE7A6952F10771A76C064109DA11EBEA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5931 = { sizeof (UnityEngineCameraGateFitParametersWrap_t8505F29654E29EC764F3E0C877A3F15D77F34DAC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5932 = { sizeof (UnityEngineCameraWrap_tEF0F8D84ADB258DA3E475BF07EFF48A986742D8F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5933 = { sizeof (UnityEngineColliderWrap_tBA7AD5997CFAA3CDD02ADA897DD2CE107A4CB41B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5934 = { sizeof (UnityEngineColorWrap_t60F00C0253D9C193CAF5083599653D86C2E52A26), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5935 = { sizeof (UnityEngineComponentWrap_t0CF90DCB6ACA61A599FA4E7941623E773BED4A6A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5936 = { sizeof (UnityEngineDebugWrap_tD351B314C2A328B1DEC5CD2CF18FEB4AA19AE793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5937 = { sizeof (UnityEngineGameObjectWrap_tA62B97A0F54068BDAAD860468D4FD944F0652AB5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5938 = { sizeof (UnityEngineGonbestMagicCubeAppAssetFileInfoWrap_tE03123113B1037EEED1844F723294406DEBEFDC6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5939 = { sizeof (UnityEngineGonbestMagicCubeAppManagerWrap_tB00097D9258C874D3E0FB795F4642D5EFD7A4D48), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5940 = { sizeof (UnityEngineGonbestMagicCubeAppPersistDataWrap_t3CA2BE994FD0041F8AADB261EB6F7E10CD7C2068), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5941 = { sizeof (UnityEngineGonbestMagicCubeAssemblyUtilsWrap_tC1322A2090D0652C1EBBC65F6DF1696A99A9DEB0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5942 = { sizeof (UnityEngineGonbestMagicCubeCoroutinePoolWrap_t6FB14B12B9F7DDF6A37B81FEB80819EA60D44B10), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5943 = { sizeof (UnityEngineGonbestMagicCubeEventConstDefineWrap_t61AEBFEF6A12882B7F07E820B315FF004E2DEDF3), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5944 = { sizeof (UnityEngineGonbestMagicCubeFLanguageWrap_tFCA787D9527ACBBD62D743249B2B3D991541F119), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5945 = { sizeof (UnityEngineGonbestMagicCubeFLogUploaderWrap_t6E883C6FBF9A4E6A70BEF3A2F8DA6E60C2ACAEDF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5946 = { sizeof (UnityEngineGonbestMagicCubeMachineUUIDWrap_t553236984FD41AF370A3DD58B44869A7FE33C8F4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5947 = { sizeof (UnityEngineGonbestMagicCubeMD5UtilsWrap_t12AFF4ED509EA5FB3B88CC55840FCD7693AC9B8B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5948 = { sizeof (UnityEngineGonbestMagicCubePathUtilsWrap_t4B835E1201E356967B231027C97F17847B34F229), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5949 = { sizeof (UnityEngineInputWrap_t26BE34EEEF17292BF8CB7608DAD2E27EECFF366D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5950 = { sizeof (UnityEngineKeyframeWrap_t3E5C745AFAD1F4ED9FDB5FE29FAE2834C1EB6479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5951 = { sizeof (UnityEngineLightWrap_t894CA5E0AD1273DAD2755AC51CF80FDAAA6398D2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5952 = { sizeof (UnityEngineMaterialWrap_tD86432BD140845294B5ACFFE6CE2ECAFEFFF6111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5953 = { sizeof (UnityEngineMathfWrap_tF2D6D5F261CDCF4CDCC0D29D7DA5A88B1A37AADE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5954 = { sizeof (UnityEngineMonoBehaviourWrap_t0D155B4A633AA5277454348249744B39BAEE7F04), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5955 = { sizeof (UnityEngineNetworkingUnityWebRequestAsyncOperationWrap_t67A3C8D1BEEC5B77B1C3E0BD8C9BCCABA2939359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5956 = { sizeof (UnityEngineNetworkingUnityWebRequestWrap_t42335B8824CCB7364ECB2E834F0AF57431BA905F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5957 = { sizeof (UnityEngineObjectWrap_t9FC3B98CF6CEA9EE06B507674F7BF5D1A56628DE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5958 = { sizeof (UnityEnginePhysicsWrap_t76CF613C4E0B2E40C8779F2F4B9F15B91804A7DC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5959 = { sizeof (UnityEnginePlayablesPlayableAssetWrap_t05993637ED575DCE55EFE6B1D0448EB88551A003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5960 = { sizeof (UnityEnginePlayablesPlayableDirectorWrap_t9E49E9B58CF70FEDE770FF9F4B2882A03A28C572), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5961 = { sizeof (UnityEnginePlayerPrefsWrap_t323F53AB70EABAD49A95EB4D063E2B84F2BFE150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5962 = { sizeof (UnityEngineQuaternionWrap_tB22330AD7277592A55A78C5061DB114A6E0D012E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5963 = { sizeof (UnityEngineRay2DWrap_tA59B2F10442373E35D9954C2A29CB43B7B177534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5964 = { sizeof (UnityEngineRaycastHitWrap_t26493A9BE4B0CF12C74ABC6EDEEA3166E3A15E8D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5965 = { sizeof (UnityEngineRayWrap_t7D165C08CDF466852171E97421DDF7A1BC1B1DAD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5966 = { sizeof (UnityEngineRectWrap_t0D1D5AF02379D8314D830B6F6F1DD0E8D937C33A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5967 = { sizeof (UnityEngineRendererWrap_tAB8F6F97820D304D5C4ADE93C999A7DFF1354225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5968 = { sizeof (UnityEngineRenderingCommandBufferWrap_tE6B7993564E6EF3D5D730FE20496CB16336CED72), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5969 = { sizeof (UnityEngineRenderingRenderTargetIdentifierWrap_t798C3A19691D7503D077C51358E9CB85058C17E8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5970 = { sizeof (UnityEngineRenderTextureWrap_t85F18556E5B8CCF2FEBD915CF8102D6160712302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5971 = { sizeof (UnityEngineResourcesWrap_t770C02591AEA612F108EEB4F657A54A10C405B42), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5972 = { sizeof (UnityEngineScreenWrap_t066413934A6896FD7A2C2180EF45B4CE5F27A778), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5973 = { sizeof (UnityEngineShaderWrap_t14284C0318D1150ED543A2A7D6F7DF0C09619C8E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5974 = { sizeof (UnityEngineSystemInfoWrap_t017A90AEB7BE114E82328508F5A3FA71789AD9C6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5975 = { sizeof (UnityEngineTextAssetWrap_t2F21CBD35916DB653F93A6A1C555E4F80EAA7EF3), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5976 = { sizeof (UnityEngineTextureWrap_tCF9F440F28A84C55B160D312BF95B03DE59F9AE8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5977 = { sizeof (UnityEngineTimeWrap_t0C6B60D19F20BB75B270539DF52A274BF4532829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5978 = { sizeof (UnityEngineTransformWrap_t3F583E71DE579E761870193A8B3CEF4778A19F49), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5979 = { sizeof (UnityEngineVector2Wrap_tAA41CF47425BC7EFE11FCA5BC29C76F1259E2027), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5980 = { sizeof (UnityEngineVector3Wrap_t617151FAA14C4592FCC4A9876A6BDB095641280E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5981 = { sizeof (UnityEngineVector4Wrap_tB975E077B1F76DBC85E4CC1611E9941DC208F836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5982 = { sizeof (UnityEngineWWWFormWrap_tDED05888B8FBEF67E2E71C21A990623735EADF2C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5983 = { sizeof (XLua_Gen_Initer_Register___t6A670E147D21CD3E275F66834C4A05BE36E318E1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5984 = { sizeof (U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E), -1, sizeof(U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5984[1] = 
{
	U3CU3Ec_tDB1C5FD4AA79F2D3E85075211D235488C6DBE06E_StaticFields::get_offset_of_U3CU3E9_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5985 = { sizeof (TokenType_t78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5985[4] = 
{
	TokenType_t78CDE6C1FB95D0F26F9376F5F1C59AE2B9EB58C0::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5986 = { sizeof (Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5986[2] = 
{
	Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC::get_offset_of_U3CTypeU3Ek__BackingField_0(),
	Chunk_tCC78B28CFB7405DAD6B68161D7D56B19A9D1FCAC::get_offset_of_U3CTextU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5987 = { sizeof (TemplateFormatException_tCBD9F3BFA699018F9E493C40667C214B8EB0BF67), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5988 = { sizeof (Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E), -1, sizeof(Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5988[1] = 
{
	Parser_t8B20E7A580949ECD6481AE9046B665E15952D34E_StaticFields::get_offset_of_U3CRegexStringU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5989 = { sizeof (U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6), -1, sizeof(U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5989[6] = 
{
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9__7_0_1(),
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9__7_1_2(),
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9__7_2_3(),
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9__7_3_4(),
	U3CU3Ec_tADA3F243D111FEEEC140284DE0CF56FCB7B2DFD6_StaticFields::get_offset_of_U3CU3E9__7_4_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5990 = { sizeof (LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04), -1, sizeof(LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5990[2] = 
{
	LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields::get_offset_of_templateCompileFunction_0(),
	LuaTemplate_t7A2DA9338A12C1E40AE91696CAC61B9814613A04_StaticFields::get_offset_of_templateExecuteFunction_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5991 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5991[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5992 = { sizeof (Byte_t2E41D488C0054D9830735685E008F0E399917B6D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5993 = { sizeof (SByte_t233883277289B7CEDFF26F47DB04699E12BCE143), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5994 = { sizeof (Char_t26007D5CAE1892F7BC6CABC704C52E4235EFD5FB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5995 = { sizeof (Int16_t69548ADD37D5CE60DBC69EC0C1BD929C4BF15658), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5996 = { sizeof (UInt16_tC6B8692325A07D928C069D3D3D708301A5C2E910), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5997 = { sizeof (Int32_t35815143D26324A037EC7E012E50E1E14AFAC0AB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5998 = { sizeof (UInt32_t6AC795B1D5E07F8F30B433F34189525BDFB96B70), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5999 = { sizeof (Int64_tAC0D9B75FCCCA4A078438FEC5AAE0AEC869880A4), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
