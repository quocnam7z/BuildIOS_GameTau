#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// UnityEngine.Gonbest.MagicCube.IonicZlib.DeflateManager
struct DeflateManager_tECC6400D1EA9D894172689C4755DA5216155879A;
// UnityEngine.Gonbest.MagicCube.IonicZlib.InflateManager
struct InflateManager_t29595B96D6433209E33AF2024176BD5F856C79BC;

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
#ifndef CRC32_TBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B_H
#define CRC32_TBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32
struct  CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32::crc32Table
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___crc32Table_3;
	// System.UInt32 UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32::_register
	uint32_t ____register_4;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B, ___crc32Table_3)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((&___crc32Table_3), value);
	}

	inline static int32_t get_offset_of__register_4() { return static_cast<int32_t>(offsetof(CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B, ____register_4)); }
	inline uint32_t get__register_4() const { return ____register_4; }
	inline uint32_t* get_address_of__register_4() { return &____register_4; }
	inline void set__register_4(uint32_t value)
	{
		____register_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32_TBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B_H
#ifndef ZLIBEXCEPTION_T84BE8448017382C623BB47EC74548E6EC2FAEC5A_H
#define ZLIBEXCEPTION_T84BE8448017382C623BB47EC74548E6EC2FAEC5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Decompression.Zlib.ZlibException
struct  ZlibException_t84BE8448017382C623BB47EC74548E6EC2FAEC5A  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T84BE8448017382C623BB47EC74548E6EC2FAEC5A_H
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
#ifndef ZLIBEXCEPTION_T3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C_H
#define ZLIBEXCEPTION_T3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibException
struct  ZlibException_t3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C_H
#ifndef COMPRESSIONLEVEL_T17DF9FF8EBE154B536441751007C66C06D19E278_H
#define COMPRESSIONLEVEL_T17DF9FF8EBE154B536441751007C66C06D19E278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionLevel
struct  CompressionLevel_t17DF9FF8EBE154B536441751007C66C06D19E278 
{
public:
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t17DF9FF8EBE154B536441751007C66C06D19E278, ___value___2)); }
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
#endif // COMPRESSIONLEVEL_T17DF9FF8EBE154B536441751007C66C06D19E278_H
#ifndef COMPRESSIONSTRATEGY_T78454102F26410B142D9C2E3DEB7A699991A44BD_H
#define COMPRESSIONSTRATEGY_T78454102F26410B142D9C2E3DEB7A699991A44BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionStrategy
struct  CompressionStrategy_t78454102F26410B142D9C2E3DEB7A699991A44BD 
{
public:
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_t78454102F26410B142D9C2E3DEB7A699991A44BD, ___value___2)); }
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
#endif // COMPRESSIONSTRATEGY_T78454102F26410B142D9C2E3DEB7A699991A44BD_H
#ifndef ZLIBCODEC_T866EB7319ADAAD1B396010CA2F30C06712D69BEA_H
#define ZLIBCODEC_T866EB7319ADAAD1B396010CA2F30C06712D69BEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec
struct  ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___InputBuffer_0;
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OutputBuffer_4;
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::Message
	String_t* ___Message_8;
	// UnityEngine.Gonbest.MagicCube.IonicZlib.DeflateManager UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::dstate
	DeflateManager_tECC6400D1EA9D894172689C4755DA5216155879A * ___dstate_9;
	// UnityEngine.Gonbest.MagicCube.IonicZlib.InflateManager UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::istate
	InflateManager_t29595B96D6433209E33AF2024176BD5F856C79BC * ___istate_10;
	// System.UInt32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionLevel UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// UnityEngine.Gonbest.MagicCube.IonicZlib.CompressionStrategy UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___InputBuffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputBuffer_0), value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___OutputBuffer_4), value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((&___Message_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___dstate_9)); }
	inline DeflateManager_tECC6400D1EA9D894172689C4755DA5216155879A * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_tECC6400D1EA9D894172689C4755DA5216155879A ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_tECC6400D1EA9D894172689C4755DA5216155879A * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___istate_10)); }
	inline InflateManager_t29595B96D6433209E33AF2024176BD5F856C79BC * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t29595B96D6433209E33AF2024176BD5F856C79BC ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t29595B96D6433209E33AF2024176BD5F856C79BC * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBCODEC_T866EB7319ADAAD1B396010CA2F30C06712D69BEA_H



extern "C" void DelegatePInvokeWrapper_EtwEnableCallback_tE661421A2F149DA151D5A519A09E09448E396A4A();
extern const RuntimeType EtwEnableCallback_tE661421A2F149DA151D5A519A09E09448E396A4A_0_0_0;
extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0;
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0;
extern "C" void UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579();
extern const RuntimeType Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0;
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0;
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0;
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0;
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0;
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0;
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0;
extern "C" void DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A();
extern const RuntimeType InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51();
extern const RuntimeType WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0;
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0;
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0;
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0;
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0;
extern "C" void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Delegate_t_0_0_0;
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0;
extern "C" void DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_0_0_0;
extern "C" void EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_0_0_0;
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0;
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0;
extern "C" void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Exception_t_0_0_0;
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0;
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0;
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0;
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0;
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0;
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0;
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0;
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0;
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0;
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48();
extern const RuntimeType ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C();
extern const RuntimeType WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0;
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0;
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0;
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0;
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0;
extern "C" void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MulticastDelegate_t_0_0_0;
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0;
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0;
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0;
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0;
extern "C" void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Assembly_t_0_0_0;
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0;
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0;
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0;
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0;
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0;
extern "C" void InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_0_0_0;
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0;
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0;
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0;
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0;
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0;
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0;
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0;
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0;
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0;
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0;
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0;
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0;
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0;
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0;
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0;
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0;
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F();
extern const RuntimeType CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0;
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0;
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0;
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0;
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0;
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0;
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0;
extern "C" void DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A();
extern const RuntimeType SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0;
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0;
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0;
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0;
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0;
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0;
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF();
extern const RuntimeType ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0;
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0;
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0;
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0;
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0;
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0;
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0;
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0;
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0;
extern "C" void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_0_0_0;
extern "C" void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_0_0_0;
extern "C" void NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_0_0_0;
extern "C" void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Position_t089976E4BEB3D345DA28CFA95786EE065063E228_0_0_0;
extern "C" void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_0_0_0;
extern "C" void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_0_0_0;
extern "C" void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_0_0_0;
extern "C" void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_0_0_0;
extern "C" void DelegatePInvokeWrapper_HashCodeOfStringDelegate_tC8B9E43DCB47789C0CCA2921BE18838AB95B323E();
extern const RuntimeType HashCodeOfStringDelegate_tC8B9E43DCB47789C0CCA2921BE18838AB95B323E_0_0_0;
extern "C" void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_0_0_0;
extern "C" void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_0_0_0;
extern "C" void DelegatePInvokeWrapper_HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8();
extern const RuntimeType HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8_0_0_0;
extern "C" void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_0_0_0;
extern "C" void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_0_0_0;
extern "C" void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_0_0_0;
extern "C" void DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506();
extern const RuntimeType CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506_0_0_0;
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9();
extern const RuntimeType unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1();
extern const RuntimeType unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB();
extern const RuntimeType unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7();
extern const RuntimeType unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B();
extern const RuntimeType unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB();
extern const RuntimeType unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7();
extern const RuntimeType unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2();
extern const RuntimeType unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D();
extern const RuntimeType unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2();
extern const RuntimeType unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0();
extern const RuntimeType unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14();
extern const RuntimeType unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D();
extern const RuntimeType unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D();
extern const RuntimeType unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2();
extern const RuntimeType unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6();
extern const RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937();
extern const RuntimeType unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE();
extern const RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A();
extern const RuntimeType unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B();
extern const RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C();
extern const RuntimeType unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856();
extern const RuntimeType unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C();
extern const RuntimeType unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF();
extern const RuntimeType unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3();
extern const RuntimeType unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09();
extern const RuntimeType unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986();
extern const RuntimeType unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5();
extern const RuntimeType unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D();
extern const RuntimeType unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6();
extern const RuntimeType unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0;
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740();
extern const RuntimeType unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5();
extern const RuntimeType unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA();
extern const RuntimeType unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6();
extern const RuntimeType unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A();
extern const RuntimeType unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0;
extern "C" void DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9();
extern const RuntimeType unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4();
extern const RuntimeType ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397();
extern const RuntimeType WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0();
extern const RuntimeType UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0_0_0_0;
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0;
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0;
extern "C" void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE();
extern const RuntimeType ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49();
extern const RuntimeType WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49_0_0_0;
extern "C" void DelegatePInvokeWrapper_HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E();
extern const RuntimeType HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E_0_0_0;
extern "C" void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_0_0_0;
extern "C" void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_0_0_0;
extern "C" void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_0_0_0;
extern "C" void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_0_0_0;
extern "C" void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_0_0_0;
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0;
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0;
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778();
extern const RuntimeType LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00();
extern const RuntimeType LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0;
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0;
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0;
extern "C" void CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_0_0_0;
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0;
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161();
extern const RuntimeType StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90();
extern const RuntimeType DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4();
extern const RuntimeType UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0;
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8();
extern const RuntimeType UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_0_0_0;
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_0_0_0;
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_0_0_0;
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0;
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0;
extern "C" void Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_0_0_0;
extern "C" void LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_0_0_0;
extern "C" void LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_0_0_0;
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0;
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0;
extern "C" void DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3();
extern const RuntimeType CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0;
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0;
extern "C" void ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_0_0_0;
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0;
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0;
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_0_0_0;
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0;
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0;
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0;
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0;
extern "C" void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_0_0_0;
extern "C" void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_0_0_0;
extern "C" void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_0_0_0;
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0;
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0;
extern "C" void CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C();
extern const RuntimeType FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0;
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0;
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_0_0_0;
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_0_0_0;
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_0_0_0;
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_0_0_0;
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_0_0_0;
extern "C" void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB();
extern const RuntimeType PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801();
extern const RuntimeType PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926();
extern const RuntimeType AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0;
extern "C" void DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D();
extern const RuntimeType ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_0_0_0;
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100();
extern const RuntimeType WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0;
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8();
extern const RuntimeType SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0;
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0;
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0;
extern "C" void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_0_0_0;
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0;
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0;
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_0_0_0;
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_0_0_0;
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_0_0_0;
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_0_0_0;
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_0_0_0;
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_0_0_0;
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_0_0_0;
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_0_0_0;
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_0_0_0;
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353();
extern const RuntimeType OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353_0_0_0;
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0;
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E();
extern const RuntimeType OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0;
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0;
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0;
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0;
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0;
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0;
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0;
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0;
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0;
extern "C" void DelegatePInvokeWrapper_NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5();
extern const RuntimeType NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5_0_0_0;
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0;
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0;
extern "C" void ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_0_0_0;
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0;
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE();
extern const RuntimeType WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0;
extern "C" void DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F();
extern const RuntimeType SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0;
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F();
extern const RuntimeType UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0;
extern "C" void VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_0_0_0;
extern "C" void VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_0_0_0;
extern "C" void VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t2188F77074FDD70B138EDC8E93189A3F34EDCEAC();
extern const RuntimeType CompressFunc_t2188F77074FDD70B138EDC8E93189A3F34EDCEAC_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t18C44B42316A965E271976F3165DC8F1157695ED();
extern const RuntimeType CompressFunc_t18C44B42316A965E271976F3165DC8F1157695ED_0_0_0;
extern "C" void DelegatePInvokeWrapper_LoggerCallBackDelegate_t19ECD361A776A68019EAEE005255464F400BF014();
extern const RuntimeType LoggerCallBackDelegate_t19ECD361A776A68019EAEE005255464F400BF014_0_0_0;
extern const RuntimeType ZlibException_t84BE8448017382C623BB47EC74548E6EC2FAEC5A_0_0_0;
extern const RuntimeType CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B_0_0_0;
extern const RuntimeType ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA_0_0_0;
extern const RuntimeType ZlibException_t3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C_0_0_0;
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_0_0_0;
extern "C" void DelegatePInvokeWrapper_DelegateCallback_t4514D66336848A4AF84185308882C2B7F80A4EAF();
extern const RuntimeType DelegateCallback_t4514D66336848A4AF84185308882C2B7F80A4EAF_0_0_0;
extern "C" void DelegatePInvokeWrapper_Callback_t0764CED98EC1C33CAE93B9E3CDC263CEAAEAE05B();
extern const RuntimeType Callback_t0764CED98EC1C33CAE93B9E3CDC263CEAAEAE05B_0_0_0;
extern "C" void DelegatePInvokeWrapper_DragBeginEventHandler_tA5ACA524FE7677C56E18670DF781881024A5A60F();
extern const RuntimeType DragBeginEventHandler_tA5ACA524FE7677C56E18670DF781881024A5A60F_0_0_0;
extern "C" void DelegatePInvokeWrapper_DragEndEventHandler_t4EFA20609E41FD907DED4FED74EB7B0720BBF521();
extern const RuntimeType DragEndEventHandler_t4EFA20609E41FD907DED4FED74EB7B0720BBF521_0_0_0;
extern "C" void DelegatePInvokeWrapper_DragMoveEventHandler_tE1C6C31289887DB94E13E5F12E0521843DCC1160();
extern const RuntimeType DragMoveEventHandler_tE1C6C31289887DB94E13E5F12E0521843DCC1160_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerDownEventHandler_tDC8C3948F1A5D72FDC89774CB4EFF20882B02358();
extern const RuntimeType FingerDownEventHandler_tDC8C3948F1A5D72FDC89774CB4EFF20882B02358_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerDragBeginEventHandler_t12028033EB1C8B82C131CB52A364550CDB24255D();
extern const RuntimeType FingerDragBeginEventHandler_t12028033EB1C8B82C131CB52A364550CDB24255D_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerDragEndEventHandler_tAAD963181AD3BA4513689D82DB5DFE5348DEB5A1();
extern const RuntimeType FingerDragEndEventHandler_tAAD963181AD3BA4513689D82DB5DFE5348DEB5A1_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerDragMoveEventHandler_t4EBC0862F6FD0A884754F00FF41DBEE80938349A();
extern const RuntimeType FingerDragMoveEventHandler_t4EBC0862F6FD0A884754F00FF41DBEE80938349A_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerLongPressEventHandler_t7684F71E440B6578E687681489D4B0784DC4D86A();
extern const RuntimeType FingerLongPressEventHandler_t7684F71E440B6578E687681489D4B0784DC4D86A_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerMoveEventHandler_t3F21C8B803B07D174401C6CDBE0BAC868ECFCA80();
extern const RuntimeType FingerMoveEventHandler_t3F21C8B803B07D174401C6CDBE0BAC868ECFCA80_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerStationaryBeginEventHandler_t7C731CA89286F5738A0E4D48E652010DA8554D55();
extern const RuntimeType FingerStationaryBeginEventHandler_t7C731CA89286F5738A0E4D48E652010DA8554D55_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerStationaryEndEventHandler_t7CA18B48B59BA7AD23990A84AC5E91F2886DDF67();
extern const RuntimeType FingerStationaryEndEventHandler_t7CA18B48B59BA7AD23990A84AC5E91F2886DDF67_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerStationaryEventHandler_t8E80C02AEEEE7C9774995370D8DDD86EE693BF42();
extern const RuntimeType FingerStationaryEventHandler_t8E80C02AEEEE7C9774995370D8DDD86EE693BF42_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerSwipeEventHandler_tC6CB95009D1D61C5E93F9AB48F9FA23D782417C3();
extern const RuntimeType FingerSwipeEventHandler_tC6CB95009D1D61C5E93F9AB48F9FA23D782417C3_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerTapEventHandler_t78D73BEE0FAAD7ECAA365367105DA68C8DFC2235();
extern const RuntimeType FingerTapEventHandler_t78D73BEE0FAAD7ECAA365367105DA68C8DFC2235_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerUpEventHandler_t8B4E064FC1ECA993EEDB82028BC451D639DD1363();
extern const RuntimeType FingerUpEventHandler_t8B4E064FC1ECA993EEDB82028BC451D639DD1363_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingersUpdatedEventDelegate_t221A9795598310DA5D9A1C69ADC7F5420FDE8D18();
extern const RuntimeType FingersUpdatedEventDelegate_t221A9795598310DA5D9A1C69ADC7F5420FDE8D18_0_0_0;
extern "C" void DelegatePInvokeWrapper_GlobalTouchFilterDelegate_tBD32CF3437304263C0FA1AB222644B1C378D749B();
extern const RuntimeType GlobalTouchFilterDelegate_tBD32CF3437304263C0FA1AB222644B1C378D749B_0_0_0;
extern "C" void DelegatePInvokeWrapper_LongPressEventHandler_tCE80DC18402B36827DDD24511A9004445F45C639();
extern const RuntimeType LongPressEventHandler_tCE80DC18402B36827DDD24511A9004445F45C639_0_0_0;
extern "C" void DelegatePInvokeWrapper_PinchEventHandler_t291170B8B7AAFEDAC22F657225D98916AC7953CC();
extern const RuntimeType PinchEventHandler_t291170B8B7AAFEDAC22F657225D98916AC7953CC_0_0_0;
extern "C" void DelegatePInvokeWrapper_PinchMoveEventHandler_tE6DE66A4C7CD3DD39DACFF0EE3A7C910EF014FB1();
extern const RuntimeType PinchMoveEventHandler_tE6DE66A4C7CD3DD39DACFF0EE3A7C910EF014FB1_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationBeginEventHandler_t3C62F5E1BA866AD17AF87E2E997D6972A4A16F2B();
extern const RuntimeType RotationBeginEventHandler_t3C62F5E1BA866AD17AF87E2E997D6972A4A16F2B_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationEndEventHandler_tDC6D065DC86BF6F7B26ACFAE4D38E76D9E5C5F0D();
extern const RuntimeType RotationEndEventHandler_tDC6D065DC86BF6F7B26ACFAE4D38E76D9E5C5F0D_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationMoveEventHandler_tC31B02FD6C2AB2A111B9A848EC15E2B42104B681();
extern const RuntimeType RotationMoveEventHandler_tC31B02FD6C2AB2A111B9A848EC15E2B42104B681_0_0_0;
extern "C" void DelegatePInvokeWrapper_SwipeEventHandler_t20A0D10D3C4D472713CBE2E93EB3ABC8DF139A24();
extern const RuntimeType SwipeEventHandler_t20A0D10D3C4D472713CBE2E93EB3ABC8DF139A24_0_0_0;
extern "C" void DelegatePInvokeWrapper_TapEventHandler_t4DAD6D944D964FA49920954EDF2C8E2B91B659E6();
extern const RuntimeType TapEventHandler_t4DAD6D944D964FA49920954EDF2C8E2B91B659E6_0_0_0;
extern "C" void DelegatePInvokeWrapper_LoadFunction_t33525D2AA48D6AEE612675DA206D48C2E00BC9EB();
extern const RuntimeType LoadFunction_t33525D2AA48D6AEE612675DA206D48C2E00BC9EB_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnLocalizeNotification_tB0D64457D306C943BF95C0C40DE75A0686BD1DE2();
extern const RuntimeType OnLocalizeNotification_tB0D64457D306C943BF95C0C40DE75A0686BD1DE2_0_0_0;
extern "C" void RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_0_0_0;
extern "C" void Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_0_0_0;
extern "C" void DelegatePInvokeWrapper_DelegateAddPoint_t4C7E5256C63E15DB5CD291AFB685D243774E8694();
extern const RuntimeType DelegateAddPoint_t4C7E5256C63E15DB5CD291AFB685D243774E8694_0_0_0;
extern "C" void DelegatePInvokeWrapper_DelegateAssert_t324B2585BB8699956B7AE652ACFFD2ACF7983B5A();
extern const RuntimeType DelegateAssert_t324B2585BB8699956B7AE652ACFFD2ACF7983B5A_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnFinished_t85754675F5DFBE48EE5ABD0F01B5FBC3D965A52F();
extern const RuntimeType OnFinished_t85754675F5DFBE48EE5ABD0F01B5FBC3D965A52F_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnFinished_t998EC8BDD1FE3DA6CD7DF78A9B845F5BF15D097D();
extern const RuntimeType OnFinished_t998EC8BDD1FE3DA6CD7DF78A9B845F5BF15D097D_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnLuaDataHandler_tDA466776F80351E010D3E3510620639B2312B4EB();
extern const RuntimeType OnLuaDataHandler_tDA466776F80351E010D3E3510620639B2312B4EB_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnSetStringHandler_t2604ABAD926B6636FA77D2B613838FCA13A707E0();
extern const RuntimeType OnSetStringHandler_t2604ABAD926B6636FA77D2B613838FCA13A707E0_0_0_0;
extern "C" void DelegatePInvokeWrapper_CheckUILuaDelegate_t11AC2DCF69F0F8F3814771A876AF70604F4E2C5B();
extern const RuntimeType CheckUILuaDelegate_t11AC2DCF69F0F8F3814771A876AF70604F4E2C5B_0_0_0;
extern "C" void DelegatePInvokeWrapper_ClientGMDelagate_t74E43DD369CEAB125765204389179C68A2021CE6();
extern const RuntimeType ClientGMDelagate_t74E43DD369CEAB125765204389179C68A2021CE6_0_0_0;
extern "C" void SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_0_0_0;
extern "C" void SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_0_0_0;
extern "C" void DelegatePInvokeWrapper_EnterSceneDelegate_t7D58F53C28F671B8D1C858CAC0567CF04CB5D597();
extern const RuntimeType EnterSceneDelegate_t7D58F53C28F671B8D1C858CAC0567CF04CB5D597_0_0_0;
extern "C" void RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_0_0_0;
extern "C" void VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_0_0_0;
extern "C" void DelegatePInvokeWrapper_FriendTypeReturnDelegate_t94AA774887325EAFE651DD9D2861FF8F8625C6A5();
extern const RuntimeType FriendTypeReturnDelegate_t94AA774887325EAFE651DD9D2861FF8F8625C6A5_0_0_0;
extern "C" void DelegatePInvokeWrapper_FunctionOpenedDelegate_t78DCB504BFF148CF98B64766C64648B213731B7D();
extern const RuntimeType FunctionOpenedDelegate_t78DCB504BFF148CF98B64766C64648B213731B7D_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetVariableShowProgressDelegate_t68B653056161517DFFD9D6CEE7B0A1FB78AEC6D9();
extern const RuntimeType GetVariableShowProgressDelegate_t68B653056161517DFFD9D6CEE7B0A1FB78AEC6D9_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetVariableShowTextDelegate_tB3A624530CCE6871E53A92D657B397BC94468ABB();
extern const RuntimeType GetVariableShowTextDelegate_tB3A624530CCE6871E53A92D657B397BC94468ABB_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetVariableValueDelegate_tACA3D471EB41228ACA2C3941760DB3AA9EA0B255();
extern const RuntimeType GetVariableValueDelegate_tACA3D471EB41228ACA2C3941760DB3AA9EA0B255_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsEnemyReturnDelagate_t27D5176F6356C0EF8ABDBAE0A006C0C498F4ECEA();
extern const RuntimeType IsEnemyReturnDelagate_t27D5176F6356C0EF8ABDBAE0A006C0C498F4ECEA_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsFriendReturnDelagate_t0EC571BFCD470117184BB585DA98348B91441915();
extern const RuntimeType IsFriendReturnDelagate_t0EC571BFCD470117184BB585DA98348B91441915_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsRenewForm_t5315309980D021EE87DEA51805871138BDA90C12();
extern const RuntimeType IsRenewForm_t5315309980D021EE87DEA51805871138BDA90C12_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsShieldReturnDelagate_t284007B15AB90B0C43105D8F1866277091BD2A51();
extern const RuntimeType IsShieldReturnDelagate_t284007B15AB90B0C43105D8F1866277091BD2A51_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsTeamMemberDelegate_t8652A604DE79CB7910C2DCDE46EFA7AC2E5B94FE();
extern const RuntimeType IsTeamMemberDelegate_t8652A604DE79CB7910C2DCDE46EFA7AC2E5B94FE_0_0_0;
extern "C" void DelegatePInvokeWrapper_IsVariableReachDelegate_t3F2D890471C78D78B60AB37286CD6F1574EC7DE2();
extern const RuntimeType IsVariableReachDelegate_t3F2D890471C78D78B60AB37286CD6F1574EC7DE2_0_0_0;
extern "C" void DelegatePInvokeWrapper_LeaveSceneDelegate_t802988722FC7884CF3824C47F9242E34BDA7680D();
extern const RuntimeType LeaveSceneDelegate_t802988722FC7884CF3824C47F9242E34BDA7680D_0_0_0;
extern "C" void LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnUInt_tDF97B5F37B46BA5E8855BAD94BE5D6A2913DF6B0();
extern const RuntimeType NoParamesReturnUInt_tDF97B5F37B46BA5E8855BAD94BE5D6A2913DF6B0_0_0_0;
extern "C" void DelegatePInvokeWrapper_LuaUpdateDelegate_t8C93047B5422FC96A20E50C3974AAF610CFFEE45();
extern const RuntimeType LuaUpdateDelegate_t8C93047B5422FC96A20E50C3974AAF610CFFEE45_0_0_0;
extern "C" void DelegatePInvokeWrapper_LuaUpdatePlussDelegate_tBD4ED8CE6B88D6A3C6C612C561D8F74DE6C7830C();
extern const RuntimeType LuaUpdatePlussDelegate_tBD4ED8CE6B88D6A3C6C612C561D8F74DE6C7830C_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamNoReturn_tE254893A3CFA9F8FEF18C1F21E782ACE15C70542();
extern const RuntimeType NoParamNoReturn_tE254893A3CFA9F8FEF18C1F21E782ACE15C70542_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnBool_t7EFAF7BA22C5C5F8BCEBB03FAD4EB35C43D42CA5();
extern const RuntimeType NoParamesReturnBool_t7EFAF7BA22C5C5F8BCEBB03FAD4EB35C43D42CA5_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnInt_t6F95AC00C421EF5CB235E45677D325556224FAAC();
extern const RuntimeType NoParamesReturnInt_t6F95AC00C421EF5CB235E45677D325556224FAAC_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnString_t0D42D0B31A7F764922B2B7E6F818E6EAA04F8EC0();
extern const RuntimeType NoParamesReturnString_t0D42D0B31A7F764922B2B7E6F818E6EAA04F8EC0_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnStringArr_t5F4DC1052A6CF8DDF94A34CDB2AB582F685620E8();
extern const RuntimeType NoParamesReturnStringArr_t5F4DC1052A6CF8DDF94A34CDB2AB582F685620E8_0_0_0;
extern "C" void DelegatePInvokeWrapper_NoParamesReturnUintArr_t2BBE608AE1A18C670CCD823C156F3B6938431359();
extern const RuntimeType NoParamesReturnUintArr_t2BBE608AE1A18C670CCD823C156F3B6938431359_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamFloatNoReturn_t5CD750897FAE8E67126A86CE349BBADDB5ADBB06();
extern const RuntimeType ParamFloatNoReturn_t5CD750897FAE8E67126A86CE349BBADDB5ADBB06_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamFuncNoReturn_tD032B57628A49B1C0C0F4E774F37647E350AB7F0();
extern const RuntimeType ParamFuncNoReturn_tD032B57628A49B1C0C0F4E774F37647E350AB7F0_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamIntNoReturn_t957347B9BEF6709C138A31184A656527C00A8F3E();
extern const RuntimeType ParamIntNoReturn_t957347B9BEF6709C138A31184A656527C00A8F3E_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamIntReturnString_tC1D1B77EF92E52C711E30A94008758606D1D7CDC();
extern const RuntimeType ParamIntReturnString_tC1D1B77EF92E52C711E30A94008758606D1D7CDC_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamStringRefWrapModeReturnString_tBD4D228EB2BF9F0D1A841C1E99B053674D236771();
extern const RuntimeType ParamStringRefWrapModeReturnString_tBD4D228EB2BF9F0D1A841C1E99B053674D236771_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParamesBoolNoReturn_tBD3329D764F2EF868317C40541447684ACE4860E();
extern const RuntimeType ParamesBoolNoReturn_tBD3329D764F2EF868317C40541447684ACE4860E_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParmesIntIntReturnInt_tE9781A3750B77D851D807E968DF5797FFD2A8525();
extern const RuntimeType ParmesIntIntReturnInt_tE9781A3750B77D851D807E968DF5797FFD2A8525_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParmesIntReturnBool_tBA430A8AFE7A6F2C8CC962FE93E4808EA629D0AF();
extern const RuntimeType ParmesIntReturnBool_tBA430A8AFE7A6F2C8CC962FE93E4808EA629D0AF_0_0_0;
extern "C" void DelegatePInvokeWrapper_ParmesIntReturnInt_tDA5776839A7B8AF05927C3CE3FC1F1DD62AA9A32();
extern const RuntimeType ParmesIntReturnInt_tDA5776839A7B8AF05927C3CE3FC1F1DD62AA9A32_0_0_0;
extern "C" void DelegatePInvokeWrapper_ScreenOrientationChanged_tA3ED3D4E60C3C57614422A5E827D3A00290646D3();
extern const RuntimeType ScreenOrientationChanged_tA3ED3D4E60C3C57614422A5E827D3A00290646D3_0_0_0;
extern "C" void DelegatePInvokeWrapper_SetFlySwordSkillDelagate_t1C727EC55507B211FAC4E7F46FEAFDE49447901D();
extern const RuntimeType SetFlySwordSkillDelagate_t1C727EC55507B211FAC4E7F46FEAFDE49447901D_0_0_0;
extern "C" void ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_0_0_0;
extern "C" void DelegatePInvokeWrapper_SweepAction_tD8A0DDDBDF973FBA4E244701611C21035CF88BE8();
extern const RuntimeType SweepAction_tD8A0DDDBDF973FBA4E244701611C21035CF88BE8_0_0_0;
extern "C" void __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_0_0_0;
extern "C" void __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerDownEventHandler_t9EF168BB85499E298785182777B87F8238751916();
extern const RuntimeType FingerDownEventHandler_t9EF168BB85499E298785182777B87F8238751916_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerMoveEventHandler_t128359E1459644CECC5E2A042664E7F697A9774B();
extern const RuntimeType FingerMoveEventHandler_t128359E1459644CECC5E2A042664E7F697A9774B_0_0_0;
extern "C" void DelegatePInvokeWrapper_FingerUpEventHandler_tE8E7C3EE03A2D84386C4C0EA5508C04CE3BA3A65();
extern const RuntimeType FingerUpEventHandler_tE8E7C3EE03A2D84386C4C0EA5508C04CE3BA3A65_0_0_0;
extern "C" void DelegatePInvokeWrapper_Function_t92FB212CEF4E080C71F6A5EAB31C589A749673CC();
extern const RuntimeType Function_t92FB212CEF4E080C71F6A5EAB31C589A749673CC_0_0_0;
extern "C" void DelegatePInvokeWrapper_MyAction_t02D26C938BC640CE7C782C5A8EC460B79B3B8AF9();
extern const RuntimeType MyAction_t02D26C938BC640CE7C782C5A8EC460B79B3B8AF9_0_0_0;
extern "C" void DelegatePInvokeWrapper_PinchEventHandler_t03AE5B3E8CB205FB68435014CB8C90BD18E3C7C3();
extern const RuntimeType PinchEventHandler_t03AE5B3E8CB205FB68435014CB8C90BD18E3C7C3_0_0_0;
extern "C" void DelegatePInvokeWrapper_PinchMoveEventHandler_tDB2DB4DFB4AD18006735016BB4E42C453AAF8DE8();
extern const RuntimeType PinchMoveEventHandler_tDB2DB4DFB4AD18006735016BB4E42C453AAF8DE8_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationBeginEventHandler_t45A2E1DBAE99A537C212A6BDB6112AEF45F514E7();
extern const RuntimeType RotationBeginEventHandler_t45A2E1DBAE99A537C212A6BDB6112AEF45F514E7_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationEndEventHandler_tFE178EDC07A6FD4A5F241B122D83D8698ED9DA79();
extern const RuntimeType RotationEndEventHandler_tFE178EDC07A6FD4A5F241B122D83D8698ED9DA79_0_0_0;
extern "C" void DelegatePInvokeWrapper_RotationMoveEventHandler_t4172CEF45F90D2C372E81E8AEE02749447407081();
extern const RuntimeType RotationMoveEventHandler_t4172CEF45F90D2C372E81E8AEE02749447407081_0_0_0;
extern "C" void MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_0_0_0;
extern "C" void MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_0_0_0;
extern "C" void MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_0_0_0;
extern "C" void MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_0_0_0;
extern "C" void MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_0_0_0;
extern "C" void MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_0_0_0;
extern "C" void MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_0_0_0;
extern "C" void MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_0_0_0;
extern "C" void MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_0_0_0;
extern "C" void RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_0_0_0;
extern "C" void DelegatePInvokeWrapper_SetNewVertexDelegate_t66928ED4E22460C1EEB0563B708570873BBB1EE4();
extern const RuntimeType SetNewVertexDelegate_t66928ED4E22460C1EEB0563B708570873BBB1EE4_0_0_0;
extern "C" void DelegatePInvokeWrapper_MovieAction_t0A145CC2B5391C273F24C22C4D2DD2ADC760EB0F();
extern const RuntimeType MovieAction_t0A145CC2B5391C273F24C22C4D2DD2ADC760EB0F_0_0_0;
extern "C" void DelegatePInvokeWrapper_DoResMessageDelegate_tD7D8485EB5A3F04A5FBD5F9812C2BE2F0442E6BC();
extern const RuntimeType DoResMessageDelegate_tD7D8485EB5A3F04A5FBD5F9812C2BE2F0442E6BC_0_0_0;
extern "C" void BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_0_0_0;
extern "C" void DelegatePInvokeWrapper_SweepAction_t7473C9AF8740CAA4DDF149DBDA753A49B206DFD6();
extern const RuntimeType SweepAction_t7473C9AF8740CAA4DDF149DBDA753A49B206DFD6_0_0_0;
extern "C" void DelegatePInvokeWrapper_AbortFinishCallback_t6052BFEB2524FB82F4012B32D03A2DDD98EEC0BF();
extern const RuntimeType AbortFinishCallback_t6052BFEB2524FB82F4012B32D03A2DDD98EEC0BF_0_0_0;
extern "C" void DelegatePInvokeWrapper_ActionV_t30A4926F0837EAD9E5944B47658180E831CE4C45();
extern const RuntimeType ActionV_t30A4926F0837EAD9E5944B47658180E831CE4C45_0_0_0;
extern "C" void DelegatePInvokeWrapper_ClientDownloadFinishCallback_t2888ABE46D301FF3041301325E7C6DD8080E8E4B();
extern const RuntimeType ClientDownloadFinishCallback_t2888ABE46D301FF3041301325E7C6DD8080E8E4B_0_0_0;
extern "C" void DelegatePInvokeWrapper_CustomDownClientFunc_t2CBECF6F5394EDE28C01C9ED1D796B66279A562C();
extern const RuntimeType CustomDownClientFunc_t2CBECF6F5394EDE28C01C9ED1D796B66279A562C_0_0_0;
extern "C" void DelegatePInvokeWrapper_DownloadNoticeCall_tAD0597FB19B54E8203F2017441A089B7E2ECADC8();
extern const RuntimeType DownloadNoticeCall_tAD0597FB19B54E8203F2017441A089B7E2ECADC8_0_0_0;
extern "C" void DelegatePInvokeWrapper_FinishCallback_t6B5242AFACC9589E6F3504CAC8DDE3CE338F0F9B();
extern const RuntimeType FinishCallback_t6B5242AFACC9589E6F3504CAC8DDE3CE338F0F9B_0_0_0;
extern "C" void DelegatePInvokeWrapper_TransResourceFinishCallback_tBBF5E809155114C8669D748FAA3A3CAE9DDE9B18();
extern const RuntimeType TransResourceFinishCallback_tBBF5E809155114C8669D748FAA3A3CAE9DDE9B18_0_0_0;
extern "C" void DelegatePInvokeWrapper_DefaultLog_tADC8EC375A6B3CE26A2C73738A96178C69DF8847();
extern const RuntimeType DefaultLog_tADC8EC375A6B3CE26A2C73738A96178C69DF8847_0_0_0;
extern "C" void DelegatePInvokeWrapper_ErrorLog_t438C33073CDC4FF2D331D8F4DB7C893DFB6017E4();
extern const RuntimeType ErrorLog_t438C33073CDC4FF2D331D8F4DB7C893DFB6017E4_0_0_0;
extern "C" void DelegatePInvokeWrapper_WarnLog_t4975112AC6B7300FD08055DFE3CD617FAA0C954C();
extern const RuntimeType WarnLog_t4975112AC6B7300FD08055DFE3CD617FAA0C954C_0_0_0;
extern "C" void DelegatePInvokeWrapper_MovieAction_t073D71D962A702600A78BF50B07DB186F2D404C0();
extern const RuntimeType MovieAction_t073D71D962A702600A78BF50B07DB186F2D404C0_0_0_0;
extern "C" void FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_0_0_0;
extern "C" void DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetAnyKeyFunc_tC4F7908BE4D02AA11865AADD6D2C1B6E99370C3F();
extern const RuntimeType GetAnyKeyFunc_tC4F7908BE4D02AA11865AADD6D2C1B6E99370C3F_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetAxisFunc_tAC0D6B50B6DBAE2CB113D9EC83F80BAE7DFC0569();
extern const RuntimeType GetAxisFunc_tAC0D6B50B6DBAE2CB113D9EC83F80BAE7DFC0569_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetKeyStateFunc_t89F4D3B2F3B098AF74D57381B932816801834E89();
extern const RuntimeType GetKeyStateFunc_t89F4D3B2F3B098AF74D57381B932816801834E89_0_0_0;
extern "C" void DelegatePInvokeWrapper_GetTouchCountCallback_tFAF62B9DBE7BD6AEE099FA5C9094B2EA8EC9C969();
extern const RuntimeType GetTouchCountCallback_tFAF62B9DBE7BD6AEE099FA5C9094B2EA8EC9C969_0_0_0;
extern "C" void DelegatePInvokeWrapper_MoveDelegate_t36948A3A4ADEA13E4F45042C1C9CE19E82236163();
extern const RuntimeType MoveDelegate_t36948A3A4ADEA13E4F45042C1C9CE19E82236163_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnCustomInput_t64CB8392B4461AB5052A78AA3799F1B4D105144D();
extern const RuntimeType OnCustomInput_t64CB8392B4461AB5052A78AA3799F1B4D105144D_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnSchemeChange_tE7213C45B97603A2073A65DA7B955C69055334C8();
extern const RuntimeType OnSchemeChange_tE7213C45B97603A2073A65DA7B955C69055334C8_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnScreenResize_tB3AE724B0B563F605E44B8228EC9362B0E7FA16B();
extern const RuntimeType OnScreenResize_tB3AE724B0B563F605E44B8228EC9362B0E7FA16B_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnReposition_t9E693E283D91D7100F357EF767FEA92BA3A8BBAD();
extern const RuntimeType OnReposition_t9E693E283D91D7100F357EF767FEA92BA3A8BBAD_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidate_t3E29CE1E18F947309A13C439E929984001996908();
extern const RuntimeType OnValidate_t3E29CE1E18F947309A13C439E929984001996908_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnGeometryUpdated_t14B51F3213B90E00CB8F087CBA96DC81451C209E();
extern const RuntimeType OnGeometryUpdated_t14B51F3213B90E00CB8F087CBA96DC81451C209E_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnRenderQueueChanged_tCDFDC967AF50AF96BE21E8B10780F5DBC8CD0FEC();
extern const RuntimeType OnRenderQueueChanged_tCDFDC967AF50AF96BE21E8B10780F5DBC8CD0FEC_0_0_0;
extern "C" void DelegatePInvokeWrapper_LegacyEvent_tED84DB8DD6E5CBA349BE9D342013E9E4165C2B68();
extern const RuntimeType LegacyEvent_tED84DB8DD6E5CBA349BE9D342013E9E4165C2B68_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDragFinished_tAD093DA65EBBBB1D6E9D2EC4B32CBF24BD930ECE();
extern const RuntimeType OnDragFinished_tAD093DA65EBBBB1D6E9D2EC4B32CBF24BD930ECE_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDragNotification_t1CBE40663E4C594078C957EBE688F7297665233B();
extern const RuntimeType OnDragNotification_t1CBE40663E4C594078C957EBE688F7297665233B_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnReposition_t1C86A47168C5D731297790E56D25EF023720369B();
extern const RuntimeType OnReposition_t1C86A47168C5D731297790E56D25EF023720369B_0_0_0;
extern "C" void DelegatePInvokeWrapper_Validate_t3DDC63808BA02771C60452673B5B4BDAC9CCE3DB();
extern const RuntimeType Validate_t3DDC63808BA02771C60452673B5B4BDAC9CCE3DB_0_0_0;
extern "C" void DelegatePInvokeWrapper_HitCheck_t47C4EF0E7BAC0F4FF673FCE2A8A1F3B72673917D();
extern const RuntimeType HitCheck_t47C4EF0E7BAC0F4FF673FCE2A8A1F3B72673917D_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnDimensionsChanged_t255673CE2EAA77B780CFEF7BCE9974A5A570D855();
extern const RuntimeType OnDimensionsChanged_t255673CE2EAA77B780CFEF7BCE9974A5A570D855_0_0_0;
extern "C" void DelegatePInvokeWrapper_ProgressDelegate_tAF8ADEF968A47AD25B137560F2CCA094B9206812();
extern const RuntimeType ProgressDelegate_tAF8ADEF968A47AD25B137560F2CCA094B9206812_0_0_0;
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnFinishCall_t27A83612AE476F36F39AE0F2F9981FE603F09449();
extern const RuntimeType OnFinishCall_t27A83612AE476F36F39AE0F2F9981FE603F09449_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnPreparedCall_t0B889D6C2A2055370D4BB10364E799DF24F4F7DC();
extern const RuntimeType OnPreparedCall_t0B889D6C2A2055370D4BB10364E799DF24F4F7DC_0_0_0;
extern "C" void DelegatePInvokeWrapper_lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2();
extern const RuntimeType lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2_0_0_0;
extern "C" void DelegatePInvokeWrapper_CustomLoader_tC129B728BC98EF7847D9BEADB439BF7D7E1C6E32();
extern const RuntimeType CustomLoader_tC129B728BC98EF7847D9BEADB439BF7D7E1C6E32_0_0_0;
extern "C" void GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_0_0_0;
extern "C" void DelegatePInvokeWrapper_ObjectCheck_t4D2BD8EC5CF83239E29403CF9573407008D7CF7B();
extern const RuntimeType ObjectCheck_t4D2BD8EC5CF83239E29403CF9573407008D7CF7B_0_0_0;
extern "C" void Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_0_0_0;
extern "C" void MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_0_0_0;
extern "C" void DelegatePInvokeWrapper_ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487();
extern const RuntimeType ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487_0_0_0;
extern "C" void DelegatePInvokeWrapper_EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4();
extern const RuntimeType EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[415] = 
{
	{ DelegatePInvokeWrapper_EtwEnableCallback_tE661421A2F149DA151D5A519A09E09448E396A4A, NULL, NULL, NULL, NULL, NULL, &EtwEnableCallback_tE661421A2F149DA151D5A519A09E09448E396A4A_0_0_0 } /* Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback */,
	{ NULL, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0 } /* Mono.SafeStringMarshal */,
	{ NULL, UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke, UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke_back, UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_tD4C9E109AAE4DEFCAA20A5D4D756767924C8F089_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579, NULL, NULL, NULL, NULL, NULL, &Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0 } /* System.Action */,
	{ NULL, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0 } /* System.AppDomain */,
	{ NULL, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0 } /* System.DTSubString */,
	{ NULL, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0 } /* System.DateTimeResult */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke, DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke_back, DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_marshal_pinvoke_cleanup, NULL, NULL, &DataCollector_t9621325BA9AAB82824DE3F54E894A817443B1660_0_0_0 } /* System.Diagnostics.Tracing.DataCollector */,
	{ NULL, EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke, EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke_back, EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_marshal_pinvoke_cleanup, NULL, NULL, &EventMetadata_tDC146079349635A3A29F84F4655C39D480BBCF0B_0_0_0 } /* System.Diagnostics.Tracing.EventSource/EventMetadata */,
	{ NULL, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0 } /* System.Enum */,
	{ NULL, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup, NULL, NULL, &Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0 } /* System.Guid/GuidResult */,
	{ DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0 } /* System.InputRecord */,
	{ NULL, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0 } /* System.Number/NumberBuffer */,
	{ NULL, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_back, ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t7E92EB1D56110F024979E1E497A675BC596BA7B7_0_0_0 } /* System.ParsingInfo */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke, InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke_back, InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_tDFACCA96D5C3DD01C345DE426D9B8F32CDAA904B_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup, NULL, NULL, &Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_back, AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_back, ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_t24DE1415466EE20060BE5AD528DC5C812CFA53A9_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_back, ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_tF1AAA16B8A1250CA037E32157A3424CD2BA47874_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ NULL, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup, NULL, NULL, &Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ NULL, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0 } /* System.UnSafeCharBuffer */,
	{ NULL, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0 } /* System.ValueType */,
	{ NULL, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0 } /* System.__DTString */,
	{ NULL, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_back, XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_marshal_pinvoke_cleanup, NULL, NULL, &XPathNode_tC207ED6C653E80055FE6C5ECD3E6137A326659A0_0_0_0 } /* MS.Internal.Xml.Cache.XPathNode */,
	{ NULL, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_back, XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_marshal_pinvoke_cleanup, NULL, NULL, &XPathNodeRef_t6F631244BF7B58CE7DB9239662B4EE745CD54E14_0_0_0 } /* MS.Internal.Xml.Cache.XPathNodeRef */,
	{ NULL, NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke, NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke_back, NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_marshal_pinvoke_cleanup, NULL, NULL, &NodeSet_t3F436E1F0ED4DFB96B99A56EBA52054F37CA26F9_0_0_0 } /* MS.Internal.Xml.XPath.LogicalExpr/NodeSet */,
	{ NULL, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_back, Position_t089976E4BEB3D345DA28CFA95786EE065063E228_marshal_pinvoke_cleanup, NULL, NULL, &Position_t089976E4BEB3D345DA28CFA95786EE065063E228_0_0_0 } /* System.Xml.Schema.Position */,
	{ NULL, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_back, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshal_pinvoke_cleanup, NULL, NULL, &SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_0_0_0 } /* System.Xml.Schema.SequenceNode/SequenceConstructPosContext */,
	{ NULL, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_back, Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_marshal_pinvoke_cleanup, NULL, NULL, &Union_t75FE76D5ECF7F32BF3656D21BD446F4E42996391_0_0_0 } /* System.Xml.Schema.XmlAtomicValue/Union */,
	{ NULL, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_back, XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_marshal_pinvoke_cleanup, NULL, NULL, &XsdDateTime_tEA54A4A77DD9458E97F1306F2013714582663CC5_0_0_0 } /* System.Xml.Schema.XsdDateTime */,
	{ NULL, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_back, Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_marshal_pinvoke_cleanup, NULL, NULL, &Parser_t402903C4103D1084228988A8DA76C1FCB8D890B9_0_0_0 } /* System.Xml.Schema.XsdDateTime/Parser */,
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_tC8B9E43DCB47789C0CCA2921BE18838AB95B323E, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_tC8B9E43DCB47789C0CCA2921BE18838AB95B323E_0_0_0 } /* System.Xml.SecureStringHasher/HashCodeOfStringDelegate */,
	{ NULL, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_back, SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_marshal_pinvoke_cleanup, NULL, NULL, &SmallXmlNodeList_t962D7A66CF19950FE6DFA9476903952B76844A1E_0_0_0 } /* System.Xml.XmlNamedNodeMap/SmallXmlNodeList */,
	{ NULL, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_back, NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceDeclaration_tFD9A771E0585F887CE869FA7D0FAD365A40D436A_0_0_0 } /* System.Xml.XmlNamespaceManager/NamespaceDeclaration */,
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_tCAF2245F039C500045953429EF1FB0BA86326AE8_0_0_0 } /* System.Xml.XmlQualifiedName/HashCodeOfStringDelegate */,
	{ NULL, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_back, ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_marshal_pinvoke_cleanup, NULL, NULL, &ParsingState_tE4A8E7F14B2068AE43ECF99F81F55B0301A551A2_0_0_0 } /* System.Xml.XmlTextReaderImpl/ParsingState */,
	{ NULL, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_back, Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_marshal_pinvoke_cleanup, NULL, NULL, &Namespace_t092048EEBC7FF22AF20114DDA7633072C44CA26B_0_0_0 } /* System.Xml.XmlTextWriter/Namespace */,
	{ NULL, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_back, TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_marshal_pinvoke_cleanup, NULL, NULL, &TagInfo_t9F395B388162AB8B9277E4ABA1ADEF785AE197B5_0_0_0 } /* System.Xml.XmlTextWriter/TagInfo */,
	{ DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506, NULL, NULL, NULL, NULL, NULL, &CFProxyAutoConfigurationResultCallback_t19A48665D1D7A47D6CEFF82779F5853E9B0B6506_0_0_0 } /* Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback */,
	{ NULL, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_back, unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_t0AD7ED5EDF9F15F1879FC9140A7D40C8D95A1BAF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_t104BADBBE1265BD1A3F84C153EB7A67CDDBF35A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_tC441A37D4A6F1BAC1AFCA0108D4F7570EFF9E0D1_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tCC7AD95D3B758BB99785645E65EDCD65A1D243AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t2F4EF4CD2F6AFC4F2D166953E834C6F0A13382A7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_t2ABD1C146C8B9405F6E5A78CD59A779EA607741B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tB4BCEBA4194442C8C85FA19E80B808D0EDA462AB_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t494B8599A6D4247BB0C8AB7341DDC73BE42623F7_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_tD9DFBDB5559983F0E11A67FA92E0F7182114C8F2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t6E7812D40DDD91958E3CFBB92B5F5748D477E19D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tB27A3B6F9D1B784ABE082849EAB6B81F51FAC8E2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t94A91CB42A2EBB2CC598EF3E278770AFD80696A0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_tB29092875D3CBD25E4461BFD165B5373FA54DB14_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t2FC4C08BACF1AEA509ABCAF3B22475E196E74A0D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_tC8AAF317CBE4CA216F22BF031ECF89315B963C9D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_tA8D1209D5F488E02F826EE2362F5AA61C8FF2EE2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t77B3CAFF25690A45405E3C957E40CC4FF83B49C6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_tC4864FE0F6A3398A572F2511AA64C72126640937_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t6914054EA0F7A59C8A4ED4B9CDD5AF143F7D8BFE_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_tA11F424F68D297B6FD2B2EA26C6764F80146662A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t34EEB7BA38CA2C86F847416785ADB22BC4A04F4B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t0B4A49BBA592FE4EC0630B490463AE116AF07C9C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB0D0A02DE7E75757AFCA780298BF95467BF82856_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tDA1C93A382058FB563F8772B119D5B598DC37A5C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tAB1C185C77DFD6BD96DF7909370AA1FAD6BB90AF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_tC040C2CF47D5426B7F6B1D6A2751507DC681CFF3_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_tE3FC523507F07BD9901D84E9F6968CD8A583FF09_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t1FAB0CD82E536E0C9EB5255B145FC5AF434B3986_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t028BB06EEB95E8F62511F2301B90D8181F4FFDB5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_t4BACB6B49AA85C025AF9B18B3F30F63C9881DE2D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t6C8BE964C5EE9B24D3734F028EFCD83F5893D2E6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
	{ NULL, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t7BB5F622E014A8EC300C578657E2B0550DA828B2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_t55149A988CA1CE32772ACAC0031DAF4DC0F6D740_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tD85E7923018681355C1D851137CEC527F04093F5_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_t2C8F0895EF17ECAC042835D68A6BFDB9CBC7F2AA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_tBDF40F27E011F577C3E834B14788491861F870D6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t5FCF0307C4AB263BC611FE396EC4D2B9CF93528A_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t90C02C529DB2B9F434C18797BACC456BCB5400A9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ DelegatePInvokeWrapper_ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t6D92A091070756743232D28A30A05FFCFB7928C4_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397, NULL, NULL, NULL, NULL, NULL, &WriteMethod_tA5073EA0B599530C5CB5FF202832E16DD4C48397_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_tE27F26A26800EB8FA74A54956323F29F04E055B0_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ NULL, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_back, RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t300D9F628CDAED6F665BFE996936B9CE0FA0D95B_0_0_0 } /* System.Net.CookieTokenizer/RecognizedAttribute */,
	{ DelegatePInvokeWrapper_ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tBC77AE628966A21E63D8BB344BC3D7C79441A6DE_0_0_0 } /* System.Net.FtpDataStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tCA763F3444D2578FB21239EDFC1C3632E469FC49_0_0_0 } /* System.Net.FtpDataStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E, NULL, NULL, NULL, NULL, NULL, &HeaderParser_t6B59FF0FD79FFD511A019AE5383DCEF641BA822E_0_0_0 } /* System.Net.HeaderParser */,
	{ NULL, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_back, HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_tFF12EDB71F2B9508779B160689F99BA209DA9E64_0_0_0 } /* System.Net.HeaderVariantInfo */,
	{ NULL, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_back, AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_t5C342070F47B5DBAE0089B8B6A391FDEB6914AAB_0_0_0 } /* System.Net.HttpWebRequest/AuthorizationState */,
	{ NULL, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_back, Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_marshal_pinvoke_cleanup, NULL, NULL, &Win32_FIXED_INFO_t3A3D06BDBE4DDA090E3A7151E5D761E867A870DD_0_0_0 } /* System.Net.NetworkInformation.Win32_FIXED_INFO */,
	{ NULL, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_back, Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADDR_STRING_tDA9F56F72EA92CA09591BA7A512706A1A3BCC16F_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADDR_STRING */,
	{ NULL, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_back, SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t63145D172556590482549D41328C0668E19CB69C_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_back, X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t9E05BD8700EA6158AC82F71CBE53AD20F6B99B0C_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778, NULL, NULL, NULL, NULL, NULL, &LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke, CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke_back, CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_marshal_pinvoke_cleanup, NULL, NULL, &CachedAssetBundle_t074A527A76DF5D5A7C4465260959DB88E8B435D3_0_0_0 } /* UnityEngine.CachedAssetBundle */,
	{ NULL, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4, NULL, NULL, NULL, NULL, NULL, &UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_back, PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t89BC6208BDD3B7C57FED7B0201341A7D4E846A6D_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tE0936D5A5B8C3367F0E6E464162E1FB1E9F304A8_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_back, PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tE0D30607A74F1E0D695E5E83717C26308CB5C9E9_0_0_0 } /* UnityEngine.Experimental.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_back, SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteBone */,
	{ NULL, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke, Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke_back, Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_marshal_pinvoke_cleanup, NULL, NULL, &Internal_DrawTextureArguments_t4C3F2D141F43C3EF7D12FEA79BAD68985C0C52AF_0_0_0 } /* UnityEngine.Internal_DrawTextureArguments */,
	{ NULL, LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke, LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke_back, LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t93DB383BDD09E4F881F4BA106DBA45AEEB38A2A4_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke, LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke_back, LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_marshal_pinvoke_cleanup, NULL, NULL, &LightmapData_tE4A145EDB6D4D183114E6ED77F7CE2BD19C05267_0_0_0 } /* UnityEngine.LightmapData */,
	{ NULL, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup, NULL, NULL, &Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke, ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke_back, ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_marshal_pinvoke_cleanup, NULL, NULL, &ReflectionProbeBlendInfo_tAFA53A2695628CA6E7741D7899862ACA228D818F_0_0_0 } /* UnityEngine.Rendering.ReflectionProbeBlendInfo */,
	{ NULL, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_back, HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t3DDACA0CB28E94463E17542FA7F04245A8AE1C12_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_back, AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_back, AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_0_0_0 } /* UnityEngine.AssetBundleRecompressOperation */,
	{ NULL, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_back, AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke, CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke_back, CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_marshal_pinvoke_cleanup, NULL, NULL, &CharacterInfo_t678D243661BB260C0841F66CB9BB85C7666D4313_0_0_0 } /* UnityEngine.CharacterInfo */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_back, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ NULL, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_back, UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t9E6A69B7726F134F31F6744F5EFDF611E7C54F27_0_0_0 } /* UnityEngine.Networking.UploadHandlerRaw */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D, NULL, NULL, NULL, NULL, NULL, &ConsumeSampleFramesNativeFunction_tC1E0B1BFCF2C3D7F87D66FCFA2022369327D931D_0_0_0 } /* UnityEngine.Experimental.Audio.AudioSampleProvider/ConsumeSampleFramesNativeFunction */,
	{ NULL, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup, NULL, NULL, &Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_back, SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_marshal_pinvoke_cleanup, NULL, NULL, &SliderHandler_t80CE53884BFA87A9FA360D2862DA4B504BFBEF7C_0_0_0 } /* UnityEngine.SliderHandler */,
	{ NULL, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_back, DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerAssetBundle_tEA13E51CCB3412AD09F36186F924CE375759A939_0_0_0 } /* UnityEngine.Networking.DownloadHandlerAssetBundle */,
	{ NULL, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_back, IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_tF67A736CD38F3A64A40687C90024FA7326AF7D86_0_0_0 } /* UnityEngine.Experimental.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_back, IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_tD52D7E7BD7FFA6121E7AAC6FE3E1CCB2C671E8C0_0_0_0 } /* UnityEngine.Experimental.IntegratedSubsystemDescriptor */,
	{ NULL, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_back, FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_marshal_pinvoke_cleanup, NULL, NULL, &FrameReceivedEventArgs_t4637B6D2FC28197602B18C1815C4A778645479DD_0_0_0 } /* UnityEngine.Experimental.XR.FrameReceivedEventArgs */,
	{ NULL, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_back, MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_t24F21E71F8F697D7D216BA4F3F064FB5434E6056_0_0_0 } /* UnityEngine.Experimental.XR.MeshGenerationResult */,
	{ NULL, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_back, PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_marshal_pinvoke_cleanup, NULL, NULL, &PlaneAddedEventArgs_t06BF8697BA4D8CD3A8C9AB8DF51F8D01D2910002_0_0_0 } /* UnityEngine.Experimental.XR.PlaneAddedEventArgs */,
	{ NULL, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_back, PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_marshal_pinvoke_cleanup, NULL, NULL, &PlaneRemovedEventArgs_t21E9C5879A8317E5F72263ED2235116F609E4C6A_0_0_0 } /* UnityEngine.Experimental.XR.PlaneRemovedEventArgs */,
	{ NULL, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_back, PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_marshal_pinvoke_cleanup, NULL, NULL, &PlaneUpdatedEventArgs_tD63FB1655000C0BC238033545144C1FD81CED133_0_0_0 } /* UnityEngine.Experimental.XR.PlaneUpdatedEventArgs */,
	{ NULL, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_back, PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_marshal_pinvoke_cleanup, NULL, NULL, &PointCloudUpdatedEventArgs_tE7E1E32A6042806B927B110250C0D4FE755C6B07_0_0_0 } /* UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs */,
	{ NULL, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_back, SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_marshal_pinvoke_cleanup, NULL, NULL, &SessionTrackingStateChangedEventArgs_tE4B00077E5AAE143593A0BB3FA2C57237525E7BA_0_0_0 } /* UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs */,
	{ DelegatePInvokeWrapper_OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353, NULL, NULL, NULL, NULL, NULL, &OnNavMeshPreUpdate_tA3A16B3CAFF83530076BF839EA5699AAAD6C6353_0_0_0 } /* UnityEngine.AI.NavMesh/OnNavMeshPreUpdate */,
	{ NULL, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_back, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_0_0_0 } /* UnityEngine.AnimatorControllerParameter */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_back, GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementData */,
	{ NULL, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_back, GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshal_pinvoke_cleanup, NULL, NULL, &GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData */,
	{ NULL, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_back, GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshal_pinvoke_cleanup, NULL, NULL, &GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard */,
	{ NULL, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_back, GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshal_pinvoke_cleanup, NULL, NULL, &GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcScoreData */,
	{ NULL, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_back, GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshal_pinvoke_cleanup, NULL, NULL, &GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_0_0_0 } /* UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_tCC4B5A2692C21C00FC2FC1E4EC5280E98423B8D5_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_back, MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke, ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke_back, ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_marshal_pinvoke_cleanup, NULL, NULL, &ShapeModule_tF3CE38BED68607FE893E445DE9D21D8F1DCE6A51_0_0_0 } /* UnityEngine.ParticleSystem/ShapeModule */,
	{ NULL, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup, NULL, NULL, &TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t9084549A636BD45086D66CC6765DA8C3DD31066F_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ NULL, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_back, RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_t97154F5546B47CE72257CC2F0B677BDF696AEC4A_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB0230BC83686D7126AB4D3800A66351028CA514F_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke, VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke_back, VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshal_pinvoke_cleanup, NULL, NULL, &VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_0_0_0 } /* UnityEngine.Experimental.VFX.VFXEventAttribute */,
	{ NULL, VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke, VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke_back, VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshal_pinvoke_cleanup, NULL, NULL, &VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_0_0_0 } /* UnityEngine.Experimental.VFX.VFXExpressionValues */,
	{ NULL, VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke, VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke_back, VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshal_pinvoke_cleanup, NULL, NULL, &VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_0_0_0 } /* UnityEngine.Experimental.VFX.VFXSpawnerState */,
	{ DelegatePInvokeWrapper_CompressFunc_t2188F77074FDD70B138EDC8E93189A3F34EDCEAC, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t2188F77074FDD70B138EDC8E93189A3F34EDCEAC_0_0_0 } /* BestHTTP.Decompression.Zlib.DeflateManager/CompressFunc */,
	{ DelegatePInvokeWrapper_CompressFunc_t18C44B42316A965E271976F3165DC8F1157695ED, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t18C44B42316A965E271976F3165DC8F1157695ED_0_0_0 } /* UnityEngine.Gonbest.MagicCube.IonicZlib.DeflateManager/CompressFunc */,
	{ DelegatePInvokeWrapper_LoggerCallBackDelegate_t19ECD361A776A68019EAEE005255464F400BF014, NULL, NULL, NULL, NULL, NULL, &LoggerCallBackDelegate_t19ECD361A776A68019EAEE005255464F400BF014_0_0_0 } /* UnityEngine.Gonbest.MagicCube.LoggerCallBackDelegate */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t84BE8448017382C623BB47EC74548E6EC2FAEC5A::CLSID, &ZlibException_t84BE8448017382C623BB47EC74548E6EC2FAEC5A_0_0_0 } /* BestHTTP.Decompression.Zlib.ZlibException */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B::CLSID, &CRC32_tBE6FE2F4FB7254AE7AE6DB86A7DD68B77AFB790B_0_0_0 } /* UnityEngine.Gonbest.MagicCube.IonicZlib.CRC32 */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA::CLSID, &ZlibCodec_t866EB7319ADAAD1B396010CA2F30C06712D69BEA_0_0_0 } /* UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C::CLSID, &ZlibException_t3F63FF2A9F2C57EE7407A1F002AEF18CE4B4F35C_0_0_0 } /* UnityEngine.Gonbest.MagicCube.IonicZlib.ZlibException */,
	{ NULL, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_back, WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_marshal_pinvoke_cleanup, NULL, NULL, &WeightInfo_t0DC40EEC1B90C9BB32621A1978483832819E22CA_0_0_0 } /* UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo */,
	{ DelegatePInvokeWrapper_DelegateCallback_t4514D66336848A4AF84185308882C2B7F80A4EAF, NULL, NULL, NULL, NULL, NULL, &DelegateCallback_t4514D66336848A4AF84185308882C2B7F80A4EAF_0_0_0 } /* CustomDataStruct.DelegateCallback */,
	{ DelegatePInvokeWrapper_Callback_t0764CED98EC1C33CAE93B9E3CDC263CEAAEAE05B, NULL, NULL, NULL, NULL, NULL, &Callback_t0764CED98EC1C33CAE93B9E3CDC263CEAAEAE05B_0_0_0 } /* EventDelegate/Callback */,
	{ DelegatePInvokeWrapper_DragBeginEventHandler_tA5ACA524FE7677C56E18670DF781881024A5A60F, NULL, NULL, NULL, NULL, NULL, &DragBeginEventHandler_tA5ACA524FE7677C56E18670DF781881024A5A60F_0_0_0 } /* FingerGestures/DragBeginEventHandler */,
	{ DelegatePInvokeWrapper_DragEndEventHandler_t4EFA20609E41FD907DED4FED74EB7B0720BBF521, NULL, NULL, NULL, NULL, NULL, &DragEndEventHandler_t4EFA20609E41FD907DED4FED74EB7B0720BBF521_0_0_0 } /* FingerGestures/DragEndEventHandler */,
	{ DelegatePInvokeWrapper_DragMoveEventHandler_tE1C6C31289887DB94E13E5F12E0521843DCC1160, NULL, NULL, NULL, NULL, NULL, &DragMoveEventHandler_tE1C6C31289887DB94E13E5F12E0521843DCC1160_0_0_0 } /* FingerGestures/DragMoveEventHandler */,
	{ DelegatePInvokeWrapper_FingerDownEventHandler_tDC8C3948F1A5D72FDC89774CB4EFF20882B02358, NULL, NULL, NULL, NULL, NULL, &FingerDownEventHandler_tDC8C3948F1A5D72FDC89774CB4EFF20882B02358_0_0_0 } /* FingerGestures/FingerDownEventHandler */,
	{ DelegatePInvokeWrapper_FingerDragBeginEventHandler_t12028033EB1C8B82C131CB52A364550CDB24255D, NULL, NULL, NULL, NULL, NULL, &FingerDragBeginEventHandler_t12028033EB1C8B82C131CB52A364550CDB24255D_0_0_0 } /* FingerGestures/FingerDragBeginEventHandler */,
	{ DelegatePInvokeWrapper_FingerDragEndEventHandler_tAAD963181AD3BA4513689D82DB5DFE5348DEB5A1, NULL, NULL, NULL, NULL, NULL, &FingerDragEndEventHandler_tAAD963181AD3BA4513689D82DB5DFE5348DEB5A1_0_0_0 } /* FingerGestures/FingerDragEndEventHandler */,
	{ DelegatePInvokeWrapper_FingerDragMoveEventHandler_t4EBC0862F6FD0A884754F00FF41DBEE80938349A, NULL, NULL, NULL, NULL, NULL, &FingerDragMoveEventHandler_t4EBC0862F6FD0A884754F00FF41DBEE80938349A_0_0_0 } /* FingerGestures/FingerDragMoveEventHandler */,
	{ DelegatePInvokeWrapper_FingerLongPressEventHandler_t7684F71E440B6578E687681489D4B0784DC4D86A, NULL, NULL, NULL, NULL, NULL, &FingerLongPressEventHandler_t7684F71E440B6578E687681489D4B0784DC4D86A_0_0_0 } /* FingerGestures/FingerLongPressEventHandler */,
	{ DelegatePInvokeWrapper_FingerMoveEventHandler_t3F21C8B803B07D174401C6CDBE0BAC868ECFCA80, NULL, NULL, NULL, NULL, NULL, &FingerMoveEventHandler_t3F21C8B803B07D174401C6CDBE0BAC868ECFCA80_0_0_0 } /* FingerGestures/FingerMoveEventHandler */,
	{ DelegatePInvokeWrapper_FingerStationaryBeginEventHandler_t7C731CA89286F5738A0E4D48E652010DA8554D55, NULL, NULL, NULL, NULL, NULL, &FingerStationaryBeginEventHandler_t7C731CA89286F5738A0E4D48E652010DA8554D55_0_0_0 } /* FingerGestures/FingerStationaryBeginEventHandler */,
	{ DelegatePInvokeWrapper_FingerStationaryEndEventHandler_t7CA18B48B59BA7AD23990A84AC5E91F2886DDF67, NULL, NULL, NULL, NULL, NULL, &FingerStationaryEndEventHandler_t7CA18B48B59BA7AD23990A84AC5E91F2886DDF67_0_0_0 } /* FingerGestures/FingerStationaryEndEventHandler */,
	{ DelegatePInvokeWrapper_FingerStationaryEventHandler_t8E80C02AEEEE7C9774995370D8DDD86EE693BF42, NULL, NULL, NULL, NULL, NULL, &FingerStationaryEventHandler_t8E80C02AEEEE7C9774995370D8DDD86EE693BF42_0_0_0 } /* FingerGestures/FingerStationaryEventHandler */,
	{ DelegatePInvokeWrapper_FingerSwipeEventHandler_tC6CB95009D1D61C5E93F9AB48F9FA23D782417C3, NULL, NULL, NULL, NULL, NULL, &FingerSwipeEventHandler_tC6CB95009D1D61C5E93F9AB48F9FA23D782417C3_0_0_0 } /* FingerGestures/FingerSwipeEventHandler */,
	{ DelegatePInvokeWrapper_FingerTapEventHandler_t78D73BEE0FAAD7ECAA365367105DA68C8DFC2235, NULL, NULL, NULL, NULL, NULL, &FingerTapEventHandler_t78D73BEE0FAAD7ECAA365367105DA68C8DFC2235_0_0_0 } /* FingerGestures/FingerTapEventHandler */,
	{ DelegatePInvokeWrapper_FingerUpEventHandler_t8B4E064FC1ECA993EEDB82028BC451D639DD1363, NULL, NULL, NULL, NULL, NULL, &FingerUpEventHandler_t8B4E064FC1ECA993EEDB82028BC451D639DD1363_0_0_0 } /* FingerGestures/FingerUpEventHandler */,
	{ DelegatePInvokeWrapper_FingersUpdatedEventDelegate_t221A9795598310DA5D9A1C69ADC7F5420FDE8D18, NULL, NULL, NULL, NULL, NULL, &FingersUpdatedEventDelegate_t221A9795598310DA5D9A1C69ADC7F5420FDE8D18_0_0_0 } /* FingerGestures/FingersUpdatedEventDelegate */,
	{ DelegatePInvokeWrapper_GlobalTouchFilterDelegate_tBD32CF3437304263C0FA1AB222644B1C378D749B, NULL, NULL, NULL, NULL, NULL, &GlobalTouchFilterDelegate_tBD32CF3437304263C0FA1AB222644B1C378D749B_0_0_0 } /* FingerGestures/GlobalTouchFilterDelegate */,
	{ DelegatePInvokeWrapper_LongPressEventHandler_tCE80DC18402B36827DDD24511A9004445F45C639, NULL, NULL, NULL, NULL, NULL, &LongPressEventHandler_tCE80DC18402B36827DDD24511A9004445F45C639_0_0_0 } /* FingerGestures/LongPressEventHandler */,
	{ DelegatePInvokeWrapper_PinchEventHandler_t291170B8B7AAFEDAC22F657225D98916AC7953CC, NULL, NULL, NULL, NULL, NULL, &PinchEventHandler_t291170B8B7AAFEDAC22F657225D98916AC7953CC_0_0_0 } /* FingerGestures/PinchEventHandler */,
	{ DelegatePInvokeWrapper_PinchMoveEventHandler_tE6DE66A4C7CD3DD39DACFF0EE3A7C910EF014FB1, NULL, NULL, NULL, NULL, NULL, &PinchMoveEventHandler_tE6DE66A4C7CD3DD39DACFF0EE3A7C910EF014FB1_0_0_0 } /* FingerGestures/PinchMoveEventHandler */,
	{ DelegatePInvokeWrapper_RotationBeginEventHandler_t3C62F5E1BA866AD17AF87E2E997D6972A4A16F2B, NULL, NULL, NULL, NULL, NULL, &RotationBeginEventHandler_t3C62F5E1BA866AD17AF87E2E997D6972A4A16F2B_0_0_0 } /* FingerGestures/RotationBeginEventHandler */,
	{ DelegatePInvokeWrapper_RotationEndEventHandler_tDC6D065DC86BF6F7B26ACFAE4D38E76D9E5C5F0D, NULL, NULL, NULL, NULL, NULL, &RotationEndEventHandler_tDC6D065DC86BF6F7B26ACFAE4D38E76D9E5C5F0D_0_0_0 } /* FingerGestures/RotationEndEventHandler */,
	{ DelegatePInvokeWrapper_RotationMoveEventHandler_tC31B02FD6C2AB2A111B9A848EC15E2B42104B681, NULL, NULL, NULL, NULL, NULL, &RotationMoveEventHandler_tC31B02FD6C2AB2A111B9A848EC15E2B42104B681_0_0_0 } /* FingerGestures/RotationMoveEventHandler */,
	{ DelegatePInvokeWrapper_SwipeEventHandler_t20A0D10D3C4D472713CBE2E93EB3ABC8DF139A24, NULL, NULL, NULL, NULL, NULL, &SwipeEventHandler_t20A0D10D3C4D472713CBE2E93EB3ABC8DF139A24_0_0_0 } /* FingerGestures/SwipeEventHandler */,
	{ DelegatePInvokeWrapper_TapEventHandler_t4DAD6D944D964FA49920954EDF2C8E2B91B659E6, NULL, NULL, NULL, NULL, NULL, &TapEventHandler_t4DAD6D944D964FA49920954EDF2C8E2B91B659E6_0_0_0 } /* FingerGestures/TapEventHandler */,
	{ DelegatePInvokeWrapper_LoadFunction_t33525D2AA48D6AEE612675DA206D48C2E00BC9EB, NULL, NULL, NULL, NULL, NULL, &LoadFunction_t33525D2AA48D6AEE612675DA206D48C2E00BC9EB_0_0_0 } /* Localization/LoadFunction */,
	{ DelegatePInvokeWrapper_OnLocalizeNotification_tB0D64457D306C943BF95C0C40DE75A0686BD1DE2, NULL, NULL, NULL, NULL, NULL, &OnLocalizeNotification_tB0D64457D306C943BF95C0C40DE75A0686BD1DE2_0_0_0 } /* Localization/OnLocalizeNotification */,
	{ NULL, RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke, RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke_back, RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_marshal_pinvoke_cleanup, NULL, NULL, &RendererInfo_t192651330E7A0FAAA80F760E3FEE4CC7BFAEE6C3_0_0_0 } /* PrefabLightmapData/RendererInfo */,
	{ NULL, Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke, Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke_back, Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_marshal_pinvoke_cleanup, NULL, NULL, &Node_t191969C0D7472FACFA1C2EF75D1200FFD8E19A80_0_0_0 } /* SimpleAI.NodePool/Node */,
	{ DelegatePInvokeWrapper_DelegateAddPoint_t4C7E5256C63E15DB5CD291AFB685D243774E8694, NULL, NULL, NULL, NULL, NULL, &DelegateAddPoint_t4C7E5256C63E15DB5CD291AFB685D243774E8694_0_0_0 } /* SimpleAI.Planning.AStarPlanner/DelegateAddPoint */,
	{ DelegatePInvokeWrapper_DelegateAssert_t324B2585BB8699956B7AE652ACFFD2ACF7983B5A, NULL, NULL, NULL, NULL, NULL, &DelegateAssert_t324B2585BB8699956B7AE652ACFFD2ACF7983B5A_0_0_0 } /* SimpleAI.Planning.AStarPlanner/DelegateAssert */,
	{ DelegatePInvokeWrapper_OnFinished_t85754675F5DFBE48EE5ABD0F01B5FBC3D965A52F, NULL, NULL, NULL, NULL, NULL, &OnFinished_t85754675F5DFBE48EE5ABD0F01B5FBC3D965A52F_0_0_0 } /* SpringPanel/OnFinished */,
	{ DelegatePInvokeWrapper_OnFinished_t998EC8BDD1FE3DA6CD7DF78A9B845F5BF15D097D, NULL, NULL, NULL, NULL, NULL, &OnFinished_t998EC8BDD1FE3DA6CD7DF78A9B845F5BF15D097D_0_0_0 } /* SpringPosition/OnFinished */,
	{ DelegatePInvokeWrapper_OnLuaDataHandler_tDA466776F80351E010D3E3510620639B2312B4EB, NULL, NULL, NULL, NULL, NULL, &OnLuaDataHandler_tDA466776F80351E010D3E3510620639B2312B4EB_0_0_0 } /* Thousandto.Cfg.Data.HanderDefine/OnLuaDataHandler */,
	{ DelegatePInvokeWrapper_OnSetStringHandler_t2604ABAD926B6636FA77D2B613838FCA13A707E0, NULL, NULL, NULL, NULL, NULL, &OnSetStringHandler_t2604ABAD926B6636FA77D2B613838FCA13A707E0_0_0_0 } /* Thousandto.Cfg.Data.HanderDefine/OnSetStringHandler */,
	{ DelegatePInvokeWrapper_CheckUILuaDelegate_t11AC2DCF69F0F8F3814771A876AF70604F4E2C5B, NULL, NULL, NULL, NULL, NULL, &CheckUILuaDelegate_t11AC2DCF69F0F8F3814771A876AF70604F4E2C5B_0_0_0 } /* Thousandto.Code.Logic.CheckUILuaDelegate */,
	{ DelegatePInvokeWrapper_ClientGMDelagate_t74E43DD369CEAB125765204389179C68A2021CE6, NULL, NULL, NULL, NULL, NULL, &ClientGMDelagate_t74E43DD369CEAB125765204389179C68A2021CE6_0_0_0 } /* Thousandto.Code.Logic.ClientGMDelagate */,
	{ NULL, SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke, SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke_back, SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_marshal_pinvoke_cleanup, NULL, NULL, &SearchCollectionInfo_tE1FBD11F48B9476F9841F968846E789ED6E87A9E_0_0_0 } /* Thousandto.Code.Logic.CombatUtil/SearchCollectionInfo */,
	{ NULL, SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke, SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke_back, SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_marshal_pinvoke_cleanup, NULL, NULL, &SearchTargetInfo_tD2B7EA73D297BCA7CEDCAB9685FFBEB5FCAC35B1_0_0_0 } /* Thousandto.Code.Logic.CombatUtil/SearchTargetInfo */,
	{ DelegatePInvokeWrapper_EnterSceneDelegate_t7D58F53C28F671B8D1C858CAC0567CF04CB5D597, NULL, NULL, NULL, NULL, NULL, &EnterSceneDelegate_t7D58F53C28F671B8D1C858CAC0567CF04CB5D597_0_0_0 } /* Thousandto.Code.Logic.EnterSceneDelegate */,
	{ NULL, RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke, RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke_back, RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_marshal_pinvoke_cleanup, NULL, NULL, &RecordSkinPartInfo_t004FEBB9104DD016D394D049DD2322919BF9520C_0_0_0 } /* Thousandto.Code.Logic.FSkinModel/RecordSkinPartInfo */,
	{ NULL, VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke, VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke_back, VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_marshal_pinvoke_cleanup, NULL, NULL, &VFXCfgInfo_tB2F1FA4EAB3D559CEF5B2E314E4DFCC458DCF47D_0_0_0 } /* Thousandto.Code.Logic.FSkinModelConfig/VFXCfgInfo */,
	{ DelegatePInvokeWrapper_FriendTypeReturnDelegate_t94AA774887325EAFE651DD9D2861FF8F8625C6A5, NULL, NULL, NULL, NULL, NULL, &FriendTypeReturnDelegate_t94AA774887325EAFE651DD9D2861FF8F8625C6A5_0_0_0 } /* Thousandto.Code.Logic.FriendTypeReturnDelegate */,
	{ DelegatePInvokeWrapper_FunctionOpenedDelegate_t78DCB504BFF148CF98B64766C64648B213731B7D, NULL, NULL, NULL, NULL, NULL, &FunctionOpenedDelegate_t78DCB504BFF148CF98B64766C64648B213731B7D_0_0_0 } /* Thousandto.Code.Logic.FunctionOpenedDelegate */,
	{ DelegatePInvokeWrapper_GetVariableShowProgressDelegate_t68B653056161517DFFD9D6CEE7B0A1FB78AEC6D9, NULL, NULL, NULL, NULL, NULL, &GetVariableShowProgressDelegate_t68B653056161517DFFD9D6CEE7B0A1FB78AEC6D9_0_0_0 } /* Thousandto.Code.Logic.GetVariableShowProgressDelegate */,
	{ DelegatePInvokeWrapper_GetVariableShowTextDelegate_tB3A624530CCE6871E53A92D657B397BC94468ABB, NULL, NULL, NULL, NULL, NULL, &GetVariableShowTextDelegate_tB3A624530CCE6871E53A92D657B397BC94468ABB_0_0_0 } /* Thousandto.Code.Logic.GetVariableShowTextDelegate */,
	{ DelegatePInvokeWrapper_GetVariableValueDelegate_tACA3D471EB41228ACA2C3941760DB3AA9EA0B255, NULL, NULL, NULL, NULL, NULL, &GetVariableValueDelegate_tACA3D471EB41228ACA2C3941760DB3AA9EA0B255_0_0_0 } /* Thousandto.Code.Logic.GetVariableValueDelegate */,
	{ DelegatePInvokeWrapper_IsEnemyReturnDelagate_t27D5176F6356C0EF8ABDBAE0A006C0C498F4ECEA, NULL, NULL, NULL, NULL, NULL, &IsEnemyReturnDelagate_t27D5176F6356C0EF8ABDBAE0A006C0C498F4ECEA_0_0_0 } /* Thousandto.Code.Logic.IsEnemyReturnDelagate */,
	{ DelegatePInvokeWrapper_IsFriendReturnDelagate_t0EC571BFCD470117184BB585DA98348B91441915, NULL, NULL, NULL, NULL, NULL, &IsFriendReturnDelagate_t0EC571BFCD470117184BB585DA98348B91441915_0_0_0 } /* Thousandto.Code.Logic.IsFriendReturnDelagate */,
	{ DelegatePInvokeWrapper_IsRenewForm_t5315309980D021EE87DEA51805871138BDA90C12, NULL, NULL, NULL, NULL, NULL, &IsRenewForm_t5315309980D021EE87DEA51805871138BDA90C12_0_0_0 } /* Thousandto.Code.Logic.IsRenewForm */,
	{ DelegatePInvokeWrapper_IsShieldReturnDelagate_t284007B15AB90B0C43105D8F1866277091BD2A51, NULL, NULL, NULL, NULL, NULL, &IsShieldReturnDelagate_t284007B15AB90B0C43105D8F1866277091BD2A51_0_0_0 } /* Thousandto.Code.Logic.IsShieldReturnDelagate */,
	{ DelegatePInvokeWrapper_IsTeamMemberDelegate_t8652A604DE79CB7910C2DCDE46EFA7AC2E5B94FE, NULL, NULL, NULL, NULL, NULL, &IsTeamMemberDelegate_t8652A604DE79CB7910C2DCDE46EFA7AC2E5B94FE_0_0_0 } /* Thousandto.Code.Logic.IsTeamMemberDelegate */,
	{ DelegatePInvokeWrapper_IsVariableReachDelegate_t3F2D890471C78D78B60AB37286CD6F1574EC7DE2, NULL, NULL, NULL, NULL, NULL, &IsVariableReachDelegate_t3F2D890471C78D78B60AB37286CD6F1574EC7DE2_0_0_0 } /* Thousandto.Code.Logic.IsVariableReachDelegate */,
	{ DelegatePInvokeWrapper_LeaveSceneDelegate_t802988722FC7884CF3824C47F9242E34BDA7680D, NULL, NULL, NULL, NULL, NULL, &LeaveSceneDelegate_t802988722FC7884CF3824C47F9242E34BDA7680D_0_0_0 } /* Thousandto.Code.Logic.LeaveSceneDelegate */,
	{ NULL, LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke, LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke_back, LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_marshal_pinvoke_cleanup, NULL, NULL, &LogData_t689CFAD5F1DE93D64350274B05DFD0AEFC9E44E4_0_0_0 } /* Thousandto.Code.Logic.LogData */,
	{ DelegatePInvokeWrapper_NoParamesReturnUInt_tDF97B5F37B46BA5E8855BAD94BE5D6A2913DF6B0, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnUInt_tDF97B5F37B46BA5E8855BAD94BE5D6A2913DF6B0_0_0_0 } /* Thousandto.Code.Logic.LuaItemBase/NoParamesReturnUInt */,
	{ DelegatePInvokeWrapper_LuaUpdateDelegate_t8C93047B5422FC96A20E50C3974AAF610CFFEE45, NULL, NULL, NULL, NULL, NULL, &LuaUpdateDelegate_t8C93047B5422FC96A20E50C3974AAF610CFFEE45_0_0_0 } /* Thousandto.Code.Logic.LuaUpdateDelegate */,
	{ DelegatePInvokeWrapper_LuaUpdatePlussDelegate_tBD4ED8CE6B88D6A3C6C612C561D8F74DE6C7830C, NULL, NULL, NULL, NULL, NULL, &LuaUpdatePlussDelegate_tBD4ED8CE6B88D6A3C6C612C561D8F74DE6C7830C_0_0_0 } /* Thousandto.Code.Logic.LuaUpdatePlussDelegate */,
	{ DelegatePInvokeWrapper_NoParamNoReturn_tE254893A3CFA9F8FEF18C1F21E782ACE15C70542, NULL, NULL, NULL, NULL, NULL, &NoParamNoReturn_tE254893A3CFA9F8FEF18C1F21E782ACE15C70542_0_0_0 } /* Thousandto.Code.Logic.NoParamNoReturn */,
	{ DelegatePInvokeWrapper_NoParamesReturnBool_t7EFAF7BA22C5C5F8BCEBB03FAD4EB35C43D42CA5, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnBool_t7EFAF7BA22C5C5F8BCEBB03FAD4EB35C43D42CA5_0_0_0 } /* Thousandto.Code.Logic.NoParamesReturnBool */,
	{ DelegatePInvokeWrapper_NoParamesReturnInt_t6F95AC00C421EF5CB235E45677D325556224FAAC, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnInt_t6F95AC00C421EF5CB235E45677D325556224FAAC_0_0_0 } /* Thousandto.Code.Logic.NoParamesReturnInt */,
	{ DelegatePInvokeWrapper_NoParamesReturnString_t0D42D0B31A7F764922B2B7E6F818E6EAA04F8EC0, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnString_t0D42D0B31A7F764922B2B7E6F818E6EAA04F8EC0_0_0_0 } /* Thousandto.Code.Logic.NoParamesReturnString */,
	{ DelegatePInvokeWrapper_NoParamesReturnStringArr_t5F4DC1052A6CF8DDF94A34CDB2AB582F685620E8, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnStringArr_t5F4DC1052A6CF8DDF94A34CDB2AB582F685620E8_0_0_0 } /* Thousandto.Code.Logic.NoParamesReturnStringArr */,
	{ DelegatePInvokeWrapper_NoParamesReturnUintArr_t2BBE608AE1A18C670CCD823C156F3B6938431359, NULL, NULL, NULL, NULL, NULL, &NoParamesReturnUintArr_t2BBE608AE1A18C670CCD823C156F3B6938431359_0_0_0 } /* Thousandto.Code.Logic.NoParamesReturnUintArr */,
	{ DelegatePInvokeWrapper_ParamFloatNoReturn_t5CD750897FAE8E67126A86CE349BBADDB5ADBB06, NULL, NULL, NULL, NULL, NULL, &ParamFloatNoReturn_t5CD750897FAE8E67126A86CE349BBADDB5ADBB06_0_0_0 } /* Thousandto.Code.Logic.ParamFloatNoReturn */,
	{ DelegatePInvokeWrapper_ParamFuncNoReturn_tD032B57628A49B1C0C0F4E774F37647E350AB7F0, NULL, NULL, NULL, NULL, NULL, &ParamFuncNoReturn_tD032B57628A49B1C0C0F4E774F37647E350AB7F0_0_0_0 } /* Thousandto.Code.Logic.ParamFuncNoReturn */,
	{ DelegatePInvokeWrapper_ParamIntNoReturn_t957347B9BEF6709C138A31184A656527C00A8F3E, NULL, NULL, NULL, NULL, NULL, &ParamIntNoReturn_t957347B9BEF6709C138A31184A656527C00A8F3E_0_0_0 } /* Thousandto.Code.Logic.ParamIntNoReturn */,
	{ DelegatePInvokeWrapper_ParamIntReturnString_tC1D1B77EF92E52C711E30A94008758606D1D7CDC, NULL, NULL, NULL, NULL, NULL, &ParamIntReturnString_tC1D1B77EF92E52C711E30A94008758606D1D7CDC_0_0_0 } /* Thousandto.Code.Logic.ParamIntReturnString */,
	{ DelegatePInvokeWrapper_ParamStringRefWrapModeReturnString_tBD4D228EB2BF9F0D1A841C1E99B053674D236771, NULL, NULL, NULL, NULL, NULL, &ParamStringRefWrapModeReturnString_tBD4D228EB2BF9F0D1A841C1E99B053674D236771_0_0_0 } /* Thousandto.Code.Logic.ParamStringRefWrapModeReturnString */,
	{ DelegatePInvokeWrapper_ParamesBoolNoReturn_tBD3329D764F2EF868317C40541447684ACE4860E, NULL, NULL, NULL, NULL, NULL, &ParamesBoolNoReturn_tBD3329D764F2EF868317C40541447684ACE4860E_0_0_0 } /* Thousandto.Code.Logic.ParamesBoolNoReturn */,
	{ DelegatePInvokeWrapper_ParmesIntIntReturnInt_tE9781A3750B77D851D807E968DF5797FFD2A8525, NULL, NULL, NULL, NULL, NULL, &ParmesIntIntReturnInt_tE9781A3750B77D851D807E968DF5797FFD2A8525_0_0_0 } /* Thousandto.Code.Logic.ParmesIntIntReturnInt */,
	{ DelegatePInvokeWrapper_ParmesIntReturnBool_tBA430A8AFE7A6F2C8CC962FE93E4808EA629D0AF, NULL, NULL, NULL, NULL, NULL, &ParmesIntReturnBool_tBA430A8AFE7A6F2C8CC962FE93E4808EA629D0AF_0_0_0 } /* Thousandto.Code.Logic.ParmesIntReturnBool */,
	{ DelegatePInvokeWrapper_ParmesIntReturnInt_tDA5776839A7B8AF05927C3CE3FC1F1DD62AA9A32, NULL, NULL, NULL, NULL, NULL, &ParmesIntReturnInt_tDA5776839A7B8AF05927C3CE3FC1F1DD62AA9A32_0_0_0 } /* Thousandto.Code.Logic.ParmesIntReturnInt */,
	{ DelegatePInvokeWrapper_ScreenOrientationChanged_tA3ED3D4E60C3C57614422A5E827D3A00290646D3, NULL, NULL, NULL, NULL, NULL, &ScreenOrientationChanged_tA3ED3D4E60C3C57614422A5E827D3A00290646D3_0_0_0 } /* Thousandto.Code.Logic.ScreenOrientationChanged */,
	{ DelegatePInvokeWrapper_SetFlySwordSkillDelagate_t1C727EC55507B211FAC4E7F46FEAFDE49447901D, NULL, NULL, NULL, NULL, NULL, &SetFlySwordSkillDelagate_t1C727EC55507B211FAC4E7F46FEAFDE49447901D_0_0_0 } /* Thousandto.Code.Logic.SetFlySwordSkillDelagate */,
	{ NULL, ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke, ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke_back, ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_marshal_pinvoke_cleanup, NULL, NULL, &ResHolder_tE4C80378B27373FF4F662220C01564155D95BE13_0_0_0 } /* Thousandto.Core.Asset.ResHolder */,
	{ DelegatePInvokeWrapper_SweepAction_tD8A0DDDBDF973FBA4E244701611C21035CF88BE8, NULL, NULL, NULL, NULL, NULL, &SweepAction_tD8A0DDDBDF973FBA4E244701611C21035CF88BE8_0_0_0 } /* Thousandto.Core.Base.BlockAllocator/SweepAction */,
	{ NULL, __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke, __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke_back, __Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_marshal_pinvoke_cleanup, NULL, NULL, &__Value_tAFDDCA097D42A0D8514AB613B21084418954E0C9_0_0_0 } /* Thousandto.Core.Base.DataTable/Value/__Value */,
	{ NULL, __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke, __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke_back, __Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_marshal_pinvoke_cleanup, NULL, NULL, &__Value_tA2C46838E8F6D7E2F60410846B5A61C5397E79C9_0_0_0 } /* Thousandto.Core.Base.DataTableEx/Value/__Value */,
	{ DelegatePInvokeWrapper_FingerDownEventHandler_t9EF168BB85499E298785182777B87F8238751916, NULL, NULL, NULL, NULL, NULL, &FingerDownEventHandler_t9EF168BB85499E298785182777B87F8238751916_0_0_0 } /* Thousandto.Core.Base.FingerDownEventHandler */,
	{ DelegatePInvokeWrapper_FingerMoveEventHandler_t128359E1459644CECC5E2A042664E7F697A9774B, NULL, NULL, NULL, NULL, NULL, &FingerMoveEventHandler_t128359E1459644CECC5E2A042664E7F697A9774B_0_0_0 } /* Thousandto.Core.Base.FingerMoveEventHandler */,
	{ DelegatePInvokeWrapper_FingerUpEventHandler_tE8E7C3EE03A2D84386C4C0EA5508C04CE3BA3A65, NULL, NULL, NULL, NULL, NULL, &FingerUpEventHandler_tE8E7C3EE03A2D84386C4C0EA5508C04CE3BA3A65_0_0_0 } /* Thousandto.Core.Base.FingerUpEventHandler */,
	{ DelegatePInvokeWrapper_Function_t92FB212CEF4E080C71F6A5EAB31C589A749673CC, NULL, NULL, NULL, NULL, NULL, &Function_t92FB212CEF4E080C71F6A5EAB31C589A749673CC_0_0_0 } /* Thousandto.Core.Base.Interpolate/Function */,
	{ DelegatePInvokeWrapper_MyAction_t02D26C938BC640CE7C782C5A8EC460B79B3B8AF9, NULL, NULL, NULL, NULL, NULL, &MyAction_t02D26C938BC640CE7C782C5A8EC460B79B3B8AF9_0_0_0 } /* Thousandto.Core.Base.MyAction */,
	{ DelegatePInvokeWrapper_PinchEventHandler_t03AE5B3E8CB205FB68435014CB8C90BD18E3C7C3, NULL, NULL, NULL, NULL, NULL, &PinchEventHandler_t03AE5B3E8CB205FB68435014CB8C90BD18E3C7C3_0_0_0 } /* Thousandto.Core.Base.PinchEventHandler */,
	{ DelegatePInvokeWrapper_PinchMoveEventHandler_tDB2DB4DFB4AD18006735016BB4E42C453AAF8DE8, NULL, NULL, NULL, NULL, NULL, &PinchMoveEventHandler_tDB2DB4DFB4AD18006735016BB4E42C453AAF8DE8_0_0_0 } /* Thousandto.Core.Base.PinchMoveEventHandler */,
	{ DelegatePInvokeWrapper_RotationBeginEventHandler_t45A2E1DBAE99A537C212A6BDB6112AEF45F514E7, NULL, NULL, NULL, NULL, NULL, &RotationBeginEventHandler_t45A2E1DBAE99A537C212A6BDB6112AEF45F514E7_0_0_0 } /* Thousandto.Core.Base.RotationBeginEventHandler */,
	{ DelegatePInvokeWrapper_RotationEndEventHandler_tFE178EDC07A6FD4A5F241B122D83D8698ED9DA79, NULL, NULL, NULL, NULL, NULL, &RotationEndEventHandler_tFE178EDC07A6FD4A5F241B122D83D8698ED9DA79_0_0_0 } /* Thousandto.Core.Base.RotationEndEventHandler */,
	{ DelegatePInvokeWrapper_RotationMoveEventHandler_t4172CEF45F90D2C372E81E8AEE02749447407081, NULL, NULL, NULL, NULL, NULL, &RotationMoveEventHandler_t4172CEF45F90D2C372E81E8AEE02749447407081_0_0_0 } /* Thousandto.Core.Base.RotationMoveEventHandler */,
	{ NULL, MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke, MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke_back, MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_marshal_pinvoke_cleanup, NULL, NULL, &MatPropertyColor_tB36E6C5232379385E7F1042783998C5423EED357_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MatPropertyColor */,
	{ NULL, MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke, MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke_back, MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_marshal_pinvoke_cleanup, NULL, NULL, &MatPropertyFloat_t508548405CEDD9E3989D0D9B2918DB2B0448F030_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MatPropertyFloat */,
	{ NULL, MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke, MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke_back, MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_marshal_pinvoke_cleanup, NULL, NULL, &MatPropertyTextureName_tD7987924909B8FACD767E9B510FDD9F4DC62C58C_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MatPropertyTextureName */,
	{ NULL, MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke, MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke_back, MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_marshal_pinvoke_cleanup, NULL, NULL, &MatPropertyVector_tB5AABFAB4E99684E40E5F1277C737D453CF2DCB8_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MatPropertyVector */,
	{ NULL, MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke, MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke_back, MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_marshal_pinvoke_cleanup, NULL, NULL, &MatTexPropertyIndex_t6BFD4F0C8E6AEC9F93BF544A79A81CCA3C8BBB32_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MatTexPropertyIndex */,
	{ NULL, MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke, MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke_back, MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_marshal_pinvoke_cleanup, NULL, NULL, &MaterialPropertyColor_t79A02C6836146D496FD28B783F48AFF99264AACA_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MaterialPropertyColor */,
	{ NULL, MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke, MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke_back, MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_marshal_pinvoke_cleanup, NULL, NULL, &MaterialPropertyFloat_t749A48399F41316138EE9CA83FCEC2A4E9B8299C_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MaterialPropertyFloat */,
	{ NULL, MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke, MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke_back, MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_marshal_pinvoke_cleanup, NULL, NULL, &MaterialPropertyTexture_t757C8CE77362A882864E6F8830A6DBD16B7F12AF_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MaterialPropertyTexture */,
	{ NULL, MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke, MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke_back, MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_marshal_pinvoke_cleanup, NULL, NULL, &MaterialPropertyVector_tD5BFF13039A1AFA3A4D4645066979D7129786571_0_0_0 } /* Thousandto.Launcher.ExternalLibs.MaterialPropertyVector */,
	{ NULL, RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke, RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke_back, RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_marshal_pinvoke_cleanup, NULL, NULL, &RadiaBlurData_tD53844735529F431E6E3A3F83F755CF95E875C51_0_0_0 } /* Thousandto.Launcher.ExternalLibs.RadiaBlurData */,
	{ DelegatePInvokeWrapper_SetNewVertexDelegate_t66928ED4E22460C1EEB0563B708570873BBB1EE4, NULL, NULL, NULL, NULL, NULL, &SetNewVertexDelegate_t66928ED4E22460C1EEB0563B708570873BBB1EE4_0_0_0 } /* Thousandto.Launcher.ExternalLibs.SetNewVertexDelegate */,
	{ DelegatePInvokeWrapper_MovieAction_t0A145CC2B5391C273F24C22C4D2DD2ADC760EB0F, NULL, NULL, NULL, NULL, NULL, &MovieAction_t0A145CC2B5391C273F24C22C4D2DD2ADC760EB0F_0_0_0 } /* Thousandto.LauncherForm.Movie.MovieAction */,
	{ DelegatePInvokeWrapper_DoResMessageDelegate_tD7D8485EB5A3F04A5FBD5F9812C2BE2F0442E6BC, NULL, NULL, NULL, NULL, NULL, &DoResMessageDelegate_tD7D8485EB5A3F04A5FBD5F9812C2BE2F0442E6BC_0_0_0 } /* Thousandto.Plugins.Common.DoResMessageDelegate */,
	{ NULL, BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke, BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke_back, BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_marshal_pinvoke_cleanup, NULL, NULL, &BlockInfo_t6C00B555DE0447F0DBEEC38AD7763A6097AC7861_0_0_0 } /* Thousandto.Plugins.PathGrid.DynamicBlock/BlockInfo */,
	{ DelegatePInvokeWrapper_SweepAction_t7473C9AF8740CAA4DDF149DBDA753A49B206DFD6, NULL, NULL, NULL, NULL, NULL, &SweepAction_t7473C9AF8740CAA4DDF149DBDA753A49B206DFD6_0_0_0 } /* Thousandto.Plugins.PathGrid.Path2dSubPool/SweepAction */,
	{ DelegatePInvokeWrapper_AbortFinishCallback_t6052BFEB2524FB82F4012B32D03A2DDD98EEC0BF, NULL, NULL, NULL, NULL, NULL, &AbortFinishCallback_t6052BFEB2524FB82F4012B32D03A2DDD98EEC0BF_0_0_0 } /* Thousandto.Update.Delegate.AbortFinishCallback */,
	{ DelegatePInvokeWrapper_ActionV_t30A4926F0837EAD9E5944B47658180E831CE4C45, NULL, NULL, NULL, NULL, NULL, &ActionV_t30A4926F0837EAD9E5944B47658180E831CE4C45_0_0_0 } /* Thousandto.Update.Delegate.ActionV */,
	{ DelegatePInvokeWrapper_ClientDownloadFinishCallback_t2888ABE46D301FF3041301325E7C6DD8080E8E4B, NULL, NULL, NULL, NULL, NULL, &ClientDownloadFinishCallback_t2888ABE46D301FF3041301325E7C6DD8080E8E4B_0_0_0 } /* Thousandto.Update.Delegate.ClientDownloadFinishCallback */,
	{ DelegatePInvokeWrapper_CustomDownClientFunc_t2CBECF6F5394EDE28C01C9ED1D796B66279A562C, NULL, NULL, NULL, NULL, NULL, &CustomDownClientFunc_t2CBECF6F5394EDE28C01C9ED1D796B66279A562C_0_0_0 } /* Thousandto.Update.Delegate.CustomDownClientFunc */,
	{ DelegatePInvokeWrapper_DownloadNoticeCall_tAD0597FB19B54E8203F2017441A089B7E2ECADC8, NULL, NULL, NULL, NULL, NULL, &DownloadNoticeCall_tAD0597FB19B54E8203F2017441A089B7E2ECADC8_0_0_0 } /* Thousandto.Update.Delegate.DownloadNoticeCall */,
	{ DelegatePInvokeWrapper_FinishCallback_t6B5242AFACC9589E6F3504CAC8DDE3CE338F0F9B, NULL, NULL, NULL, NULL, NULL, &FinishCallback_t6B5242AFACC9589E6F3504CAC8DDE3CE338F0F9B_0_0_0 } /* Thousandto.Update.Delegate.FinishCallback */,
	{ DelegatePInvokeWrapper_TransResourceFinishCallback_tBBF5E809155114C8669D748FAA3A3CAE9DDE9B18, NULL, NULL, NULL, NULL, NULL, &TransResourceFinishCallback_tBBF5E809155114C8669D748FAA3A3CAE9DDE9B18_0_0_0 } /* Thousandto.Update.Delegate.TransResourceFinishCallback */,
	{ DelegatePInvokeWrapper_DefaultLog_tADC8EC375A6B3CE26A2C73738A96178C69DF8847, NULL, NULL, NULL, NULL, NULL, &DefaultLog_tADC8EC375A6B3CE26A2C73738A96178C69DF8847_0_0_0 } /* Thousandto.Update.Log.DefaultLog */,
	{ DelegatePInvokeWrapper_ErrorLog_t438C33073CDC4FF2D331D8F4DB7C893DFB6017E4, NULL, NULL, NULL, NULL, NULL, &ErrorLog_t438C33073CDC4FF2D331D8F4DB7C893DFB6017E4_0_0_0 } /* Thousandto.Update.Log.ErrorLog */,
	{ DelegatePInvokeWrapper_WarnLog_t4975112AC6B7300FD08055DFE3CD617FAA0C954C, NULL, NULL, NULL, NULL, NULL, &WarnLog_t4975112AC6B7300FD08055DFE3CD617FAA0C954C_0_0_0 } /* Thousandto.Update.Log.WarnLog */,
	{ DelegatePInvokeWrapper_MovieAction_t073D71D962A702600A78BF50B07DB186F2D404C0, NULL, NULL, NULL, NULL, NULL, &MovieAction_t073D71D962A702600A78BF50B07DB186F2D404C0_0_0_0 } /* Thousandto.UpdateForm.Movie.MovieAction */,
	{ NULL, FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke, FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke_back, FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_marshal_pinvoke_cleanup, NULL, NULL, &FadeEntry_t0B5ED7DC5C6BD61356FFDB2A7F0A69488D6F1361_0_0_0 } /* TypewriterEffect/FadeEntry */,
	{ NULL, DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke, DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke_back, DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_marshal_pinvoke_cleanup, NULL, NULL, &DepthEntry_tC6CD8A8D7333564AB1C62123474E9B5152F87433_0_0_0 } /* UICamera/DepthEntry */,
	{ DelegatePInvokeWrapper_GetAnyKeyFunc_tC4F7908BE4D02AA11865AADD6D2C1B6E99370C3F, NULL, NULL, NULL, NULL, NULL, &GetAnyKeyFunc_tC4F7908BE4D02AA11865AADD6D2C1B6E99370C3F_0_0_0 } /* UICamera/GetAnyKeyFunc */,
	{ DelegatePInvokeWrapper_GetAxisFunc_tAC0D6B50B6DBAE2CB113D9EC83F80BAE7DFC0569, NULL, NULL, NULL, NULL, NULL, &GetAxisFunc_tAC0D6B50B6DBAE2CB113D9EC83F80BAE7DFC0569_0_0_0 } /* UICamera/GetAxisFunc */,
	{ DelegatePInvokeWrapper_GetKeyStateFunc_t89F4D3B2F3B098AF74D57381B932816801834E89, NULL, NULL, NULL, NULL, NULL, &GetKeyStateFunc_t89F4D3B2F3B098AF74D57381B932816801834E89_0_0_0 } /* UICamera/GetKeyStateFunc */,
	{ DelegatePInvokeWrapper_GetTouchCountCallback_tFAF62B9DBE7BD6AEE099FA5C9094B2EA8EC9C969, NULL, NULL, NULL, NULL, NULL, &GetTouchCountCallback_tFAF62B9DBE7BD6AEE099FA5C9094B2EA8EC9C969_0_0_0 } /* UICamera/GetTouchCountCallback */,
	{ DelegatePInvokeWrapper_MoveDelegate_t36948A3A4ADEA13E4F45042C1C9CE19E82236163, NULL, NULL, NULL, NULL, NULL, &MoveDelegate_t36948A3A4ADEA13E4F45042C1C9CE19E82236163_0_0_0 } /* UICamera/MoveDelegate */,
	{ DelegatePInvokeWrapper_OnCustomInput_t64CB8392B4461AB5052A78AA3799F1B4D105144D, NULL, NULL, NULL, NULL, NULL, &OnCustomInput_t64CB8392B4461AB5052A78AA3799F1B4D105144D_0_0_0 } /* UICamera/OnCustomInput */,
	{ DelegatePInvokeWrapper_OnSchemeChange_tE7213C45B97603A2073A65DA7B955C69055334C8, NULL, NULL, NULL, NULL, NULL, &OnSchemeChange_tE7213C45B97603A2073A65DA7B955C69055334C8_0_0_0 } /* UICamera/OnSchemeChange */,
	{ DelegatePInvokeWrapper_OnScreenResize_tB3AE724B0B563F605E44B8228EC9362B0E7FA16B, NULL, NULL, NULL, NULL, NULL, &OnScreenResize_tB3AE724B0B563F605E44B8228EC9362B0E7FA16B_0_0_0 } /* UICamera/OnScreenResize */,
	{ DelegatePInvokeWrapper_OnReposition_t9E693E283D91D7100F357EF767FEA92BA3A8BBAD, NULL, NULL, NULL, NULL, NULL, &OnReposition_t9E693E283D91D7100F357EF767FEA92BA3A8BBAD_0_0_0 } /* UIGrid/OnReposition */,
	{ DelegatePInvokeWrapper_OnValidate_t3E29CE1E18F947309A13C439E929984001996908, NULL, NULL, NULL, NULL, NULL, &OnValidate_t3E29CE1E18F947309A13C439E929984001996908_0_0_0 } /* UIInput/OnValidate */,
	{ DelegatePInvokeWrapper_OnGeometryUpdated_t14B51F3213B90E00CB8F087CBA96DC81451C209E, NULL, NULL, NULL, NULL, NULL, &OnGeometryUpdated_t14B51F3213B90E00CB8F087CBA96DC81451C209E_0_0_0 } /* UIPanel/OnGeometryUpdated */,
	{ DelegatePInvokeWrapper_OnRenderQueueChanged_tCDFDC967AF50AF96BE21E8B10780F5DBC8CD0FEC, NULL, NULL, NULL, NULL, NULL, &OnRenderQueueChanged_tCDFDC967AF50AF96BE21E8B10780F5DBC8CD0FEC_0_0_0 } /* UIPanel/OnRenderQueueChanged */,
	{ DelegatePInvokeWrapper_LegacyEvent_tED84DB8DD6E5CBA349BE9D342013E9E4165C2B68, NULL, NULL, NULL, NULL, NULL, &LegacyEvent_tED84DB8DD6E5CBA349BE9D342013E9E4165C2B68_0_0_0 } /* UIPopupList/LegacyEvent */,
	{ DelegatePInvokeWrapper_OnDragFinished_tAD093DA65EBBBB1D6E9D2EC4B32CBF24BD930ECE, NULL, NULL, NULL, NULL, NULL, &OnDragFinished_tAD093DA65EBBBB1D6E9D2EC4B32CBF24BD930ECE_0_0_0 } /* UIProgressBar/OnDragFinished */,
	{ DelegatePInvokeWrapper_OnDragNotification_t1CBE40663E4C594078C957EBE688F7297665233B, NULL, NULL, NULL, NULL, NULL, &OnDragNotification_t1CBE40663E4C594078C957EBE688F7297665233B_0_0_0 } /* UIScrollView/OnDragNotification */,
	{ DelegatePInvokeWrapper_OnReposition_t1C86A47168C5D731297790E56D25EF023720369B, NULL, NULL, NULL, NULL, NULL, &OnReposition_t1C86A47168C5D731297790E56D25EF023720369B_0_0_0 } /* UITable/OnReposition */,
	{ DelegatePInvokeWrapper_Validate_t3DDC63808BA02771C60452673B5B4BDAC9CCE3DB, NULL, NULL, NULL, NULL, NULL, &Validate_t3DDC63808BA02771C60452673B5B4BDAC9CCE3DB_0_0_0 } /* UIToggle/Validate */,
	{ DelegatePInvokeWrapper_HitCheck_t47C4EF0E7BAC0F4FF673FCE2A8A1F3B72673917D, NULL, NULL, NULL, NULL, NULL, &HitCheck_t47C4EF0E7BAC0F4FF673FCE2A8A1F3B72673917D_0_0_0 } /* UIWidget/HitCheck */,
	{ DelegatePInvokeWrapper_OnDimensionsChanged_t255673CE2EAA77B780CFEF7BCE9974A5A570D855, NULL, NULL, NULL, NULL, NULL, &OnDimensionsChanged_t255673CE2EAA77B780CFEF7BCE9974A5A570D855_0_0_0 } /* UIWidget/OnDimensionsChanged */,
	{ DelegatePInvokeWrapper_ProgressDelegate_tAF8ADEF968A47AD25B137560F2CCA094B9206812, NULL, NULL, NULL, NULL, NULL, &ProgressDelegate_tAF8ADEF968A47AD25B137560F2CCA094B9206812_0_0_0 } /* UltimateGameTools.MeshSimplifier.Simplifier/ProgressDelegate */,
	{ NULL, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_back, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_cleanup, NULL, NULL, &UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_0_0_0 } /* UniWebViewMessage */,
	{ DelegatePInvokeWrapper_OnFinishCall_t27A83612AE476F36F39AE0F2F9981FE603F09449, NULL, NULL, NULL, NULL, NULL, &OnFinishCall_t27A83612AE476F36F39AE0F2F9981FE603F09449_0_0_0 } /* VideoRootScript/OnFinishCall */,
	{ DelegatePInvokeWrapper_OnPreparedCall_t0B889D6C2A2055370D4BB10364E799DF24F4F7DC, NULL, NULL, NULL, NULL, NULL, &OnPreparedCall_t0B889D6C2A2055370D4BB10364E799DF24F4F7DC_0_0_0 } /* VideoRootScript/OnPreparedCall */,
	{ DelegatePInvokeWrapper_lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2, NULL, NULL, NULL, NULL, NULL, &lua_CSFunction_tCC8EC85D3A78EFDB5F9E5B2DB89FFF7FDBD2FBA2_0_0_0 } /* XLua.LuaDLL.lua_CSFunction */,
	{ DelegatePInvokeWrapper_CustomLoader_tC129B728BC98EF7847D9BEADB439BF7D7E1C6E32, NULL, NULL, NULL, NULL, NULL, &CustomLoader_tC129B728BC98EF7847D9BEADB439BF7D7E1C6E32_0_0_0 } /* XLua.LuaEnv/CustomLoader */,
	{ NULL, GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke, GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke_back, GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_marshal_pinvoke_cleanup, NULL, NULL, &GCAction_tA93067DCEAA3E434EE8E81D18EB2A8145E523872_0_0_0 } /* XLua.LuaEnv/GCAction */,
	{ DelegatePInvokeWrapper_ObjectCheck_t4D2BD8EC5CF83239E29403CF9573407008D7CF7B, NULL, NULL, NULL, NULL, NULL, &ObjectCheck_t4D2BD8EC5CF83239E29403CF9573407008D7CF7B_0_0_0 } /* XLua.ObjectCheck */,
	{ NULL, Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke, Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke_back, Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t7B926643C889440A8ABB2F74A1BFA78A9D651219_0_0_0 } /* XLua.ObjectPool/Slot */,
	{ NULL, MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke, MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke_back, MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_marshal_pinvoke_cleanup, NULL, NULL, &MethodKey_t7F4380C8F890A9714AEE2104D71A2AA2B8D42DA3_0_0_0 } /* XLua.Utils/MethodKey */,
	{ DelegatePInvokeWrapper_ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487, NULL, NULL, NULL, NULL, NULL, &ApplyTween_t0470935767C7B4CC05367D151B0A05DCFCFEA487_0_0_0 } /* iTween/ApplyTween */,
	{ DelegatePInvokeWrapper_EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4, NULL, NULL, NULL, NULL, NULL, &EasingFunction_tF1283C559771F12F114B03C2946E131A6B75BBE4_0_0_0 } /* iTween/EasingFunction */,
	NULL,
};
