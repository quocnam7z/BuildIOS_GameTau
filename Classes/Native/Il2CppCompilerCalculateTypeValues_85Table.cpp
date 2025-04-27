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


// MSG_BI.Device
struct Device_t4E586BECBBC299135480764E7D070583DC87DC35;
// MSG_Backend.ActivityClientInfo
struct ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB;
// MSG_Boss.mySelfBossCopyInfo
struct mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1;
// MSG_Boss.mySelfBossCopyItemInfo
struct mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B;
// MSG_backpack.ItemCoin
struct ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80;
// MSG_backpack.ItemInfo
struct ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C;
// System.Collections.Generic.List`1<MSG_BI.UIData>
struct List_1_t6E34EC04ACB32F9B2FF4B212C8A1112C90664445;
// System.Collections.Generic.List`1<MSG_BI.ValMap>
struct List_1_tB8BDDE6E8C412EC6D809C82775E8B72211D0B35B;
// System.Collections.Generic.List`1<MSG_Backend.ActivetyExchangeNeed>
struct List_1_t10B89EF371D55871754C19425DE9A286798C6AE4;
// System.Collections.Generic.List`1<MSG_Backend.ActivetyRankInfo>
struct List_1_t8518688E9A6DCD6D8C2E410CD567E57A037A4F5D;
// System.Collections.Generic.List`1<MSG_Backend.ActivityClientInfo>
struct List_1_tC9552537E9DF73D2554205B44FF31274D0FD57CB;
// System.Collections.Generic.List`1<MSG_Backend.BossInfo>
struct List_1_tE3F484AEE11CFBE84234D22135E8AA8213076C31;
// System.Collections.Generic.List`1<MSG_Backend.DayReward>
struct List_1_t9D10B15EB9CDD65AC8DE38A4479012D8531B07B0;
// System.Collections.Generic.List`1<MSG_Backend.FuncOpenInfo>
struct List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80;
// System.Collections.Generic.List`1<MSG_Boss.BossInfo>
struct List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403;
// System.Collections.Generic.List`1<MSG_Boss.BossKilledRecord>
struct List_1_tFC12ACF1953BE4D71D1610018372A45252FE8A5D;
// System.Collections.Generic.List`1<MSG_Boss.BossMapOlInfo>
struct List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3;
// System.Collections.Generic.List`1<MSG_Boss.harmRank>
struct List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80;
// System.Collections.Generic.List`1<MSG_Boss.mySelfBossCopyInfo>
struct List_1_tC50E9966B11B8D72239D8CD8FBF072AA03787E07;
// System.Collections.Generic.List`1<MSG_BossHome.BossInfo>
struct List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D;
// System.Collections.Generic.List`1<MSG_BossHome.bossHomeBossInfo>
struct List_1_t1E74506F16D98F05B6BF24E3BC98855BA3666F64;
// System.Collections.Generic.List`1<MSG_BossHome.bossRecordInfo>
struct List_1_t5831C39B74BFB741E47D7F434F34BB0D500DABEA;
// System.Collections.Generic.List`1<MSG_backpack.ItemCoin>
struct List_1_tB2061A5C45453A28180C3328C83485BE4EBF1A33;
// System.Collections.Generic.List`1<MSG_backpack.ItemInfo>
struct List_1_tE33393B445B8280160D222A3232DF1C02536A76C;
// System.Collections.Generic.List`1<MSG_backpack.OpenGiftInfo>
struct List_1_t558F8327FEE5B06540B19436A81AA27322F8BE63;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8;
// System.String
struct String_t;




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
#ifndef DEVICE_T4E586BECBBC299135480764E7D070583DC87DC35_H
#define DEVICE_T4E586BECBBC299135480764E7D070583DC87DC35_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.Device
struct  Device_t4E586BECBBC299135480764E7D070583DC87DC35  : public RuntimeObject
{
public:
	// System.Int32 MSG_BI.Device::appId
	int32_t ___appId_0;
	// System.Int32 MSG_BI.Device::roleId
	int32_t ___roleId_1;
	// System.String MSG_BI.Device::channelId
	String_t* ___channelId_2;
	// System.String MSG_BI.Device::sourceId
	String_t* ___sourceId_3;
	// System.String MSG_BI.Device::deviceId
	String_t* ___deviceId_4;
	// System.Int32 MSG_BI.Device::platform
	int32_t ___platform_5;
	// System.String MSG_BI.Device::app_version
	String_t* ___app_version_6;
	// System.String MSG_BI.Device::merchant
	String_t* ___merchant_7;
	// System.String MSG_BI.Device::net_type
	String_t* ___net_type_8;
	// System.String MSG_BI.Device::screen
	String_t* ___screen_9;
	// System.String MSG_BI.Device::os
	String_t* ___os_10;
	// System.String MSG_BI.Device::os_version
	String_t* ___os_version_11;
	// System.String MSG_BI.Device::server_name
	String_t* ___server_name_12;
	// System.Int32 MSG_BI.Device::cpgameId
	int32_t ___cpgameId_13;
	// System.String MSG_BI.Device::cpdid
	String_t* ___cpdid_14;
	// System.String MSG_BI.Device::cpdevice_name
	String_t* ___cpdevice_name_15;
	// System.Int32 MSG_BI.Device::cpplatformId
	int32_t ___cpplatformId_16;
	// System.String MSG_BI.Device::cpuserid
	String_t* ___cpuserid_17;
	// System.String MSG_BI.Device::cpuserName
	String_t* ___cpuserName_18;
	// System.String MSG_BI.Device::cpgameName
	String_t* ___cpgameName_19;
	// System.String MSG_BI.Device::cpPlatformGname
	String_t* ___cpPlatformGname_20;

public:
	inline static int32_t get_offset_of_appId_0() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___appId_0)); }
	inline int32_t get_appId_0() const { return ___appId_0; }
	inline int32_t* get_address_of_appId_0() { return &___appId_0; }
	inline void set_appId_0(int32_t value)
	{
		___appId_0 = value;
	}

	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___roleId_1)); }
	inline int32_t get_roleId_1() const { return ___roleId_1; }
	inline int32_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int32_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_channelId_2() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___channelId_2)); }
	inline String_t* get_channelId_2() const { return ___channelId_2; }
	inline String_t** get_address_of_channelId_2() { return &___channelId_2; }
	inline void set_channelId_2(String_t* value)
	{
		___channelId_2 = value;
		Il2CppCodeGenWriteBarrier((&___channelId_2), value);
	}

	inline static int32_t get_offset_of_sourceId_3() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___sourceId_3)); }
	inline String_t* get_sourceId_3() const { return ___sourceId_3; }
	inline String_t** get_address_of_sourceId_3() { return &___sourceId_3; }
	inline void set_sourceId_3(String_t* value)
	{
		___sourceId_3 = value;
		Il2CppCodeGenWriteBarrier((&___sourceId_3), value);
	}

	inline static int32_t get_offset_of_deviceId_4() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___deviceId_4)); }
	inline String_t* get_deviceId_4() const { return ___deviceId_4; }
	inline String_t** get_address_of_deviceId_4() { return &___deviceId_4; }
	inline void set_deviceId_4(String_t* value)
	{
		___deviceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___deviceId_4), value);
	}

	inline static int32_t get_offset_of_platform_5() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___platform_5)); }
	inline int32_t get_platform_5() const { return ___platform_5; }
	inline int32_t* get_address_of_platform_5() { return &___platform_5; }
	inline void set_platform_5(int32_t value)
	{
		___platform_5 = value;
	}

	inline static int32_t get_offset_of_app_version_6() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___app_version_6)); }
	inline String_t* get_app_version_6() const { return ___app_version_6; }
	inline String_t** get_address_of_app_version_6() { return &___app_version_6; }
	inline void set_app_version_6(String_t* value)
	{
		___app_version_6 = value;
		Il2CppCodeGenWriteBarrier((&___app_version_6), value);
	}

	inline static int32_t get_offset_of_merchant_7() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___merchant_7)); }
	inline String_t* get_merchant_7() const { return ___merchant_7; }
	inline String_t** get_address_of_merchant_7() { return &___merchant_7; }
	inline void set_merchant_7(String_t* value)
	{
		___merchant_7 = value;
		Il2CppCodeGenWriteBarrier((&___merchant_7), value);
	}

	inline static int32_t get_offset_of_net_type_8() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___net_type_8)); }
	inline String_t* get_net_type_8() const { return ___net_type_8; }
	inline String_t** get_address_of_net_type_8() { return &___net_type_8; }
	inline void set_net_type_8(String_t* value)
	{
		___net_type_8 = value;
		Il2CppCodeGenWriteBarrier((&___net_type_8), value);
	}

	inline static int32_t get_offset_of_screen_9() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___screen_9)); }
	inline String_t* get_screen_9() const { return ___screen_9; }
	inline String_t** get_address_of_screen_9() { return &___screen_9; }
	inline void set_screen_9(String_t* value)
	{
		___screen_9 = value;
		Il2CppCodeGenWriteBarrier((&___screen_9), value);
	}

	inline static int32_t get_offset_of_os_10() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___os_10)); }
	inline String_t* get_os_10() const { return ___os_10; }
	inline String_t** get_address_of_os_10() { return &___os_10; }
	inline void set_os_10(String_t* value)
	{
		___os_10 = value;
		Il2CppCodeGenWriteBarrier((&___os_10), value);
	}

	inline static int32_t get_offset_of_os_version_11() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___os_version_11)); }
	inline String_t* get_os_version_11() const { return ___os_version_11; }
	inline String_t** get_address_of_os_version_11() { return &___os_version_11; }
	inline void set_os_version_11(String_t* value)
	{
		___os_version_11 = value;
		Il2CppCodeGenWriteBarrier((&___os_version_11), value);
	}

	inline static int32_t get_offset_of_server_name_12() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___server_name_12)); }
	inline String_t* get_server_name_12() const { return ___server_name_12; }
	inline String_t** get_address_of_server_name_12() { return &___server_name_12; }
	inline void set_server_name_12(String_t* value)
	{
		___server_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___server_name_12), value);
	}

	inline static int32_t get_offset_of_cpgameId_13() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpgameId_13)); }
	inline int32_t get_cpgameId_13() const { return ___cpgameId_13; }
	inline int32_t* get_address_of_cpgameId_13() { return &___cpgameId_13; }
	inline void set_cpgameId_13(int32_t value)
	{
		___cpgameId_13 = value;
	}

	inline static int32_t get_offset_of_cpdid_14() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpdid_14)); }
	inline String_t* get_cpdid_14() const { return ___cpdid_14; }
	inline String_t** get_address_of_cpdid_14() { return &___cpdid_14; }
	inline void set_cpdid_14(String_t* value)
	{
		___cpdid_14 = value;
		Il2CppCodeGenWriteBarrier((&___cpdid_14), value);
	}

	inline static int32_t get_offset_of_cpdevice_name_15() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpdevice_name_15)); }
	inline String_t* get_cpdevice_name_15() const { return ___cpdevice_name_15; }
	inline String_t** get_address_of_cpdevice_name_15() { return &___cpdevice_name_15; }
	inline void set_cpdevice_name_15(String_t* value)
	{
		___cpdevice_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___cpdevice_name_15), value);
	}

	inline static int32_t get_offset_of_cpplatformId_16() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpplatformId_16)); }
	inline int32_t get_cpplatformId_16() const { return ___cpplatformId_16; }
	inline int32_t* get_address_of_cpplatformId_16() { return &___cpplatformId_16; }
	inline void set_cpplatformId_16(int32_t value)
	{
		___cpplatformId_16 = value;
	}

	inline static int32_t get_offset_of_cpuserid_17() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpuserid_17)); }
	inline String_t* get_cpuserid_17() const { return ___cpuserid_17; }
	inline String_t** get_address_of_cpuserid_17() { return &___cpuserid_17; }
	inline void set_cpuserid_17(String_t* value)
	{
		___cpuserid_17 = value;
		Il2CppCodeGenWriteBarrier((&___cpuserid_17), value);
	}

	inline static int32_t get_offset_of_cpuserName_18() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpuserName_18)); }
	inline String_t* get_cpuserName_18() const { return ___cpuserName_18; }
	inline String_t** get_address_of_cpuserName_18() { return &___cpuserName_18; }
	inline void set_cpuserName_18(String_t* value)
	{
		___cpuserName_18 = value;
		Il2CppCodeGenWriteBarrier((&___cpuserName_18), value);
	}

	inline static int32_t get_offset_of_cpgameName_19() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpgameName_19)); }
	inline String_t* get_cpgameName_19() const { return ___cpgameName_19; }
	inline String_t** get_address_of_cpgameName_19() { return &___cpgameName_19; }
	inline void set_cpgameName_19(String_t* value)
	{
		___cpgameName_19 = value;
		Il2CppCodeGenWriteBarrier((&___cpgameName_19), value);
	}

	inline static int32_t get_offset_of_cpPlatformGname_20() { return static_cast<int32_t>(offsetof(Device_t4E586BECBBC299135480764E7D070583DC87DC35, ___cpPlatformGname_20)); }
	inline String_t* get_cpPlatformGname_20() const { return ___cpPlatformGname_20; }
	inline String_t** get_address_of_cpPlatformGname_20() { return &___cpPlatformGname_20; }
	inline void set_cpPlatformGname_20(String_t* value)
	{
		___cpPlatformGname_20 = value;
		Il2CppCodeGenWriteBarrier((&___cpPlatformGname_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICE_T4E586BECBBC299135480764E7D070583DC87DC35_H
#ifndef REQBI_TE37A2980B01C47239BF01EE1E230D48BFE106381_H
#define REQBI_TE37A2980B01C47239BF01EE1E230D48BFE106381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.ReqBi
struct  ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381  : public RuntimeObject
{
public:
	// System.Int64 MSG_BI.ReqBi::roleId
	int64_t ___roleId_1;
	// System.String MSG_BI.ReqBi::biName
	String_t* ___biName_2;
	// System.Collections.Generic.List`1<MSG_BI.ValMap> MSG_BI.ReqBi::valMaps
	List_1_tB8BDDE6E8C412EC6D809C82775E8B72211D0B35B * ___valMaps_3;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_biName_2() { return static_cast<int32_t>(offsetof(ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381, ___biName_2)); }
	inline String_t* get_biName_2() const { return ___biName_2; }
	inline String_t** get_address_of_biName_2() { return &___biName_2; }
	inline void set_biName_2(String_t* value)
	{
		___biName_2 = value;
		Il2CppCodeGenWriteBarrier((&___biName_2), value);
	}

	inline static int32_t get_offset_of_valMaps_3() { return static_cast<int32_t>(offsetof(ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381, ___valMaps_3)); }
	inline List_1_tB8BDDE6E8C412EC6D809C82775E8B72211D0B35B * get_valMaps_3() const { return ___valMaps_3; }
	inline List_1_tB8BDDE6E8C412EC6D809C82775E8B72211D0B35B ** get_address_of_valMaps_3() { return &___valMaps_3; }
	inline void set_valMaps_3(List_1_tB8BDDE6E8C412EC6D809C82775E8B72211D0B35B * value)
	{
		___valMaps_3 = value;
		Il2CppCodeGenWriteBarrier((&___valMaps_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBI_TE37A2980B01C47239BF01EE1E230D48BFE106381_H
#ifndef REQBIDEVICE_T61AB97F967088B26A1E2A6DDA2F02D1D5265A70C_H
#define REQBIDEVICE_T61AB97F967088B26A1E2A6DDA2F02D1D5265A70C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.ReqBiDevice
struct  ReqBiDevice_t61AB97F967088B26A1E2A6DDA2F02D1D5265A70C  : public RuntimeObject
{
public:
	// MSG_BI.Device MSG_BI.ReqBiDevice::device
	Device_t4E586BECBBC299135480764E7D070583DC87DC35 * ___device_1;

public:
	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(ReqBiDevice_t61AB97F967088B26A1E2A6DDA2F02D1D5265A70C, ___device_1)); }
	inline Device_t4E586BECBBC299135480764E7D070583DC87DC35 * get_device_1() const { return ___device_1; }
	inline Device_t4E586BECBBC299135480764E7D070583DC87DC35 ** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(Device_t4E586BECBBC299135480764E7D070583DC87DC35 * value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier((&___device_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBIDEVICE_T61AB97F967088B26A1E2A6DDA2F02D1D5265A70C_H
#ifndef REQUIBI_TD80F83B3893CB21053DC26EBAB3402130865AB42_H
#define REQUIBI_TD80F83B3893CB21053DC26EBAB3402130865AB42_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.ReqUiBi
struct  ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42  : public RuntimeObject
{
public:
	// System.Int64 MSG_BI.ReqUiBi::roleId
	int64_t ___roleId_1;
	// System.Collections.Generic.List`1<MSG_BI.UIData> MSG_BI.ReqUiBi::uiData
	List_1_t6E34EC04ACB32F9B2FF4B212C8A1112C90664445 * ___uiData_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_uiData_2() { return static_cast<int32_t>(offsetof(ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42, ___uiData_2)); }
	inline List_1_t6E34EC04ACB32F9B2FF4B212C8A1112C90664445 * get_uiData_2() const { return ___uiData_2; }
	inline List_1_t6E34EC04ACB32F9B2FF4B212C8A1112C90664445 ** get_address_of_uiData_2() { return &___uiData_2; }
	inline void set_uiData_2(List_1_t6E34EC04ACB32F9B2FF4B212C8A1112C90664445 * value)
	{
		___uiData_2 = value;
		Il2CppCodeGenWriteBarrier((&___uiData_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIBI_TD80F83B3893CB21053DC26EBAB3402130865AB42_H
#ifndef UIDATA_TD2C78ADB953A6B63491880026531ABD783DE7F4A_H
#define UIDATA_TD2C78ADB953A6B63491880026531ABD783DE7F4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.UIData
struct  UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A  : public RuntimeObject
{
public:
	// System.Int64 MSG_BI.UIData::id
	int64_t ___id_0;
	// System.Int64 MSG_BI.UIData::time
	int64_t ___time_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A, ___id_0)); }
	inline int64_t get_id_0() const { return ___id_0; }
	inline int64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A, ___time_1)); }
	inline int64_t get_time_1() const { return ___time_1; }
	inline int64_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int64_t value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIDATA_TD2C78ADB953A6B63491880026531ABD783DE7F4A_H
#ifndef VALMAP_TD46832A6F9845C0BB328E3057903E82916FA2239_H
#define VALMAP_TD46832A6F9845C0BB328E3057903E82916FA2239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BI.ValMap
struct  ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239  : public RuntimeObject
{
public:
	// System.String MSG_BI.ValMap::key
	String_t* ___key_0;
	// System.String MSG_BI.ValMap::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALMAP_TD46832A6F9845C0BB328E3057903E82916FA2239_H
#ifndef ACTIVITYCLIENTINFO_TA08AC558F3F3E824B52C60BFD0C60C1B097D99EB_H
#define ACTIVITYCLIENTINFO_TA08AC558F3F3E824B52C60BFD0C60C1B097D99EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ActivityClientInfo
struct  ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Backend.ActivityClientInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Backend.ActivityClientInfo::type
	int32_t ___type_1;
	// System.String MSG_Backend.ActivityClientInfo::name
	String_t* ___name_2;
	// System.UInt64 MSG_Backend.ActivityClientInfo::beginTime
	uint64_t ___beginTime_3;
	// System.UInt64 MSG_Backend.ActivityClientInfo::endTime
	uint64_t ___endTime_4;
	// System.String MSG_Backend.ActivityClientInfo::rewardList
	String_t* ___rewardList_5;
	// System.Int32 MSG_Backend.ActivityClientInfo::numLimit
	int32_t ___numLimit_6;
	// System.Int32 MSG_Backend.ActivityClientInfo::panelImageId
	int32_t ___panelImageId_7;
	// System.Int32 MSG_Backend.ActivityClientInfo::bigPanel
	int32_t ___bigPanel_8;
	// System.Int32 MSG_Backend.ActivityClientInfo::smallPanel
	int32_t ___smallPanel_9;
	// System.Int32 MSG_Backend.ActivityClientInfo::getNum
	int32_t ___getNum_10;
	// System.String MSG_Backend.ActivityClientInfo::panelText
	String_t* ___panelText_11;
	// System.Int32 MSG_Backend.ActivityClientInfo::needNum
	int32_t ___needNum_12;
	// System.Int32 MSG_Backend.ActivityClientInfo::haveNum
	int32_t ___haveNum_13;
	// System.Collections.Generic.List`1<MSG_Backend.ActivetyExchangeNeed> MSG_Backend.ActivityClientInfo::needItemList
	List_1_t10B89EF371D55871754C19425DE9A286798C6AE4 * ___needItemList_14;
	// System.Boolean MSG_Backend.ActivityClientInfo::canGet
	bool ___canGet_15;
	// System.Int32 MSG_Backend.ActivityClientInfo::sendItemModelId
	int32_t ___sendItemModelId_16;
	// System.Collections.Generic.List`1<MSG_Backend.ActivetyRankInfo> MSG_Backend.ActivityClientInfo::rankList
	List_1_t8518688E9A6DCD6D8C2E410CD567E57A037A4F5D * ___rankList_17;
	// System.String MSG_Backend.ActivityClientInfo::condition
	String_t* ___condition_18;
	// System.Collections.Generic.List`1<MSG_Backend.BossInfo> MSG_Backend.ActivityClientInfo::bossList
	List_1_tE3F484AEE11CFBE84234D22135E8AA8213076C31 * ___bossList_19;
	// System.Collections.Generic.List`1<MSG_Backend.DayReward> MSG_Backend.ActivityClientInfo::DayRewardList
	List_1_t9D10B15EB9CDD65AC8DE38A4479012D8531B07B0 * ___DayRewardList_20;
	// System.Int32 MSG_Backend.ActivityClientInfo::rewardAgain
	int32_t ___rewardAgain_21;
	// System.Int32 MSG_Backend.ActivityClientInfo::rewardAgainState
	int32_t ___rewardAgainState_22;
	// System.String MSG_Backend.ActivityClientInfo::rowText
	String_t* ___rowText_23;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_beginTime_3() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___beginTime_3)); }
	inline uint64_t get_beginTime_3() const { return ___beginTime_3; }
	inline uint64_t* get_address_of_beginTime_3() { return &___beginTime_3; }
	inline void set_beginTime_3(uint64_t value)
	{
		___beginTime_3 = value;
	}

	inline static int32_t get_offset_of_endTime_4() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___endTime_4)); }
	inline uint64_t get_endTime_4() const { return ___endTime_4; }
	inline uint64_t* get_address_of_endTime_4() { return &___endTime_4; }
	inline void set_endTime_4(uint64_t value)
	{
		___endTime_4 = value;
	}

	inline static int32_t get_offset_of_rewardList_5() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___rewardList_5)); }
	inline String_t* get_rewardList_5() const { return ___rewardList_5; }
	inline String_t** get_address_of_rewardList_5() { return &___rewardList_5; }
	inline void set_rewardList_5(String_t* value)
	{
		___rewardList_5 = value;
		Il2CppCodeGenWriteBarrier((&___rewardList_5), value);
	}

	inline static int32_t get_offset_of_numLimit_6() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___numLimit_6)); }
	inline int32_t get_numLimit_6() const { return ___numLimit_6; }
	inline int32_t* get_address_of_numLimit_6() { return &___numLimit_6; }
	inline void set_numLimit_6(int32_t value)
	{
		___numLimit_6 = value;
	}

	inline static int32_t get_offset_of_panelImageId_7() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___panelImageId_7)); }
	inline int32_t get_panelImageId_7() const { return ___panelImageId_7; }
	inline int32_t* get_address_of_panelImageId_7() { return &___panelImageId_7; }
	inline void set_panelImageId_7(int32_t value)
	{
		___panelImageId_7 = value;
	}

	inline static int32_t get_offset_of_bigPanel_8() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___bigPanel_8)); }
	inline int32_t get_bigPanel_8() const { return ___bigPanel_8; }
	inline int32_t* get_address_of_bigPanel_8() { return &___bigPanel_8; }
	inline void set_bigPanel_8(int32_t value)
	{
		___bigPanel_8 = value;
	}

	inline static int32_t get_offset_of_smallPanel_9() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___smallPanel_9)); }
	inline int32_t get_smallPanel_9() const { return ___smallPanel_9; }
	inline int32_t* get_address_of_smallPanel_9() { return &___smallPanel_9; }
	inline void set_smallPanel_9(int32_t value)
	{
		___smallPanel_9 = value;
	}

	inline static int32_t get_offset_of_getNum_10() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___getNum_10)); }
	inline int32_t get_getNum_10() const { return ___getNum_10; }
	inline int32_t* get_address_of_getNum_10() { return &___getNum_10; }
	inline void set_getNum_10(int32_t value)
	{
		___getNum_10 = value;
	}

	inline static int32_t get_offset_of_panelText_11() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___panelText_11)); }
	inline String_t* get_panelText_11() const { return ___panelText_11; }
	inline String_t** get_address_of_panelText_11() { return &___panelText_11; }
	inline void set_panelText_11(String_t* value)
	{
		___panelText_11 = value;
		Il2CppCodeGenWriteBarrier((&___panelText_11), value);
	}

	inline static int32_t get_offset_of_needNum_12() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___needNum_12)); }
	inline int32_t get_needNum_12() const { return ___needNum_12; }
	inline int32_t* get_address_of_needNum_12() { return &___needNum_12; }
	inline void set_needNum_12(int32_t value)
	{
		___needNum_12 = value;
	}

	inline static int32_t get_offset_of_haveNum_13() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___haveNum_13)); }
	inline int32_t get_haveNum_13() const { return ___haveNum_13; }
	inline int32_t* get_address_of_haveNum_13() { return &___haveNum_13; }
	inline void set_haveNum_13(int32_t value)
	{
		___haveNum_13 = value;
	}

	inline static int32_t get_offset_of_needItemList_14() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___needItemList_14)); }
	inline List_1_t10B89EF371D55871754C19425DE9A286798C6AE4 * get_needItemList_14() const { return ___needItemList_14; }
	inline List_1_t10B89EF371D55871754C19425DE9A286798C6AE4 ** get_address_of_needItemList_14() { return &___needItemList_14; }
	inline void set_needItemList_14(List_1_t10B89EF371D55871754C19425DE9A286798C6AE4 * value)
	{
		___needItemList_14 = value;
		Il2CppCodeGenWriteBarrier((&___needItemList_14), value);
	}

	inline static int32_t get_offset_of_canGet_15() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___canGet_15)); }
	inline bool get_canGet_15() const { return ___canGet_15; }
	inline bool* get_address_of_canGet_15() { return &___canGet_15; }
	inline void set_canGet_15(bool value)
	{
		___canGet_15 = value;
	}

	inline static int32_t get_offset_of_sendItemModelId_16() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___sendItemModelId_16)); }
	inline int32_t get_sendItemModelId_16() const { return ___sendItemModelId_16; }
	inline int32_t* get_address_of_sendItemModelId_16() { return &___sendItemModelId_16; }
	inline void set_sendItemModelId_16(int32_t value)
	{
		___sendItemModelId_16 = value;
	}

	inline static int32_t get_offset_of_rankList_17() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___rankList_17)); }
	inline List_1_t8518688E9A6DCD6D8C2E410CD567E57A037A4F5D * get_rankList_17() const { return ___rankList_17; }
	inline List_1_t8518688E9A6DCD6D8C2E410CD567E57A037A4F5D ** get_address_of_rankList_17() { return &___rankList_17; }
	inline void set_rankList_17(List_1_t8518688E9A6DCD6D8C2E410CD567E57A037A4F5D * value)
	{
		___rankList_17 = value;
		Il2CppCodeGenWriteBarrier((&___rankList_17), value);
	}

	inline static int32_t get_offset_of_condition_18() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___condition_18)); }
	inline String_t* get_condition_18() const { return ___condition_18; }
	inline String_t** get_address_of_condition_18() { return &___condition_18; }
	inline void set_condition_18(String_t* value)
	{
		___condition_18 = value;
		Il2CppCodeGenWriteBarrier((&___condition_18), value);
	}

	inline static int32_t get_offset_of_bossList_19() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___bossList_19)); }
	inline List_1_tE3F484AEE11CFBE84234D22135E8AA8213076C31 * get_bossList_19() const { return ___bossList_19; }
	inline List_1_tE3F484AEE11CFBE84234D22135E8AA8213076C31 ** get_address_of_bossList_19() { return &___bossList_19; }
	inline void set_bossList_19(List_1_tE3F484AEE11CFBE84234D22135E8AA8213076C31 * value)
	{
		___bossList_19 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_19), value);
	}

	inline static int32_t get_offset_of_DayRewardList_20() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___DayRewardList_20)); }
	inline List_1_t9D10B15EB9CDD65AC8DE38A4479012D8531B07B0 * get_DayRewardList_20() const { return ___DayRewardList_20; }
	inline List_1_t9D10B15EB9CDD65AC8DE38A4479012D8531B07B0 ** get_address_of_DayRewardList_20() { return &___DayRewardList_20; }
	inline void set_DayRewardList_20(List_1_t9D10B15EB9CDD65AC8DE38A4479012D8531B07B0 * value)
	{
		___DayRewardList_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayRewardList_20), value);
	}

	inline static int32_t get_offset_of_rewardAgain_21() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___rewardAgain_21)); }
	inline int32_t get_rewardAgain_21() const { return ___rewardAgain_21; }
	inline int32_t* get_address_of_rewardAgain_21() { return &___rewardAgain_21; }
	inline void set_rewardAgain_21(int32_t value)
	{
		___rewardAgain_21 = value;
	}

	inline static int32_t get_offset_of_rewardAgainState_22() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___rewardAgainState_22)); }
	inline int32_t get_rewardAgainState_22() const { return ___rewardAgainState_22; }
	inline int32_t* get_address_of_rewardAgainState_22() { return &___rewardAgainState_22; }
	inline void set_rewardAgainState_22(int32_t value)
	{
		___rewardAgainState_22 = value;
	}

	inline static int32_t get_offset_of_rowText_23() { return static_cast<int32_t>(offsetof(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB, ___rowText_23)); }
	inline String_t* get_rowText_23() const { return ___rowText_23; }
	inline String_t** get_address_of_rowText_23() { return &___rowText_23; }
	inline void set_rowText_23(String_t* value)
	{
		___rowText_23 = value;
		Il2CppCodeGenWriteBarrier((&___rowText_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVITYCLIENTINFO_TA08AC558F3F3E824B52C60BFD0C60C1B097D99EB_H
#ifndef ACTIVITYINFO_T719F3026977155867C3C00526B9A3AD8005E146E_H
#define ACTIVITYINFO_T719F3026977155867C3C00526B9A3AD8005E146E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ActivityInfo
struct  ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Backend.ActivityInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Backend.ActivityInfo::type
	int32_t ___type_1;
	// System.Int32 MSG_Backend.ActivityInfo::tag
	int32_t ___tag_2;
	// System.String MSG_Backend.ActivityInfo::name
	String_t* ___name_3;
	// System.Int32 MSG_Backend.ActivityInfo::bigLabel
	int32_t ___bigLabel_4;
	// System.Int32 MSG_Backend.ActivityInfo::smallLabel
	int32_t ___smallLabel_5;
	// System.Int32 MSG_Backend.ActivityInfo::numLimit
	int32_t ___numLimit_6;
	// System.UInt64 MSG_Backend.ActivityInfo::beginTime
	uint64_t ___beginTime_7;
	// System.UInt64 MSG_Backend.ActivityInfo::endTime
	uint64_t ___endTime_8;
	// System.Int32 MSG_Backend.ActivityInfo::panelImageId
	int32_t ___panelImageId_9;
	// System.String MSG_Backend.ActivityInfo::panelText
	String_t* ___panelText_10;
	// System.String MSG_Backend.ActivityInfo::help
	String_t* ___help_11;
	// System.String MSG_Backend.ActivityInfo::actionBegin
	String_t* ___actionBegin_12;
	// System.String MSG_Backend.ActivityInfo::actionEnd
	String_t* ___actionEnd_13;
	// System.String MSG_Backend.ActivityInfo::conditionList
	String_t* ___conditionList_14;
	// System.String MSG_Backend.ActivityInfo::rewardList
	String_t* ___rewardList_15;
	// System.String MSG_Backend.ActivityInfo::otherList
	String_t* ___otherList_16;
	// System.Int32 MSG_Backend.ActivityInfo::isDelete
	int32_t ___isDelete_17;
	// System.String MSG_Backend.ActivityInfo::rowText
	String_t* ___rowText_18;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_tag_2() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___tag_2)); }
	inline int32_t get_tag_2() const { return ___tag_2; }
	inline int32_t* get_address_of_tag_2() { return &___tag_2; }
	inline void set_tag_2(int32_t value)
	{
		___tag_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_bigLabel_4() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___bigLabel_4)); }
	inline int32_t get_bigLabel_4() const { return ___bigLabel_4; }
	inline int32_t* get_address_of_bigLabel_4() { return &___bigLabel_4; }
	inline void set_bigLabel_4(int32_t value)
	{
		___bigLabel_4 = value;
	}

	inline static int32_t get_offset_of_smallLabel_5() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___smallLabel_5)); }
	inline int32_t get_smallLabel_5() const { return ___smallLabel_5; }
	inline int32_t* get_address_of_smallLabel_5() { return &___smallLabel_5; }
	inline void set_smallLabel_5(int32_t value)
	{
		___smallLabel_5 = value;
	}

	inline static int32_t get_offset_of_numLimit_6() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___numLimit_6)); }
	inline int32_t get_numLimit_6() const { return ___numLimit_6; }
	inline int32_t* get_address_of_numLimit_6() { return &___numLimit_6; }
	inline void set_numLimit_6(int32_t value)
	{
		___numLimit_6 = value;
	}

	inline static int32_t get_offset_of_beginTime_7() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___beginTime_7)); }
	inline uint64_t get_beginTime_7() const { return ___beginTime_7; }
	inline uint64_t* get_address_of_beginTime_7() { return &___beginTime_7; }
	inline void set_beginTime_7(uint64_t value)
	{
		___beginTime_7 = value;
	}

	inline static int32_t get_offset_of_endTime_8() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___endTime_8)); }
	inline uint64_t get_endTime_8() const { return ___endTime_8; }
	inline uint64_t* get_address_of_endTime_8() { return &___endTime_8; }
	inline void set_endTime_8(uint64_t value)
	{
		___endTime_8 = value;
	}

	inline static int32_t get_offset_of_panelImageId_9() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___panelImageId_9)); }
	inline int32_t get_panelImageId_9() const { return ___panelImageId_9; }
	inline int32_t* get_address_of_panelImageId_9() { return &___panelImageId_9; }
	inline void set_panelImageId_9(int32_t value)
	{
		___panelImageId_9 = value;
	}

	inline static int32_t get_offset_of_panelText_10() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___panelText_10)); }
	inline String_t* get_panelText_10() const { return ___panelText_10; }
	inline String_t** get_address_of_panelText_10() { return &___panelText_10; }
	inline void set_panelText_10(String_t* value)
	{
		___panelText_10 = value;
		Il2CppCodeGenWriteBarrier((&___panelText_10), value);
	}

	inline static int32_t get_offset_of_help_11() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___help_11)); }
	inline String_t* get_help_11() const { return ___help_11; }
	inline String_t** get_address_of_help_11() { return &___help_11; }
	inline void set_help_11(String_t* value)
	{
		___help_11 = value;
		Il2CppCodeGenWriteBarrier((&___help_11), value);
	}

	inline static int32_t get_offset_of_actionBegin_12() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___actionBegin_12)); }
	inline String_t* get_actionBegin_12() const { return ___actionBegin_12; }
	inline String_t** get_address_of_actionBegin_12() { return &___actionBegin_12; }
	inline void set_actionBegin_12(String_t* value)
	{
		___actionBegin_12 = value;
		Il2CppCodeGenWriteBarrier((&___actionBegin_12), value);
	}

	inline static int32_t get_offset_of_actionEnd_13() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___actionEnd_13)); }
	inline String_t* get_actionEnd_13() const { return ___actionEnd_13; }
	inline String_t** get_address_of_actionEnd_13() { return &___actionEnd_13; }
	inline void set_actionEnd_13(String_t* value)
	{
		___actionEnd_13 = value;
		Il2CppCodeGenWriteBarrier((&___actionEnd_13), value);
	}

	inline static int32_t get_offset_of_conditionList_14() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___conditionList_14)); }
	inline String_t* get_conditionList_14() const { return ___conditionList_14; }
	inline String_t** get_address_of_conditionList_14() { return &___conditionList_14; }
	inline void set_conditionList_14(String_t* value)
	{
		___conditionList_14 = value;
		Il2CppCodeGenWriteBarrier((&___conditionList_14), value);
	}

	inline static int32_t get_offset_of_rewardList_15() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___rewardList_15)); }
	inline String_t* get_rewardList_15() const { return ___rewardList_15; }
	inline String_t** get_address_of_rewardList_15() { return &___rewardList_15; }
	inline void set_rewardList_15(String_t* value)
	{
		___rewardList_15 = value;
		Il2CppCodeGenWriteBarrier((&___rewardList_15), value);
	}

	inline static int32_t get_offset_of_otherList_16() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___otherList_16)); }
	inline String_t* get_otherList_16() const { return ___otherList_16; }
	inline String_t** get_address_of_otherList_16() { return &___otherList_16; }
	inline void set_otherList_16(String_t* value)
	{
		___otherList_16 = value;
		Il2CppCodeGenWriteBarrier((&___otherList_16), value);
	}

	inline static int32_t get_offset_of_isDelete_17() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___isDelete_17)); }
	inline int32_t get_isDelete_17() const { return ___isDelete_17; }
	inline int32_t* get_address_of_isDelete_17() { return &___isDelete_17; }
	inline void set_isDelete_17(int32_t value)
	{
		___isDelete_17 = value;
	}

	inline static int32_t get_offset_of_rowText_18() { return static_cast<int32_t>(offsetof(ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E, ___rowText_18)); }
	inline String_t* get_rowText_18() const { return ___rowText_18; }
	inline String_t** get_address_of_rowText_18() { return &___rowText_18; }
	inline void set_rowText_18(String_t* value)
	{
		___rowText_18 = value;
		Il2CppCodeGenWriteBarrier((&___rowText_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVITYINFO_T719F3026977155867C3C00526B9A3AD8005E146E_H
#ifndef FUNCOPENINFO_TF492434DF48B789E108EC04BB90C1F1493A84502_H
#define FUNCOPENINFO_TF492434DF48B789E108EC04BB90C1F1493A84502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.FuncOpenInfo
struct  FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502  : public RuntimeObject
{
public:
	// System.Int32 MSG_Backend.FuncOpenInfo::id
	int32_t ___id_0;
	// System.Int32 MSG_Backend.FuncOpenInfo::state
	int32_t ___state_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCOPENINFO_TF492434DF48B789E108EC04BB90C1F1493A84502_H
#ifndef REQFUNCOPENREWARD_T688F3664266063BDB201A629C97E285A6AC0DC69_H
#define REQFUNCOPENREWARD_T688F3664266063BDB201A629C97E285A6AC0DC69_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ReqFuncOpenReward
struct  ReqFuncOpenReward_t688F3664266063BDB201A629C97E285A6AC0DC69  : public RuntimeObject
{
public:
	// System.Int32 MSG_Backend.ReqFuncOpenReward::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqFuncOpenReward_t688F3664266063BDB201A629C97E285A6AC0DC69, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFUNCOPENREWARD_T688F3664266063BDB201A629C97E285A6AC0DC69_H
#ifndef REQFUNCOPENROLEINFO_TDF1F34A6CC2D46CED59CEE92016AF2E62B135C96_H
#define REQFUNCOPENROLEINFO_TDF1F34A6CC2D46CED59CEE92016AF2E62B135C96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ReqFuncOpenRoleInfo
struct  ReqFuncOpenRoleInfo_tDF1F34A6CC2D46CED59CEE92016AF2E62B135C96  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFUNCOPENROLEINFO_TDF1F34A6CC2D46CED59CEE92016AF2E62B135C96_H
#ifndef REQGETACTIVITYLIST_T3D3564BCD1D1BE2554D0BB8C631199B19ADBAB74_H
#define REQGETACTIVITYLIST_T3D3564BCD1D1BE2554D0BB8C631199B19ADBAB74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ReqGetActivityList
struct  ReqGetActivityList_t3D3564BCD1D1BE2554D0BB8C631199B19ADBAB74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETACTIVITYLIST_T3D3564BCD1D1BE2554D0BB8C631199B19ADBAB74_H
#ifndef REQGETACTIVITYREWARD_T78D8AAE6F941BE8038286006D44E1A5F414E8BB6_H
#define REQGETACTIVITYREWARD_T78D8AAE6F941BE8038286006D44E1A5F414E8BB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ReqGetActivityReward
struct  ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Backend.ReqGetActivityReward::id
	uint64_t ___id_1;
	// System.Int32 MSG_Backend.ReqGetActivityReward::type
	int32_t ___type_2;
	// System.Int32 MSG_Backend.ReqGetActivityReward::num
	int32_t ___num_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_num_3() { return static_cast<int32_t>(offsetof(ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6, ___num_3)); }
	inline int32_t get_num_3() const { return ___num_3; }
	inline int32_t* get_address_of_num_3() { return &___num_3; }
	inline void set_num_3(int32_t value)
	{
		___num_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETACTIVITYREWARD_T78D8AAE6F941BE8038286006D44E1A5F414E8BB6_H
#ifndef RESACTIVITYCLIENTINFO_T8BD2A53ED9B0B77E5E3939925B53CA2025B45155_H
#define RESACTIVITYCLIENTINFO_T8BD2A53ED9B0B77E5E3939925B53CA2025B45155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResActivityClientInfo
struct  ResActivityClientInfo_t8BD2A53ED9B0B77E5E3939925B53CA2025B45155  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Backend.ActivityClientInfo> MSG_Backend.ResActivityClientInfo::itemInfoList
	List_1_tC9552537E9DF73D2554205B44FF31274D0FD57CB * ___itemInfoList_1;

public:
	inline static int32_t get_offset_of_itemInfoList_1() { return static_cast<int32_t>(offsetof(ResActivityClientInfo_t8BD2A53ED9B0B77E5E3939925B53CA2025B45155, ___itemInfoList_1)); }
	inline List_1_tC9552537E9DF73D2554205B44FF31274D0FD57CB * get_itemInfoList_1() const { return ___itemInfoList_1; }
	inline List_1_tC9552537E9DF73D2554205B44FF31274D0FD57CB ** get_address_of_itemInfoList_1() { return &___itemInfoList_1; }
	inline void set_itemInfoList_1(List_1_tC9552537E9DF73D2554205B44FF31274D0FD57CB * value)
	{
		___itemInfoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfoList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESACTIVITYCLIENTINFO_T8BD2A53ED9B0B77E5E3939925B53CA2025B45155_H
#ifndef RESCROSSACTIVITYCLIENTINFO_TC589465F619C49A9692A45C47AD42CCB41661239_H
#define RESCROSSACTIVITYCLIENTINFO_TC589465F619C49A9692A45C47AD42CCB41661239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResCrossActivityClientInfo
struct  ResCrossActivityClientInfo_tC589465F619C49A9692A45C47AD42CCB41661239  : public RuntimeObject
{
public:
	// MSG_Backend.ActivityClientInfo MSG_Backend.ResCrossActivityClientInfo::activity
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB * ___activity_1;

public:
	inline static int32_t get_offset_of_activity_1() { return static_cast<int32_t>(offsetof(ResCrossActivityClientInfo_tC589465F619C49A9692A45C47AD42CCB41661239, ___activity_1)); }
	inline ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB * get_activity_1() const { return ___activity_1; }
	inline ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB ** get_address_of_activity_1() { return &___activity_1; }
	inline void set_activity_1(ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB * value)
	{
		___activity_1 = value;
		Il2CppCodeGenWriteBarrier((&___activity_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCROSSACTIVITYCLIENTINFO_TC589465F619C49A9692A45C47AD42CCB41661239_H
#ifndef RESFUNCOPENLIST_T0C34CF8FAA1EF111AD27A788C548FB0D65696A99_H
#define RESFUNCOPENLIST_T0C34CF8FAA1EF111AD27A788C548FB0D65696A99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResFuncOpenList
struct  ResFuncOpenList_t0C34CF8FAA1EF111AD27A788C548FB0D65696A99  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Backend.FuncOpenInfo> MSG_Backend.ResFuncOpenList::funcOpenList
	List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * ___funcOpenList_1;

public:
	inline static int32_t get_offset_of_funcOpenList_1() { return static_cast<int32_t>(offsetof(ResFuncOpenList_t0C34CF8FAA1EF111AD27A788C548FB0D65696A99, ___funcOpenList_1)); }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * get_funcOpenList_1() const { return ___funcOpenList_1; }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 ** get_address_of_funcOpenList_1() { return &___funcOpenList_1; }
	inline void set_funcOpenList_1(List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * value)
	{
		___funcOpenList_1 = value;
		Il2CppCodeGenWriteBarrier((&___funcOpenList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFUNCOPENLIST_T0C34CF8FAA1EF111AD27A788C548FB0D65696A99_H
#ifndef RESFUNCOPENREWARD_TF3007D59672EC1DFBEB3A37B123C448AB222592B_H
#define RESFUNCOPENREWARD_TF3007D59672EC1DFBEB3A37B123C448AB222592B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResFuncOpenReward
struct  ResFuncOpenReward_tF3007D59672EC1DFBEB3A37B123C448AB222592B  : public RuntimeObject
{
public:
	// System.Int32 MSG_Backend.ResFuncOpenReward::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResFuncOpenReward_tF3007D59672EC1DFBEB3A37B123C448AB222592B, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFUNCOPENREWARD_TF3007D59672EC1DFBEB3A37B123C448AB222592B_H
#ifndef RESFUNCOPENROLEINFO_T89F1539B66219C6FD4472E587B503C8826203D17_H
#define RESFUNCOPENROLEINFO_T89F1539B66219C6FD4472E587B503C8826203D17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResFuncOpenRoleInfo
struct  ResFuncOpenRoleInfo_t89F1539B66219C6FD4472E587B503C8826203D17  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Backend.FuncOpenInfo> MSG_Backend.ResFuncOpenRoleInfo::infolist
	List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * ___infolist_1;

public:
	inline static int32_t get_offset_of_infolist_1() { return static_cast<int32_t>(offsetof(ResFuncOpenRoleInfo_t89F1539B66219C6FD4472E587B503C8826203D17, ___infolist_1)); }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * get_infolist_1() const { return ___infolist_1; }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 ** get_address_of_infolist_1() { return &___infolist_1; }
	inline void set_infolist_1(List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * value)
	{
		___infolist_1 = value;
		Il2CppCodeGenWriteBarrier((&___infolist_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFUNCOPENROLEINFO_T89F1539B66219C6FD4472E587B503C8826203D17_H
#ifndef RESGETACTIVITYREWARDSUCCESS_T99D275565A5BF8C8AF2839B8ED3297F77860B10E_H
#define RESGETACTIVITYREWARDSUCCESS_T99D275565A5BF8C8AF2839B8ED3297F77860B10E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResGetActivityRewardSuccess
struct  ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Backend.ResGetActivityRewardSuccess::id
	uint64_t ___id_1;
	// System.Int32 MSG_Backend.ResGetActivityRewardSuccess::getNum
	int32_t ___getNum_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_getNum_2() { return static_cast<int32_t>(offsetof(ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E, ___getNum_2)); }
	inline int32_t get_getNum_2() const { return ___getNum_2; }
	inline int32_t* get_address_of_getNum_2() { return &___getNum_2; }
	inline void set_getNum_2(int32_t value)
	{
		___getNum_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGETACTIVITYREWARDSUCCESS_T99D275565A5BF8C8AF2839B8ED3297F77860B10E_H
#ifndef RESISACTIVITYCANGET_T73008F0F7A31994F6AE7795661B7D2082CC78FFF_H
#define RESISACTIVITYCANGET_T73008F0F7A31994F6AE7795661B7D2082CC78FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResIsActivityCanGet
struct  ResIsActivityCanGet_t73008F0F7A31994F6AE7795661B7D2082CC78FFF  : public RuntimeObject
{
public:
	// System.Boolean MSG_Backend.ResIsActivityCanGet::canGet
	bool ___canGet_1;

public:
	inline static int32_t get_offset_of_canGet_1() { return static_cast<int32_t>(offsetof(ResIsActivityCanGet_t73008F0F7A31994F6AE7795661B7D2082CC78FFF, ___canGet_1)); }
	inline bool get_canGet_1() const { return ___canGet_1; }
	inline bool* get_address_of_canGet_1() { return &___canGet_1; }
	inline void set_canGet_1(bool value)
	{
		___canGet_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESISACTIVITYCANGET_T73008F0F7A31994F6AE7795661B7D2082CC78FFF_H
#ifndef RESSWITCHFUNCTION_TC0B60F7D2B4354EA3499F1C1493E01802F8A2163_H
#define RESSWITCHFUNCTION_TC0B60F7D2B4354EA3499F1C1493E01802F8A2163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Backend.ResSwitchFunction
struct  ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Backend.FuncOpenInfo> MSG_Backend.ResSwitchFunction::switchFuncList
	List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * ___switchFuncList_1;
	// System.Boolean MSG_Backend.ResSwitchFunction::isnew
	bool ___isnew_2;

public:
	inline static int32_t get_offset_of_switchFuncList_1() { return static_cast<int32_t>(offsetof(ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163, ___switchFuncList_1)); }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * get_switchFuncList_1() const { return ___switchFuncList_1; }
	inline List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 ** get_address_of_switchFuncList_1() { return &___switchFuncList_1; }
	inline void set_switchFuncList_1(List_1_t75D18840F9ABD5E471F467CBB64AA1D4F0245A80 * value)
	{
		___switchFuncList_1 = value;
		Il2CppCodeGenWriteBarrier((&___switchFuncList_1), value);
	}

	inline static int32_t get_offset_of_isnew_2() { return static_cast<int32_t>(offsetof(ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163, ___isnew_2)); }
	inline bool get_isnew_2() const { return ___isnew_2; }
	inline bool* get_address_of_isnew_2() { return &___isnew_2; }
	inline void set_isnew_2(bool value)
	{
		___isnew_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSWITCHFUNCTION_TC0B60F7D2B4354EA3499F1C1493E01802F8A2163_H
#ifndef BOSSINFO_T43DE78902F41D70817FF35EFF3BBF48B7F84C84F_H
#define BOSSINFO_T43DE78902F41D70817FF35EFF3BBF48B7F84C84F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.BossInfo
struct  BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.BossInfo::bossId
	int32_t ___bossId_0;
	// System.Int32 MSG_Boss.BossInfo::refreshTime
	int32_t ___refreshTime_1;
	// System.Boolean MSG_Boss.BossInfo::isFollowed
	bool ___isFollowed_2;

public:
	inline static int32_t get_offset_of_bossId_0() { return static_cast<int32_t>(offsetof(BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F, ___bossId_0)); }
	inline int32_t get_bossId_0() const { return ___bossId_0; }
	inline int32_t* get_address_of_bossId_0() { return &___bossId_0; }
	inline void set_bossId_0(int32_t value)
	{
		___bossId_0 = value;
	}

	inline static int32_t get_offset_of_refreshTime_1() { return static_cast<int32_t>(offsetof(BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F, ___refreshTime_1)); }
	inline int32_t get_refreshTime_1() const { return ___refreshTime_1; }
	inline int32_t* get_address_of_refreshTime_1() { return &___refreshTime_1; }
	inline void set_refreshTime_1(int32_t value)
	{
		___refreshTime_1 = value;
	}

	inline static int32_t get_offset_of_isFollowed_2() { return static_cast<int32_t>(offsetof(BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F, ___isFollowed_2)); }
	inline bool get_isFollowed_2() const { return ___isFollowed_2; }
	inline bool* get_address_of_isFollowed_2() { return &___isFollowed_2; }
	inline void set_isFollowed_2(bool value)
	{
		___isFollowed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSINFO_T43DE78902F41D70817FF35EFF3BBF48B7F84C84F_H
#ifndef BOSSKILLEDRECORD_T992665D3F46E7CA0FD339D1E769687653D52A49C_H
#define BOSSKILLEDRECORD_T992665D3F46E7CA0FD339D1E769687653D52A49C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.BossKilledRecord
struct  BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.BossKilledRecord::killTime
	int32_t ___killTime_0;
	// System.String MSG_Boss.BossKilledRecord::killer
	String_t* ___killer_1;

public:
	inline static int32_t get_offset_of_killTime_0() { return static_cast<int32_t>(offsetof(BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C, ___killTime_0)); }
	inline int32_t get_killTime_0() const { return ___killTime_0; }
	inline int32_t* get_address_of_killTime_0() { return &___killTime_0; }
	inline void set_killTime_0(int32_t value)
	{
		___killTime_0 = value;
	}

	inline static int32_t get_offset_of_killer_1() { return static_cast<int32_t>(offsetof(BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C, ___killer_1)); }
	inline String_t* get_killer_1() const { return ___killer_1; }
	inline String_t** get_address_of_killer_1() { return &___killer_1; }
	inline void set_killer_1(String_t* value)
	{
		___killer_1 = value;
		Il2CppCodeGenWriteBarrier((&___killer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSKILLEDRECORD_T992665D3F46E7CA0FD339D1E769687653D52A49C_H
#ifndef BOSSMAPOLINFO_T9CBEB8D608C3ADBE4271ECDA505422192F86F473_H
#define BOSSMAPOLINFO_T9CBEB8D608C3ADBE4271ECDA505422192F86F473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.BossMapOlInfo
struct  BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.BossMapOlInfo::mapModelId
	int32_t ___mapModelId_0;
	// System.Int32 MSG_Boss.BossMapOlInfo::num
	int32_t ___num_1;

public:
	inline static int32_t get_offset_of_mapModelId_0() { return static_cast<int32_t>(offsetof(BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473, ___mapModelId_0)); }
	inline int32_t get_mapModelId_0() const { return ___mapModelId_0; }
	inline int32_t* get_address_of_mapModelId_0() { return &___mapModelId_0; }
	inline void set_mapModelId_0(int32_t value)
	{
		___mapModelId_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473, ___num_1)); }
	inline int32_t get_num_1() const { return ___num_1; }
	inline int32_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int32_t value)
	{
		___num_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSMAPOLINFO_T9CBEB8D608C3ADBE4271ECDA505422192F86F473_H
#ifndef REQADDWORLDBOSSRANKCOUNT_TAE928FAB8AD7FF24C18BD6C8E659CA2802730350_H
#define REQADDWORLDBOSSRANKCOUNT_TAE928FAB8AD7FF24C18BD6C8E659CA2802730350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqAddWorldBossRankCount
struct  ReqAddWorldBossRankCount_tAE928FAB8AD7FF24C18BD6C8E659CA2802730350  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqAddWorldBossRankCount::bossType
	int32_t ___bossType_1;

public:
	inline static int32_t get_offset_of_bossType_1() { return static_cast<int32_t>(offsetof(ReqAddWorldBossRankCount_tAE928FAB8AD7FF24C18BD6C8E659CA2802730350, ___bossType_1)); }
	inline int32_t get_bossType_1() const { return ___bossType_1; }
	inline int32_t* get_address_of_bossType_1() { return &___bossType_1; }
	inline void set_bossType_1(int32_t value)
	{
		___bossType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQADDWORLDBOSSRANKCOUNT_TAE928FAB8AD7FF24C18BD6C8E659CA2802730350_H
#ifndef REQBOSSKILLEDINFO_TCEE65909F3398CDD998381F02BF0F07531EAF44E_H
#define REQBOSSKILLEDINFO_TCEE65909F3398CDD998381F02BF0F07531EAF44E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqBossKilledInfo
struct  ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqBossKilledInfo::bossId
	int32_t ___bossId_1;
	// System.Int32 MSG_Boss.ReqBossKilledInfo::bossType
	int32_t ___bossType_2;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_bossType_2() { return static_cast<int32_t>(offsetof(ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E, ___bossType_2)); }
	inline int32_t get_bossType_2() const { return ___bossType_2; }
	inline int32_t* get_address_of_bossType_2() { return &___bossType_2; }
	inline void set_bossType_2(int32_t value)
	{
		___bossType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBOSSKILLEDINFO_TCEE65909F3398CDD998381F02BF0F07531EAF44E_H
#ifndef REQCALLBIGR_T4322110E62634AAEEDC1FE2EC2E024A8364E7BCB_H
#define REQCALLBIGR_T4322110E62634AAEEDC1FE2EC2E024A8364E7BCB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqCallBigR
struct  ReqCallBigR_t4322110E62634AAEEDC1FE2EC2E024A8364E7BCB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCALLBIGR_T4322110E62634AAEEDC1FE2EC2E024A8364E7BCB_H
#ifndef REQFOLLOWBOSS_T5898D328D6FCF522A57A84F76AA2F44E789486EC_H
#define REQFOLLOWBOSS_T5898D328D6FCF522A57A84F76AA2F44E789486EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqFollowBoss
struct  ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqFollowBoss::bossId
	int32_t ___bossId_1;
	// System.Int32 MSG_Boss.ReqFollowBoss::type
	int32_t ___type_2;
	// System.Int32 MSG_Boss.ReqFollowBoss::bossType
	int32_t ___bossType_3;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_bossType_3() { return static_cast<int32_t>(offsetof(ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC, ___bossType_3)); }
	inline int32_t get_bossType_3() const { return ___bossType_3; }
	inline int32_t* get_address_of_bossType_3() { return &___bossType_3; }
	inline void set_bossType_3(int32_t value)
	{
		___bossType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFOLLOWBOSS_T5898D328D6FCF522A57A84F76AA2F44E789486EC_H
#ifndef REQMYSELFBOSSAUTO_TBF5355777135DFBA6ADA997CB535B7D75C71DAEB_H
#define REQMYSELFBOSSAUTO_TBF5355777135DFBA6ADA997CB535B7D75C71DAEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqMySelfBossAuto
struct  ReqMySelfBossAuto_tBF5355777135DFBA6ADA997CB535B7D75C71DAEB  : public RuntimeObject
{
public:
	// System.Boolean MSG_Boss.ReqMySelfBossAuto::auto
	bool ___auto_1;

public:
	inline static int32_t get_offset_of_auto_1() { return static_cast<int32_t>(offsetof(ReqMySelfBossAuto_tBF5355777135DFBA6ADA997CB535B7D75C71DAEB, ___auto_1)); }
	inline bool get_auto_1() const { return ___auto_1; }
	inline bool* get_address_of_auto_1() { return &___auto_1; }
	inline void set_auto_1(bool value)
	{
		___auto_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMYSELFBOSSAUTO_TBF5355777135DFBA6ADA997CB535B7D75C71DAEB_H
#ifndef REQMYSELFBOSSREMAINTIME_TFB907ACC9AF5AA94141F2283726B500E2761DEE6_H
#define REQMYSELFBOSSREMAINTIME_TFB907ACC9AF5AA94141F2283726B500E2761DEE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqMySelfBossRemainTime
struct  ReqMySelfBossRemainTime_tFB907ACC9AF5AA94141F2283726B500E2761DEE6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMYSELFBOSSREMAINTIME_TFB907ACC9AF5AA94141F2283726B500E2761DEE6_H
#ifndef REQMYSELFBOSSUSEITEM_T7F67D349AF499256ABD68A294B1D880097052F1C_H
#define REQMYSELFBOSSUSEITEM_T7F67D349AF499256ABD68A294B1D880097052F1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqMySelfBossUseItem
struct  ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqMySelfBossUseItem::itemid
	int32_t ___itemid_1;
	// System.Int32 MSG_Boss.ReqMySelfBossUseItem::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_itemid_1() { return static_cast<int32_t>(offsetof(ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C, ___itemid_1)); }
	inline int32_t get_itemid_1() const { return ___itemid_1; }
	inline int32_t* get_address_of_itemid_1() { return &___itemid_1; }
	inline void set_itemid_1(int32_t value)
	{
		___itemid_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMYSELFBOSSUSEITEM_T7F67D349AF499256ABD68A294B1D880097052F1C_H
#ifndef REQNOOBBOSSPANNEL_TC856FF5CCA9DAF1D1A3F70CF9B9357DF8FFDA271_H
#define REQNOOBBOSSPANNEL_TC856FF5CCA9DAF1D1A3F70CF9B9357DF8FFDA271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqNoobBossPannel
struct  ReqNoobBossPannel_tC856FF5CCA9DAF1D1A3F70CF9B9357DF8FFDA271  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQNOOBBOSSPANNEL_TC856FF5CCA9DAF1D1A3F70CF9B9357DF8FFDA271_H
#ifndef REQOPENDREAMBOSS_T0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588_H
#define REQOPENDREAMBOSS_T0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqOpenDreamBoss
struct  ReqOpenDreamBoss_t0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqOpenDreamBoss::bossType
	int32_t ___bossType_1;

public:
	inline static int32_t get_offset_of_bossType_1() { return static_cast<int32_t>(offsetof(ReqOpenDreamBoss_t0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588, ___bossType_1)); }
	inline int32_t get_bossType_1() const { return ___bossType_1; }
	inline int32_t* get_address_of_bossType_1() { return &___bossType_1; }
	inline void set_bossType_1(int32_t value)
	{
		___bossType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENDREAMBOSS_T0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588_H
#ifndef REQOPENPERSONALBOSSPANEL_T13A55032B4D7BB3BA8231ACFECDB95CCCE3DEBEB_H
#define REQOPENPERSONALBOSSPANEL_T13A55032B4D7BB3BA8231ACFECDB95CCCE3DEBEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqOpenPersonalBossPanel
struct  ReqOpenPersonalBossPanel_t13A55032B4D7BB3BA8231ACFECDB95CCCE3DEBEB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENPERSONALBOSSPANEL_T13A55032B4D7BB3BA8231ACFECDB95CCCE3DEBEB_H
#ifndef REQSUITGEMBOSSPANEL_T75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D_H
#define REQSUITGEMBOSSPANEL_T75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ReqSuitGemBossPanel
struct  ReqSuitGemBossPanel_t75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ReqSuitGemBossPanel::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqSuitGemBossPanel_t75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSUITGEMBOSSPANEL_T75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D_H
#ifndef RESADDWORLDBOSSRANKCOUNT_T3F49B720607AD7B7FBD69C5098A692E6637ADA59_H
#define RESADDWORLDBOSSRANKCOUNT_T3F49B720607AD7B7FBD69C5098A692E6637ADA59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResAddWorldBossRankCount
struct  ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResAddWorldBossRankCount::bossType
	int32_t ___bossType_1;
	// System.Int32 MSG_Boss.ResAddWorldBossRankCount::remainCount
	int32_t ___remainCount_2;
	// System.Int32 MSG_Boss.ResAddWorldBossRankCount::maxCount
	int32_t ___maxCount_3;
	// System.Int32 MSG_Boss.ResAddWorldBossRankCount::buyCount
	int32_t ___buyCount_4;
	// System.Int32 MSG_Boss.ResAddWorldBossRankCount::canBuyCount
	int32_t ___canBuyCount_5;

public:
	inline static int32_t get_offset_of_bossType_1() { return static_cast<int32_t>(offsetof(ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59, ___bossType_1)); }
	inline int32_t get_bossType_1() const { return ___bossType_1; }
	inline int32_t* get_address_of_bossType_1() { return &___bossType_1; }
	inline void set_bossType_1(int32_t value)
	{
		___bossType_1 = value;
	}

	inline static int32_t get_offset_of_remainCount_2() { return static_cast<int32_t>(offsetof(ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59, ___remainCount_2)); }
	inline int32_t get_remainCount_2() const { return ___remainCount_2; }
	inline int32_t* get_address_of_remainCount_2() { return &___remainCount_2; }
	inline void set_remainCount_2(int32_t value)
	{
		___remainCount_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_buyCount_4() { return static_cast<int32_t>(offsetof(ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59, ___buyCount_4)); }
	inline int32_t get_buyCount_4() const { return ___buyCount_4; }
	inline int32_t* get_address_of_buyCount_4() { return &___buyCount_4; }
	inline void set_buyCount_4(int32_t value)
	{
		___buyCount_4 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_5() { return static_cast<int32_t>(offsetof(ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59, ___canBuyCount_5)); }
	inline int32_t get_canBuyCount_5() const { return ___canBuyCount_5; }
	inline int32_t* get_address_of_canBuyCount_5() { return &___canBuyCount_5; }
	inline void set_canBuyCount_5(int32_t value)
	{
		___canBuyCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESADDWORLDBOSSRANKCOUNT_T3F49B720607AD7B7FBD69C5098A692E6637ADA59_H
#ifndef RESBOSSKILLEDINFO_TA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6_H
#define RESBOSSKILLEDINFO_TA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResBossKilledInfo
struct  ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResBossKilledInfo::bossId
	int32_t ___bossId_1;
	// System.Collections.Generic.List`1<MSG_Boss.BossKilledRecord> MSG_Boss.ResBossKilledInfo::killedRecordList
	List_1_tFC12ACF1953BE4D71D1610018372A45252FE8A5D * ___killedRecordList_2;
	// System.Int32 MSG_Boss.ResBossKilledInfo::bossType
	int32_t ___bossType_3;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_killedRecordList_2() { return static_cast<int32_t>(offsetof(ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6, ___killedRecordList_2)); }
	inline List_1_tFC12ACF1953BE4D71D1610018372A45252FE8A5D * get_killedRecordList_2() const { return ___killedRecordList_2; }
	inline List_1_tFC12ACF1953BE4D71D1610018372A45252FE8A5D ** get_address_of_killedRecordList_2() { return &___killedRecordList_2; }
	inline void set_killedRecordList_2(List_1_tFC12ACF1953BE4D71D1610018372A45252FE8A5D * value)
	{
		___killedRecordList_2 = value;
		Il2CppCodeGenWriteBarrier((&___killedRecordList_2), value);
	}

	inline static int32_t get_offset_of_bossType_3() { return static_cast<int32_t>(offsetof(ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6, ___bossType_3)); }
	inline int32_t get_bossType_3() const { return ___bossType_3; }
	inline int32_t* get_address_of_bossType_3() { return &___bossType_3; }
	inline void set_bossType_3(int32_t value)
	{
		___bossType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBOSSKILLEDINFO_TA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6_H
#ifndef RESBOSSREFRESHINFO_TC2D8A678856D7BBA9A66208F4DE0765391EE3361_H
#define RESBOSSREFRESHINFO_TC2D8A678856D7BBA9A66208F4DE0765391EE3361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResBossRefreshInfo
struct  ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Boss.BossInfo> MSG_Boss.ResBossRefreshInfo::bossRefreshList
	List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * ___bossRefreshList_1;
	// System.Int32 MSG_Boss.ResBossRefreshInfo::bossType
	int32_t ___bossType_2;

public:
	inline static int32_t get_offset_of_bossRefreshList_1() { return static_cast<int32_t>(offsetof(ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361, ___bossRefreshList_1)); }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * get_bossRefreshList_1() const { return ___bossRefreshList_1; }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 ** get_address_of_bossRefreshList_1() { return &___bossRefreshList_1; }
	inline void set_bossRefreshList_1(List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * value)
	{
		___bossRefreshList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossRefreshList_1), value);
	}

	inline static int32_t get_offset_of_bossType_2() { return static_cast<int32_t>(offsetof(ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361, ___bossType_2)); }
	inline int32_t get_bossType_2() const { return ___bossType_2; }
	inline int32_t* get_address_of_bossType_2() { return &___bossType_2; }
	inline void set_bossType_2(int32_t value)
	{
		___bossType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBOSSREFRESHINFO_TC2D8A678856D7BBA9A66208F4DE0765391EE3361_H
#ifndef RESBOSSREFRESHTIP_TD67634B8860B3A8324341990C0F1DA6897FBA8A8_H
#define RESBOSSREFRESHTIP_TD67634B8860B3A8324341990C0F1DA6897FBA8A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResBossRefreshTip
struct  ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResBossRefreshTip::bossId
	int32_t ___bossId_1;
	// System.Int32 MSG_Boss.ResBossRefreshTip::bossType
	int32_t ___bossType_2;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_bossType_2() { return static_cast<int32_t>(offsetof(ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8, ___bossType_2)); }
	inline int32_t get_bossType_2() const { return ___bossType_2; }
	inline int32_t* get_address_of_bossType_2() { return &___bossType_2; }
	inline void set_bossType_2(int32_t value)
	{
		___bossType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBOSSREFRESHTIP_TD67634B8860B3A8324341990C0F1DA6897FBA8A8_H
#ifndef RESFOLLOWBOSS_TD779DBA2C36478B2D5240917D451DB4B677C3CF5_H
#define RESFOLLOWBOSS_TD779DBA2C36478B2D5240917D451DB4B677C3CF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResFollowBoss
struct  ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResFollowBoss::bossId
	int32_t ___bossId_1;
	// System.Int32 MSG_Boss.ResFollowBoss::type
	int32_t ___type_2;
	// System.Boolean MSG_Boss.ResFollowBoss::isSuccess
	bool ___isSuccess_3;
	// System.Int32 MSG_Boss.ResFollowBoss::bossType
	int32_t ___bossType_4;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_isSuccess_3() { return static_cast<int32_t>(offsetof(ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5, ___isSuccess_3)); }
	inline bool get_isSuccess_3() const { return ___isSuccess_3; }
	inline bool* get_address_of_isSuccess_3() { return &___isSuccess_3; }
	inline void set_isSuccess_3(bool value)
	{
		___isSuccess_3 = value;
	}

	inline static int32_t get_offset_of_bossType_4() { return static_cast<int32_t>(offsetof(ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5, ___bossType_4)); }
	inline int32_t get_bossType_4() const { return ___bossType_4; }
	inline int32_t* get_address_of_bossType_4() { return &___bossType_4; }
	inline void set_bossType_4(int32_t value)
	{
		___bossType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFOLLOWBOSS_TD779DBA2C36478B2D5240917D451DB4B677C3CF5_H
#ifndef RESMYSELFBOSSCOPYINFO_TED7CB23F8E5032E76983C93E881CF3BC2017D655_H
#define RESMYSELFBOSSCOPYINFO_TED7CB23F8E5032E76983C93E881CF3BC2017D655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResMySelfBossCopyInfo
struct  ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Boss.mySelfBossCopyInfo> MSG_Boss.ResMySelfBossCopyInfo::info
	List_1_tC50E9966B11B8D72239D8CD8FBF072AA03787E07 * ___info_1;
	// MSG_Boss.mySelfBossCopyItemInfo MSG_Boss.ResMySelfBossCopyInfo::iteminfo
	mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * ___iteminfo_2;
	// System.Int32 MSG_Boss.ResMySelfBossCopyInfo::layer
	int32_t ___layer_3;

public:
	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655, ___info_1)); }
	inline List_1_tC50E9966B11B8D72239D8CD8FBF072AA03787E07 * get_info_1() const { return ___info_1; }
	inline List_1_tC50E9966B11B8D72239D8CD8FBF072AA03787E07 ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(List_1_tC50E9966B11B8D72239D8CD8FBF072AA03787E07 * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}

	inline static int32_t get_offset_of_iteminfo_2() { return static_cast<int32_t>(offsetof(ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655, ___iteminfo_2)); }
	inline mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * get_iteminfo_2() const { return ___iteminfo_2; }
	inline mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B ** get_address_of_iteminfo_2() { return &___iteminfo_2; }
	inline void set_iteminfo_2(mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * value)
	{
		___iteminfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___iteminfo_2), value);
	}

	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655, ___layer_3)); }
	inline int32_t get_layer_3() const { return ___layer_3; }
	inline int32_t* get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(int32_t value)
	{
		___layer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMYSELFBOSSCOPYINFO_TED7CB23F8E5032E76983C93E881CF3BC2017D655_H
#ifndef RESMYSELFBOSSITEMINFO_T8D4216244AE386AC86BF40B5C829400C62152B9F_H
#define RESMYSELFBOSSITEMINFO_T8D4216244AE386AC86BF40B5C829400C62152B9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResMySelfBossItemInfo
struct  ResMySelfBossItemInfo_t8D4216244AE386AC86BF40B5C829400C62152B9F  : public RuntimeObject
{
public:
	// MSG_Boss.mySelfBossCopyItemInfo MSG_Boss.ResMySelfBossItemInfo::info
	mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * ___info_1;

public:
	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(ResMySelfBossItemInfo_t8D4216244AE386AC86BF40B5C829400C62152B9F, ___info_1)); }
	inline mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * get_info_1() const { return ___info_1; }
	inline mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMYSELFBOSSITEMINFO_T8D4216244AE386AC86BF40B5C829400C62152B9F_H
#ifndef RESMYSELFBOSSREMAINTIME_TE6990DAEDBFE82A257F287B0C019094F13DF1CDD_H
#define RESMYSELFBOSSREMAINTIME_TE6990DAEDBFE82A257F287B0C019094F13DF1CDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResMySelfBossRemainTime
struct  ResMySelfBossRemainTime_tE6990DAEDBFE82A257F287B0C019094F13DF1CDD  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResMySelfBossRemainTime::remaintime
	int32_t ___remaintime_1;

public:
	inline static int32_t get_offset_of_remaintime_1() { return static_cast<int32_t>(offsetof(ResMySelfBossRemainTime_tE6990DAEDBFE82A257F287B0C019094F13DF1CDD, ___remaintime_1)); }
	inline int32_t get_remaintime_1() const { return ___remaintime_1; }
	inline int32_t* get_address_of_remaintime_1() { return &___remaintime_1; }
	inline void set_remaintime_1(int32_t value)
	{
		___remaintime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMYSELFBOSSREMAINTIME_TE6990DAEDBFE82A257F287B0C019094F13DF1CDD_H
#ifndef RESMYSELFBOSSSTAGE_T17F51EDA942EA122A1846779B93C82E75528DE7E_H
#define RESMYSELFBOSSSTAGE_T17F51EDA942EA122A1846779B93C82E75528DE7E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResMySelfBossStage
struct  ResMySelfBossStage_t17F51EDA942EA122A1846779B93C82E75528DE7E  : public RuntimeObject
{
public:
	// MSG_Boss.mySelfBossCopyInfo MSG_Boss.ResMySelfBossStage::info
	mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1 * ___info_1;

public:
	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(ResMySelfBossStage_t17F51EDA942EA122A1846779B93C82E75528DE7E, ___info_1)); }
	inline mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1 * get_info_1() const { return ___info_1; }
	inline mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1 ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1 * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMYSELFBOSSSTAGE_T17F51EDA942EA122A1846779B93C82E75528DE7E_H
#ifndef RESNOOBBOSSPANNEL_TA7E60E7E0126E5B3EB35924B6333839BB0AF5975_H
#define RESNOOBBOSSPANNEL_TA7E60E7E0126E5B3EB35924B6333839BB0AF5975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResNoobBossPannel
struct  ResNoobBossPannel_tA7E60E7E0126E5B3EB35924B6333839BB0AF5975  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Boss.ResNoobBossPannel::bossList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___bossList_1;

public:
	inline static int32_t get_offset_of_bossList_1() { return static_cast<int32_t>(offsetof(ResNoobBossPannel_tA7E60E7E0126E5B3EB35924B6333839BB0AF5975, ___bossList_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_bossList_1() const { return ___bossList_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_bossList_1() { return &___bossList_1; }
	inline void set_bossList_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___bossList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESNOOBBOSSPANNEL_TA7E60E7E0126E5B3EB35924B6333839BB0AF5975_H
#ifndef RESOPENDREAMBOSS_T914788AB29224C805EFBFA830E0F720B91B0CA39_H
#define RESOPENDREAMBOSS_T914788AB29224C805EFBFA830E0F720B91B0CA39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResOpenDreamBoss
struct  ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Boss.BossInfo> MSG_Boss.ResOpenDreamBoss::bossList
	List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * ___bossList_1;
	// System.Int32 MSG_Boss.ResOpenDreamBoss::bossType
	int32_t ___bossType_2;
	// System.Int32 MSG_Boss.ResOpenDreamBoss::remainCount
	int32_t ___remainCount_3;
	// System.Int32 MSG_Boss.ResOpenDreamBoss::maxCount
	int32_t ___maxCount_4;
	// System.Int32 MSG_Boss.ResOpenDreamBoss::buyCount
	int32_t ___buyCount_5;
	// System.Int32 MSG_Boss.ResOpenDreamBoss::canBuyCount
	int32_t ___canBuyCount_6;
	// System.Collections.Generic.List`1<MSG_Boss.BossMapOlInfo> MSG_Boss.ResOpenDreamBoss::mapOlList
	List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * ___mapOlList_7;

public:
	inline static int32_t get_offset_of_bossList_1() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___bossList_1)); }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * get_bossList_1() const { return ___bossList_1; }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 ** get_address_of_bossList_1() { return &___bossList_1; }
	inline void set_bossList_1(List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * value)
	{
		___bossList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_1), value);
	}

	inline static int32_t get_offset_of_bossType_2() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___bossType_2)); }
	inline int32_t get_bossType_2() const { return ___bossType_2; }
	inline int32_t* get_address_of_bossType_2() { return &___bossType_2; }
	inline void set_bossType_2(int32_t value)
	{
		___bossType_2 = value;
	}

	inline static int32_t get_offset_of_remainCount_3() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___remainCount_3)); }
	inline int32_t get_remainCount_3() const { return ___remainCount_3; }
	inline int32_t* get_address_of_remainCount_3() { return &___remainCount_3; }
	inline void set_remainCount_3(int32_t value)
	{
		___remainCount_3 = value;
	}

	inline static int32_t get_offset_of_maxCount_4() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___maxCount_4)); }
	inline int32_t get_maxCount_4() const { return ___maxCount_4; }
	inline int32_t* get_address_of_maxCount_4() { return &___maxCount_4; }
	inline void set_maxCount_4(int32_t value)
	{
		___maxCount_4 = value;
	}

	inline static int32_t get_offset_of_buyCount_5() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___buyCount_5)); }
	inline int32_t get_buyCount_5() const { return ___buyCount_5; }
	inline int32_t* get_address_of_buyCount_5() { return &___buyCount_5; }
	inline void set_buyCount_5(int32_t value)
	{
		___buyCount_5 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_6() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___canBuyCount_6)); }
	inline int32_t get_canBuyCount_6() const { return ___canBuyCount_6; }
	inline int32_t* get_address_of_canBuyCount_6() { return &___canBuyCount_6; }
	inline void set_canBuyCount_6(int32_t value)
	{
		___canBuyCount_6 = value;
	}

	inline static int32_t get_offset_of_mapOlList_7() { return static_cast<int32_t>(offsetof(ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39, ___mapOlList_7)); }
	inline List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * get_mapOlList_7() const { return ___mapOlList_7; }
	inline List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 ** get_address_of_mapOlList_7() { return &___mapOlList_7; }
	inline void set_mapOlList_7(List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * value)
	{
		___mapOlList_7 = value;
		Il2CppCodeGenWriteBarrier((&___mapOlList_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENDREAMBOSS_T914788AB29224C805EFBFA830E0F720B91B0CA39_H
#ifndef RESRANKCOUNTTIPS_T2B6AAEAC78CB149493EB8F35E6CC133BC8235712_H
#define RESRANKCOUNTTIPS_T2B6AAEAC78CB149493EB8F35E6CC133BC8235712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResRankCountTips
struct  ResRankCountTips_t2B6AAEAC78CB149493EB8F35E6CC133BC8235712  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESRANKCOUNTTIPS_T2B6AAEAC78CB149493EB8F35E6CC133BC8235712_H
#ifndef RESSUITGEMBOSSENDTIME_T6084E6F70C4A1A0C97C7EB9B93B1AE88412676E6_H
#define RESSUITGEMBOSSENDTIME_T6084E6F70C4A1A0C97C7EB9B93B1AE88412676E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResSuitGemBossEndTime
struct  ResSuitGemBossEndTime_t6084E6F70C4A1A0C97C7EB9B93B1AE88412676E6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSUITGEMBOSSENDTIME_T6084E6F70C4A1A0C97C7EB9B93B1AE88412676E6_H
#ifndef RESSUITGEMBOSSPANEL_T672EEB3FC32EDF85B3808F612583F4DCCFB4C354_H
#define RESSUITGEMBOSSPANEL_T672EEB3FC32EDF85B3808F612583F4DCCFB4C354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResSuitGemBossPanel
struct  ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResSuitGemBossPanel::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<MSG_Boss.BossInfo> MSG_Boss.ResSuitGemBossPanel::bossList
	List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * ___bossList_2;
	// System.Int32 MSG_Boss.ResSuitGemBossPanel::remainCount
	int32_t ___remainCount_3;
	// System.Int32 MSG_Boss.ResSuitGemBossPanel::maxCount
	int32_t ___maxCount_4;
	// System.Int32 MSG_Boss.ResSuitGemBossPanel::buyCount
	int32_t ___buyCount_5;
	// System.Int32 MSG_Boss.ResSuitGemBossPanel::canBuyCount
	int32_t ___canBuyCount_6;
	// System.Collections.Generic.List`1<MSG_Boss.BossMapOlInfo> MSG_Boss.ResSuitGemBossPanel::mapOlList
	List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * ___mapOlList_7;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_bossList_2() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___bossList_2)); }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * get_bossList_2() const { return ___bossList_2; }
	inline List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 ** get_address_of_bossList_2() { return &___bossList_2; }
	inline void set_bossList_2(List_1_tB6429FCD5364CF7A5AA6D99EC0B9DEA3993FC403 * value)
	{
		___bossList_2 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_2), value);
	}

	inline static int32_t get_offset_of_remainCount_3() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___remainCount_3)); }
	inline int32_t get_remainCount_3() const { return ___remainCount_3; }
	inline int32_t* get_address_of_remainCount_3() { return &___remainCount_3; }
	inline void set_remainCount_3(int32_t value)
	{
		___remainCount_3 = value;
	}

	inline static int32_t get_offset_of_maxCount_4() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___maxCount_4)); }
	inline int32_t get_maxCount_4() const { return ___maxCount_4; }
	inline int32_t* get_address_of_maxCount_4() { return &___maxCount_4; }
	inline void set_maxCount_4(int32_t value)
	{
		___maxCount_4 = value;
	}

	inline static int32_t get_offset_of_buyCount_5() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___buyCount_5)); }
	inline int32_t get_buyCount_5() const { return ___buyCount_5; }
	inline int32_t* get_address_of_buyCount_5() { return &___buyCount_5; }
	inline void set_buyCount_5(int32_t value)
	{
		___buyCount_5 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_6() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___canBuyCount_6)); }
	inline int32_t get_canBuyCount_6() const { return ___canBuyCount_6; }
	inline int32_t* get_address_of_canBuyCount_6() { return &___canBuyCount_6; }
	inline void set_canBuyCount_6(int32_t value)
	{
		___canBuyCount_6 = value;
	}

	inline static int32_t get_offset_of_mapOlList_7() { return static_cast<int32_t>(offsetof(ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354, ___mapOlList_7)); }
	inline List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * get_mapOlList_7() const { return ___mapOlList_7; }
	inline List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 ** get_address_of_mapOlList_7() { return &___mapOlList_7; }
	inline void set_mapOlList_7(List_1_t5AF60825994AEABB8C46B73A76FA4556E54392C3 * value)
	{
		___mapOlList_7 = value;
		Il2CppCodeGenWriteBarrier((&___mapOlList_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSUITGEMBOSSPANEL_T672EEB3FC32EDF85B3808F612583F4DCCFB4C354_H
#ifndef RESSUITGEMBOSSSCOURGE_T1239980A7402967AF803A9D86A5A3F3C25AE0E61_H
#define RESSUITGEMBOSSSCOURGE_T1239980A7402967AF803A9D86A5A3F3C25AE0E61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResSuitGemBossScourge
struct  ResSuitGemBossScourge_t1239980A7402967AF803A9D86A5A3F3C25AE0E61  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResSuitGemBossScourge::scourge
	int32_t ___scourge_1;

public:
	inline static int32_t get_offset_of_scourge_1() { return static_cast<int32_t>(offsetof(ResSuitGemBossScourge_t1239980A7402967AF803A9D86A5A3F3C25AE0E61, ___scourge_1)); }
	inline int32_t get_scourge_1() const { return ___scourge_1; }
	inline int32_t* get_address_of_scourge_1() { return &___scourge_1; }
	inline void set_scourge_1(int32_t value)
	{
		___scourge_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSUITGEMBOSSSCOURGE_T1239980A7402967AF803A9D86A5A3F3C25AE0E61_H
#ifndef RESSYNHARMRANK_T9638E2E1699530C350C3C45F8B4638D675CB382C_H
#define RESSYNHARMRANK_T9638E2E1699530C350C3C45F8B4638D675CB382C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResSynHarmRank
struct  ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Boss.harmRank> MSG_Boss.ResSynHarmRank::rank
	List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * ___rank_1;
	// System.Int32 MSG_Boss.ResSynHarmRank::myRank
	int32_t ___myRank_2;
	// System.UInt64 MSG_Boss.ResSynHarmRank::myHarm
	uint64_t ___myHarm_3;
	// System.Int32 MSG_Boss.ResSynHarmRank::bossType
	int32_t ___bossType_4;
	// System.Collections.Generic.List`1<MSG_Boss.harmRank> MSG_Boss.ResSynHarmRank::upportHarmInfo
	List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * ___upportHarmInfo_5;
	// System.UInt64 MSG_Boss.ResSynHarmRank::bossCode
	uint64_t ___bossCode_6;

public:
	inline static int32_t get_offset_of_rank_1() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___rank_1)); }
	inline List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * get_rank_1() const { return ___rank_1; }
	inline List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 ** get_address_of_rank_1() { return &___rank_1; }
	inline void set_rank_1(List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * value)
	{
		___rank_1 = value;
		Il2CppCodeGenWriteBarrier((&___rank_1), value);
	}

	inline static int32_t get_offset_of_myRank_2() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___myRank_2)); }
	inline int32_t get_myRank_2() const { return ___myRank_2; }
	inline int32_t* get_address_of_myRank_2() { return &___myRank_2; }
	inline void set_myRank_2(int32_t value)
	{
		___myRank_2 = value;
	}

	inline static int32_t get_offset_of_myHarm_3() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___myHarm_3)); }
	inline uint64_t get_myHarm_3() const { return ___myHarm_3; }
	inline uint64_t* get_address_of_myHarm_3() { return &___myHarm_3; }
	inline void set_myHarm_3(uint64_t value)
	{
		___myHarm_3 = value;
	}

	inline static int32_t get_offset_of_bossType_4() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___bossType_4)); }
	inline int32_t get_bossType_4() const { return ___bossType_4; }
	inline int32_t* get_address_of_bossType_4() { return &___bossType_4; }
	inline void set_bossType_4(int32_t value)
	{
		___bossType_4 = value;
	}

	inline static int32_t get_offset_of_upportHarmInfo_5() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___upportHarmInfo_5)); }
	inline List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * get_upportHarmInfo_5() const { return ___upportHarmInfo_5; }
	inline List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 ** get_address_of_upportHarmInfo_5() { return &___upportHarmInfo_5; }
	inline void set_upportHarmInfo_5(List_1_tECDD58CA4CE0CD5ADC04039ADC8CCEF6930F6D80 * value)
	{
		___upportHarmInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___upportHarmInfo_5), value);
	}

	inline static int32_t get_offset_of_bossCode_6() { return static_cast<int32_t>(offsetof(ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C, ___bossCode_6)); }
	inline uint64_t get_bossCode_6() const { return ___bossCode_6; }
	inline uint64_t* get_address_of_bossCode_6() { return &___bossCode_6; }
	inline void set_bossCode_6(uint64_t value)
	{
		___bossCode_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYNHARMRANK_T9638E2E1699530C350C3C45F8B4638D675CB382C_H
#ifndef RESUPDATEWORLDBOSSREMAINRANKCOUNT_TE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D_H
#define RESUPDATEWORLDBOSSREMAINRANKCOUNT_TE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResUpDateWorldBossReMainRankCount
struct  ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResUpDateWorldBossReMainRankCount::bossType
	int32_t ___bossType_1;
	// System.Int32 MSG_Boss.ResUpDateWorldBossReMainRankCount::remainCount
	int32_t ___remainCount_2;
	// System.Int32 MSG_Boss.ResUpDateWorldBossReMainRankCount::maxCount
	int32_t ___maxCount_3;
	// System.Int32 MSG_Boss.ResUpDateWorldBossReMainRankCount::buyCount
	int32_t ___buyCount_4;
	// System.Int32 MSG_Boss.ResUpDateWorldBossReMainRankCount::canBuyCount
	int32_t ___canBuyCount_5;

public:
	inline static int32_t get_offset_of_bossType_1() { return static_cast<int32_t>(offsetof(ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D, ___bossType_1)); }
	inline int32_t get_bossType_1() const { return ___bossType_1; }
	inline int32_t* get_address_of_bossType_1() { return &___bossType_1; }
	inline void set_bossType_1(int32_t value)
	{
		___bossType_1 = value;
	}

	inline static int32_t get_offset_of_remainCount_2() { return static_cast<int32_t>(offsetof(ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D, ___remainCount_2)); }
	inline int32_t get_remainCount_2() const { return ___remainCount_2; }
	inline int32_t* get_address_of_remainCount_2() { return &___remainCount_2; }
	inline void set_remainCount_2(int32_t value)
	{
		___remainCount_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_buyCount_4() { return static_cast<int32_t>(offsetof(ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D, ___buyCount_4)); }
	inline int32_t get_buyCount_4() const { return ___buyCount_4; }
	inline int32_t* get_address_of_buyCount_4() { return &___buyCount_4; }
	inline void set_buyCount_4(int32_t value)
	{
		___buyCount_4 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_5() { return static_cast<int32_t>(offsetof(ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D, ___canBuyCount_5)); }
	inline int32_t get_canBuyCount_5() const { return ___canBuyCount_5; }
	inline int32_t* get_address_of_canBuyCount_5() { return &___canBuyCount_5; }
	inline void set_canBuyCount_5(int32_t value)
	{
		___canBuyCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEWORLDBOSSREMAINRANKCOUNT_TE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D_H
#ifndef RESWUXIANBOSSOCTIME_TF58B172D0BF415425E2A308967092777D0CA9753_H
#define RESWUXIANBOSSOCTIME_TF58B172D0BF415425E2A308967092777D0CA9753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.ResWuXianBossOCTime
struct  ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.ResWuXianBossOCTime::openTime
	int32_t ___openTime_1;
	// System.Int32 MSG_Boss.ResWuXianBossOCTime::closeTime
	int32_t ___closeTime_2;

public:
	inline static int32_t get_offset_of_openTime_1() { return static_cast<int32_t>(offsetof(ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753, ___openTime_1)); }
	inline int32_t get_openTime_1() const { return ___openTime_1; }
	inline int32_t* get_address_of_openTime_1() { return &___openTime_1; }
	inline void set_openTime_1(int32_t value)
	{
		___openTime_1 = value;
	}

	inline static int32_t get_offset_of_closeTime_2() { return static_cast<int32_t>(offsetof(ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753, ___closeTime_2)); }
	inline int32_t get_closeTime_2() const { return ___closeTime_2; }
	inline int32_t* get_address_of_closeTime_2() { return &___closeTime_2; }
	inline void set_closeTime_2(int32_t value)
	{
		___closeTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESWUXIANBOSSOCTIME_TF58B172D0BF415425E2A308967092777D0CA9753_H
#ifndef HARMRANK_T84D4350014DCAB60A47FDC650DD81BEB607D2153_H
#define HARMRANK_T84D4350014DCAB60A47FDC650DD81BEB607D2153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.harmRank
struct  harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.harmRank::top
	int32_t ___top_0;
	// System.String MSG_Boss.harmRank::name
	String_t* ___name_1;
	// System.UInt64 MSG_Boss.harmRank::harm
	uint64_t ___harm_2;

public:
	inline static int32_t get_offset_of_top_0() { return static_cast<int32_t>(offsetof(harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153, ___top_0)); }
	inline int32_t get_top_0() const { return ___top_0; }
	inline int32_t* get_address_of_top_0() { return &___top_0; }
	inline void set_top_0(int32_t value)
	{
		___top_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_harm_2() { return static_cast<int32_t>(offsetof(harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153, ___harm_2)); }
	inline uint64_t get_harm_2() const { return ___harm_2; }
	inline uint64_t* get_address_of_harm_2() { return &___harm_2; }
	inline void set_harm_2(uint64_t value)
	{
		___harm_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HARMRANK_T84D4350014DCAB60A47FDC650DD81BEB607D2153_H
#ifndef MYSELFBOSSCOPYINFO_T1FC43CAFBC9255DAE4E164C408B3AE1E530223E1_H
#define MYSELFBOSSCOPYINFO_T1FC43CAFBC9255DAE4E164C408B3AE1E530223E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.mySelfBossCopyInfo
struct  mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1  : public RuntimeObject
{
public:
	// System.Int32 MSG_Boss.mySelfBossCopyInfo::monsterid
	int32_t ___monsterid_0;
	// System.Int32 MSG_Boss.mySelfBossCopyInfo::time
	int32_t ___time_1;
	// System.Boolean MSG_Boss.mySelfBossCopyInfo::active
	bool ___active_2;

public:
	inline static int32_t get_offset_of_monsterid_0() { return static_cast<int32_t>(offsetof(mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1, ___monsterid_0)); }
	inline int32_t get_monsterid_0() const { return ___monsterid_0; }
	inline int32_t* get_address_of_monsterid_0() { return &___monsterid_0; }
	inline void set_monsterid_0(int32_t value)
	{
		___monsterid_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1, ___time_1)); }
	inline int32_t get_time_1() const { return ___time_1; }
	inline int32_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int32_t value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1, ___active_2)); }
	inline bool get_active_2() const { return ___active_2; }
	inline bool* get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(bool value)
	{
		___active_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYSELFBOSSCOPYINFO_T1FC43CAFBC9255DAE4E164C408B3AE1E530223E1_H
#ifndef MYSELFBOSSCOPYITEMINFO_T4FCD56A21B644EA4283831C57779021E40E70D9B_H
#define MYSELFBOSSCOPYITEMINFO_T4FCD56A21B644EA4283831C57779021E40E70D9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Boss.mySelfBossCopyItemInfo
struct  mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B  : public RuntimeObject
{
public:
	// System.Boolean MSG_Boss.mySelfBossCopyItemInfo::auto
	bool ___auto_0;
	// System.Int32 MSG_Boss.mySelfBossCopyItemInfo::time
	int32_t ___time_1;
	// System.Int32 MSG_Boss.mySelfBossCopyItemInfo::doublenum
	int32_t ___doublenum_2;

public:
	inline static int32_t get_offset_of_auto_0() { return static_cast<int32_t>(offsetof(mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B, ___auto_0)); }
	inline bool get_auto_0() const { return ___auto_0; }
	inline bool* get_address_of_auto_0() { return &___auto_0; }
	inline void set_auto_0(bool value)
	{
		___auto_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B, ___time_1)); }
	inline int32_t get_time_1() const { return ___time_1; }
	inline int32_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int32_t value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_doublenum_2() { return static_cast<int32_t>(offsetof(mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B, ___doublenum_2)); }
	inline int32_t get_doublenum_2() const { return ___doublenum_2; }
	inline int32_t* get_address_of_doublenum_2() { return &___doublenum_2; }
	inline void set_doublenum_2(int32_t value)
	{
		___doublenum_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYSELFBOSSCOPYITEMINFO_T4FCD56A21B644EA4283831C57779021E40E70D9B_H
#ifndef BOSSINFO_TD6E596235945151DFFDF9D863FB677BC0F60C770_H
#define BOSSINFO_TD6E596235945151DFFDF9D863FB677BC0F60C770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.BossInfo
struct  BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770  : public RuntimeObject
{
public:
	// System.Int32 MSG_BossHome.BossInfo::bossId
	int32_t ___bossId_0;
	// System.Int32 MSG_BossHome.BossInfo::refreshTime
	int32_t ___refreshTime_1;
	// System.Boolean MSG_BossHome.BossInfo::isFollowed
	bool ___isFollowed_2;

public:
	inline static int32_t get_offset_of_bossId_0() { return static_cast<int32_t>(offsetof(BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770, ___bossId_0)); }
	inline int32_t get_bossId_0() const { return ___bossId_0; }
	inline int32_t* get_address_of_bossId_0() { return &___bossId_0; }
	inline void set_bossId_0(int32_t value)
	{
		___bossId_0 = value;
	}

	inline static int32_t get_offset_of_refreshTime_1() { return static_cast<int32_t>(offsetof(BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770, ___refreshTime_1)); }
	inline int32_t get_refreshTime_1() const { return ___refreshTime_1; }
	inline int32_t* get_address_of_refreshTime_1() { return &___refreshTime_1; }
	inline void set_refreshTime_1(int32_t value)
	{
		___refreshTime_1 = value;
	}

	inline static int32_t get_offset_of_isFollowed_2() { return static_cast<int32_t>(offsetof(BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770, ___isFollowed_2)); }
	inline bool get_isFollowed_2() const { return ___isFollowed_2; }
	inline bool* get_address_of_isFollowed_2() { return &___isFollowed_2; }
	inline void set_isFollowed_2(bool value)
	{
		___isFollowed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSINFO_TD6E596235945151DFFDF9D863FB677BC0F60C770_H
#ifndef REQBOSSRECORD_TAC9EB16059B59A980730A44481EF1EF7ADAE8097_H
#define REQBOSSRECORD_TAC9EB16059B59A980730A44481EF1EF7ADAE8097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ReqBossRecord
struct  ReqBossRecord_tAC9EB16059B59A980730A44481EF1EF7ADAE8097  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBOSSRECORD_TAC9EB16059B59A980730A44481EF1EF7ADAE8097_H
#ifndef REQYYHJBOSSINFO_TBC88491EAD87DCBF947177234A0B46CDBCB3D841_H
#define REQYYHJBOSSINFO_TBC88491EAD87DCBF947177234A0B46CDBCB3D841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ReqYYHJBossInfo
struct  ReqYYHJBossInfo_tBC88491EAD87DCBF947177234A0B46CDBCB3D841  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQYYHJBOSSINFO_TBC88491EAD87DCBF947177234A0B46CDBCB3D841_H
#ifndef RESBOSSRECORD_TF5E1EFF9D5C214BC8A19D74061C570976C6C0534_H
#define RESBOSSRECORD_TF5E1EFF9D5C214BC8A19D74061C570976C6C0534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ResBossRecord
struct  ResBossRecord_tF5E1EFF9D5C214BC8A19D74061C570976C6C0534  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_BossHome.bossRecordInfo> MSG_BossHome.ResBossRecord::records
	List_1_t5831C39B74BFB741E47D7F434F34BB0D500DABEA * ___records_1;

public:
	inline static int32_t get_offset_of_records_1() { return static_cast<int32_t>(offsetof(ResBossRecord_tF5E1EFF9D5C214BC8A19D74061C570976C6C0534, ___records_1)); }
	inline List_1_t5831C39B74BFB741E47D7F434F34BB0D500DABEA * get_records_1() const { return ___records_1; }
	inline List_1_t5831C39B74BFB741E47D7F434F34BB0D500DABEA ** get_address_of_records_1() { return &___records_1; }
	inline void set_records_1(List_1_t5831C39B74BFB741E47D7F434F34BB0D500DABEA * value)
	{
		___records_1 = value;
		Il2CppCodeGenWriteBarrier((&___records_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBOSSRECORD_TF5E1EFF9D5C214BC8A19D74061C570976C6C0534_H
#ifndef RESHOMEBOSSREFRESHINFO_TAE7DD683C475468815AC8FF54B521E7587E252E4_H
#define RESHOMEBOSSREFRESHINFO_TAE7DD683C475468815AC8FF54B521E7587E252E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ResHomeBossRefreshInfo
struct  ResHomeBossRefreshInfo_tAE7DD683C475468815AC8FF54B521E7587E252E4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_BossHome.BossInfo> MSG_BossHome.ResHomeBossRefreshInfo::bossRefreshList
	List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * ___bossRefreshList_1;

public:
	inline static int32_t get_offset_of_bossRefreshList_1() { return static_cast<int32_t>(offsetof(ResHomeBossRefreshInfo_tAE7DD683C475468815AC8FF54B521E7587E252E4, ___bossRefreshList_1)); }
	inline List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * get_bossRefreshList_1() const { return ___bossRefreshList_1; }
	inline List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D ** get_address_of_bossRefreshList_1() { return &___bossRefreshList_1; }
	inline void set_bossRefreshList_1(List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * value)
	{
		___bossRefreshList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossRefreshList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESHOMEBOSSREFRESHINFO_TAE7DD683C475468815AC8FF54B521E7587E252E4_H
#ifndef RESYYHJBOSSINFO_T6041C66B63F768C972B190ACC7662CB49786C94F_H
#define RESYYHJBOSSINFO_T6041C66B63F768C972B190ACC7662CB49786C94F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ResYYHJBossInfo
struct  ResYYHJBossInfo_t6041C66B63F768C972B190ACC7662CB49786C94F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_BossHome.bossHomeBossInfo> MSG_BossHome.ResYYHJBossInfo::bossInfo
	List_1_t1E74506F16D98F05B6BF24E3BC98855BA3666F64 * ___bossInfo_1;

public:
	inline static int32_t get_offset_of_bossInfo_1() { return static_cast<int32_t>(offsetof(ResYYHJBossInfo_t6041C66B63F768C972B190ACC7662CB49786C94F, ___bossInfo_1)); }
	inline List_1_t1E74506F16D98F05B6BF24E3BC98855BA3666F64 * get_bossInfo_1() const { return ___bossInfo_1; }
	inline List_1_t1E74506F16D98F05B6BF24E3BC98855BA3666F64 ** get_address_of_bossInfo_1() { return &___bossInfo_1; }
	inline void set_bossInfo_1(List_1_t1E74506F16D98F05B6BF24E3BC98855BA3666F64 * value)
	{
		___bossInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESYYHJBOSSINFO_T6041C66B63F768C972B190ACC7662CB49786C94F_H
#ifndef RESYYHJBOSSREFRESHINFO_T546ED5144555087912F57C1CD9F06A0264D3A54D_H
#define RESYYHJBOSSREFRESHINFO_T546ED5144555087912F57C1CD9F06A0264D3A54D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.ResYyhjBossRefreshInfo
struct  ResYyhjBossRefreshInfo_t546ED5144555087912F57C1CD9F06A0264D3A54D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_BossHome.BossInfo> MSG_BossHome.ResYyhjBossRefreshInfo::bossRefreshList
	List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * ___bossRefreshList_1;

public:
	inline static int32_t get_offset_of_bossRefreshList_1() { return static_cast<int32_t>(offsetof(ResYyhjBossRefreshInfo_t546ED5144555087912F57C1CD9F06A0264D3A54D, ___bossRefreshList_1)); }
	inline List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * get_bossRefreshList_1() const { return ___bossRefreshList_1; }
	inline List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D ** get_address_of_bossRefreshList_1() { return &___bossRefreshList_1; }
	inline void set_bossRefreshList_1(List_1_t0465A563CFD2FC7DCC805DBAE748D192C284153D * value)
	{
		___bossRefreshList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossRefreshList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESYYHJBOSSREFRESHINFO_T546ED5144555087912F57C1CD9F06A0264D3A54D_H
#ifndef BOSSHOMEBOSSINFO_TA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475_H
#define BOSSHOMEBOSSINFO_TA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.bossHomeBossInfo
struct  bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475  : public RuntimeObject
{
public:
	// System.Int32 MSG_BossHome.bossHomeBossInfo::bossId
	int32_t ___bossId_0;
	// System.Int32 MSG_BossHome.bossHomeBossInfo::state
	int32_t ___state_1;
	// System.String MSG_BossHome.bossHomeBossInfo::killer
	String_t* ___killer_2;
	// System.Int32 MSG_BossHome.bossHomeBossInfo::haveUseCount
	int32_t ___haveUseCount_3;
	// System.Int32 MSG_BossHome.bossHomeBossInfo::nextRefreshTime
	int32_t ___nextRefreshTime_4;
	// System.Int32 MSG_BossHome.bossHomeBossInfo::maxNum
	int32_t ___maxNum_5;

public:
	inline static int32_t get_offset_of_bossId_0() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___bossId_0)); }
	inline int32_t get_bossId_0() const { return ___bossId_0; }
	inline int32_t* get_address_of_bossId_0() { return &___bossId_0; }
	inline void set_bossId_0(int32_t value)
	{
		___bossId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_killer_2() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___killer_2)); }
	inline String_t* get_killer_2() const { return ___killer_2; }
	inline String_t** get_address_of_killer_2() { return &___killer_2; }
	inline void set_killer_2(String_t* value)
	{
		___killer_2 = value;
		Il2CppCodeGenWriteBarrier((&___killer_2), value);
	}

	inline static int32_t get_offset_of_haveUseCount_3() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___haveUseCount_3)); }
	inline int32_t get_haveUseCount_3() const { return ___haveUseCount_3; }
	inline int32_t* get_address_of_haveUseCount_3() { return &___haveUseCount_3; }
	inline void set_haveUseCount_3(int32_t value)
	{
		___haveUseCount_3 = value;
	}

	inline static int32_t get_offset_of_nextRefreshTime_4() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___nextRefreshTime_4)); }
	inline int32_t get_nextRefreshTime_4() const { return ___nextRefreshTime_4; }
	inline int32_t* get_address_of_nextRefreshTime_4() { return &___nextRefreshTime_4; }
	inline void set_nextRefreshTime_4(int32_t value)
	{
		___nextRefreshTime_4 = value;
	}

	inline static int32_t get_offset_of_maxNum_5() { return static_cast<int32_t>(offsetof(bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475, ___maxNum_5)); }
	inline int32_t get_maxNum_5() const { return ___maxNum_5; }
	inline int32_t* get_address_of_maxNum_5() { return &___maxNum_5; }
	inline void set_maxNum_5(int32_t value)
	{
		___maxNum_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSHOMEBOSSINFO_TA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475_H
#ifndef BOSSRECORDINFO_T409A40EF85271884C8CEB401B597DC4284F2BA91_H
#define BOSSRECORDINFO_T409A40EF85271884C8CEB401B597DC4284F2BA91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.bossRecordInfo
struct  bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91  : public RuntimeObject
{
public:
	// System.String MSG_BossHome.bossRecordInfo::playerName
	String_t* ___playerName_0;
	// System.String MSG_BossHome.bossRecordInfo::mapName
	String_t* ___mapName_1;
	// System.Int32 MSG_BossHome.bossRecordInfo::xPos
	int32_t ___xPos_2;
	// System.Int32 MSG_BossHome.bossRecordInfo::yPos
	int32_t ___yPos_3;
	// System.Int64 MSG_BossHome.bossRecordInfo::time
	int64_t ___time_4;
	// System.String MSG_BossHome.bossRecordInfo::bossName
	String_t* ___bossName_5;
	// System.Collections.Generic.List`1<MSG_backpack.ItemInfo> MSG_BossHome.bossRecordInfo::reward
	List_1_tE33393B445B8280160D222A3232DF1C02536A76C * ___reward_6;

public:
	inline static int32_t get_offset_of_playerName_0() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___playerName_0)); }
	inline String_t* get_playerName_0() const { return ___playerName_0; }
	inline String_t** get_address_of_playerName_0() { return &___playerName_0; }
	inline void set_playerName_0(String_t* value)
	{
		___playerName_0 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_0), value);
	}

	inline static int32_t get_offset_of_mapName_1() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___mapName_1)); }
	inline String_t* get_mapName_1() const { return ___mapName_1; }
	inline String_t** get_address_of_mapName_1() { return &___mapName_1; }
	inline void set_mapName_1(String_t* value)
	{
		___mapName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mapName_1), value);
	}

	inline static int32_t get_offset_of_xPos_2() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___xPos_2)); }
	inline int32_t get_xPos_2() const { return ___xPos_2; }
	inline int32_t* get_address_of_xPos_2() { return &___xPos_2; }
	inline void set_xPos_2(int32_t value)
	{
		___xPos_2 = value;
	}

	inline static int32_t get_offset_of_yPos_3() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___yPos_3)); }
	inline int32_t get_yPos_3() const { return ___yPos_3; }
	inline int32_t* get_address_of_yPos_3() { return &___yPos_3; }
	inline void set_yPos_3(int32_t value)
	{
		___yPos_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___time_4)); }
	inline int64_t get_time_4() const { return ___time_4; }
	inline int64_t* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(int64_t value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_bossName_5() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___bossName_5)); }
	inline String_t* get_bossName_5() const { return ___bossName_5; }
	inline String_t** get_address_of_bossName_5() { return &___bossName_5; }
	inline void set_bossName_5(String_t* value)
	{
		___bossName_5 = value;
		Il2CppCodeGenWriteBarrier((&___bossName_5), value);
	}

	inline static int32_t get_offset_of_reward_6() { return static_cast<int32_t>(offsetof(bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91, ___reward_6)); }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C * get_reward_6() const { return ___reward_6; }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C ** get_address_of_reward_6() { return &___reward_6; }
	inline void set_reward_6(List_1_tE33393B445B8280160D222A3232DF1C02536A76C * value)
	{
		___reward_6 = value;
		Il2CppCodeGenWriteBarrier((&___reward_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSRECORDINFO_T409A40EF85271884C8CEB401B597DC4284F2BA91_H
#ifndef ITEMINFO_T817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1_H
#define ITEMINFO_T817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_BossHome.itemInfo
struct  itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1  : public RuntimeObject
{
public:
	// System.Int32 MSG_BossHome.itemInfo::itemId
	int32_t ___itemId_0;
	// System.Int32 MSG_BossHome.itemInfo::num
	int32_t ___num_1;

public:
	inline static int32_t get_offset_of_itemId_0() { return static_cast<int32_t>(offsetof(itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1, ___itemId_0)); }
	inline int32_t get_itemId_0() const { return ___itemId_0; }
	inline int32_t* get_address_of_itemId_0() { return &___itemId_0; }
	inline void set_itemId_0(int32_t value)
	{
		___itemId_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1, ___num_1)); }
	inline int32_t get_num_1() const { return ___num_1; }
	inline int32_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int32_t value)
	{
		___num_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMINFO_T817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1_H
#ifndef ITEMCOIN_T3637C8D864276CB92D0F27756BE96128A197FD80_H
#define ITEMCOIN_T3637C8D864276CB92D0F27756BE96128A197FD80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ItemCoin
struct  ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ItemCoin::type
	int32_t ___type_0;
	// System.Int64 MSG_backpack.ItemCoin::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMCOIN_T3637C8D864276CB92D0F27756BE96128A197FD80_H
#ifndef ITEMINFO_T7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C_H
#define ITEMINFO_T7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ItemInfo
struct  ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C  : public RuntimeObject
{
public:
	// System.UInt64 MSG_backpack.ItemInfo::itemId
	uint64_t ___itemId_0;
	// System.Int32 MSG_backpack.ItemInfo::itemModelId
	int32_t ___itemModelId_1;
	// System.Int64 MSG_backpack.ItemInfo::num
	int64_t ___num_2;
	// System.Int32 MSG_backpack.ItemInfo::gridId
	int32_t ___gridId_3;
	// System.Boolean MSG_backpack.ItemInfo::isbind
	bool ___isbind_4;
	// System.Int32 MSG_backpack.ItemInfo::lostTime
	int32_t ___lostTime_5;
	// System.Int64 MSG_backpack.ItemInfo::cdTime
	int64_t ___cdTime_6;
	// System.Int32 MSG_backpack.ItemInfo::suitId
	int32_t ___suitId_7;
	// System.Int32 MSG_backpack.ItemInfo::strengLv
	int32_t ___strengLv_8;

public:
	inline static int32_t get_offset_of_itemId_0() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___itemId_0)); }
	inline uint64_t get_itemId_0() const { return ___itemId_0; }
	inline uint64_t* get_address_of_itemId_0() { return &___itemId_0; }
	inline void set_itemId_0(uint64_t value)
	{
		___itemId_0 = value;
	}

	inline static int32_t get_offset_of_itemModelId_1() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___itemModelId_1)); }
	inline int32_t get_itemModelId_1() const { return ___itemModelId_1; }
	inline int32_t* get_address_of_itemModelId_1() { return &___itemModelId_1; }
	inline void set_itemModelId_1(int32_t value)
	{
		___itemModelId_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___num_2)); }
	inline int64_t get_num_2() const { return ___num_2; }
	inline int64_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int64_t value)
	{
		___num_2 = value;
	}

	inline static int32_t get_offset_of_gridId_3() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___gridId_3)); }
	inline int32_t get_gridId_3() const { return ___gridId_3; }
	inline int32_t* get_address_of_gridId_3() { return &___gridId_3; }
	inline void set_gridId_3(int32_t value)
	{
		___gridId_3 = value;
	}

	inline static int32_t get_offset_of_isbind_4() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___isbind_4)); }
	inline bool get_isbind_4() const { return ___isbind_4; }
	inline bool* get_address_of_isbind_4() { return &___isbind_4; }
	inline void set_isbind_4(bool value)
	{
		___isbind_4 = value;
	}

	inline static int32_t get_offset_of_lostTime_5() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___lostTime_5)); }
	inline int32_t get_lostTime_5() const { return ___lostTime_5; }
	inline int32_t* get_address_of_lostTime_5() { return &___lostTime_5; }
	inline void set_lostTime_5(int32_t value)
	{
		___lostTime_5 = value;
	}

	inline static int32_t get_offset_of_cdTime_6() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___cdTime_6)); }
	inline int64_t get_cdTime_6() const { return ___cdTime_6; }
	inline int64_t* get_address_of_cdTime_6() { return &___cdTime_6; }
	inline void set_cdTime_6(int64_t value)
	{
		___cdTime_6 = value;
	}

	inline static int32_t get_offset_of_suitId_7() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___suitId_7)); }
	inline int32_t get_suitId_7() const { return ___suitId_7; }
	inline int32_t* get_address_of_suitId_7() { return &___suitId_7; }
	inline void set_suitId_7(int32_t value)
	{
		___suitId_7 = value;
	}

	inline static int32_t get_offset_of_strengLv_8() { return static_cast<int32_t>(offsetof(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C, ___strengLv_8)); }
	inline int32_t get_strengLv_8() const { return ___strengLv_8; }
	inline int32_t* get_address_of_strengLv_8() { return &___strengLv_8; }
	inline void set_strengLv_8(int32_t value)
	{
		___strengLv_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMINFO_T7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C_H
#ifndef KEY_VALUE_TC9D3E95517B9FCADA9D68A682C99C3D0F94A1464_H
#define KEY_VALUE_TC9D3E95517B9FCADA9D68A682C99C3D0F94A1464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.Key_Value
struct  Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.Key_Value::key
	int32_t ___key_0;
	// System.Int32 MSG_backpack.Key_Value::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_VALUE_TC9D3E95517B9FCADA9D68A682C99C3D0F94A1464_H
#ifndef OPENGIFTINFO_TE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63_H
#define OPENGIFTINFO_TE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.OpenGiftInfo
struct  OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.OpenGiftInfo::itemModelId
	int32_t ___itemModelId_0;
	// System.Int64 MSG_backpack.OpenGiftInfo::num
	int64_t ___num_1;
	// System.Boolean MSG_backpack.OpenGiftInfo::isbind
	bool ___isbind_2;
	// System.Int32 MSG_backpack.OpenGiftInfo::strengLv
	int32_t ___strengLv_3;
	// System.Int32 MSG_backpack.OpenGiftInfo::starLv
	int32_t ___starLv_4;

public:
	inline static int32_t get_offset_of_itemModelId_0() { return static_cast<int32_t>(offsetof(OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63, ___itemModelId_0)); }
	inline int32_t get_itemModelId_0() const { return ___itemModelId_0; }
	inline int32_t* get_address_of_itemModelId_0() { return &___itemModelId_0; }
	inline void set_itemModelId_0(int32_t value)
	{
		___itemModelId_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63, ___num_1)); }
	inline int64_t get_num_1() const { return ___num_1; }
	inline int64_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int64_t value)
	{
		___num_1 = value;
	}

	inline static int32_t get_offset_of_isbind_2() { return static_cast<int32_t>(offsetof(OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63, ___isbind_2)); }
	inline bool get_isbind_2() const { return ___isbind_2; }
	inline bool* get_address_of_isbind_2() { return &___isbind_2; }
	inline void set_isbind_2(bool value)
	{
		___isbind_2 = value;
	}

	inline static int32_t get_offset_of_strengLv_3() { return static_cast<int32_t>(offsetof(OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63, ___strengLv_3)); }
	inline int32_t get_strengLv_3() const { return ___strengLv_3; }
	inline int32_t* get_address_of_strengLv_3() { return &___strengLv_3; }
	inline void set_strengLv_3(int32_t value)
	{
		___strengLv_3 = value;
	}

	inline static int32_t get_offset_of_starLv_4() { return static_cast<int32_t>(offsetof(OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63, ___starLv_4)); }
	inline int32_t get_starLv_4() const { return ___starLv_4; }
	inline int32_t* get_address_of_starLv_4() { return &___starLv_4; }
	inline void set_starLv_4(int32_t value)
	{
		___starLv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENGIFTINFO_TE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63_H
#ifndef REQAUTOUSEITEM_T45529316833B37DFCBD0C86822613E89601EB7DB_H
#define REQAUTOUSEITEM_T45529316833B37DFCBD0C86822613E89601EB7DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqAutoUseItem
struct  ReqAutoUseItem_t45529316833B37DFCBD0C86822613E89601EB7DB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQAUTOUSEITEM_T45529316833B37DFCBD0C86822613E89601EB7DB_H
#ifndef REQBAGCLEARUP_T52D87DCD7617C47B2152FC7694CCA5AA3ECBF94E_H
#define REQBAGCLEARUP_T52D87DCD7617C47B2152FC7694CCA5AA3ECBF94E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqBagClearUp
struct  ReqBagClearUp_t52D87DCD7617C47B2152FC7694CCA5AA3ECBF94E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBAGCLEARUP_T52D87DCD7617C47B2152FC7694CCA5AA3ECBF94E_H
#ifndef REQCOMPOUND_TDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF_H
#define REQCOMPOUND_TDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqCompound
struct  ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.UInt64> MSG_backpack.ReqCompound::nonBindId
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___nonBindId_1;
	// System.Collections.Generic.List`1<System.UInt64> MSG_backpack.ReqCompound::bindId
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___bindId_2;
	// System.Int32 MSG_backpack.ReqCompound::type
	int32_t ___type_3;

public:
	inline static int32_t get_offset_of_nonBindId_1() { return static_cast<int32_t>(offsetof(ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF, ___nonBindId_1)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_nonBindId_1() const { return ___nonBindId_1; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_nonBindId_1() { return &___nonBindId_1; }
	inline void set_nonBindId_1(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___nonBindId_1 = value;
		Il2CppCodeGenWriteBarrier((&___nonBindId_1), value);
	}

	inline static int32_t get_offset_of_bindId_2() { return static_cast<int32_t>(offsetof(ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF, ___bindId_2)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_bindId_2() const { return ___bindId_2; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_bindId_2() { return &___bindId_2; }
	inline void set_bindId_2(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___bindId_2 = value;
		Il2CppCodeGenWriteBarrier((&___bindId_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOMPOUND_TDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF_H
#ifndef REQDELITEM_TCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE_H
#define REQDELITEM_TCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqDelItem
struct  ReqDelItem_tCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE  : public RuntimeObject
{
public:
	// System.UInt64 MSG_backpack.ReqDelItem::itemId
	uint64_t ___itemId_1;

public:
	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(ReqDelItem_tCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE, ___itemId_1)); }
	inline uint64_t get_itemId_1() const { return ___itemId_1; }
	inline uint64_t* get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(uint64_t value)
	{
		___itemId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDELITEM_TCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE_H
#ifndef REQMOVEITEM_T54F2AC95D1EA8465073916EAFE81FE7794773E41_H
#define REQMOVEITEM_T54F2AC95D1EA8465073916EAFE81FE7794773E41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqMoveItem
struct  ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41  : public RuntimeObject
{
public:
	// System.UInt64 MSG_backpack.ReqMoveItem::itemId
	uint64_t ___itemId_1;
	// System.Int32 MSG_backpack.ReqMoveItem::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41, ___itemId_1)); }
	inline uint64_t get_itemId_1() const { return ___itemId_1; }
	inline uint64_t* get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(uint64_t value)
	{
		___itemId_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMOVEITEM_T54F2AC95D1EA8465073916EAFE81FE7794773E41_H
#ifndef REQOPENBAGCELL_T4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1_H
#define REQOPENBAGCELL_T4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqOpenBagCell
struct  ReqOpenBagCell_t4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ReqOpenBagCell::cellId
	int32_t ___cellId_1;

public:
	inline static int32_t get_offset_of_cellId_1() { return static_cast<int32_t>(offsetof(ReqOpenBagCell_t4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1, ___cellId_1)); }
	inline int32_t get_cellId_1() const { return ___cellId_1; }
	inline int32_t* get_address_of_cellId_1() { return &___cellId_1; }
	inline void set_cellId_1(int32_t value)
	{
		___cellId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENBAGCELL_T4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1_H
#ifndef REQSELLITEMS_T8599CFC301B7CA7EB1930145A8553B12ADB41FDF_H
#define REQSELLITEMS_T8599CFC301B7CA7EB1930145A8553B12ADB41FDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqSellItems
struct  ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF  : public RuntimeObject
{
public:
	// System.UInt64 MSG_backpack.ReqSellItems::itemId
	uint64_t ___itemId_1;
	// System.Int32 MSG_backpack.ReqSellItems::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF, ___itemId_1)); }
	inline uint64_t get_itemId_1() const { return ___itemId_1; }
	inline uint64_t* get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(uint64_t value)
	{
		___itemId_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSELLITEMS_T8599CFC301B7CA7EB1930145A8553B12ADB41FDF_H
#ifndef REQUSEITEM_TBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D_H
#define REQUSEITEM_TBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqUseItem
struct  ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D  : public RuntimeObject
{
public:
	// System.UInt64 MSG_backpack.ReqUseItem::itemId
	uint64_t ___itemId_1;
	// System.Int32 MSG_backpack.ReqUseItem::num
	int32_t ___num_2;
	// System.Int32 MSG_backpack.ReqUseItem::index
	int32_t ___index_3;

public:
	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D, ___itemId_1)); }
	inline uint64_t get_itemId_1() const { return ___itemId_1; }
	inline uint64_t* get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(uint64_t value)
	{
		___itemId_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUSEITEM_TBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D_H
#ifndef REQUSEITEMMAKEBUFF_TA866D52442A3AED801AABC13D588B5A3B893DFE4_H
#define REQUSEITEMMAKEBUFF_TA866D52442A3AED801AABC13D588B5A3B893DFE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ReqUseItemMakeBuff
struct  ReqUseItemMakeBuff_tA866D52442A3AED801AABC13D588B5A3B893DFE4  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ReqUseItemMakeBuff::itemModelId
	int32_t ___itemModelId_1;

public:
	inline static int32_t get_offset_of_itemModelId_1() { return static_cast<int32_t>(offsetof(ReqUseItemMakeBuff_tA866D52442A3AED801AABC13D588B5A3B893DFE4, ___itemModelId_1)); }
	inline int32_t get_itemModelId_1() const { return ___itemModelId_1; }
	inline int32_t* get_address_of_itemModelId_1() { return &___itemModelId_1; }
	inline void set_itemModelId_1(int32_t value)
	{
		___itemModelId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUSEITEMMAKEBUFF_TA866D52442A3AED801AABC13D588B5A3B893DFE4_H
#ifndef RESAUTOUSEITEM_T59D426041262BE989FA5A6F1B551B344DDBC9B9C_H
#define RESAUTOUSEITEM_T59D426041262BE989FA5A6F1B551B344DDBC9B9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResAutoUseItem
struct  ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResAutoUseItem::bindGold
	int32_t ___bindGold_1;
	// System.Int64 MSG_backpack.ResAutoUseItem::exp
	int64_t ___exp_2;

public:
	inline static int32_t get_offset_of_bindGold_1() { return static_cast<int32_t>(offsetof(ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C, ___bindGold_1)); }
	inline int32_t get_bindGold_1() const { return ___bindGold_1; }
	inline int32_t* get_address_of_bindGold_1() { return &___bindGold_1; }
	inline void set_bindGold_1(int32_t value)
	{
		___bindGold_1 = value;
	}

	inline static int32_t get_offset_of_exp_2() { return static_cast<int32_t>(offsetof(ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C, ___exp_2)); }
	inline int64_t get_exp_2() const { return ___exp_2; }
	inline int64_t* get_address_of_exp_2() { return &___exp_2; }
	inline void set_exp_2(int64_t value)
	{
		___exp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESAUTOUSEITEM_T59D426041262BE989FA5A6F1B551B344DDBC9B9C_H
#ifndef RESCOINCHANGE_T9B2ECA26D463E6240E3E5E3E9788B4146628E82E_H
#define RESCOINCHANGE_T9B2ECA26D463E6240E3E5E3E9788B4146628E82E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResCoinChange
struct  ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResCoinChange::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemCoin MSG_backpack.ResCoinChange::changeCoin
	ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * ___changeCoin_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_changeCoin_2() { return static_cast<int32_t>(offsetof(ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E, ___changeCoin_2)); }
	inline ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * get_changeCoin_2() const { return ___changeCoin_2; }
	inline ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 ** get_address_of_changeCoin_2() { return &___changeCoin_2; }
	inline void set_changeCoin_2(ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * value)
	{
		___changeCoin_2 = value;
		Il2CppCodeGenWriteBarrier((&___changeCoin_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOINCHANGE_T9B2ECA26D463E6240E3E5E3E9788B4146628E82E_H
#ifndef RESCOININFOS_TA30FCDD2076D83B0F12E924261F79BA81CB00DC4_H
#define RESCOININFOS_TA30FCDD2076D83B0F12E924261F79BA81CB00DC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResCoinInfos
struct  ResCoinInfos_tA30FCDD2076D83B0F12E924261F79BA81CB00DC4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_backpack.ItemCoin> MSG_backpack.ResCoinInfos::coinList
	List_1_tB2061A5C45453A28180C3328C83485BE4EBF1A33 * ___coinList_1;

public:
	inline static int32_t get_offset_of_coinList_1() { return static_cast<int32_t>(offsetof(ResCoinInfos_tA30FCDD2076D83B0F12E924261F79BA81CB00DC4, ___coinList_1)); }
	inline List_1_tB2061A5C45453A28180C3328C83485BE4EBF1A33 * get_coinList_1() const { return ___coinList_1; }
	inline List_1_tB2061A5C45453A28180C3328C83485BE4EBF1A33 ** get_address_of_coinList_1() { return &___coinList_1; }
	inline void set_coinList_1(List_1_tB2061A5C45453A28180C3328C83485BE4EBF1A33 * value)
	{
		___coinList_1 = value;
		Il2CppCodeGenWriteBarrier((&___coinList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOININFOS_TA30FCDD2076D83B0F12E924261F79BA81CB00DC4_H
#ifndef RESCOMPOUNDRESULT_T0EBEBDA8164C3D06B2810FC77B3A2D20056986AD_H
#define RESCOMPOUNDRESULT_T0EBEBDA8164C3D06B2810FC77B3A2D20056986AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResCompoundResult
struct  ResCompoundResult_t0EBEBDA8164C3D06B2810FC77B3A2D20056986AD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOMPOUNDRESULT_T0EBEBDA8164C3D06B2810FC77B3A2D20056986AD_H
#ifndef RESEXPCHANGE_TDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C_H
#define RESEXPCHANGE_TDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResExpChange
struct  ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResExpChange::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemCoin MSG_backpack.ResExpChange::changeCoin
	ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * ___changeCoin_2;
	// System.Int64 MSG_backpack.ResExpChange::changeNum
	int64_t ___changeNum_3;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_changeCoin_2() { return static_cast<int32_t>(offsetof(ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C, ___changeCoin_2)); }
	inline ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * get_changeCoin_2() const { return ___changeCoin_2; }
	inline ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 ** get_address_of_changeCoin_2() { return &___changeCoin_2; }
	inline void set_changeCoin_2(ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80 * value)
	{
		___changeCoin_2 = value;
		Il2CppCodeGenWriteBarrier((&___changeCoin_2), value);
	}

	inline static int32_t get_offset_of_changeNum_3() { return static_cast<int32_t>(offsetof(ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C, ___changeNum_3)); }
	inline int64_t get_changeNum_3() const { return ___changeNum_3; }
	inline int64_t* get_address_of_changeNum_3() { return &___changeNum_3; }
	inline void set_changeNum_3(int64_t value)
	{
		___changeNum_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESEXPCHANGE_TDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C_H
#ifndef RESHORSEEQUIPADD_T479AE90C6EC3711D752573CF86E1A1EBFE995DFF_H
#define RESHORSEEQUIPADD_T479AE90C6EC3711D752573CF86E1A1EBFE995DFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResHorseEquipAdd
struct  ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResHorseEquipAdd::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemInfo MSG_backpack.ResHorseEquipAdd::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemInfo_2() { return static_cast<int32_t>(offsetof(ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF, ___itemInfo_2)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_2() const { return ___itemInfo_2; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_2() { return &___itemInfo_2; }
	inline void set_itemInfo_2(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESHORSEEQUIPADD_T479AE90C6EC3711D752573CF86E1A1EBFE995DFF_H
#ifndef RESHORSEEQUIPBAGINFOS_TFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA_H
#define RESHORSEEQUIPBAGINFOS_TFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResHorseEquipBagInfos
struct  ResHorseEquipBagInfos_tFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_backpack.ItemInfo> MSG_backpack.ResHorseEquipBagInfos::itemInfoList
	List_1_tE33393B445B8280160D222A3232DF1C02536A76C * ___itemInfoList_1;

public:
	inline static int32_t get_offset_of_itemInfoList_1() { return static_cast<int32_t>(offsetof(ResHorseEquipBagInfos_tFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA, ___itemInfoList_1)); }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C * get_itemInfoList_1() const { return ___itemInfoList_1; }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C ** get_address_of_itemInfoList_1() { return &___itemInfoList_1; }
	inline void set_itemInfoList_1(List_1_tE33393B445B8280160D222A3232DF1C02536A76C * value)
	{
		___itemInfoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfoList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESHORSEEQUIPBAGINFOS_TFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA_H
#ifndef RESHORSEEQUIPDELETE_TB2568CCFA4C14D2B8768903947987624C8F971A8_H
#define RESHORSEEQUIPDELETE_TB2568CCFA4C14D2B8768903947987624C8F971A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResHorseEquipDelete
struct  ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResHorseEquipDelete::reason
	int32_t ___reason_1;
	// System.UInt64 MSG_backpack.ResHorseEquipDelete::itemId
	uint64_t ___itemId_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8, ___itemId_2)); }
	inline uint64_t get_itemId_2() const { return ___itemId_2; }
	inline uint64_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(uint64_t value)
	{
		___itemId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESHORSEEQUIPDELETE_TB2568CCFA4C14D2B8768903947987624C8F971A8_H
#ifndef RESITEMADD_T396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56_H
#define RESITEMADD_T396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemAdd
struct  ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemAdd::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemInfo MSG_backpack.ResItemAdd::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemInfo_2() { return static_cast<int32_t>(offsetof(ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56, ___itemInfo_2)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_2() const { return ___itemInfo_2; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_2() { return &___itemInfo_2; }
	inline void set_itemInfo_2(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMADD_T396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56_H
#ifndef RESITEMCHANGE_T9763FCF753AEF59CEEEB14D51DE665D6F147C5EE_H
#define RESITEMCHANGE_T9763FCF753AEF59CEEEB14D51DE665D6F147C5EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemChange
struct  ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemChange::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemInfo MSG_backpack.ResItemChange::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemInfo_2() { return static_cast<int32_t>(offsetof(ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE, ___itemInfo_2)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_2() const { return ___itemInfo_2; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_2() { return &___itemInfo_2; }
	inline void set_itemInfo_2(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMCHANGE_T9763FCF753AEF59CEEEB14D51DE665D6F147C5EE_H
#ifndef RESITEMDELETE_TDE832662BCAB0B33D31718E918D448193DA5C0DB_H
#define RESITEMDELETE_TDE832662BCAB0B33D31718E918D448193DA5C0DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemDelete
struct  ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemDelete::reason
	int32_t ___reason_1;
	// System.UInt64 MSG_backpack.ResItemDelete::itemId
	uint64_t ___itemId_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB, ___itemId_2)); }
	inline uint64_t get_itemId_2() const { return ___itemId_2; }
	inline uint64_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(uint64_t value)
	{
		___itemId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMDELETE_TDE832662BCAB0B33D31718E918D448193DA5C0DB_H
#ifndef RESITEMINFOS_TC69599E28F9873A8E19CFC0678088A0DEB5732A2_H
#define RESITEMINFOS_TC69599E28F9873A8E19CFC0678088A0DEB5732A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemInfos
struct  ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemInfos::cellnum
	int32_t ___cellnum_1;
	// System.Collections.Generic.List`1<MSG_backpack.ItemInfo> MSG_backpack.ResItemInfos::itemInfoList
	List_1_tE33393B445B8280160D222A3232DF1C02536A76C * ___itemInfoList_2;
	// System.Int32 MSG_backpack.ResItemInfos::cellTime
	int32_t ___cellTime_3;

public:
	inline static int32_t get_offset_of_cellnum_1() { return static_cast<int32_t>(offsetof(ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2, ___cellnum_1)); }
	inline int32_t get_cellnum_1() const { return ___cellnum_1; }
	inline int32_t* get_address_of_cellnum_1() { return &___cellnum_1; }
	inline void set_cellnum_1(int32_t value)
	{
		___cellnum_1 = value;
	}

	inline static int32_t get_offset_of_itemInfoList_2() { return static_cast<int32_t>(offsetof(ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2, ___itemInfoList_2)); }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C * get_itemInfoList_2() const { return ___itemInfoList_2; }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C ** get_address_of_itemInfoList_2() { return &___itemInfoList_2; }
	inline void set_itemInfoList_2(List_1_tE33393B445B8280160D222A3232DF1C02536A76C * value)
	{
		___itemInfoList_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfoList_2), value);
	}

	inline static int32_t get_offset_of_cellTime_3() { return static_cast<int32_t>(offsetof(ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2, ___cellTime_3)); }
	inline int32_t get_cellTime_3() const { return ___cellTime_3; }
	inline int32_t* get_address_of_cellTime_3() { return &___cellTime_3; }
	inline void set_cellTime_3(int32_t value)
	{
		___cellTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMINFOS_TC69599E28F9873A8E19CFC0678088A0DEB5732A2_H
#ifndef RESITEMLISTDELETE_T48AA0FAE60E112CD1909542A0DA20CDABEA16D06_H
#define RESITEMLISTDELETE_T48AA0FAE60E112CD1909542A0DA20CDABEA16D06_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemListDelete
struct  ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemListDelete::reason
	int32_t ___reason_1;
	// System.Collections.Generic.List`1<System.UInt64> MSG_backpack.ResItemListDelete::itemIds
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___itemIds_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemIds_2() { return static_cast<int32_t>(offsetof(ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06, ___itemIds_2)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_itemIds_2() const { return ___itemIds_2; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_itemIds_2() { return &___itemIds_2; }
	inline void set_itemIds_2(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___itemIds_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemIds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMLISTDELETE_T48AA0FAE60E112CD1909542A0DA20CDABEA16D06_H
#ifndef RESITEMNOTENOUGH_T2BE387D73F6A054A98F00408EE1C86AD23B382D3_H
#define RESITEMNOTENOUGH_T2BE387D73F6A054A98F00408EE1C86AD23B382D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResItemNotEnough
struct  ResItemNotEnough_t2BE387D73F6A054A98F00408EE1C86AD23B382D3  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResItemNotEnough::itemModelId
	int32_t ___itemModelId_1;

public:
	inline static int32_t get_offset_of_itemModelId_1() { return static_cast<int32_t>(offsetof(ResItemNotEnough_t2BE387D73F6A054A98F00408EE1C86AD23B382D3, ___itemModelId_1)); }
	inline int32_t get_itemModelId_1() const { return ___itemModelId_1; }
	inline int32_t* get_address_of_itemModelId_1() { return &___itemModelId_1; }
	inline void set_itemModelId_1(int32_t value)
	{
		___itemModelId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESITEMNOTENOUGH_T2BE387D73F6A054A98F00408EE1C86AD23B382D3_H
#ifndef RESOPENBAGCELLFAILED_TE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3_H
#define RESOPENBAGCELLFAILED_TE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResOpenBagCellFailed
struct  ResOpenBagCellFailed_tE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResOpenBagCellFailed::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResOpenBagCellFailed_tE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENBAGCELLFAILED_TE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3_H
#ifndef RESOPENBAGCELLSUCCESS_T836E5A8FDD13F5DFA65EF3C876A634743EFE9355_H
#define RESOPENBAGCELLSUCCESS_T836E5A8FDD13F5DFA65EF3C876A634743EFE9355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResOpenBagCellSuccess
struct  ResOpenBagCellSuccess_t836E5A8FDD13F5DFA65EF3C876A634743EFE9355  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResOpenBagCellSuccess::nowCellId
	int32_t ___nowCellId_1;

public:
	inline static int32_t get_offset_of_nowCellId_1() { return static_cast<int32_t>(offsetof(ResOpenBagCellSuccess_t836E5A8FDD13F5DFA65EF3C876A634743EFE9355, ___nowCellId_1)); }
	inline int32_t get_nowCellId_1() const { return ___nowCellId_1; }
	inline int32_t* get_address_of_nowCellId_1() { return &___nowCellId_1; }
	inline void set_nowCellId_1(int32_t value)
	{
		___nowCellId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENBAGCELLSUCCESS_T836E5A8FDD13F5DFA65EF3C876A634743EFE9355_H
#ifndef RESOPENGIFTEFFECTS_T64F1828BF113D5383583EB823DAFF97E0CB5F455_H
#define RESOPENGIFTEFFECTS_T64F1828BF113D5383583EB823DAFF97E0CB5F455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResOpenGiftEffects
struct  ResOpenGiftEffects_t64F1828BF113D5383583EB823DAFF97E0CB5F455  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_backpack.OpenGiftInfo> MSG_backpack.ResOpenGiftEffects::list
	List_1_t558F8327FEE5B06540B19436A81AA27322F8BE63 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(ResOpenGiftEffects_t64F1828BF113D5383583EB823DAFF97E0CB5F455, ___list_1)); }
	inline List_1_t558F8327FEE5B06540B19436A81AA27322F8BE63 * get_list_1() const { return ___list_1; }
	inline List_1_t558F8327FEE5B06540B19436A81AA27322F8BE63 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(List_1_t558F8327FEE5B06540B19436A81AA27322F8BE63 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENGIFTEFFECTS_T64F1828BF113D5383583EB823DAFF97E0CB5F455_H
#ifndef RESPETEQUIPADD_T8CEC83910F4E4D864EF369115561493726C85EC7_H
#define RESPETEQUIPADD_T8CEC83910F4E4D864EF369115561493726C85EC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResPetEquipAdd
struct  ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResPetEquipAdd::reason
	int32_t ___reason_1;
	// MSG_backpack.ItemInfo MSG_backpack.ResPetEquipAdd::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemInfo_2() { return static_cast<int32_t>(offsetof(ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7, ___itemInfo_2)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_2() const { return ___itemInfo_2; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_2() { return &___itemInfo_2; }
	inline void set_itemInfo_2(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETEQUIPADD_T8CEC83910F4E4D864EF369115561493726C85EC7_H
#ifndef RESPETEQUIPBAGINFOS_T9E8DC3350010FAE05F9732A16293418918703D77_H
#define RESPETEQUIPBAGINFOS_T9E8DC3350010FAE05F9732A16293418918703D77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResPetEquipBagInfos
struct  ResPetEquipBagInfos_t9E8DC3350010FAE05F9732A16293418918703D77  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_backpack.ItemInfo> MSG_backpack.ResPetEquipBagInfos::itemInfoList
	List_1_tE33393B445B8280160D222A3232DF1C02536A76C * ___itemInfoList_1;

public:
	inline static int32_t get_offset_of_itemInfoList_1() { return static_cast<int32_t>(offsetof(ResPetEquipBagInfos_t9E8DC3350010FAE05F9732A16293418918703D77, ___itemInfoList_1)); }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C * get_itemInfoList_1() const { return ___itemInfoList_1; }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C ** get_address_of_itemInfoList_1() { return &___itemInfoList_1; }
	inline void set_itemInfoList_1(List_1_tE33393B445B8280160D222A3232DF1C02536A76C * value)
	{
		___itemInfoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfoList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETEQUIPBAGINFOS_T9E8DC3350010FAE05F9732A16293418918703D77_H
#ifndef RESPETEQUIPDELETE_TF62D000BF610859C36882D6383656E063885C0CB_H
#define RESPETEQUIPDELETE_TF62D000BF610859C36882D6383656E063885C0CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResPetEquipDelete
struct  ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResPetEquipDelete::reason
	int32_t ___reason_1;
	// System.UInt64 MSG_backpack.ResPetEquipDelete::itemId
	uint64_t ___itemId_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB, ___itemId_2)); }
	inline uint64_t get_itemId_2() const { return ___itemId_2; }
	inline uint64_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(uint64_t value)
	{
		___itemId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETEQUIPDELETE_TF62D000BF610859C36882D6383656E063885C0CB_H
#ifndef RESUSEITEMMAKEBUFF_TB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1_H
#define RESUSEITEMMAKEBUFF_TB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_backpack.ResUseItemMakeBuff
struct  ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1  : public RuntimeObject
{
public:
	// System.Int32 MSG_backpack.ResUseItemMakeBuff::itemModelId
	int32_t ___itemModelId_1;
	// System.Int32 MSG_backpack.ResUseItemMakeBuff::buffId
	int32_t ___buffId_2;
	// System.Int32 MSG_backpack.ResUseItemMakeBuff::state
	int32_t ___state_3;

public:
	inline static int32_t get_offset_of_itemModelId_1() { return static_cast<int32_t>(offsetof(ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1, ___itemModelId_1)); }
	inline int32_t get_itemModelId_1() const { return ___itemModelId_1; }
	inline int32_t* get_address_of_itemModelId_1() { return &___itemModelId_1; }
	inline void set_itemModelId_1(int32_t value)
	{
		___itemModelId_1 = value;
	}

	inline static int32_t get_offset_of_buffId_2() { return static_cast<int32_t>(offsetof(ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1, ___buffId_2)); }
	inline int32_t get_buffId_2() const { return ___buffId_2; }
	inline int32_t* get_address_of_buffId_2() { return &___buffId_2; }
	inline void set_buffId_2(int32_t value)
	{
		___buffId_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUSEITEMMAKEBUFF_TB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8500 = { sizeof (bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8500[6] = 
{
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_bossId_0(),
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_state_1(),
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_killer_2(),
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_haveUseCount_3(),
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_nextRefreshTime_4(),
	bossHomeBossInfo_tA6C6D55C2B49B84208ACBFE1D39B68ADBAD97475::get_offset_of_maxNum_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8501 = { sizeof (itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8501[2] = 
{
	itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1::get_offset_of_itemId_0(),
	itemInfo_t817558E91BB9ACAAFDA86DD69FAB58EF97E7D2A1::get_offset_of_num_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8502 = { sizeof (ReqBossRecord_tAC9EB16059B59A980730A44481EF1EF7ADAE8097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8502[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8503 = { sizeof (ResBossRecord_tF5E1EFF9D5C214BC8A19D74061C570976C6C0534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8503[2] = 
{
	0,
	ResBossRecord_tF5E1EFF9D5C214BC8A19D74061C570976C6C0534::get_offset_of_records_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8504 = { sizeof (bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8504[7] = 
{
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_playerName_0(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_mapName_1(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_xPos_2(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_yPos_3(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_time_4(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_bossName_5(),
	bossRecordInfo_t409A40EF85271884C8CEB401B597DC4284F2BA91::get_offset_of_reward_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8505 = { sizeof (ReqYYHJBossInfo_tBC88491EAD87DCBF947177234A0B46CDBCB3D841), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8505[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8506 = { sizeof (ResYYHJBossInfo_t6041C66B63F768C972B190ACC7662CB49786C94F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8506[2] = 
{
	0,
	ResYYHJBossInfo_t6041C66B63F768C972B190ACC7662CB49786C94F::get_offset_of_bossInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8507 = { sizeof (BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8507[3] = 
{
	BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770::get_offset_of_bossId_0(),
	BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770::get_offset_of_refreshTime_1(),
	BossInfo_tD6E596235945151DFFDF9D863FB677BC0F60C770::get_offset_of_isFollowed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8508 = { sizeof (ResYyhjBossRefreshInfo_t546ED5144555087912F57C1CD9F06A0264D3A54D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8508[2] = 
{
	0,
	ResYyhjBossRefreshInfo_t546ED5144555087912F57C1CD9F06A0264D3A54D::get_offset_of_bossRefreshList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8509 = { sizeof (ResHomeBossRefreshInfo_tAE7DD683C475468815AC8FF54B521E7587E252E4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8509[2] = 
{
	0,
	ResHomeBossRefreshInfo_tAE7DD683C475468815AC8FF54B521E7587E252E4::get_offset_of_bossRefreshList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8510 = { sizeof (BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8510[2] = 
{
	BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C::get_offset_of_killTime_0(),
	BossKilledRecord_t992665D3F46E7CA0FD339D1E769687653D52A49C::get_offset_of_killer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8511 = { sizeof (BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8511[3] = 
{
	BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F::get_offset_of_bossId_0(),
	BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F::get_offset_of_refreshTime_1(),
	BossInfo_t43DE78902F41D70817FF35EFF3BBF48B7F84C84F::get_offset_of_isFollowed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8512 = { sizeof (BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8512[2] = 
{
	BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473::get_offset_of_mapModelId_0(),
	BossMapOlInfo_t9CBEB8D608C3ADBE4271ECDA505422192F86F473::get_offset_of_num_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8513 = { sizeof (ReqOpenDreamBoss_t0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8513[2] = 
{
	0,
	ReqOpenDreamBoss_t0CB5A7FB59A4BC0342A0E3C59FB9EAA182C3C588::get_offset_of_bossType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8514 = { sizeof (ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8514[8] = 
{
	0,
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_bossList_1(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_bossType_2(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_remainCount_3(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_maxCount_4(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_buyCount_5(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_canBuyCount_6(),
	ResOpenDreamBoss_t914788AB29224C805EFBFA830E0F720B91B0CA39::get_offset_of_mapOlList_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8515 = { sizeof (ResRankCountTips_t2B6AAEAC78CB149493EB8F35E6CC133BC8235712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8515[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8516 = { sizeof (ReqAddWorldBossRankCount_tAE928FAB8AD7FF24C18BD6C8E659CA2802730350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8516[2] = 
{
	0,
	ReqAddWorldBossRankCount_tAE928FAB8AD7FF24C18BD6C8E659CA2802730350::get_offset_of_bossType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8517 = { sizeof (ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8517[6] = 
{
	0,
	ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59::get_offset_of_bossType_1(),
	ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59::get_offset_of_remainCount_2(),
	ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59::get_offset_of_maxCount_3(),
	ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59::get_offset_of_buyCount_4(),
	ResAddWorldBossRankCount_t3F49B720607AD7B7FBD69C5098A692E6637ADA59::get_offset_of_canBuyCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8518 = { sizeof (ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8518[6] = 
{
	0,
	ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D::get_offset_of_bossType_1(),
	ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D::get_offset_of_remainCount_2(),
	ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D::get_offset_of_maxCount_3(),
	ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D::get_offset_of_buyCount_4(),
	ResUpDateWorldBossReMainRankCount_tE9567A6F4EA0E344F006E98A161F5C4A0E6AE75D::get_offset_of_canBuyCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8519 = { sizeof (ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8519[3] = 
{
	0,
	ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E::get_offset_of_bossId_1(),
	ReqBossKilledInfo_tCEE65909F3398CDD998381F02BF0F07531EAF44E::get_offset_of_bossType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8520 = { sizeof (ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8520[4] = 
{
	0,
	ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6::get_offset_of_bossId_1(),
	ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6::get_offset_of_killedRecordList_2(),
	ResBossKilledInfo_tA02C82A51B1D0D61FC0A72E3D592C4C36646C1D6::get_offset_of_bossType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8521 = { sizeof (ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8521[4] = 
{
	0,
	ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC::get_offset_of_bossId_1(),
	ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC::get_offset_of_type_2(),
	ReqFollowBoss_t5898D328D6FCF522A57A84F76AA2F44E789486EC::get_offset_of_bossType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8522 = { sizeof (ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8522[5] = 
{
	0,
	ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5::get_offset_of_bossId_1(),
	ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5::get_offset_of_type_2(),
	ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5::get_offset_of_isSuccess_3(),
	ResFollowBoss_tD779DBA2C36478B2D5240917D451DB4B677C3CF5::get_offset_of_bossType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8523 = { sizeof (ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8523[3] = 
{
	0,
	ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361::get_offset_of_bossRefreshList_1(),
	ResBossRefreshInfo_tC2D8A678856D7BBA9A66208F4DE0765391EE3361::get_offset_of_bossType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8524 = { sizeof (ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8524[3] = 
{
	0,
	ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8::get_offset_of_bossId_1(),
	ResBossRefreshTip_tD67634B8860B3A8324341990C0F1DA6897FBA8A8::get_offset_of_bossType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8525 = { sizeof (harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8525[3] = 
{
	harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153::get_offset_of_top_0(),
	harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153::get_offset_of_name_1(),
	harmRank_t84D4350014DCAB60A47FDC650DD81BEB607D2153::get_offset_of_harm_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8526 = { sizeof (ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8526[7] = 
{
	0,
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_rank_1(),
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_myRank_2(),
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_myHarm_3(),
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_bossType_4(),
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_upportHarmInfo_5(),
	ResSynHarmRank_t9638E2E1699530C350C3C45F8B4638D675CB382C::get_offset_of_bossCode_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8527 = { sizeof (ReqOpenPersonalBossPanel_t13A55032B4D7BB3BA8231ACFECDB95CCCE3DEBEB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8527[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8528 = { sizeof (ReqSuitGemBossPanel_t75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8528[2] = 
{
	0,
	ReqSuitGemBossPanel_t75D6695CD1E1B9D0BD496EE5E6336A0668DCA01D::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8529 = { sizeof (ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8529[8] = 
{
	0,
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_type_1(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_bossList_2(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_remainCount_3(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_maxCount_4(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_buyCount_5(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_canBuyCount_6(),
	ResSuitGemBossPanel_t672EEB3FC32EDF85B3808F612583F4DCCFB4C354::get_offset_of_mapOlList_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8530 = { sizeof (ResSuitGemBossEndTime_t6084E6F70C4A1A0C97C7EB9B93B1AE88412676E6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8530[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8531 = { sizeof (ResSuitGemBossScourge_t1239980A7402967AF803A9D86A5A3F3C25AE0E61), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8531[2] = 
{
	0,
	ResSuitGemBossScourge_t1239980A7402967AF803A9D86A5A3F3C25AE0E61::get_offset_of_scourge_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8532 = { sizeof (ReqMySelfBossRemainTime_tFB907ACC9AF5AA94141F2283726B500E2761DEE6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8532[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8533 = { sizeof (ResMySelfBossRemainTime_tE6990DAEDBFE82A257F287B0C019094F13DF1CDD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8533[2] = 
{
	0,
	ResMySelfBossRemainTime_tE6990DAEDBFE82A257F287B0C019094F13DF1CDD::get_offset_of_remaintime_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8534 = { sizeof (mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8534[3] = 
{
	mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1::get_offset_of_monsterid_0(),
	mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1::get_offset_of_time_1(),
	mySelfBossCopyInfo_t1FC43CAFBC9255DAE4E164C408B3AE1E530223E1::get_offset_of_active_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8535 = { sizeof (mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8535[3] = 
{
	mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B::get_offset_of_auto_0(),
	mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B::get_offset_of_time_1(),
	mySelfBossCopyItemInfo_t4FCD56A21B644EA4283831C57779021E40E70D9B::get_offset_of_doublenum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8536 = { sizeof (ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8536[4] = 
{
	0,
	ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655::get_offset_of_info_1(),
	ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655::get_offset_of_iteminfo_2(),
	ResMySelfBossCopyInfo_tED7CB23F8E5032E76983C93E881CF3BC2017D655::get_offset_of_layer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8537 = { sizeof (ResMySelfBossStage_t17F51EDA942EA122A1846779B93C82E75528DE7E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8537[2] = 
{
	0,
	ResMySelfBossStage_t17F51EDA942EA122A1846779B93C82E75528DE7E::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8538 = { sizeof (ResMySelfBossItemInfo_t8D4216244AE386AC86BF40B5C829400C62152B9F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8538[2] = 
{
	0,
	ResMySelfBossItemInfo_t8D4216244AE386AC86BF40B5C829400C62152B9F::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8539 = { sizeof (ReqMySelfBossAuto_tBF5355777135DFBA6ADA997CB535B7D75C71DAEB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8539[2] = 
{
	0,
	ReqMySelfBossAuto_tBF5355777135DFBA6ADA997CB535B7D75C71DAEB::get_offset_of_auto_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8540 = { sizeof (ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8540[3] = 
{
	0,
	ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C::get_offset_of_itemid_1(),
	ReqMySelfBossUseItem_t7F67D349AF499256ABD68A294B1D880097052F1C::get_offset_of_num_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8541 = { sizeof (ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8541[3] = 
{
	0,
	ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753::get_offset_of_openTime_1(),
	ResWuXianBossOCTime_tF58B172D0BF415425E2A308967092777D0CA9753::get_offset_of_closeTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8542 = { sizeof (ReqNoobBossPannel_tC856FF5CCA9DAF1D1A3F70CF9B9357DF8FFDA271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8542[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8543 = { sizeof (ResNoobBossPannel_tA7E60E7E0126E5B3EB35924B6333839BB0AF5975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8543[2] = 
{
	0,
	ResNoobBossPannel_tA7E60E7E0126E5B3EB35924B6333839BB0AF5975::get_offset_of_bossList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8544 = { sizeof (ReqCallBigR_t4322110E62634AAEEDC1FE2EC2E024A8364E7BCB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8544[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8545 = { sizeof (Device_t4E586BECBBC299135480764E7D070583DC87DC35), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8545[21] = 
{
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_appId_0(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_roleId_1(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_channelId_2(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_sourceId_3(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_deviceId_4(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_platform_5(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_app_version_6(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_merchant_7(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_net_type_8(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_screen_9(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_os_10(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_os_version_11(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_server_name_12(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpgameId_13(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpdid_14(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpdevice_name_15(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpplatformId_16(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpuserid_17(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpuserName_18(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpgameName_19(),
	Device_t4E586BECBBC299135480764E7D070583DC87DC35::get_offset_of_cpPlatformGname_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8546 = { sizeof (ReqBiDevice_t61AB97F967088B26A1E2A6DDA2F02D1D5265A70C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8546[2] = 
{
	0,
	ReqBiDevice_t61AB97F967088B26A1E2A6DDA2F02D1D5265A70C::get_offset_of_device_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8547 = { sizeof (ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8547[2] = 
{
	ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239::get_offset_of_key_0(),
	ValMap_tD46832A6F9845C0BB328E3057903E82916FA2239::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8548 = { sizeof (ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8548[4] = 
{
	0,
	ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381::get_offset_of_roleId_1(),
	ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381::get_offset_of_biName_2(),
	ReqBi_tE37A2980B01C47239BF01EE1E230D48BFE106381::get_offset_of_valMaps_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8549 = { sizeof (UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8549[2] = 
{
	UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A::get_offset_of_id_0(),
	UIData_tD2C78ADB953A6B63491880026531ABD783DE7F4A::get_offset_of_time_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8550 = { sizeof (ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8550[3] = 
{
	0,
	ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42::get_offset_of_roleId_1(),
	ReqUiBi_tD80F83B3893CB21053DC26EBAB3402130865AB42::get_offset_of_uiData_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8551 = { sizeof (ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8551[2] = 
{
	ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80::get_offset_of_type_0(),
	ItemCoin_t3637C8D864276CB92D0F27756BE96128A197FD80::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8552 = { sizeof (Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8552[2] = 
{
	Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464::get_offset_of_key_0(),
	Key_Value_tC9D3E95517B9FCADA9D68A682C99C3D0F94A1464::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8553 = { sizeof (ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8553[9] = 
{
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_itemId_0(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_itemModelId_1(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_num_2(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_gridId_3(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_isbind_4(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_lostTime_5(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_cdTime_6(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_suitId_7(),
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C::get_offset_of_strengLv_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8554 = { sizeof (OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8554[5] = 
{
	OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63::get_offset_of_itemModelId_0(),
	OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63::get_offset_of_num_1(),
	OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63::get_offset_of_isbind_2(),
	OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63::get_offset_of_strengLv_3(),
	OpenGiftInfo_tE3FB5C1D96B0751F42B13FBA5F459301E5C0AF63::get_offset_of_starLv_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8555 = { sizeof (ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8555[4] = 
{
	0,
	ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2::get_offset_of_cellnum_1(),
	ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2::get_offset_of_itemInfoList_2(),
	ResItemInfos_tC69599E28F9873A8E19CFC0678088A0DEB5732A2::get_offset_of_cellTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8556 = { sizeof (ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8556[3] = 
{
	0,
	ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56::get_offset_of_reason_1(),
	ResItemAdd_t396D4A19798D8167C4CA54A3ABFCE5FBCCBB9A56::get_offset_of_itemInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8557 = { sizeof (ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8557[3] = 
{
	0,
	ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE::get_offset_of_reason_1(),
	ResItemChange_t9763FCF753AEF59CEEEB14D51DE665D6F147C5EE::get_offset_of_itemInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8558 = { sizeof (ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8558[3] = 
{
	0,
	ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB::get_offset_of_reason_1(),
	ResItemDelete_tDE832662BCAB0B33D31718E918D448193DA5C0DB::get_offset_of_itemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8559 = { sizeof (ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8559[3] = 
{
	0,
	ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06::get_offset_of_reason_1(),
	ResItemListDelete_t48AA0FAE60E112CD1909542A0DA20CDABEA16D06::get_offset_of_itemIds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8560 = { sizeof (ResCoinInfos_tA30FCDD2076D83B0F12E924261F79BA81CB00DC4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8560[2] = 
{
	0,
	ResCoinInfos_tA30FCDD2076D83B0F12E924261F79BA81CB00DC4::get_offset_of_coinList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8561 = { sizeof (ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8561[3] = 
{
	0,
	ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E::get_offset_of_reason_1(),
	ResCoinChange_t9B2ECA26D463E6240E3E5E3E9788B4146628E82E::get_offset_of_changeCoin_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8562 = { sizeof (ResOpenBagCellSuccess_t836E5A8FDD13F5DFA65EF3C876A634743EFE9355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8562[2] = 
{
	0,
	ResOpenBagCellSuccess_t836E5A8FDD13F5DFA65EF3C876A634743EFE9355::get_offset_of_nowCellId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8563 = { sizeof (ResOpenBagCellFailed_tE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8563[2] = 
{
	0,
	ResOpenBagCellFailed_tE6A4FE5DED9BBD147F2BB8FB1C46750476FA33E3::get_offset_of_reason_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8564 = { sizeof (ResCompoundResult_t0EBEBDA8164C3D06B2810FC77B3A2D20056986AD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8564[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8565 = { sizeof (ResOpenGiftEffects_t64F1828BF113D5383583EB823DAFF97E0CB5F455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8565[2] = 
{
	0,
	ResOpenGiftEffects_t64F1828BF113D5383583EB823DAFF97E0CB5F455::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8566 = { sizeof (ResItemNotEnough_t2BE387D73F6A054A98F00408EE1C86AD23B382D3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8566[2] = 
{
	0,
	ResItemNotEnough_t2BE387D73F6A054A98F00408EE1C86AD23B382D3::get_offset_of_itemModelId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8567 = { sizeof (ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8567[4] = 
{
	0,
	ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C::get_offset_of_reason_1(),
	ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C::get_offset_of_changeCoin_2(),
	ResExpChange_tDF5E657263EE50E8ED6F85959A8B7A7D32D5A90C::get_offset_of_changeNum_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8568 = { sizeof (ReqDelItem_tCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8568[2] = 
{
	0,
	ReqDelItem_tCC3937459F61610A4FB6530ACF9E8FAE97CB6DBE::get_offset_of_itemId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8569 = { sizeof (ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8569[3] = 
{
	0,
	ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41::get_offset_of_itemId_1(),
	ReqMoveItem_t54F2AC95D1EA8465073916EAFE81FE7794773E41::get_offset_of_num_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8570 = { sizeof (ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8570[4] = 
{
	0,
	ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D::get_offset_of_itemId_1(),
	ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D::get_offset_of_num_2(),
	ReqUseItem_tBDE981DD0B8A4F7F967D64ECEFBE921B676EC03D::get_offset_of_index_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8571 = { sizeof (ReqBagClearUp_t52D87DCD7617C47B2152FC7694CCA5AA3ECBF94E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8571[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8572 = { sizeof (ReqOpenBagCell_t4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8572[2] = 
{
	0,
	ReqOpenBagCell_t4E79F4B0CD97B8CFFC51553D5B0B878676EA33F1::get_offset_of_cellId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8573 = { sizeof (ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8573[3] = 
{
	0,
	ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF::get_offset_of_itemId_1(),
	ReqSellItems_t8599CFC301B7CA7EB1930145A8553B12ADB41FDF::get_offset_of_num_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8574 = { sizeof (ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8574[4] = 
{
	0,
	ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF::get_offset_of_nonBindId_1(),
	ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF::get_offset_of_bindId_2(),
	ReqCompound_tDEAC3C028185CE1F04BAAB7FB154E2D4D73439DF::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8575 = { sizeof (ReqUseItemMakeBuff_tA866D52442A3AED801AABC13D588B5A3B893DFE4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8575[2] = 
{
	0,
	ReqUseItemMakeBuff_tA866D52442A3AED801AABC13D588B5A3B893DFE4::get_offset_of_itemModelId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8576 = { sizeof (ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8576[4] = 
{
	0,
	ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1::get_offset_of_itemModelId_1(),
	ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1::get_offset_of_buffId_2(),
	ResUseItemMakeBuff_tB92CACA54719EA3A0619DCCD2A134CB9F07AD2A1::get_offset_of_state_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8577 = { sizeof (ReqAutoUseItem_t45529316833B37DFCBD0C86822613E89601EB7DB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8577[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8578 = { sizeof (ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8578[3] = 
{
	0,
	ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C::get_offset_of_bindGold_1(),
	ResAutoUseItem_t59D426041262BE989FA5A6F1B551B344DDBC9B9C::get_offset_of_exp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8579 = { sizeof (ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8579[3] = 
{
	0,
	ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7::get_offset_of_reason_1(),
	ResPetEquipAdd_t8CEC83910F4E4D864EF369115561493726C85EC7::get_offset_of_itemInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8580 = { sizeof (ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8580[3] = 
{
	0,
	ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB::get_offset_of_reason_1(),
	ResPetEquipDelete_tF62D000BF610859C36882D6383656E063885C0CB::get_offset_of_itemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8581 = { sizeof (ResPetEquipBagInfos_t9E8DC3350010FAE05F9732A16293418918703D77), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8581[2] = 
{
	0,
	ResPetEquipBagInfos_t9E8DC3350010FAE05F9732A16293418918703D77::get_offset_of_itemInfoList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8582 = { sizeof (ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8582[3] = 
{
	0,
	ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF::get_offset_of_reason_1(),
	ResHorseEquipAdd_t479AE90C6EC3711D752573CF86E1A1EBFE995DFF::get_offset_of_itemInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8583 = { sizeof (ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8583[3] = 
{
	0,
	ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8::get_offset_of_reason_1(),
	ResHorseEquipDelete_tB2568CCFA4C14D2B8768903947987624C8F971A8::get_offset_of_itemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8584 = { sizeof (ResHorseEquipBagInfos_tFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8584[2] = 
{
	0,
	ResHorseEquipBagInfos_tFE3DFFEDE125DE2295413EE0D64E83984F9BFBAA::get_offset_of_itemInfoList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8585 = { sizeof (FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8585[2] = 
{
	FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502::get_offset_of_id_0(),
	FuncOpenInfo_tF492434DF48B789E108EC04BB90C1F1493A84502::get_offset_of_state_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8586 = { sizeof (ResFuncOpenList_t0C34CF8FAA1EF111AD27A788C548FB0D65696A99), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8586[2] = 
{
	0,
	ResFuncOpenList_t0C34CF8FAA1EF111AD27A788C548FB0D65696A99::get_offset_of_funcOpenList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8587 = { sizeof (ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8587[3] = 
{
	0,
	ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163::get_offset_of_switchFuncList_1(),
	ResSwitchFunction_tC0B60F7D2B4354EA3499F1C1493E01802F8A2163::get_offset_of_isnew_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8588 = { sizeof (ReqFuncOpenRoleInfo_tDF1F34A6CC2D46CED59CEE92016AF2E62B135C96), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8588[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8589 = { sizeof (ResFuncOpenRoleInfo_t89F1539B66219C6FD4472E587B503C8826203D17), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8589[2] = 
{
	0,
	ResFuncOpenRoleInfo_t89F1539B66219C6FD4472E587B503C8826203D17::get_offset_of_infolist_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8590 = { sizeof (ReqFuncOpenReward_t688F3664266063BDB201A629C97E285A6AC0DC69), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8590[2] = 
{
	0,
	ReqFuncOpenReward_t688F3664266063BDB201A629C97E285A6AC0DC69::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8591 = { sizeof (ResFuncOpenReward_tF3007D59672EC1DFBEB3A37B123C448AB222592B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8591[2] = 
{
	0,
	ResFuncOpenReward_tF3007D59672EC1DFBEB3A37B123C448AB222592B::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8592 = { sizeof (ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8592[19] = 
{
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_id_0(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_type_1(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_tag_2(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_name_3(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_bigLabel_4(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_smallLabel_5(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_numLimit_6(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_beginTime_7(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_endTime_8(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_panelImageId_9(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_panelText_10(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_help_11(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_actionBegin_12(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_actionEnd_13(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_conditionList_14(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_rewardList_15(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_otherList_16(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_isDelete_17(),
	ActivityInfo_t719F3026977155867C3C00526B9A3AD8005E146E::get_offset_of_rowText_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8593 = { sizeof (ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8593[24] = 
{
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_id_0(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_type_1(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_name_2(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_beginTime_3(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_endTime_4(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_rewardList_5(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_numLimit_6(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_panelImageId_7(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_bigPanel_8(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_smallPanel_9(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_getNum_10(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_panelText_11(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_needNum_12(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_haveNum_13(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_needItemList_14(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_canGet_15(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_sendItemModelId_16(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_rankList_17(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_condition_18(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_bossList_19(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_DayRewardList_20(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_rewardAgain_21(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_rewardAgainState_22(),
	ActivityClientInfo_tA08AC558F3F3E824B52C60BFD0C60C1B097D99EB::get_offset_of_rowText_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8594 = { sizeof (ReqGetActivityList_t3D3564BCD1D1BE2554D0BB8C631199B19ADBAB74), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8594[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8595 = { sizeof (ResActivityClientInfo_t8BD2A53ED9B0B77E5E3939925B53CA2025B45155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8595[2] = 
{
	0,
	ResActivityClientInfo_t8BD2A53ED9B0B77E5E3939925B53CA2025B45155::get_offset_of_itemInfoList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8596 = { sizeof (ResCrossActivityClientInfo_tC589465F619C49A9692A45C47AD42CCB41661239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8596[2] = 
{
	0,
	ResCrossActivityClientInfo_tC589465F619C49A9692A45C47AD42CCB41661239::get_offset_of_activity_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8597 = { sizeof (ResIsActivityCanGet_t73008F0F7A31994F6AE7795661B7D2082CC78FFF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8597[2] = 
{
	0,
	ResIsActivityCanGet_t73008F0F7A31994F6AE7795661B7D2082CC78FFF::get_offset_of_canGet_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8598 = { sizeof (ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8598[4] = 
{
	0,
	ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6::get_offset_of_id_1(),
	ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6::get_offset_of_type_2(),
	ReqGetActivityReward_t78D8AAE6F941BE8038286006D44E1A5F414E8BB6::get_offset_of_num_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8599 = { sizeof (ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8599[3] = 
{
	0,
	ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E::get_offset_of_id_1(),
	ResGetActivityRewardSuccess_t99D275565A5BF8C8AF2839B8ED3297F77860B10E::get_offset_of_getNum_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
