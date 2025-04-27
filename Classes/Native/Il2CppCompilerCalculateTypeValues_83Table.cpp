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


// MSG_Commercialize.FCChargeData
struct FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9;
// MSG_Common.FacadeAttribute
struct FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3;
// MSG_Common.HeadAttribute
struct HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176;
// MSG_Community.PlayerCommunityInfo
struct PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2;
// MSG_Community.PlayerCommunityInfoSettingInfo
struct PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23;
// MSG_copyMap.BossStateInfo
struct BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A;
// System.Collections.Generic.List`1<MSG_Commercialize.DailyRechargeCfg>
struct List_1_tF226326CA29F29FADD75EEAB8C42605BA9469491;
// System.Collections.Generic.List`1<MSG_Commercialize.DailyRechargeInfo>
struct List_1_t490C7A7FA3B1385914C55F5113DC6DCC7F2F45A6;
// System.Collections.Generic.List`1<MSG_Commercialize.ItemInfo>
struct List_1_t4FC2456C316E712BC5C3120D42D0EF190ACCAF63;
// System.Collections.Generic.List`1<MSG_Common.Buff>
struct List_1_t8D860447696358734A1DC5300E2B81407398DB71;
// System.Collections.Generic.List`1<MSG_Common.Position>
struct List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C;
// System.Collections.Generic.List`1<MSG_Community.CommunityLeaveMessageInfo>
struct List_1_t5A249E324E0BD0255447233ADC6F41C360728E7B;
// System.Collections.Generic.List`1<MSG_Community.FriendCircleInfo>
struct List_1_t167ED2F89F302AD6822A70006FD4AA017BA5B45A;
// System.Collections.Generic.List`1<MSG_Community.FriendCircleLeaveMessageInfo>
struct List_1_t0D3EA0E72F735562853450644AAC1A1EB7FB1E84;
// System.Collections.Generic.List`1<MSG_copyMap.BossStateInfo>
struct List_1_t66B7FC44BB124A6240989B912720E4D72C603FF2;
// System.Collections.Generic.List`1<MSG_copyMap.CampInfo>
struct List_1_t0B50F8D8D59466A4C633F85A2B664D46CC6F3B11;
// System.Collections.Generic.List`1<MSG_copyMap.RankInfo>
struct List_1_tE74329557BEA0A6F99501594E74CF925AC70803B;
// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo>
struct List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D;
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
#ifndef DAILYRECHARGECFG_T80FAFF92DB7C0B69FA104525B5B3177C46934C2C_H
#define DAILYRECHARGECFG_T80FAFF92DB7C0B69FA104525B5B3177C46934C2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.DailyRechargeCfg
struct  DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.DailyRechargeCfg::awardId
	int32_t ___awardId_0;
	// System.Int32 MSG_Commercialize.DailyRechargeCfg::position
	int32_t ___position_1;
	// System.Int32 MSG_Commercialize.DailyRechargeCfg::day
	int32_t ___day_2;
	// System.Int32 MSG_Commercialize.DailyRechargeCfg::money
	int32_t ___money_3;
	// System.Collections.Generic.List`1<MSG_Commercialize.ItemInfo> MSG_Commercialize.DailyRechargeCfg::items
	List_1_t4FC2456C316E712BC5C3120D42D0EF190ACCAF63 * ___items_4;

public:
	inline static int32_t get_offset_of_awardId_0() { return static_cast<int32_t>(offsetof(DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C, ___awardId_0)); }
	inline int32_t get_awardId_0() const { return ___awardId_0; }
	inline int32_t* get_address_of_awardId_0() { return &___awardId_0; }
	inline void set_awardId_0(int32_t value)
	{
		___awardId_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_money_3() { return static_cast<int32_t>(offsetof(DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C, ___money_3)); }
	inline int32_t get_money_3() const { return ___money_3; }
	inline int32_t* get_address_of_money_3() { return &___money_3; }
	inline void set_money_3(int32_t value)
	{
		___money_3 = value;
	}

	inline static int32_t get_offset_of_items_4() { return static_cast<int32_t>(offsetof(DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C, ___items_4)); }
	inline List_1_t4FC2456C316E712BC5C3120D42D0EF190ACCAF63 * get_items_4() const { return ___items_4; }
	inline List_1_t4FC2456C316E712BC5C3120D42D0EF190ACCAF63 ** get_address_of_items_4() { return &___items_4; }
	inline void set_items_4(List_1_t4FC2456C316E712BC5C3120D42D0EF190ACCAF63 * value)
	{
		___items_4 = value;
		Il2CppCodeGenWriteBarrier((&___items_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAILYRECHARGECFG_T80FAFF92DB7C0B69FA104525B5B3177C46934C2C_H
#ifndef DAILYRECHARGEINFO_T8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89_H
#define DAILYRECHARGEINFO_T8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.DailyRechargeInfo
struct  DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.DailyRechargeInfo::awardId
	int32_t ___awardId_0;
	// System.Int32 MSG_Commercialize.DailyRechargeInfo::status
	int32_t ___status_1;
	// System.Int32 MSG_Commercialize.DailyRechargeInfo::day
	int32_t ___day_2;

public:
	inline static int32_t get_offset_of_awardId_0() { return static_cast<int32_t>(offsetof(DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89, ___awardId_0)); }
	inline int32_t get_awardId_0() const { return ___awardId_0; }
	inline int32_t* get_address_of_awardId_0() { return &___awardId_0; }
	inline void set_awardId_0(int32_t value)
	{
		___awardId_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89, ___status_1)); }
	inline int32_t get_status_1() const { return ___status_1; }
	inline int32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(int32_t value)
	{
		___status_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAILYRECHARGEINFO_T8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89_H
#ifndef FCCHARGEDATA_TF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9_H
#define FCCHARGEDATA_TF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.FCChargeData
struct  FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.FCChargeData::cfgID
	int32_t ___cfgID_0;
	// System.Int64 MSG_Commercialize.FCChargeData::goldCount
	int64_t ___goldCount_1;
	// System.Boolean MSG_Commercialize.FCChargeData::isReward
	bool ___isReward_2;

public:
	inline static int32_t get_offset_of_cfgID_0() { return static_cast<int32_t>(offsetof(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9, ___cfgID_0)); }
	inline int32_t get_cfgID_0() const { return ___cfgID_0; }
	inline int32_t* get_address_of_cfgID_0() { return &___cfgID_0; }
	inline void set_cfgID_0(int32_t value)
	{
		___cfgID_0 = value;
	}

	inline static int32_t get_offset_of_goldCount_1() { return static_cast<int32_t>(offsetof(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9, ___goldCount_1)); }
	inline int64_t get_goldCount_1() const { return ___goldCount_1; }
	inline int64_t* get_address_of_goldCount_1() { return &___goldCount_1; }
	inline void set_goldCount_1(int64_t value)
	{
		___goldCount_1 = value;
	}

	inline static int32_t get_offset_of_isReward_2() { return static_cast<int32_t>(offsetof(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9, ___isReward_2)); }
	inline bool get_isReward_2() const { return ___isReward_2; }
	inline bool* get_address_of_isReward_2() { return &___isReward_2; }
	inline void set_isReward_2(bool value)
	{
		___isReward_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FCCHARGEDATA_TF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9_H
#ifndef ITEMINFO_T74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9_H
#define ITEMINFO_T74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ItemInfo
struct  ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.ItemInfo::itemID
	int32_t ___itemID_0;
	// System.Int32 MSG_Commercialize.ItemInfo::num
	int32_t ___num_1;
	// System.Boolean MSG_Commercialize.ItemInfo::bind
	bool ___bind_2;

public:
	inline static int32_t get_offset_of_itemID_0() { return static_cast<int32_t>(offsetof(ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9, ___itemID_0)); }
	inline int32_t get_itemID_0() const { return ___itemID_0; }
	inline int32_t* get_address_of_itemID_0() { return &___itemID_0; }
	inline void set_itemID_0(int32_t value)
	{
		___itemID_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9, ___num_1)); }
	inline int32_t get_num_1() const { return ___num_1; }
	inline int32_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int32_t value)
	{
		___num_1 = value;
	}

	inline static int32_t get_offset_of_bind_2() { return static_cast<int32_t>(offsetof(ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9, ___bind_2)); }
	inline bool get_bind_2() const { return ___bind_2; }
	inline bool* get_address_of_bind_2() { return &___bind_2; }
	inline void set_bind_2(bool value)
	{
		___bind_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMINFO_T74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9_H
#ifndef REQCOMMERCIALIZE_TD0BAF70EADD41F3231DA76B4C3E3F851872698A7_H
#define REQCOMMERCIALIZE_TD0BAF70EADD41F3231DA76B4C3E3F851872698A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ReqCommercialize
struct  ReqCommercialize_tD0BAF70EADD41F3231DA76B4C3E3F851872698A7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.ReqCommercialize::typ
	int32_t ___typ_1;

public:
	inline static int32_t get_offset_of_typ_1() { return static_cast<int32_t>(offsetof(ReqCommercialize_tD0BAF70EADD41F3231DA76B4C3E3F851872698A7, ___typ_1)); }
	inline int32_t get_typ_1() const { return ___typ_1; }
	inline int32_t* get_address_of_typ_1() { return &___typ_1; }
	inline void set_typ_1(int32_t value)
	{
		___typ_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOMMERCIALIZE_TD0BAF70EADD41F3231DA76B4C3E3F851872698A7_H
#ifndef REQDAILYRECHARGECFG_T2FF3A0C6AF5A5A630F63651EB7CD842436F44496_H
#define REQDAILYRECHARGECFG_T2FF3A0C6AF5A5A630F63651EB7CD842436F44496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ReqDailyRechargeCfg
struct  ReqDailyRechargeCfg_t2FF3A0C6AF5A5A630F63651EB7CD842436F44496  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDAILYRECHARGECFG_T2FF3A0C6AF5A5A630F63651EB7CD842436F44496_H
#ifndef REQFCCHARGEREWARD_TA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9_H
#define REQFCCHARGEREWARD_TA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ReqFCChargeReward
struct  ReqFCChargeReward_tA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.ReqFCChargeReward::cfgID
	int32_t ___cfgID_1;

public:
	inline static int32_t get_offset_of_cfgID_1() { return static_cast<int32_t>(offsetof(ReqFCChargeReward_tA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9, ___cfgID_1)); }
	inline int32_t get_cfgID_1() const { return ___cfgID_1; }
	inline int32_t* get_address_of_cfgID_1() { return &___cfgID_1; }
	inline void set_cfgID_1(int32_t value)
	{
		___cfgID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFCCHARGEREWARD_TA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9_H
#ifndef REQGETDAILYRECHARGEAWARD_T73B847A85331647EEEC1E25DA6B8633F8A3E4504_H
#define REQGETDAILYRECHARGEAWARD_T73B847A85331647EEEC1E25DA6B8633F8A3E4504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ReqGetDailyRechargeAward
struct  ReqGetDailyRechargeAward_t73B847A85331647EEEC1E25DA6B8633F8A3E4504  : public RuntimeObject
{
public:
	// System.Int32 MSG_Commercialize.ReqGetDailyRechargeAward::awardId
	int32_t ___awardId_1;

public:
	inline static int32_t get_offset_of_awardId_1() { return static_cast<int32_t>(offsetof(ReqGetDailyRechargeAward_t73B847A85331647EEEC1E25DA6B8633F8A3E4504, ___awardId_1)); }
	inline int32_t get_awardId_1() const { return ___awardId_1; }
	inline int32_t* get_address_of_awardId_1() { return &___awardId_1; }
	inline void set_awardId_1(int32_t value)
	{
		___awardId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETDAILYRECHARGEAWARD_T73B847A85331647EEEC1E25DA6B8633F8A3E4504_H
#ifndef RESDAILYRECHARGECFG_T43AB99BCD976D60C225829449E1A1049763720BE_H
#define RESDAILYRECHARGECFG_T43AB99BCD976D60C225829449E1A1049763720BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ResDailyRechargeCfg
struct  ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE  : public RuntimeObject
{
public:
	// System.Int64 MSG_Commercialize.ResDailyRechargeCfg::startTime
	int64_t ___startTime_1;
	// System.Int64 MSG_Commercialize.ResDailyRechargeCfg::endTime
	int64_t ___endTime_2;
	// System.Collections.Generic.List`1<MSG_Commercialize.DailyRechargeCfg> MSG_Commercialize.ResDailyRechargeCfg::cfgList
	List_1_tF226326CA29F29FADD75EEAB8C42605BA9469491 * ___cfgList_3;

public:
	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE, ___startTime_1)); }
	inline int64_t get_startTime_1() const { return ___startTime_1; }
	inline int64_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(int64_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE, ___endTime_2)); }
	inline int64_t get_endTime_2() const { return ___endTime_2; }
	inline int64_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int64_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_cfgList_3() { return static_cast<int32_t>(offsetof(ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE, ___cfgList_3)); }
	inline List_1_tF226326CA29F29FADD75EEAB8C42605BA9469491 * get_cfgList_3() const { return ___cfgList_3; }
	inline List_1_tF226326CA29F29FADD75EEAB8C42605BA9469491 ** get_address_of_cfgList_3() { return &___cfgList_3; }
	inline void set_cfgList_3(List_1_tF226326CA29F29FADD75EEAB8C42605BA9469491 * value)
	{
		___cfgList_3 = value;
		Il2CppCodeGenWriteBarrier((&___cfgList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDAILYRECHARGECFG_T43AB99BCD976D60C225829449E1A1049763720BE_H
#ifndef RESDAILYRECHARGEINFO_TB0181E11AB45865AC8FA47110063E1AC6C95536F_H
#define RESDAILYRECHARGEINFO_TB0181E11AB45865AC8FA47110063E1AC6C95536F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ResDailyRechargeInfo
struct  ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F  : public RuntimeObject
{
public:
	// System.Int64 MSG_Commercialize.ResDailyRechargeInfo::rechargeTotal
	int64_t ___rechargeTotal_1;
	// System.Int32 MSG_Commercialize.ResDailyRechargeInfo::consumeTotal
	int32_t ___consumeTotal_2;
	// System.Collections.Generic.List`1<System.Int32> MSG_Commercialize.ResDailyRechargeInfo::rechargeIdList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___rechargeIdList_3;
	// System.Collections.Generic.List`1<System.Int32> MSG_Commercialize.ResDailyRechargeInfo::consumeIdList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___consumeIdList_4;
	// System.Int32 MSG_Commercialize.ResDailyRechargeInfo::boxRewardCount
	int32_t ___boxRewardCount_5;

public:
	inline static int32_t get_offset_of_rechargeTotal_1() { return static_cast<int32_t>(offsetof(ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F, ___rechargeTotal_1)); }
	inline int64_t get_rechargeTotal_1() const { return ___rechargeTotal_1; }
	inline int64_t* get_address_of_rechargeTotal_1() { return &___rechargeTotal_1; }
	inline void set_rechargeTotal_1(int64_t value)
	{
		___rechargeTotal_1 = value;
	}

	inline static int32_t get_offset_of_consumeTotal_2() { return static_cast<int32_t>(offsetof(ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F, ___consumeTotal_2)); }
	inline int32_t get_consumeTotal_2() const { return ___consumeTotal_2; }
	inline int32_t* get_address_of_consumeTotal_2() { return &___consumeTotal_2; }
	inline void set_consumeTotal_2(int32_t value)
	{
		___consumeTotal_2 = value;
	}

	inline static int32_t get_offset_of_rechargeIdList_3() { return static_cast<int32_t>(offsetof(ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F, ___rechargeIdList_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_rechargeIdList_3() const { return ___rechargeIdList_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_rechargeIdList_3() { return &___rechargeIdList_3; }
	inline void set_rechargeIdList_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___rechargeIdList_3 = value;
		Il2CppCodeGenWriteBarrier((&___rechargeIdList_3), value);
	}

	inline static int32_t get_offset_of_consumeIdList_4() { return static_cast<int32_t>(offsetof(ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F, ___consumeIdList_4)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_consumeIdList_4() const { return ___consumeIdList_4; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_consumeIdList_4() { return &___consumeIdList_4; }
	inline void set_consumeIdList_4(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___consumeIdList_4 = value;
		Il2CppCodeGenWriteBarrier((&___consumeIdList_4), value);
	}

	inline static int32_t get_offset_of_boxRewardCount_5() { return static_cast<int32_t>(offsetof(ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F, ___boxRewardCount_5)); }
	inline int32_t get_boxRewardCount_5() const { return ___boxRewardCount_5; }
	inline int32_t* get_address_of_boxRewardCount_5() { return &___boxRewardCount_5; }
	inline void set_boxRewardCount_5(int32_t value)
	{
		___boxRewardCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDAILYRECHARGEINFO_TB0181E11AB45865AC8FA47110063E1AC6C95536F_H
#ifndef RESFCCHARGEDATA_T6E7457C85AFC7238E90E50B576FAD9F076158AA7_H
#define RESFCCHARGEDATA_T6E7457C85AFC7238E90E50B576FAD9F076158AA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.ResFCChargeData
struct  ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7  : public RuntimeObject
{
public:
	// MSG_Commercialize.FCChargeData MSG_Commercialize.ResFCChargeData::firstData
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * ___firstData_1;
	// MSG_Commercialize.FCChargeData MSG_Commercialize.ResFCChargeData::nextData
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * ___nextData_2;
	// MSG_Commercialize.FCChargeData MSG_Commercialize.ResFCChargeData::hundredData
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * ___hundredData_3;

public:
	inline static int32_t get_offset_of_firstData_1() { return static_cast<int32_t>(offsetof(ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7, ___firstData_1)); }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * get_firstData_1() const { return ___firstData_1; }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 ** get_address_of_firstData_1() { return &___firstData_1; }
	inline void set_firstData_1(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * value)
	{
		___firstData_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstData_1), value);
	}

	inline static int32_t get_offset_of_nextData_2() { return static_cast<int32_t>(offsetof(ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7, ___nextData_2)); }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * get_nextData_2() const { return ___nextData_2; }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 ** get_address_of_nextData_2() { return &___nextData_2; }
	inline void set_nextData_2(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * value)
	{
		___nextData_2 = value;
		Il2CppCodeGenWriteBarrier((&___nextData_2), value);
	}

	inline static int32_t get_offset_of_hundredData_3() { return static_cast<int32_t>(offsetof(ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7, ___hundredData_3)); }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * get_hundredData_3() const { return ___hundredData_3; }
	inline FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 ** get_address_of_hundredData_3() { return &___hundredData_3; }
	inline void set_hundredData_3(FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9 * value)
	{
		___hundredData_3 = value;
		Il2CppCodeGenWriteBarrier((&___hundredData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFCCHARGEDATA_T6E7457C85AFC7238E90E50B576FAD9F076158AA7_H
#ifndef SYNCDAILYRECHARGEINFO_T729E5B1F86BCB6A6DFF98A0990C7962518706A63_H
#define SYNCDAILYRECHARGEINFO_T729E5B1F86BCB6A6DFF98A0990C7962518706A63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Commercialize.SyncDailyRechargeInfo
struct  SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Commercialize.DailyRechargeInfo> MSG_Commercialize.SyncDailyRechargeInfo::dailyRechargeList
	List_1_t490C7A7FA3B1385914C55F5113DC6DCC7F2F45A6 * ___dailyRechargeList_1;
	// System.Boolean MSG_Commercialize.SyncDailyRechargeInfo::isOpen
	bool ___isOpen_2;
	// System.Int32 MSG_Commercialize.SyncDailyRechargeInfo::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_dailyRechargeList_1() { return static_cast<int32_t>(offsetof(SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63, ___dailyRechargeList_1)); }
	inline List_1_t490C7A7FA3B1385914C55F5113DC6DCC7F2F45A6 * get_dailyRechargeList_1() const { return ___dailyRechargeList_1; }
	inline List_1_t490C7A7FA3B1385914C55F5113DC6DCC7F2F45A6 ** get_address_of_dailyRechargeList_1() { return &___dailyRechargeList_1; }
	inline void set_dailyRechargeList_1(List_1_t490C7A7FA3B1385914C55F5113DC6DCC7F2F45A6 * value)
	{
		___dailyRechargeList_1 = value;
		Il2CppCodeGenWriteBarrier((&___dailyRechargeList_1), value);
	}

	inline static int32_t get_offset_of_isOpen_2() { return static_cast<int32_t>(offsetof(SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63, ___isOpen_2)); }
	inline bool get_isOpen_2() const { return ___isOpen_2; }
	inline bool* get_address_of_isOpen_2() { return &___isOpen_2; }
	inline void set_isOpen_2(bool value)
	{
		___isOpen_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCDAILYRECHARGEINFO_T729E5B1F86BCB6A6DFF98A0990C7962518706A63_H
#ifndef APPLYINFO_T33EFFA5EC5A810CD4F46FE2074081889410C0FEF_H
#define APPLYINFO_T33EFFA5EC5A810CD4F46FE2074081889410C0FEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.ApplyInfo
struct  ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.ApplyInfo::roleId
	uint64_t ___roleId_0;
	// System.Int32 MSG_Common.ApplyInfo::lv
	int32_t ___lv_1;
	// System.String MSG_Common.ApplyInfo::name
	String_t* ___name_2;
	// System.Int32 MSG_Common.ApplyInfo::sex
	int32_t ___sex_3;
	// System.UInt64 MSG_Common.ApplyInfo::guildId
	uint64_t ___guildId_4;
	// System.String MSG_Common.ApplyInfo::guildName
	String_t* ___guildName_5;

public:
	inline static int32_t get_offset_of_roleId_0() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___roleId_0)); }
	inline uint64_t get_roleId_0() const { return ___roleId_0; }
	inline uint64_t* get_address_of_roleId_0() { return &___roleId_0; }
	inline void set_roleId_0(uint64_t value)
	{
		___roleId_0 = value;
	}

	inline static int32_t get_offset_of_lv_1() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___lv_1)); }
	inline int32_t get_lv_1() const { return ___lv_1; }
	inline int32_t* get_address_of_lv_1() { return &___lv_1; }
	inline void set_lv_1(int32_t value)
	{
		___lv_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_sex_3() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___sex_3)); }
	inline int32_t get_sex_3() const { return ___sex_3; }
	inline int32_t* get_address_of_sex_3() { return &___sex_3; }
	inline void set_sex_3(int32_t value)
	{
		___sex_3 = value;
	}

	inline static int32_t get_offset_of_guildId_4() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___guildId_4)); }
	inline uint64_t get_guildId_4() const { return ___guildId_4; }
	inline uint64_t* get_address_of_guildId_4() { return &___guildId_4; }
	inline void set_guildId_4(uint64_t value)
	{
		___guildId_4 = value;
	}

	inline static int32_t get_offset_of_guildName_5() { return static_cast<int32_t>(offsetof(ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF, ___guildName_5)); }
	inline String_t* get_guildName_5() const { return ___guildName_5; }
	inline String_t** get_address_of_guildName_5() { return &___guildName_5; }
	inline void set_guildName_5(String_t* value)
	{
		___guildName_5 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYINFO_T33EFFA5EC5A810CD4F46FE2074081889410C0FEF_H
#ifndef BONFIREINFO_T61BA20AFBDE3462494E3794924C321C88080448F_H
#define BONFIREINFO_T61BA20AFBDE3462494E3794924C321C88080448F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.BonfireInfo
struct  BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.BonfireInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Common.BonfireInfo::bonfireId
	int32_t ___bonfireId_1;
	// System.Int32 MSG_Common.BonfireInfo::modelId
	int32_t ___modelId_2;
	// System.Single MSG_Common.BonfireInfo::x
	float ___x_3;
	// System.Single MSG_Common.BonfireInfo::y
	float ___y_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_bonfireId_1() { return static_cast<int32_t>(offsetof(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F, ___bonfireId_1)); }
	inline int32_t get_bonfireId_1() const { return ___bonfireId_1; }
	inline int32_t* get_address_of_bonfireId_1() { return &___bonfireId_1; }
	inline void set_bonfireId_1(int32_t value)
	{
		___bonfireId_1 = value;
	}

	inline static int32_t get_offset_of_modelId_2() { return static_cast<int32_t>(offsetof(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F, ___modelId_2)); }
	inline int32_t get_modelId_2() const { return ___modelId_2; }
	inline int32_t* get_address_of_modelId_2() { return &___modelId_2; }
	inline void set_modelId_2(int32_t value)
	{
		___modelId_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BONFIREINFO_T61BA20AFBDE3462494E3794924C321C88080448F_H
#ifndef BUFF_T3620CE1D04466ECFE314DA49CE921B5F8627D16C_H
#define BUFF_T3620CE1D04466ECFE314DA49CE921B5F8627D16C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.Buff
struct  Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.Buff::buffId
	int32_t ___buffId_0;
	// System.Int32 MSG_Common.Buff::curLevel
	int32_t ___curLevel_1;
	// System.Int32 MSG_Common.Buff::remainTime
	int32_t ___remainTime_2;
	// System.Collections.Generic.List`1<System.Int32> MSG_Common.Buff::args
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___args_3;

public:
	inline static int32_t get_offset_of_buffId_0() { return static_cast<int32_t>(offsetof(Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C, ___buffId_0)); }
	inline int32_t get_buffId_0() const { return ___buffId_0; }
	inline int32_t* get_address_of_buffId_0() { return &___buffId_0; }
	inline void set_buffId_0(int32_t value)
	{
		___buffId_0 = value;
	}

	inline static int32_t get_offset_of_curLevel_1() { return static_cast<int32_t>(offsetof(Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C, ___curLevel_1)); }
	inline int32_t get_curLevel_1() const { return ___curLevel_1; }
	inline int32_t* get_address_of_curLevel_1() { return &___curLevel_1; }
	inline void set_curLevel_1(int32_t value)
	{
		___curLevel_1 = value;
	}

	inline static int32_t get_offset_of_remainTime_2() { return static_cast<int32_t>(offsetof(Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C, ___remainTime_2)); }
	inline int32_t get_remainTime_2() const { return ___remainTime_2; }
	inline int32_t* get_address_of_remainTime_2() { return &___remainTime_2; }
	inline void set_remainTime_2(int32_t value)
	{
		___remainTime_2 = value;
	}

	inline static int32_t get_offset_of_args_3() { return static_cast<int32_t>(offsetof(Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C, ___args_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_args_3() const { return ___args_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_args_3() { return &___args_3; }
	inline void set_args_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___args_3 = value;
		Il2CppCodeGenWriteBarrier((&___args_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFF_T3620CE1D04466ECFE314DA49CE921B5F8627D16C_H
#ifndef CROSSATTRIBUTE_T7AAE07202C007226E5697913F4558EFCEFD644D7_H
#define CROSSATTRIBUTE_T7AAE07202C007226E5697913F4558EFCEFD644D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.CrossAttribute
struct  CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.CrossAttribute::type
	int32_t ___type_0;
	// System.Int64 MSG_Common.CrossAttribute::value
	int64_t ___value_1;
	// System.String MSG_Common.CrossAttribute::param
	String_t* ___param_2;
	// System.Int32 MSG_Common.CrossAttribute::param1
	int32_t ___param1_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7, ___param_2)); }
	inline String_t* get_param_2() const { return ___param_2; }
	inline String_t** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(String_t* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}

	inline static int32_t get_offset_of_param1_3() { return static_cast<int32_t>(offsetof(CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7, ___param1_3)); }
	inline int32_t get_param1_3() const { return ___param1_3; }
	inline int32_t* get_address_of_param1_3() { return &___param1_3; }
	inline void set_param1_3(int32_t value)
	{
		___param1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSATTRIBUTE_T7AAE07202C007226E5697913F4558EFCEFD644D7_H
#ifndef CROSSROLE_TE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9_H
#define CROSSROLE_TE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.CrossRole
struct  CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9  : public RuntimeObject
{
public:
	// System.Int64 MSG_Common.CrossRole::roleId
	int64_t ___roleId_0;
	// System.String MSG_Common.CrossRole::name
	String_t* ___name_1;
	// System.String MSG_Common.CrossRole::platform
	String_t* ___platform_2;
	// System.Int32 MSG_Common.CrossRole::serverId
	int32_t ___serverId_3;
	// System.Int64 MSG_Common.CrossRole::power
	int64_t ___power_4;
	// System.Int32 MSG_Common.CrossRole::career
	int32_t ___career_5;

public:
	inline static int32_t get_offset_of_roleId_0() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___roleId_0)); }
	inline int64_t get_roleId_0() const { return ___roleId_0; }
	inline int64_t* get_address_of_roleId_0() { return &___roleId_0; }
	inline void set_roleId_0(int64_t value)
	{
		___roleId_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_platform_2() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___platform_2)); }
	inline String_t* get_platform_2() const { return ___platform_2; }
	inline String_t** get_address_of_platform_2() { return &___platform_2; }
	inline void set_platform_2(String_t* value)
	{
		___platform_2 = value;
		Il2CppCodeGenWriteBarrier((&___platform_2), value);
	}

	inline static int32_t get_offset_of_serverId_3() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___serverId_3)); }
	inline int32_t get_serverId_3() const { return ___serverId_3; }
	inline int32_t* get_address_of_serverId_3() { return &___serverId_3; }
	inline void set_serverId_3(int32_t value)
	{
		___serverId_3 = value;
	}

	inline static int32_t get_offset_of_power_4() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___power_4)); }
	inline int64_t get_power_4() const { return ___power_4; }
	inline int64_t* get_address_of_power_4() { return &___power_4; }
	inline void set_power_4(int64_t value)
	{
		___power_4 = value;
	}

	inline static int32_t get_offset_of_career_5() { return static_cast<int32_t>(offsetof(CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9, ___career_5)); }
	inline int32_t get_career_5() const { return ___career_5; }
	inline int32_t* get_address_of_career_5() { return &___career_5; }
	inline void set_career_5(int32_t value)
	{
		___career_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSROLE_TE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9_H
#ifndef FACADEATTRIBUTE_T7B6283AED231E73174B1BDB65C4DC7AF419DDDB3_H
#define FACADEATTRIBUTE_T7B6283AED231E73174B1BDB65C4DC7AF419DDDB3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.FacadeAttribute
struct  FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.FacadeAttribute::fashionBody
	int32_t ___fashionBody_0;
	// System.Int32 MSG_Common.FacadeAttribute::fashionWeapon
	int32_t ___fashionWeapon_1;
	// System.Int32 MSG_Common.FacadeAttribute::fashionHalo
	int32_t ___fashionHalo_2;
	// System.Int32 MSG_Common.FacadeAttribute::fashionMatrix
	int32_t ___fashionMatrix_3;
	// System.Int32 MSG_Common.FacadeAttribute::wingId
	int32_t ___wingId_4;
	// System.Int32 MSG_Common.FacadeAttribute::spiritId
	int32_t ___spiritId_5;
	// System.Int32 MSG_Common.FacadeAttribute::soulArmorId
	int32_t ___soulArmorId_6;

public:
	inline static int32_t get_offset_of_fashionBody_0() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___fashionBody_0)); }
	inline int32_t get_fashionBody_0() const { return ___fashionBody_0; }
	inline int32_t* get_address_of_fashionBody_0() { return &___fashionBody_0; }
	inline void set_fashionBody_0(int32_t value)
	{
		___fashionBody_0 = value;
	}

	inline static int32_t get_offset_of_fashionWeapon_1() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___fashionWeapon_1)); }
	inline int32_t get_fashionWeapon_1() const { return ___fashionWeapon_1; }
	inline int32_t* get_address_of_fashionWeapon_1() { return &___fashionWeapon_1; }
	inline void set_fashionWeapon_1(int32_t value)
	{
		___fashionWeapon_1 = value;
	}

	inline static int32_t get_offset_of_fashionHalo_2() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___fashionHalo_2)); }
	inline int32_t get_fashionHalo_2() const { return ___fashionHalo_2; }
	inline int32_t* get_address_of_fashionHalo_2() { return &___fashionHalo_2; }
	inline void set_fashionHalo_2(int32_t value)
	{
		___fashionHalo_2 = value;
	}

	inline static int32_t get_offset_of_fashionMatrix_3() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___fashionMatrix_3)); }
	inline int32_t get_fashionMatrix_3() const { return ___fashionMatrix_3; }
	inline int32_t* get_address_of_fashionMatrix_3() { return &___fashionMatrix_3; }
	inline void set_fashionMatrix_3(int32_t value)
	{
		___fashionMatrix_3 = value;
	}

	inline static int32_t get_offset_of_wingId_4() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___wingId_4)); }
	inline int32_t get_wingId_4() const { return ___wingId_4; }
	inline int32_t* get_address_of_wingId_4() { return &___wingId_4; }
	inline void set_wingId_4(int32_t value)
	{
		___wingId_4 = value;
	}

	inline static int32_t get_offset_of_spiritId_5() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___spiritId_5)); }
	inline int32_t get_spiritId_5() const { return ___spiritId_5; }
	inline int32_t* get_address_of_spiritId_5() { return &___spiritId_5; }
	inline void set_spiritId_5(int32_t value)
	{
		___spiritId_5 = value;
	}

	inline static int32_t get_offset_of_soulArmorId_6() { return static_cast<int32_t>(offsetof(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3, ___soulArmorId_6)); }
	inline int32_t get_soulArmorId_6() const { return ___soulArmorId_6; }
	inline int32_t* get_address_of_soulArmorId_6() { return &___soulArmorId_6; }
	inline void set_soulArmorId_6(int32_t value)
	{
		___soulArmorId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACADEATTRIBUTE_T7B6283AED231E73174B1BDB65C4DC7AF419DDDB3_H
#ifndef FUZZYQUERYLIST_TDAEE0455A44424E1FBE2CADE322547732969D718_H
#define FUZZYQUERYLIST_TDAEE0455A44424E1FBE2CADE322547732969D718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.FuzzyQueryList
struct  FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.FuzzyQueryList::memberId
	uint64_t ___memberId_0;
	// System.String MSG_Common.FuzzyQueryList::memberName
	String_t* ___memberName_1;
	// System.Int32 MSG_Common.FuzzyQueryList::memberLv
	int32_t ___memberLv_2;
	// System.Int64 MSG_Common.FuzzyQueryList::memberFighting
	int64_t ___memberFighting_3;
	// System.Int32 MSG_Common.FuzzyQueryList::memberMapId
	int32_t ___memberMapId_4;
	// System.Int32 MSG_Common.FuzzyQueryList::memberLine
	int32_t ___memberLine_5;
	// System.Int32 MSG_Common.FuzzyQueryList::career
	int32_t ___career_6;
	// System.Boolean MSG_Common.FuzzyQueryList::haveTeam
	bool ___haveTeam_7;

public:
	inline static int32_t get_offset_of_memberId_0() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberId_0)); }
	inline uint64_t get_memberId_0() const { return ___memberId_0; }
	inline uint64_t* get_address_of_memberId_0() { return &___memberId_0; }
	inline void set_memberId_0(uint64_t value)
	{
		___memberId_0 = value;
	}

	inline static int32_t get_offset_of_memberName_1() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberName_1)); }
	inline String_t* get_memberName_1() const { return ___memberName_1; }
	inline String_t** get_address_of_memberName_1() { return &___memberName_1; }
	inline void set_memberName_1(String_t* value)
	{
		___memberName_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberName_1), value);
	}

	inline static int32_t get_offset_of_memberLv_2() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberLv_2)); }
	inline int32_t get_memberLv_2() const { return ___memberLv_2; }
	inline int32_t* get_address_of_memberLv_2() { return &___memberLv_2; }
	inline void set_memberLv_2(int32_t value)
	{
		___memberLv_2 = value;
	}

	inline static int32_t get_offset_of_memberFighting_3() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberFighting_3)); }
	inline int64_t get_memberFighting_3() const { return ___memberFighting_3; }
	inline int64_t* get_address_of_memberFighting_3() { return &___memberFighting_3; }
	inline void set_memberFighting_3(int64_t value)
	{
		___memberFighting_3 = value;
	}

	inline static int32_t get_offset_of_memberMapId_4() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberMapId_4)); }
	inline int32_t get_memberMapId_4() const { return ___memberMapId_4; }
	inline int32_t* get_address_of_memberMapId_4() { return &___memberMapId_4; }
	inline void set_memberMapId_4(int32_t value)
	{
		___memberMapId_4 = value;
	}

	inline static int32_t get_offset_of_memberLine_5() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___memberLine_5)); }
	inline int32_t get_memberLine_5() const { return ___memberLine_5; }
	inline int32_t* get_address_of_memberLine_5() { return &___memberLine_5; }
	inline void set_memberLine_5(int32_t value)
	{
		___memberLine_5 = value;
	}

	inline static int32_t get_offset_of_career_6() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___career_6)); }
	inline int32_t get_career_6() const { return ___career_6; }
	inline int32_t* get_address_of_career_6() { return &___career_6; }
	inline void set_career_6(int32_t value)
	{
		___career_6 = value;
	}

	inline static int32_t get_offset_of_haveTeam_7() { return static_cast<int32_t>(offsetof(FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718, ___haveTeam_7)); }
	inline bool get_haveTeam_7() const { return ___haveTeam_7; }
	inline bool* get_address_of_haveTeam_7() { return &___haveTeam_7; }
	inline void set_haveTeam_7(bool value)
	{
		___haveTeam_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUZZYQUERYLIST_TDAEE0455A44424E1FBE2CADE322547732969D718_H
#ifndef GATHERINFO_T5412D49073EE3D567CB554166172161C601BBBC3_H
#define GATHERINFO_T5412D49073EE3D567CB554166172161C601BBBC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.GatherInfo
struct  GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.GatherInfo::gatherId
	uint64_t ___gatherId_0;
	// System.Int32 MSG_Common.GatherInfo::dataID
	int32_t ___dataID_1;
	// System.Int32 MSG_Common.GatherInfo::mapId
	int32_t ___mapId_2;
	// System.Single MSG_Common.GatherInfo::x
	float ___x_3;
	// System.Single MSG_Common.GatherInfo::y
	float ___y_4;

public:
	inline static int32_t get_offset_of_gatherId_0() { return static_cast<int32_t>(offsetof(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3, ___gatherId_0)); }
	inline uint64_t get_gatherId_0() const { return ___gatherId_0; }
	inline uint64_t* get_address_of_gatherId_0() { return &___gatherId_0; }
	inline void set_gatherId_0(uint64_t value)
	{
		___gatherId_0 = value;
	}

	inline static int32_t get_offset_of_dataID_1() { return static_cast<int32_t>(offsetof(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3, ___dataID_1)); }
	inline int32_t get_dataID_1() const { return ___dataID_1; }
	inline int32_t* get_address_of_dataID_1() { return &___dataID_1; }
	inline void set_dataID_1(int32_t value)
	{
		___dataID_1 = value;
	}

	inline static int32_t get_offset_of_mapId_2() { return static_cast<int32_t>(offsetof(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3, ___mapId_2)); }
	inline int32_t get_mapId_2() const { return ___mapId_2; }
	inline int32_t* get_address_of_mapId_2() { return &___mapId_2; }
	inline void set_mapId_2(int32_t value)
	{
		___mapId_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GATHERINFO_T5412D49073EE3D567CB554166172161C601BBBC3_H
#ifndef GROUNDBUFFMESS_T54D29B9FF8F7CC25852D78471E0C4A664C5943A9_H
#define GROUNDBUFFMESS_T54D29B9FF8F7CC25852D78471E0C4A664C5943A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.GroundBuffMess
struct  GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.GroundBuffMess::id
	uint64_t ___id_0;
	// System.Int32 MSG_Common.GroundBuffMess::modelId
	int32_t ___modelId_1;
	// System.Single MSG_Common.GroundBuffMess::x
	float ___x_2;
	// System.Single MSG_Common.GroundBuffMess::y
	float ___y_3;
	// System.Single MSG_Common.GroundBuffMess::radius
	float ___radius_4;
	// System.Int32 MSG_Common.GroundBuffMess::actType
	int32_t ___actType_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_modelId_1() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___modelId_1)); }
	inline int32_t get_modelId_1() const { return ___modelId_1; }
	inline int32_t* get_address_of_modelId_1() { return &___modelId_1; }
	inline void set_modelId_1(int32_t value)
	{
		___modelId_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_actType_5() { return static_cast<int32_t>(offsetof(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9, ___actType_5)); }
	inline int32_t get_actType_5() const { return ___actType_5; }
	inline int32_t* get_address_of_actType_5() { return &___actType_5; }
	inline void set_actType_5(int32_t value)
	{
		___actType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUNDBUFFMESS_T54D29B9FF8F7CC25852D78471E0C4A664C5943A9_H
#ifndef HEADATTRIBUTE_T1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176_H
#define HEADATTRIBUTE_T1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.HeadAttribute
struct  HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.HeadAttribute::fashionHead
	int32_t ___fashionHead_0;
	// System.Int32 MSG_Common.HeadAttribute::fashionFrame
	int32_t ___fashionFrame_1;
	// System.String MSG_Common.HeadAttribute::customHeadPath
	String_t* ___customHeadPath_2;
	// System.Boolean MSG_Common.HeadAttribute::useCustomHead
	bool ___useCustomHead_3;

public:
	inline static int32_t get_offset_of_fashionHead_0() { return static_cast<int32_t>(offsetof(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176, ___fashionHead_0)); }
	inline int32_t get_fashionHead_0() const { return ___fashionHead_0; }
	inline int32_t* get_address_of_fashionHead_0() { return &___fashionHead_0; }
	inline void set_fashionHead_0(int32_t value)
	{
		___fashionHead_0 = value;
	}

	inline static int32_t get_offset_of_fashionFrame_1() { return static_cast<int32_t>(offsetof(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176, ___fashionFrame_1)); }
	inline int32_t get_fashionFrame_1() const { return ___fashionFrame_1; }
	inline int32_t* get_address_of_fashionFrame_1() { return &___fashionFrame_1; }
	inline void set_fashionFrame_1(int32_t value)
	{
		___fashionFrame_1 = value;
	}

	inline static int32_t get_offset_of_customHeadPath_2() { return static_cast<int32_t>(offsetof(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176, ___customHeadPath_2)); }
	inline String_t* get_customHeadPath_2() const { return ___customHeadPath_2; }
	inline String_t** get_address_of_customHeadPath_2() { return &___customHeadPath_2; }
	inline void set_customHeadPath_2(String_t* value)
	{
		___customHeadPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___customHeadPath_2), value);
	}

	inline static int32_t get_offset_of_useCustomHead_3() { return static_cast<int32_t>(offsetof(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176, ___useCustomHead_3)); }
	inline bool get_useCustomHead_3() const { return ___useCustomHead_3; }
	inline bool* get_address_of_useCustomHead_3() { return &___useCustomHead_3; }
	inline void set_useCustomHead_3(bool value)
	{
		___useCustomHead_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADATTRIBUTE_T1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176_H
#ifndef KEYVALUEINFO_T5B558EF676B5789D9C28E0E6C0B4DF47108DD314_H
#define KEYVALUEINFO_T5B558EF676B5789D9C28E0E6C0B4DF47108DD314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.KeyValueInfo
struct  KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314  : public RuntimeObject
{
public:
	// System.String MSG_Common.KeyValueInfo::key
	String_t* ___key_0;
	// System.String MSG_Common.KeyValueInfo::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314, ___value_1)); }
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
#endif // KEYVALUEINFO_T5B558EF676B5789D9C28E0E6C0B4DF47108DD314_H
#ifndef MAGIC_TBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98_H
#define MAGIC_TBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.Magic
struct  Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.Magic::id
	uint64_t ___id_0;
	// System.String MSG_Common.Magic::modelId
	String_t* ___modelId_1;
	// System.Single MSG_Common.Magic::x
	float ___x_2;
	// System.Single MSG_Common.Magic::y
	float ___y_3;
	// System.Int32 MSG_Common.Magic::delay
	int32_t ___delay_4;
	// System.Single MSG_Common.Magic::radius
	float ___radius_5;
	// System.UInt64 MSG_Common.Magic::ownerId
	uint64_t ___ownerId_6;
	// System.Int32 MSG_Common.Magic::moveSpeedFinal
	int32_t ___moveSpeedFinal_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_modelId_1() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___modelId_1)); }
	inline String_t* get_modelId_1() const { return ___modelId_1; }
	inline String_t** get_address_of_modelId_1() { return &___modelId_1; }
	inline void set_modelId_1(String_t* value)
	{
		___modelId_1 = value;
		Il2CppCodeGenWriteBarrier((&___modelId_1), value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___delay_4)); }
	inline int32_t get_delay_4() const { return ___delay_4; }
	inline int32_t* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(int32_t value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___radius_5)); }
	inline float get_radius_5() const { return ___radius_5; }
	inline float* get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(float value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_ownerId_6() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___ownerId_6)); }
	inline uint64_t get_ownerId_6() const { return ___ownerId_6; }
	inline uint64_t* get_address_of_ownerId_6() { return &___ownerId_6; }
	inline void set_ownerId_6(uint64_t value)
	{
		___ownerId_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeedFinal_7() { return static_cast<int32_t>(offsetof(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98, ___moveSpeedFinal_7)); }
	inline int32_t get_moveSpeedFinal_7() const { return ___moveSpeedFinal_7; }
	inline int32_t* get_address_of_moveSpeedFinal_7() { return &___moveSpeedFinal_7; }
	inline void set_moveSpeedFinal_7(int32_t value)
	{
		___moveSpeedFinal_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAGIC_TBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98_H
#ifndef MONSTERINFO_T1A2BB530915CBD51D04D91B784479CEF8EDBA8DE_H
#define MONSTERINFO_T1A2BB530915CBD51D04D91B784479CEF8EDBA8DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.MonsterInfo
struct  MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.MonsterInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Common.MonsterInfo::dataID
	int32_t ___dataID_1;
	// System.Int32 MSG_Common.MonsterInfo::camp
	int32_t ___camp_2;
	// System.Single MSG_Common.MonsterInfo::x
	float ___x_3;
	// System.Single MSG_Common.MonsterInfo::y
	float ___y_4;
	// System.UInt64 MSG_Common.MonsterInfo::curHp
	uint64_t ___curHp_5;
	// System.UInt64 MSG_Common.MonsterInfo::maxHp
	uint64_t ___maxHp_6;
	// System.Int32 MSG_Common.MonsterInfo::moveSpeedFinal
	int32_t ___moveSpeedFinal_7;
	// System.Int32 MSG_Common.MonsterInfo::attackSpeedFinal
	int32_t ___attackSpeedFinal_8;
	// System.Int32 MSG_Common.MonsterInfo::fightState
	int32_t ___fightState_9;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Common.MonsterInfo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_10;
	// System.Collections.Generic.List`1<MSG_Common.Buff> MSG_Common.MonsterInfo::buffList
	List_1_t8D860447696358734A1DC5300E2B81407398DB71 * ___buffList_11;
	// System.Single MSG_Common.MonsterInfo::dirX
	float ___dirX_12;
	// System.Single MSG_Common.MonsterInfo::dirY
	float ___dirY_13;
	// System.Boolean MSG_Common.MonsterInfo::isRun
	bool ___isRun_14;
	// System.Boolean MSG_Common.MonsterInfo::isbirth
	bool ___isbirth_15;
	// System.Int32 MSG_Common.MonsterInfo::armor
	int32_t ___armor_16;
	// System.Collections.Generic.List`1<System.Int64> MSG_Common.MonsterInfo::dropUserIds
	List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * ___dropUserIds_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_dataID_1() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___dataID_1)); }
	inline int32_t get_dataID_1() const { return ___dataID_1; }
	inline int32_t* get_address_of_dataID_1() { return &___dataID_1; }
	inline void set_dataID_1(int32_t value)
	{
		___dataID_1 = value;
	}

	inline static int32_t get_offset_of_camp_2() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___camp_2)); }
	inline int32_t get_camp_2() const { return ___camp_2; }
	inline int32_t* get_address_of_camp_2() { return &___camp_2; }
	inline void set_camp_2(int32_t value)
	{
		___camp_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_curHp_5() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___curHp_5)); }
	inline uint64_t get_curHp_5() const { return ___curHp_5; }
	inline uint64_t* get_address_of_curHp_5() { return &___curHp_5; }
	inline void set_curHp_5(uint64_t value)
	{
		___curHp_5 = value;
	}

	inline static int32_t get_offset_of_maxHp_6() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___maxHp_6)); }
	inline uint64_t get_maxHp_6() const { return ___maxHp_6; }
	inline uint64_t* get_address_of_maxHp_6() { return &___maxHp_6; }
	inline void set_maxHp_6(uint64_t value)
	{
		___maxHp_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeedFinal_7() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___moveSpeedFinal_7)); }
	inline int32_t get_moveSpeedFinal_7() const { return ___moveSpeedFinal_7; }
	inline int32_t* get_address_of_moveSpeedFinal_7() { return &___moveSpeedFinal_7; }
	inline void set_moveSpeedFinal_7(int32_t value)
	{
		___moveSpeedFinal_7 = value;
	}

	inline static int32_t get_offset_of_attackSpeedFinal_8() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___attackSpeedFinal_8)); }
	inline int32_t get_attackSpeedFinal_8() const { return ___attackSpeedFinal_8; }
	inline int32_t* get_address_of_attackSpeedFinal_8() { return &___attackSpeedFinal_8; }
	inline void set_attackSpeedFinal_8(int32_t value)
	{
		___attackSpeedFinal_8 = value;
	}

	inline static int32_t get_offset_of_fightState_9() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___fightState_9)); }
	inline int32_t get_fightState_9() const { return ___fightState_9; }
	inline int32_t* get_address_of_fightState_9() { return &___fightState_9; }
	inline void set_fightState_9(int32_t value)
	{
		___fightState_9 = value;
	}

	inline static int32_t get_offset_of_posList_10() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___posList_10)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_10() const { return ___posList_10; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_10() { return &___posList_10; }
	inline void set_posList_10(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_10 = value;
		Il2CppCodeGenWriteBarrier((&___posList_10), value);
	}

	inline static int32_t get_offset_of_buffList_11() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___buffList_11)); }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 * get_buffList_11() const { return ___buffList_11; }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 ** get_address_of_buffList_11() { return &___buffList_11; }
	inline void set_buffList_11(List_1_t8D860447696358734A1DC5300E2B81407398DB71 * value)
	{
		___buffList_11 = value;
		Il2CppCodeGenWriteBarrier((&___buffList_11), value);
	}

	inline static int32_t get_offset_of_dirX_12() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___dirX_12)); }
	inline float get_dirX_12() const { return ___dirX_12; }
	inline float* get_address_of_dirX_12() { return &___dirX_12; }
	inline void set_dirX_12(float value)
	{
		___dirX_12 = value;
	}

	inline static int32_t get_offset_of_dirY_13() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___dirY_13)); }
	inline float get_dirY_13() const { return ___dirY_13; }
	inline float* get_address_of_dirY_13() { return &___dirY_13; }
	inline void set_dirY_13(float value)
	{
		___dirY_13 = value;
	}

	inline static int32_t get_offset_of_isRun_14() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___isRun_14)); }
	inline bool get_isRun_14() const { return ___isRun_14; }
	inline bool* get_address_of_isRun_14() { return &___isRun_14; }
	inline void set_isRun_14(bool value)
	{
		___isRun_14 = value;
	}

	inline static int32_t get_offset_of_isbirth_15() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___isbirth_15)); }
	inline bool get_isbirth_15() const { return ___isbirth_15; }
	inline bool* get_address_of_isbirth_15() { return &___isbirth_15; }
	inline void set_isbirth_15(bool value)
	{
		___isbirth_15 = value;
	}

	inline static int32_t get_offset_of_armor_16() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___armor_16)); }
	inline int32_t get_armor_16() const { return ___armor_16; }
	inline int32_t* get_address_of_armor_16() { return &___armor_16; }
	inline void set_armor_16(int32_t value)
	{
		___armor_16 = value;
	}

	inline static int32_t get_offset_of_dropUserIds_17() { return static_cast<int32_t>(offsetof(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE, ___dropUserIds_17)); }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * get_dropUserIds_17() const { return ___dropUserIds_17; }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D ** get_address_of_dropUserIds_17() { return &___dropUserIds_17; }
	inline void set_dropUserIds_17(List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * value)
	{
		___dropUserIds_17 = value;
		Il2CppCodeGenWriteBarrier((&___dropUserIds_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERINFO_T1A2BB530915CBD51D04D91B784479CEF8EDBA8DE_H
#ifndef NEARPLAYERINFO_TE56834194A8FD72EB5A920B7A1F5426A766FE074_H
#define NEARPLAYERINFO_TE56834194A8FD72EB5A920B7A1F5426A766FE074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.NearPlayerInfo
struct  NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.NearPlayerInfo::memberId
	uint64_t ___memberId_0;
	// System.String MSG_Common.NearPlayerInfo::memberName
	String_t* ___memberName_1;
	// System.Int32 MSG_Common.NearPlayerInfo::memberLv
	int32_t ___memberLv_2;
	// System.Int64 MSG_Common.NearPlayerInfo::memberFighting
	int64_t ___memberFighting_3;
	// System.Int32 MSG_Common.NearPlayerInfo::memberMapId
	int32_t ___memberMapId_4;
	// System.Int32 MSG_Common.NearPlayerInfo::memberLine
	int32_t ___memberLine_5;
	// System.Int32 MSG_Common.NearPlayerInfo::career
	int32_t ___career_6;
	// System.Boolean MSG_Common.NearPlayerInfo::haveTeam
	bool ___haveTeam_7;
	// System.Int32 MSG_Common.NearPlayerInfo::mrank
	int32_t ___mrank_8;

public:
	inline static int32_t get_offset_of_memberId_0() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberId_0)); }
	inline uint64_t get_memberId_0() const { return ___memberId_0; }
	inline uint64_t* get_address_of_memberId_0() { return &___memberId_0; }
	inline void set_memberId_0(uint64_t value)
	{
		___memberId_0 = value;
	}

	inline static int32_t get_offset_of_memberName_1() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberName_1)); }
	inline String_t* get_memberName_1() const { return ___memberName_1; }
	inline String_t** get_address_of_memberName_1() { return &___memberName_1; }
	inline void set_memberName_1(String_t* value)
	{
		___memberName_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberName_1), value);
	}

	inline static int32_t get_offset_of_memberLv_2() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberLv_2)); }
	inline int32_t get_memberLv_2() const { return ___memberLv_2; }
	inline int32_t* get_address_of_memberLv_2() { return &___memberLv_2; }
	inline void set_memberLv_2(int32_t value)
	{
		___memberLv_2 = value;
	}

	inline static int32_t get_offset_of_memberFighting_3() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberFighting_3)); }
	inline int64_t get_memberFighting_3() const { return ___memberFighting_3; }
	inline int64_t* get_address_of_memberFighting_3() { return &___memberFighting_3; }
	inline void set_memberFighting_3(int64_t value)
	{
		___memberFighting_3 = value;
	}

	inline static int32_t get_offset_of_memberMapId_4() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberMapId_4)); }
	inline int32_t get_memberMapId_4() const { return ___memberMapId_4; }
	inline int32_t* get_address_of_memberMapId_4() { return &___memberMapId_4; }
	inline void set_memberMapId_4(int32_t value)
	{
		___memberMapId_4 = value;
	}

	inline static int32_t get_offset_of_memberLine_5() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___memberLine_5)); }
	inline int32_t get_memberLine_5() const { return ___memberLine_5; }
	inline int32_t* get_address_of_memberLine_5() { return &___memberLine_5; }
	inline void set_memberLine_5(int32_t value)
	{
		___memberLine_5 = value;
	}

	inline static int32_t get_offset_of_career_6() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___career_6)); }
	inline int32_t get_career_6() const { return ___career_6; }
	inline int32_t* get_address_of_career_6() { return &___career_6; }
	inline void set_career_6(int32_t value)
	{
		___career_6 = value;
	}

	inline static int32_t get_offset_of_haveTeam_7() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___haveTeam_7)); }
	inline bool get_haveTeam_7() const { return ___haveTeam_7; }
	inline bool* get_address_of_haveTeam_7() { return &___haveTeam_7; }
	inline void set_haveTeam_7(bool value)
	{
		___haveTeam_7 = value;
	}

	inline static int32_t get_offset_of_mrank_8() { return static_cast<int32_t>(offsetof(NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074, ___mrank_8)); }
	inline int32_t get_mrank_8() const { return ___mrank_8; }
	inline int32_t* get_address_of_mrank_8() { return &___mrank_8; }
	inline void set_mrank_8(int32_t value)
	{
		___mrank_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEARPLAYERINFO_TE56834194A8FD72EB5A920B7A1F5426A766FE074_H
#ifndef NPCINFO_TE0095145999FD2285BA2A248A23561CE52687AD6_H
#define NPCINFO_TE0095145999FD2285BA2A248A23561CE52687AD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.NpcInfo
struct  NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.NpcInfo::npcId
	uint64_t ___npcId_0;
	// System.Int32 MSG_Common.NpcInfo::dataID
	int32_t ___dataID_1;
	// System.Single MSG_Common.NpcInfo::x
	float ___x_2;
	// System.Single MSG_Common.NpcInfo::y
	float ___y_3;
	// System.Int32 MSG_Common.NpcInfo::dir
	int32_t ___dir_4;

public:
	inline static int32_t get_offset_of_npcId_0() { return static_cast<int32_t>(offsetof(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6, ___npcId_0)); }
	inline uint64_t get_npcId_0() const { return ___npcId_0; }
	inline uint64_t* get_address_of_npcId_0() { return &___npcId_0; }
	inline void set_npcId_0(uint64_t value)
	{
		___npcId_0 = value;
	}

	inline static int32_t get_offset_of_dataID_1() { return static_cast<int32_t>(offsetof(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6, ___dataID_1)); }
	inline int32_t get_dataID_1() const { return ___dataID_1; }
	inline int32_t* get_address_of_dataID_1() { return &___dataID_1; }
	inline void set_dataID_1(int32_t value)
	{
		___dataID_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_dir_4() { return static_cast<int32_t>(offsetof(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6, ___dir_4)); }
	inline int32_t get_dir_4() const { return ___dir_4; }
	inline int32_t* get_address_of_dir_4() { return &___dir_4; }
	inline void set_dir_4(int32_t value)
	{
		___dir_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NPCINFO_TE0095145999FD2285BA2A248A23561CE52687AD6_H
#ifndef PETINFO_TADD6023120A0E9B2F274EFA006B555B434835FAB_H
#define PETINFO_TADD6023120A0E9B2F274EFA006B555B434835FAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.PetInfo
struct  PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.PetInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Common.PetInfo::dataID
	int32_t ___dataID_1;
	// System.UInt64 MSG_Common.PetInfo::ownerID
	uint64_t ___ownerID_2;
	// System.String MSG_Common.PetInfo::ownerName
	String_t* ___ownerName_3;
	// System.Single MSG_Common.PetInfo::x
	float ___x_4;
	// System.Single MSG_Common.PetInfo::y
	float ___y_5;
	// System.Int32 MSG_Common.PetInfo::speed
	int32_t ___speed_6;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Common.PetInfo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_7;
	// System.Int32 MSG_Common.PetInfo::level
	int32_t ___level_8;
	// System.Int32 MSG_Common.PetInfo::camp
	int32_t ___camp_9;
	// System.UInt64 MSG_Common.PetInfo::curHp
	uint64_t ___curHp_10;
	// System.UInt64 MSG_Common.PetInfo::maxHp
	uint64_t ___maxHp_11;
	// System.Int32 MSG_Common.PetInfo::fightState
	int32_t ___fightState_12;
	// System.Collections.Generic.List`1<MSG_Common.Buff> MSG_Common.PetInfo::buffList
	List_1_t8D860447696358734A1DC5300E2B81407398DB71 * ___buffList_13;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_dataID_1() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___dataID_1)); }
	inline int32_t get_dataID_1() const { return ___dataID_1; }
	inline int32_t* get_address_of_dataID_1() { return &___dataID_1; }
	inline void set_dataID_1(int32_t value)
	{
		___dataID_1 = value;
	}

	inline static int32_t get_offset_of_ownerID_2() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___ownerID_2)); }
	inline uint64_t get_ownerID_2() const { return ___ownerID_2; }
	inline uint64_t* get_address_of_ownerID_2() { return &___ownerID_2; }
	inline void set_ownerID_2(uint64_t value)
	{
		___ownerID_2 = value;
	}

	inline static int32_t get_offset_of_ownerName_3() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___ownerName_3)); }
	inline String_t* get_ownerName_3() const { return ___ownerName_3; }
	inline String_t** get_address_of_ownerName_3() { return &___ownerName_3; }
	inline void set_ownerName_3(String_t* value)
	{
		___ownerName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ownerName_3), value);
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___speed_6)); }
	inline int32_t get_speed_6() const { return ___speed_6; }
	inline int32_t* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(int32_t value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_posList_7() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___posList_7)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_7() const { return ___posList_7; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_7() { return &___posList_7; }
	inline void set_posList_7(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_7 = value;
		Il2CppCodeGenWriteBarrier((&___posList_7), value);
	}

	inline static int32_t get_offset_of_level_8() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___level_8)); }
	inline int32_t get_level_8() const { return ___level_8; }
	inline int32_t* get_address_of_level_8() { return &___level_8; }
	inline void set_level_8(int32_t value)
	{
		___level_8 = value;
	}

	inline static int32_t get_offset_of_camp_9() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___camp_9)); }
	inline int32_t get_camp_9() const { return ___camp_9; }
	inline int32_t* get_address_of_camp_9() { return &___camp_9; }
	inline void set_camp_9(int32_t value)
	{
		___camp_9 = value;
	}

	inline static int32_t get_offset_of_curHp_10() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___curHp_10)); }
	inline uint64_t get_curHp_10() const { return ___curHp_10; }
	inline uint64_t* get_address_of_curHp_10() { return &___curHp_10; }
	inline void set_curHp_10(uint64_t value)
	{
		___curHp_10 = value;
	}

	inline static int32_t get_offset_of_maxHp_11() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___maxHp_11)); }
	inline uint64_t get_maxHp_11() const { return ___maxHp_11; }
	inline uint64_t* get_address_of_maxHp_11() { return &___maxHp_11; }
	inline void set_maxHp_11(uint64_t value)
	{
		___maxHp_11 = value;
	}

	inline static int32_t get_offset_of_fightState_12() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___fightState_12)); }
	inline int32_t get_fightState_12() const { return ___fightState_12; }
	inline int32_t* get_address_of_fightState_12() { return &___fightState_12; }
	inline void set_fightState_12(int32_t value)
	{
		___fightState_12 = value;
	}

	inline static int32_t get_offset_of_buffList_13() { return static_cast<int32_t>(offsetof(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB, ___buffList_13)); }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 * get_buffList_13() const { return ___buffList_13; }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 ** get_address_of_buffList_13() { return &___buffList_13; }
	inline void set_buffList_13(List_1_t8D860447696358734A1DC5300E2B81407398DB71 * value)
	{
		___buffList_13 = value;
		Il2CppCodeGenWriteBarrier((&___buffList_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PETINFO_TADD6023120A0E9B2F274EFA006B555B434835FAB_H
#ifndef PLAYERINFO_TB88B560FE8DE909A88896FAC5ABFDD47F3750A8B_H
#define PLAYERINFO_TB88B560FE8DE909A88896FAC5ABFDD47F3750A8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.PlayerInfo
struct  PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.PlayerInfo::playerId
	uint64_t ___playerId_0;
	// System.String MSG_Common.PlayerInfo::name
	String_t* ___name_1;
	// System.Int32 MSG_Common.PlayerInfo::career
	int32_t ___career_2;
	// System.Int32 MSG_Common.PlayerInfo::level
	int32_t ___level_3;
	// System.Single MSG_Common.PlayerInfo::x
	float ___x_4;
	// System.Single MSG_Common.PlayerInfo::y
	float ___y_5;
	// System.UInt64 MSG_Common.PlayerInfo::curHp
	uint64_t ___curHp_6;
	// System.UInt64 MSG_Common.PlayerInfo::maxHp
	uint64_t ___maxHp_7;
	// System.Int32 MSG_Common.PlayerInfo::moveSpeedFinal
	int32_t ___moveSpeedFinal_8;
	// System.Int32 MSG_Common.PlayerInfo::attackSpeedFinal
	int32_t ___attackSpeedFinal_9;
	// System.Int32 MSG_Common.PlayerInfo::mountId
	int32_t ___mountId_10;
	// System.UInt64 MSG_Common.PlayerInfo::guildId
	uint64_t ___guildId_11;
	// System.String MSG_Common.PlayerInfo::guildName
	String_t* ___guildName_12;
	// System.Int32 MSG_Common.PlayerInfo::guildPost
	int32_t ___guildPost_13;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Common.PlayerInfo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_14;
	// System.Collections.Generic.List`1<MSG_Common.Buff> MSG_Common.PlayerInfo::buffList
	List_1_t8D860447696358734A1DC5300E2B81407398DB71 * ___buffList_15;
	// System.Int32 MSG_Common.PlayerInfo::title
	int32_t ___title_16;
	// System.Single MSG_Common.PlayerInfo::dirX
	float ___dirX_17;
	// System.Single MSG_Common.PlayerInfo::dirY
	float ___dirY_18;
	// System.Boolean MSG_Common.PlayerInfo::isGather
	bool ___isGather_19;
	// System.String MSG_Common.PlayerInfo::marriageOtherName
	String_t* ___marriageOtherName_20;
	// System.Int32 MSG_Common.PlayerInfo::stateVip
	int32_t ___stateVip_21;
	// System.Boolean MSG_Common.PlayerInfo::onSitting
	bool ___onSitting_22;
	// System.Int32 MSG_Common.PlayerInfo::camp
	int32_t ___camp_23;
	// System.Int32 MSG_Common.PlayerInfo::fabaoId
	int32_t ___fabaoId_24;
	// System.Int64 MSG_Common.PlayerInfo::fabaoUid
	int64_t ___fabaoUid_25;
	// System.Int32 MSG_Common.PlayerInfo::soulSpirte1
	int32_t ___soulSpirte1_26;
	// System.Int32 MSG_Common.PlayerInfo::soulSpirte2
	int32_t ___soulSpirte2_27;
	// System.Int32 MSG_Common.PlayerInfo::soulSpirte3
	int32_t ___soulSpirte3_28;
	// System.Int32 MSG_Common.PlayerInfo::shiHaiCfgId
	int32_t ___shiHaiCfgId_29;
	// System.Int32 MSG_Common.PlayerInfo::serverId
	int32_t ___serverId_30;
	// System.Int64 MSG_Common.PlayerInfo::curWakan
	int64_t ___curWakan_31;
	// System.Int64 MSG_Common.PlayerInfo::maxWakan
	int64_t ___maxWakan_32;
	// MSG_Common.FacadeAttribute MSG_Common.PlayerInfo::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_33;
	// System.Int32 MSG_Common.PlayerInfo::fightState
	int32_t ___fightState_34;
	// System.Int32 MSG_Common.PlayerInfo::feijianId
	int32_t ___feijianId_35;
	// System.Int64 MSG_Common.PlayerInfo::feijianUid
	int64_t ___feijianUid_36;
	// System.Int32 MSG_Common.PlayerInfo::childId
	int32_t ___childId_37;
	// System.Int32 MSG_Common.PlayerInfo::fightPower
	int32_t ___fightPower_38;
	// MSG_Common.HeadAttribute MSG_Common.PlayerInfo::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_39;
	// System.String MSG_Common.PlayerInfo::childName
	String_t* ___childName_40;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___playerId_0)); }
	inline uint64_t get_playerId_0() const { return ___playerId_0; }
	inline uint64_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(uint64_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_career_2() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___career_2)); }
	inline int32_t get_career_2() const { return ___career_2; }
	inline int32_t* get_address_of_career_2() { return &___career_2; }
	inline void set_career_2(int32_t value)
	{
		___career_2 = value;
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___level_3)); }
	inline int32_t get_level_3() const { return ___level_3; }
	inline int32_t* get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(int32_t value)
	{
		___level_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_curHp_6() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___curHp_6)); }
	inline uint64_t get_curHp_6() const { return ___curHp_6; }
	inline uint64_t* get_address_of_curHp_6() { return &___curHp_6; }
	inline void set_curHp_6(uint64_t value)
	{
		___curHp_6 = value;
	}

	inline static int32_t get_offset_of_maxHp_7() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___maxHp_7)); }
	inline uint64_t get_maxHp_7() const { return ___maxHp_7; }
	inline uint64_t* get_address_of_maxHp_7() { return &___maxHp_7; }
	inline void set_maxHp_7(uint64_t value)
	{
		___maxHp_7 = value;
	}

	inline static int32_t get_offset_of_moveSpeedFinal_8() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___moveSpeedFinal_8)); }
	inline int32_t get_moveSpeedFinal_8() const { return ___moveSpeedFinal_8; }
	inline int32_t* get_address_of_moveSpeedFinal_8() { return &___moveSpeedFinal_8; }
	inline void set_moveSpeedFinal_8(int32_t value)
	{
		___moveSpeedFinal_8 = value;
	}

	inline static int32_t get_offset_of_attackSpeedFinal_9() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___attackSpeedFinal_9)); }
	inline int32_t get_attackSpeedFinal_9() const { return ___attackSpeedFinal_9; }
	inline int32_t* get_address_of_attackSpeedFinal_9() { return &___attackSpeedFinal_9; }
	inline void set_attackSpeedFinal_9(int32_t value)
	{
		___attackSpeedFinal_9 = value;
	}

	inline static int32_t get_offset_of_mountId_10() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___mountId_10)); }
	inline int32_t get_mountId_10() const { return ___mountId_10; }
	inline int32_t* get_address_of_mountId_10() { return &___mountId_10; }
	inline void set_mountId_10(int32_t value)
	{
		___mountId_10 = value;
	}

	inline static int32_t get_offset_of_guildId_11() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___guildId_11)); }
	inline uint64_t get_guildId_11() const { return ___guildId_11; }
	inline uint64_t* get_address_of_guildId_11() { return &___guildId_11; }
	inline void set_guildId_11(uint64_t value)
	{
		___guildId_11 = value;
	}

	inline static int32_t get_offset_of_guildName_12() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___guildName_12)); }
	inline String_t* get_guildName_12() const { return ___guildName_12; }
	inline String_t** get_address_of_guildName_12() { return &___guildName_12; }
	inline void set_guildName_12(String_t* value)
	{
		___guildName_12 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_12), value);
	}

	inline static int32_t get_offset_of_guildPost_13() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___guildPost_13)); }
	inline int32_t get_guildPost_13() const { return ___guildPost_13; }
	inline int32_t* get_address_of_guildPost_13() { return &___guildPost_13; }
	inline void set_guildPost_13(int32_t value)
	{
		___guildPost_13 = value;
	}

	inline static int32_t get_offset_of_posList_14() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___posList_14)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_14() const { return ___posList_14; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_14() { return &___posList_14; }
	inline void set_posList_14(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_14 = value;
		Il2CppCodeGenWriteBarrier((&___posList_14), value);
	}

	inline static int32_t get_offset_of_buffList_15() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___buffList_15)); }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 * get_buffList_15() const { return ___buffList_15; }
	inline List_1_t8D860447696358734A1DC5300E2B81407398DB71 ** get_address_of_buffList_15() { return &___buffList_15; }
	inline void set_buffList_15(List_1_t8D860447696358734A1DC5300E2B81407398DB71 * value)
	{
		___buffList_15 = value;
		Il2CppCodeGenWriteBarrier((&___buffList_15), value);
	}

	inline static int32_t get_offset_of_title_16() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___title_16)); }
	inline int32_t get_title_16() const { return ___title_16; }
	inline int32_t* get_address_of_title_16() { return &___title_16; }
	inline void set_title_16(int32_t value)
	{
		___title_16 = value;
	}

	inline static int32_t get_offset_of_dirX_17() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___dirX_17)); }
	inline float get_dirX_17() const { return ___dirX_17; }
	inline float* get_address_of_dirX_17() { return &___dirX_17; }
	inline void set_dirX_17(float value)
	{
		___dirX_17 = value;
	}

	inline static int32_t get_offset_of_dirY_18() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___dirY_18)); }
	inline float get_dirY_18() const { return ___dirY_18; }
	inline float* get_address_of_dirY_18() { return &___dirY_18; }
	inline void set_dirY_18(float value)
	{
		___dirY_18 = value;
	}

	inline static int32_t get_offset_of_isGather_19() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___isGather_19)); }
	inline bool get_isGather_19() const { return ___isGather_19; }
	inline bool* get_address_of_isGather_19() { return &___isGather_19; }
	inline void set_isGather_19(bool value)
	{
		___isGather_19 = value;
	}

	inline static int32_t get_offset_of_marriageOtherName_20() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___marriageOtherName_20)); }
	inline String_t* get_marriageOtherName_20() const { return ___marriageOtherName_20; }
	inline String_t** get_address_of_marriageOtherName_20() { return &___marriageOtherName_20; }
	inline void set_marriageOtherName_20(String_t* value)
	{
		___marriageOtherName_20 = value;
		Il2CppCodeGenWriteBarrier((&___marriageOtherName_20), value);
	}

	inline static int32_t get_offset_of_stateVip_21() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___stateVip_21)); }
	inline int32_t get_stateVip_21() const { return ___stateVip_21; }
	inline int32_t* get_address_of_stateVip_21() { return &___stateVip_21; }
	inline void set_stateVip_21(int32_t value)
	{
		___stateVip_21 = value;
	}

	inline static int32_t get_offset_of_onSitting_22() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___onSitting_22)); }
	inline bool get_onSitting_22() const { return ___onSitting_22; }
	inline bool* get_address_of_onSitting_22() { return &___onSitting_22; }
	inline void set_onSitting_22(bool value)
	{
		___onSitting_22 = value;
	}

	inline static int32_t get_offset_of_camp_23() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___camp_23)); }
	inline int32_t get_camp_23() const { return ___camp_23; }
	inline int32_t* get_address_of_camp_23() { return &___camp_23; }
	inline void set_camp_23(int32_t value)
	{
		___camp_23 = value;
	}

	inline static int32_t get_offset_of_fabaoId_24() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___fabaoId_24)); }
	inline int32_t get_fabaoId_24() const { return ___fabaoId_24; }
	inline int32_t* get_address_of_fabaoId_24() { return &___fabaoId_24; }
	inline void set_fabaoId_24(int32_t value)
	{
		___fabaoId_24 = value;
	}

	inline static int32_t get_offset_of_fabaoUid_25() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___fabaoUid_25)); }
	inline int64_t get_fabaoUid_25() const { return ___fabaoUid_25; }
	inline int64_t* get_address_of_fabaoUid_25() { return &___fabaoUid_25; }
	inline void set_fabaoUid_25(int64_t value)
	{
		___fabaoUid_25 = value;
	}

	inline static int32_t get_offset_of_soulSpirte1_26() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___soulSpirte1_26)); }
	inline int32_t get_soulSpirte1_26() const { return ___soulSpirte1_26; }
	inline int32_t* get_address_of_soulSpirte1_26() { return &___soulSpirte1_26; }
	inline void set_soulSpirte1_26(int32_t value)
	{
		___soulSpirte1_26 = value;
	}

	inline static int32_t get_offset_of_soulSpirte2_27() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___soulSpirte2_27)); }
	inline int32_t get_soulSpirte2_27() const { return ___soulSpirte2_27; }
	inline int32_t* get_address_of_soulSpirte2_27() { return &___soulSpirte2_27; }
	inline void set_soulSpirte2_27(int32_t value)
	{
		___soulSpirte2_27 = value;
	}

	inline static int32_t get_offset_of_soulSpirte3_28() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___soulSpirte3_28)); }
	inline int32_t get_soulSpirte3_28() const { return ___soulSpirte3_28; }
	inline int32_t* get_address_of_soulSpirte3_28() { return &___soulSpirte3_28; }
	inline void set_soulSpirte3_28(int32_t value)
	{
		___soulSpirte3_28 = value;
	}

	inline static int32_t get_offset_of_shiHaiCfgId_29() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___shiHaiCfgId_29)); }
	inline int32_t get_shiHaiCfgId_29() const { return ___shiHaiCfgId_29; }
	inline int32_t* get_address_of_shiHaiCfgId_29() { return &___shiHaiCfgId_29; }
	inline void set_shiHaiCfgId_29(int32_t value)
	{
		___shiHaiCfgId_29 = value;
	}

	inline static int32_t get_offset_of_serverId_30() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___serverId_30)); }
	inline int32_t get_serverId_30() const { return ___serverId_30; }
	inline int32_t* get_address_of_serverId_30() { return &___serverId_30; }
	inline void set_serverId_30(int32_t value)
	{
		___serverId_30 = value;
	}

	inline static int32_t get_offset_of_curWakan_31() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___curWakan_31)); }
	inline int64_t get_curWakan_31() const { return ___curWakan_31; }
	inline int64_t* get_address_of_curWakan_31() { return &___curWakan_31; }
	inline void set_curWakan_31(int64_t value)
	{
		___curWakan_31 = value;
	}

	inline static int32_t get_offset_of_maxWakan_32() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___maxWakan_32)); }
	inline int64_t get_maxWakan_32() const { return ___maxWakan_32; }
	inline int64_t* get_address_of_maxWakan_32() { return &___maxWakan_32; }
	inline void set_maxWakan_32(int64_t value)
	{
		___maxWakan_32 = value;
	}

	inline static int32_t get_offset_of_facade_33() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___facade_33)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_33() const { return ___facade_33; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_33() { return &___facade_33; }
	inline void set_facade_33(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_33 = value;
		Il2CppCodeGenWriteBarrier((&___facade_33), value);
	}

	inline static int32_t get_offset_of_fightState_34() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___fightState_34)); }
	inline int32_t get_fightState_34() const { return ___fightState_34; }
	inline int32_t* get_address_of_fightState_34() { return &___fightState_34; }
	inline void set_fightState_34(int32_t value)
	{
		___fightState_34 = value;
	}

	inline static int32_t get_offset_of_feijianId_35() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___feijianId_35)); }
	inline int32_t get_feijianId_35() const { return ___feijianId_35; }
	inline int32_t* get_address_of_feijianId_35() { return &___feijianId_35; }
	inline void set_feijianId_35(int32_t value)
	{
		___feijianId_35 = value;
	}

	inline static int32_t get_offset_of_feijianUid_36() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___feijianUid_36)); }
	inline int64_t get_feijianUid_36() const { return ___feijianUid_36; }
	inline int64_t* get_address_of_feijianUid_36() { return &___feijianUid_36; }
	inline void set_feijianUid_36(int64_t value)
	{
		___feijianUid_36 = value;
	}

	inline static int32_t get_offset_of_childId_37() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___childId_37)); }
	inline int32_t get_childId_37() const { return ___childId_37; }
	inline int32_t* get_address_of_childId_37() { return &___childId_37; }
	inline void set_childId_37(int32_t value)
	{
		___childId_37 = value;
	}

	inline static int32_t get_offset_of_fightPower_38() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___fightPower_38)); }
	inline int32_t get_fightPower_38() const { return ___fightPower_38; }
	inline int32_t* get_address_of_fightPower_38() { return &___fightPower_38; }
	inline void set_fightPower_38(int32_t value)
	{
		___fightPower_38 = value;
	}

	inline static int32_t get_offset_of_head_39() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___head_39)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_39() const { return ___head_39; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_39() { return &___head_39; }
	inline void set_head_39(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_39 = value;
		Il2CppCodeGenWriteBarrier((&___head_39), value);
	}

	inline static int32_t get_offset_of_childName_40() { return static_cast<int32_t>(offsetof(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B, ___childName_40)); }
	inline String_t* get_childName_40() const { return ___childName_40; }
	inline String_t** get_address_of_childName_40() { return &___childName_40; }
	inline void set_childName_40(String_t* value)
	{
		___childName_40 = value;
		Il2CppCodeGenWriteBarrier((&___childName_40), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINFO_TB88B560FE8DE909A88896FAC5ABFDD47F3750A8B_H
#ifndef POSITION_T3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94_H
#define POSITION_T3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.Position
struct  Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94  : public RuntimeObject
{
public:
	// System.Single MSG_Common.Position::x
	float ___x_0;
	// System.Single MSG_Common.Position::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94_H
#ifndef SHOWITEMINFO_TFD1431833EABA0C03DF1131FF709BFB413183ED7_H
#define SHOWITEMINFO_TFD1431833EABA0C03DF1131FF709BFB413183ED7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.ShowItemInfo
struct  ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.ShowItemInfo::modelId
	int32_t ___modelId_0;
	// System.Int64 MSG_Common.ShowItemInfo::count
	int64_t ___count_1;

public:
	inline static int32_t get_offset_of_modelId_0() { return static_cast<int32_t>(offsetof(ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7, ___modelId_0)); }
	inline int32_t get_modelId_0() const { return ___modelId_0; }
	inline int32_t* get_address_of_modelId_0() { return &___modelId_0; }
	inline void set_modelId_0(int32_t value)
	{
		___modelId_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7, ___count_1)); }
	inline int64_t get_count_1() const { return ___count_1; }
	inline int64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int64_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWITEMINFO_TFD1431833EABA0C03DF1131FF709BFB413183ED7_H
#ifndef TOMBSTONEINFO_T715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273_H
#define TOMBSTONEINFO_T715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.TombstoneInfo
struct  TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Common.TombstoneInfo::id
	uint64_t ___id_0;
	// System.Int32 MSG_Common.TombstoneInfo::stoneId
	int32_t ___stoneId_1;
	// System.Single MSG_Common.TombstoneInfo::x
	float ___x_2;
	// System.Single MSG_Common.TombstoneInfo::y
	float ___y_3;
	// System.Int32 MSG_Common.TombstoneInfo::cd
	int32_t ___cd_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_stoneId_1() { return static_cast<int32_t>(offsetof(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273, ___stoneId_1)); }
	inline int32_t get_stoneId_1() const { return ___stoneId_1; }
	inline int32_t* get_address_of_stoneId_1() { return &___stoneId_1; }
	inline void set_stoneId_1(int32_t value)
	{
		___stoneId_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_cd_4() { return static_cast<int32_t>(offsetof(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273, ___cd_4)); }
	inline int32_t get_cd_4() const { return ___cd_4; }
	inline int32_t* get_address_of_cd_4() { return &___cd_4; }
	inline void set_cd_4(int32_t value)
	{
		___cd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOMBSTONEINFO_T715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273_H
#ifndef POWERATTRIBUTE_T6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB_H
#define POWERATTRIBUTE_T6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Common.powerAttribute
struct  powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB  : public RuntimeObject
{
public:
	// System.Int32 MSG_Common.powerAttribute::type
	int32_t ___type_0;
	// System.Int32 MSG_Common.powerAttribute::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB, ___value_1)); }
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
#endif // POWERATTRIBUTE_T6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB_H
#ifndef COMMUNITYLEAVEMESSAGEINFO_T9C2FDE4D6B84401177114770ADA2011B431D6CEB_H
#define COMMUNITYLEAVEMESSAGEINFO_T9C2FDE4D6B84401177114770ADA2011B431D6CEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.CommunityLeaveMessageInfo
struct  CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Community.CommunityLeaveMessageInfo::leaveMessageId
	uint64_t ___leaveMessageId_0;
	// System.String MSG_Community.CommunityLeaveMessageInfo::chatername
	String_t* ___chatername_1;
	// System.String MSG_Community.CommunityLeaveMessageInfo::condition
	String_t* ___condition_2;
	// System.Int32 MSG_Community.CommunityLeaveMessageInfo::time
	int32_t ___time_3;
	// System.Int32 MSG_Community.CommunityLeaveMessageInfo::level
	int32_t ___level_4;
	// System.Int32 MSG_Community.CommunityLeaveMessageInfo::chaterSid
	int32_t ___chaterSid_5;
	// System.Int32 MSG_Community.CommunityLeaveMessageInfo::career
	int32_t ___career_6;
	// System.UInt64 MSG_Community.CommunityLeaveMessageInfo::roleId
	uint64_t ___roleId_7;
	// MSG_Common.HeadAttribute MSG_Community.CommunityLeaveMessageInfo::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_8;

public:
	inline static int32_t get_offset_of_leaveMessageId_0() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___leaveMessageId_0)); }
	inline uint64_t get_leaveMessageId_0() const { return ___leaveMessageId_0; }
	inline uint64_t* get_address_of_leaveMessageId_0() { return &___leaveMessageId_0; }
	inline void set_leaveMessageId_0(uint64_t value)
	{
		___leaveMessageId_0 = value;
	}

	inline static int32_t get_offset_of_chatername_1() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___chatername_1)); }
	inline String_t* get_chatername_1() const { return ___chatername_1; }
	inline String_t** get_address_of_chatername_1() { return &___chatername_1; }
	inline void set_chatername_1(String_t* value)
	{
		___chatername_1 = value;
		Il2CppCodeGenWriteBarrier((&___chatername_1), value);
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier((&___condition_2), value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___time_3)); }
	inline int32_t get_time_3() const { return ___time_3; }
	inline int32_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int32_t value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}

	inline static int32_t get_offset_of_chaterSid_5() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___chaterSid_5)); }
	inline int32_t get_chaterSid_5() const { return ___chaterSid_5; }
	inline int32_t* get_address_of_chaterSid_5() { return &___chaterSid_5; }
	inline void set_chaterSid_5(int32_t value)
	{
		___chaterSid_5 = value;
	}

	inline static int32_t get_offset_of_career_6() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___career_6)); }
	inline int32_t get_career_6() const { return ___career_6; }
	inline int32_t* get_address_of_career_6() { return &___career_6; }
	inline void set_career_6(int32_t value)
	{
		___career_6 = value;
	}

	inline static int32_t get_offset_of_roleId_7() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___roleId_7)); }
	inline uint64_t get_roleId_7() const { return ___roleId_7; }
	inline uint64_t* get_address_of_roleId_7() { return &___roleId_7; }
	inline void set_roleId_7(uint64_t value)
	{
		___roleId_7 = value;
	}

	inline static int32_t get_offset_of_head_8() { return static_cast<int32_t>(offsetof(CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB, ___head_8)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_8() const { return ___head_8; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_8() { return &___head_8; }
	inline void set_head_8(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_8 = value;
		Il2CppCodeGenWriteBarrier((&___head_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMUNITYLEAVEMESSAGEINFO_T9C2FDE4D6B84401177114770ADA2011B431D6CEB_H
#ifndef FRIENDCIRCLEINFO_T0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8_H
#define FRIENDCIRCLEINFO_T0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.FriendCircleInfo
struct  FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Community.FriendCircleInfo::friendCircleId
	uint64_t ___friendCircleId_0;
	// System.String MSG_Community.FriendCircleInfo::condition
	String_t* ___condition_1;
	// System.Collections.Generic.List`1<MSG_Community.FriendCircleLeaveMessageInfo> MSG_Community.FriendCircleInfo::friendCircleLeaveMessageInfo
	List_1_t0D3EA0E72F735562853450644AAC1A1EB7FB1E84 * ___friendCircleLeaveMessageInfo_2;

public:
	inline static int32_t get_offset_of_friendCircleId_0() { return static_cast<int32_t>(offsetof(FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8, ___friendCircleId_0)); }
	inline uint64_t get_friendCircleId_0() const { return ___friendCircleId_0; }
	inline uint64_t* get_address_of_friendCircleId_0() { return &___friendCircleId_0; }
	inline void set_friendCircleId_0(uint64_t value)
	{
		___friendCircleId_0 = value;
	}

	inline static int32_t get_offset_of_condition_1() { return static_cast<int32_t>(offsetof(FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8, ___condition_1)); }
	inline String_t* get_condition_1() const { return ___condition_1; }
	inline String_t** get_address_of_condition_1() { return &___condition_1; }
	inline void set_condition_1(String_t* value)
	{
		___condition_1 = value;
		Il2CppCodeGenWriteBarrier((&___condition_1), value);
	}

	inline static int32_t get_offset_of_friendCircleLeaveMessageInfo_2() { return static_cast<int32_t>(offsetof(FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8, ___friendCircleLeaveMessageInfo_2)); }
	inline List_1_t0D3EA0E72F735562853450644AAC1A1EB7FB1E84 * get_friendCircleLeaveMessageInfo_2() const { return ___friendCircleLeaveMessageInfo_2; }
	inline List_1_t0D3EA0E72F735562853450644AAC1A1EB7FB1E84 ** get_address_of_friendCircleLeaveMessageInfo_2() { return &___friendCircleLeaveMessageInfo_2; }
	inline void set_friendCircleLeaveMessageInfo_2(List_1_t0D3EA0E72F735562853450644AAC1A1EB7FB1E84 * value)
	{
		___friendCircleLeaveMessageInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___friendCircleLeaveMessageInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDCIRCLEINFO_T0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8_H
#ifndef FRIENDCIRCLELEAVEMESSAGEINFO_T8D246323BA1AFA6208265576F71C28CCFE46448D_H
#define FRIENDCIRCLELEAVEMESSAGEINFO_T8D246323BA1AFA6208265576F71C28CCFE46448D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.FriendCircleLeaveMessageInfo
struct  FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D  : public RuntimeObject
{
public:
	// System.String MSG_Community.FriendCircleLeaveMessageInfo::chatername
	String_t* ___chatername_0;
	// System.String MSG_Community.FriendCircleLeaveMessageInfo::condition
	String_t* ___condition_1;

public:
	inline static int32_t get_offset_of_chatername_0() { return static_cast<int32_t>(offsetof(FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D, ___chatername_0)); }
	inline String_t* get_chatername_0() const { return ___chatername_0; }
	inline String_t** get_address_of_chatername_0() { return &___chatername_0; }
	inline void set_chatername_0(String_t* value)
	{
		___chatername_0 = value;
		Il2CppCodeGenWriteBarrier((&___chatername_0), value);
	}

	inline static int32_t get_offset_of_condition_1() { return static_cast<int32_t>(offsetof(FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D, ___condition_1)); }
	inline String_t* get_condition_1() const { return ___condition_1; }
	inline String_t** get_address_of_condition_1() { return &___condition_1; }
	inline void set_condition_1(String_t* value)
	{
		___condition_1 = value;
		Il2CppCodeGenWriteBarrier((&___condition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDCIRCLELEAVEMESSAGEINFO_T8D246323BA1AFA6208265576F71C28CCFE46448D_H
#ifndef G2SREQADDCOMMUNITYLEAVEMESSAGE_T4D91B7F6F61C638E08295ACC783CA3CE9F5320A7_H
#define G2SREQADDCOMMUNITYLEAVEMESSAGE_T4D91B7F6F61C638E08295ACC783CA3CE9F5320A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqAddCommunityLeaveMessage
struct  G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqAddCommunityLeaveMessage::roleId
	int64_t ___roleId_1;
	// System.String MSG_Community.G2SReqAddCommunityLeaveMessage::condition
	String_t* ___condition_2;
	// System.Boolean MSG_Community.G2SReqAddCommunityLeaveMessage::isFriend
	bool ___isFriend_3;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier((&___condition_2), value);
	}

	inline static int32_t get_offset_of_isFriend_3() { return static_cast<int32_t>(offsetof(G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7, ___isFriend_3)); }
	inline bool get_isFriend_3() const { return ___isFriend_3; }
	inline bool* get_address_of_isFriend_3() { return &___isFriend_3; }
	inline void set_isFriend_3(bool value)
	{
		___isFriend_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQADDCOMMUNITYLEAVEMESSAGE_T4D91B7F6F61C638E08295ACC783CA3CE9F5320A7_H
#ifndef G2SREQCOMMENTFRIENDCIRCLE_T95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C_H
#define G2SREQCOMMENTFRIENDCIRCLE_T95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqCommentFriendCircle
struct  G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqCommentFriendCircle::targetRoleId
	int64_t ___targetRoleId_1;
	// System.UInt64 MSG_Community.G2SReqCommentFriendCircle::friendCircleId
	uint64_t ___friendCircleId_2;
	// System.String MSG_Community.G2SReqCommentFriendCircle::commentCondition
	String_t* ___commentCondition_3;

public:
	inline static int32_t get_offset_of_targetRoleId_1() { return static_cast<int32_t>(offsetof(G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C, ___targetRoleId_1)); }
	inline int64_t get_targetRoleId_1() const { return ___targetRoleId_1; }
	inline int64_t* get_address_of_targetRoleId_1() { return &___targetRoleId_1; }
	inline void set_targetRoleId_1(int64_t value)
	{
		___targetRoleId_1 = value;
	}

	inline static int32_t get_offset_of_friendCircleId_2() { return static_cast<int32_t>(offsetof(G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C, ___friendCircleId_2)); }
	inline uint64_t get_friendCircleId_2() const { return ___friendCircleId_2; }
	inline uint64_t* get_address_of_friendCircleId_2() { return &___friendCircleId_2; }
	inline void set_friendCircleId_2(uint64_t value)
	{
		___friendCircleId_2 = value;
	}

	inline static int32_t get_offset_of_commentCondition_3() { return static_cast<int32_t>(offsetof(G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C, ___commentCondition_3)); }
	inline String_t* get_commentCondition_3() const { return ___commentCondition_3; }
	inline String_t** get_address_of_commentCondition_3() { return &___commentCondition_3; }
	inline void set_commentCondition_3(String_t* value)
	{
		___commentCondition_3 = value;
		Il2CppCodeGenWriteBarrier((&___commentCondition_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQCOMMENTFRIENDCIRCLE_T95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C_H
#ifndef G2SREQCOMMUNITYLEAVEMESSAGE_T212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0_H
#define G2SREQCOMMUNITYLEAVEMESSAGE_T212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqCommunityLeaveMessage
struct  G2SReqCommunityLeaveMessage_t212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqCommunityLeaveMessage::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqCommunityLeaveMessage_t212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQCOMMUNITYLEAVEMESSAGE_T212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0_H
#ifndef G2SREQDELETECOMMUNITYLEAVEMESSAGE_TB40CCEB582CD4CD449756E455D62B98F758F1EFC_H
#define G2SREQDELETECOMMUNITYLEAVEMESSAGE_TB40CCEB582CD4CD449756E455D62B98F758F1EFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqDeleteCommunityLeaveMessage
struct  G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqDeleteCommunityLeaveMessage::roleId
	int64_t ___roleId_1;
	// System.UInt64 MSG_Community.G2SReqDeleteCommunityLeaveMessage::leaveMessageId
	uint64_t ___leaveMessageId_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_leaveMessageId_2() { return static_cast<int32_t>(offsetof(G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC, ___leaveMessageId_2)); }
	inline uint64_t get_leaveMessageId_2() const { return ___leaveMessageId_2; }
	inline uint64_t* get_address_of_leaveMessageId_2() { return &___leaveMessageId_2; }
	inline void set_leaveMessageId_2(uint64_t value)
	{
		___leaveMessageId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQDELETECOMMUNITYLEAVEMESSAGE_TB40CCEB582CD4CD449756E455D62B98F758F1EFC_H
#ifndef G2SREQDELETEFRIENDCIRCLE_T7C67DA8436BD85B103E1DE687D810F3C7C386BA9_H
#define G2SREQDELETEFRIENDCIRCLE_T7C67DA8436BD85B103E1DE687D810F3C7C386BA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqDeleteFriendCircle
struct  G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqDeleteFriendCircle::roleId
	int64_t ___roleId_1;
	// System.UInt64 MSG_Community.G2SReqDeleteFriendCircle::friendCircleId
	uint64_t ___friendCircleId_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_friendCircleId_2() { return static_cast<int32_t>(offsetof(G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9, ___friendCircleId_2)); }
	inline uint64_t get_friendCircleId_2() const { return ___friendCircleId_2; }
	inline uint64_t* get_address_of_friendCircleId_2() { return &___friendCircleId_2; }
	inline void set_friendCircleId_2(uint64_t value)
	{
		___friendCircleId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQDELETEFRIENDCIRCLE_T7C67DA8436BD85B103E1DE687D810F3C7C386BA9_H
#ifndef G2SREQFRIENDCIRCLE_TC65722D76F0FA272A663EA3463A2681CBD8047E8_H
#define G2SREQFRIENDCIRCLE_TC65722D76F0FA272A663EA3463A2681CBD8047E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqFriendCircle
struct  G2SReqFriendCircle_tC65722D76F0FA272A663EA3463A2681CBD8047E8  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqFriendCircle::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqFriendCircle_tC65722D76F0FA272A663EA3463A2681CBD8047E8, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQFRIENDCIRCLE_TC65722D76F0FA272A663EA3463A2681CBD8047E8_H
#ifndef G2SREQPLAYERCOMMUNITYINFO_TEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8_H
#define G2SREQPLAYERCOMMUNITYINFO_TEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqPlayerCommunityInfo
struct  G2SReqPlayerCommunityInfo_tEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqPlayerCommunityInfo::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqPlayerCommunityInfo_tEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQPLAYERCOMMUNITYINFO_TEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8_H
#ifndef G2SREQPLAYERCOMMUNITYINFOSETTING_T9B11F4AFD5D2F854C180818CF33F87DA67173797_H
#define G2SREQPLAYERCOMMUNITYINFOSETTING_T9B11F4AFD5D2F854C180818CF33F87DA67173797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqPlayerCommunityInfoSetting
struct  G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797  : public RuntimeObject
{
public:
	// System.Int32 MSG_Community.G2SReqPlayerCommunityInfoSetting::settingType
	int32_t ___settingType_1;
	// MSG_Community.PlayerCommunityInfoSettingInfo MSG_Community.G2SReqPlayerCommunityInfoSetting::playerCommunityInfoSettingInfo
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * ___playerCommunityInfoSettingInfo_2;

public:
	inline static int32_t get_offset_of_settingType_1() { return static_cast<int32_t>(offsetof(G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797, ___settingType_1)); }
	inline int32_t get_settingType_1() const { return ___settingType_1; }
	inline int32_t* get_address_of_settingType_1() { return &___settingType_1; }
	inline void set_settingType_1(int32_t value)
	{
		___settingType_1 = value;
	}

	inline static int32_t get_offset_of_playerCommunityInfoSettingInfo_2() { return static_cast<int32_t>(offsetof(G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797, ___playerCommunityInfoSettingInfo_2)); }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * get_playerCommunityInfoSettingInfo_2() const { return ___playerCommunityInfoSettingInfo_2; }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 ** get_address_of_playerCommunityInfoSettingInfo_2() { return &___playerCommunityInfoSettingInfo_2; }
	inline void set_playerCommunityInfoSettingInfo_2(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * value)
	{
		___playerCommunityInfoSettingInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerCommunityInfoSettingInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQPLAYERCOMMUNITYINFOSETTING_T9B11F4AFD5D2F854C180818CF33F87DA67173797_H
#ifndef G2SREQSENDFRIENDCIRCLE_TD6A90D2DADE734EEC6F64E481FB0259018041CE1_H
#define G2SREQSENDFRIENDCIRCLE_TD6A90D2DADE734EEC6F64E481FB0259018041CE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.G2SReqSendFriendCircle
struct  G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.G2SReqSendFriendCircle::roleId
	int64_t ___roleId_1;
	// System.String MSG_Community.G2SReqSendFriendCircle::condition
	String_t* ___condition_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier((&___condition_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQSENDFRIENDCIRCLE_TD6A90D2DADE734EEC6F64E481FB0259018041CE1_H
#ifndef PLAYERCOMMUNITYINFO_T1A241838C1A169143D9CD47D1447895E6B5C5BF2_H
#define PLAYERCOMMUNITYINFO_T1A241838C1A169143D9CD47D1447895E6B5C5BF2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.PlayerCommunityInfo
struct  PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Community.PlayerCommunityInfo::roleId
	uint64_t ___roleId_0;
	// System.String MSG_Community.PlayerCommunityInfo::roleName
	String_t* ___roleName_1;
	// System.Int32 MSG_Community.PlayerCommunityInfo::roleLv
	int32_t ___roleLv_2;
	// System.Int32 MSG_Community.PlayerCommunityInfo::career
	int32_t ___career_3;
	// System.Int64 MSG_Community.PlayerCommunityInfo::fightpower
	int64_t ___fightpower_4;
	// System.String MSG_Community.PlayerCommunityInfo::guildName
	String_t* ___guildName_5;
	// System.Int32 MSG_Community.PlayerCommunityInfo::serverId
	int32_t ___serverId_6;
	// MSG_Common.FacadeAttribute MSG_Community.PlayerCommunityInfo::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_7;
	// System.Int32 MSG_Community.PlayerCommunityInfo::stateLv
	int32_t ___stateLv_8;
	// MSG_Community.PlayerCommunityInfoSettingInfo MSG_Community.PlayerCommunityInfo::playerCommunityInfoSettingInfo
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * ___playerCommunityInfoSettingInfo_9;
	// MSG_Common.HeadAttribute MSG_Community.PlayerCommunityInfo::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_10;

public:
	inline static int32_t get_offset_of_roleId_0() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___roleId_0)); }
	inline uint64_t get_roleId_0() const { return ___roleId_0; }
	inline uint64_t* get_address_of_roleId_0() { return &___roleId_0; }
	inline void set_roleId_0(uint64_t value)
	{
		___roleId_0 = value;
	}

	inline static int32_t get_offset_of_roleName_1() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___roleName_1)); }
	inline String_t* get_roleName_1() const { return ___roleName_1; }
	inline String_t** get_address_of_roleName_1() { return &___roleName_1; }
	inline void set_roleName_1(String_t* value)
	{
		___roleName_1 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_1), value);
	}

	inline static int32_t get_offset_of_roleLv_2() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___roleLv_2)); }
	inline int32_t get_roleLv_2() const { return ___roleLv_2; }
	inline int32_t* get_address_of_roleLv_2() { return &___roleLv_2; }
	inline void set_roleLv_2(int32_t value)
	{
		___roleLv_2 = value;
	}

	inline static int32_t get_offset_of_career_3() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___career_3)); }
	inline int32_t get_career_3() const { return ___career_3; }
	inline int32_t* get_address_of_career_3() { return &___career_3; }
	inline void set_career_3(int32_t value)
	{
		___career_3 = value;
	}

	inline static int32_t get_offset_of_fightpower_4() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___fightpower_4)); }
	inline int64_t get_fightpower_4() const { return ___fightpower_4; }
	inline int64_t* get_address_of_fightpower_4() { return &___fightpower_4; }
	inline void set_fightpower_4(int64_t value)
	{
		___fightpower_4 = value;
	}

	inline static int32_t get_offset_of_guildName_5() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___guildName_5)); }
	inline String_t* get_guildName_5() const { return ___guildName_5; }
	inline String_t** get_address_of_guildName_5() { return &___guildName_5; }
	inline void set_guildName_5(String_t* value)
	{
		___guildName_5 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_5), value);
	}

	inline static int32_t get_offset_of_serverId_6() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___serverId_6)); }
	inline int32_t get_serverId_6() const { return ___serverId_6; }
	inline int32_t* get_address_of_serverId_6() { return &___serverId_6; }
	inline void set_serverId_6(int32_t value)
	{
		___serverId_6 = value;
	}

	inline static int32_t get_offset_of_facade_7() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___facade_7)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_7() const { return ___facade_7; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_7() { return &___facade_7; }
	inline void set_facade_7(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_7 = value;
		Il2CppCodeGenWriteBarrier((&___facade_7), value);
	}

	inline static int32_t get_offset_of_stateLv_8() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___stateLv_8)); }
	inline int32_t get_stateLv_8() const { return ___stateLv_8; }
	inline int32_t* get_address_of_stateLv_8() { return &___stateLv_8; }
	inline void set_stateLv_8(int32_t value)
	{
		___stateLv_8 = value;
	}

	inline static int32_t get_offset_of_playerCommunityInfoSettingInfo_9() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___playerCommunityInfoSettingInfo_9)); }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * get_playerCommunityInfoSettingInfo_9() const { return ___playerCommunityInfoSettingInfo_9; }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 ** get_address_of_playerCommunityInfoSettingInfo_9() { return &___playerCommunityInfoSettingInfo_9; }
	inline void set_playerCommunityInfoSettingInfo_9(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * value)
	{
		___playerCommunityInfoSettingInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___playerCommunityInfoSettingInfo_9), value);
	}

	inline static int32_t get_offset_of_head_10() { return static_cast<int32_t>(offsetof(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2, ___head_10)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_10() const { return ___head_10; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_10() { return &___head_10; }
	inline void set_head_10(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_10 = value;
		Il2CppCodeGenWriteBarrier((&___head_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCOMMUNITYINFO_T1A241838C1A169143D9CD47D1447895E6B5C5BF2_H
#ifndef PLAYERCOMMUNITYINFOSETTINGINFO_T717E5B75B4C109DE677C4E84420A1F3424D9AB23_H
#define PLAYERCOMMUNITYINFOSETTINGINFO_T717E5B75B4C109DE677C4E84420A1F3424D9AB23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.PlayerCommunityInfoSettingInfo
struct  PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23  : public RuntimeObject
{
public:
	// System.Int32 MSG_Community.PlayerCommunityInfoSettingInfo::decorate
	int32_t ___decorate_0;
	// System.Int32 MSG_Community.PlayerCommunityInfoSettingInfo::pendan
	int32_t ___pendan_1;
	// System.String MSG_Community.PlayerCommunityInfoSettingInfo::sign
	String_t* ___sign_2;
	// System.String MSG_Community.PlayerCommunityInfoSettingInfo::brith
	String_t* ___brith_3;
	// System.Boolean MSG_Community.PlayerCommunityInfoSettingInfo::isNotFriendLeaveMsg
	bool ___isNotFriendLeaveMsg_4;

public:
	inline static int32_t get_offset_of_decorate_0() { return static_cast<int32_t>(offsetof(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23, ___decorate_0)); }
	inline int32_t get_decorate_0() const { return ___decorate_0; }
	inline int32_t* get_address_of_decorate_0() { return &___decorate_0; }
	inline void set_decorate_0(int32_t value)
	{
		___decorate_0 = value;
	}

	inline static int32_t get_offset_of_pendan_1() { return static_cast<int32_t>(offsetof(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23, ___pendan_1)); }
	inline int32_t get_pendan_1() const { return ___pendan_1; }
	inline int32_t* get_address_of_pendan_1() { return &___pendan_1; }
	inline void set_pendan_1(int32_t value)
	{
		___pendan_1 = value;
	}

	inline static int32_t get_offset_of_sign_2() { return static_cast<int32_t>(offsetof(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23, ___sign_2)); }
	inline String_t* get_sign_2() const { return ___sign_2; }
	inline String_t** get_address_of_sign_2() { return &___sign_2; }
	inline void set_sign_2(String_t* value)
	{
		___sign_2 = value;
		Il2CppCodeGenWriteBarrier((&___sign_2), value);
	}

	inline static int32_t get_offset_of_brith_3() { return static_cast<int32_t>(offsetof(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23, ___brith_3)); }
	inline String_t* get_brith_3() const { return ___brith_3; }
	inline String_t** get_address_of_brith_3() { return &___brith_3; }
	inline void set_brith_3(String_t* value)
	{
		___brith_3 = value;
		Il2CppCodeGenWriteBarrier((&___brith_3), value);
	}

	inline static int32_t get_offset_of_isNotFriendLeaveMsg_4() { return static_cast<int32_t>(offsetof(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23, ___isNotFriendLeaveMsg_4)); }
	inline bool get_isNotFriendLeaveMsg_4() const { return ___isNotFriendLeaveMsg_4; }
	inline bool* get_address_of_isNotFriendLeaveMsg_4() { return &___isNotFriendLeaveMsg_4; }
	inline void set_isNotFriendLeaveMsg_4(bool value)
	{
		___isNotFriendLeaveMsg_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCOMMUNITYINFOSETTINGINFO_T717E5B75B4C109DE677C4E84420A1F3424D9AB23_H
#ifndef REQADDCOMMUNITYLEAVEMESSAGE_TC00835B739F901074D4EF43310CA3D2348BB5166_H
#define REQADDCOMMUNITYLEAVEMESSAGE_TC00835B739F901074D4EF43310CA3D2348BB5166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqAddCommunityLeaveMessage
struct  ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqAddCommunityLeaveMessage::roleId
	int64_t ___roleId_1;
	// System.String MSG_Community.ReqAddCommunityLeaveMessage::condition
	String_t* ___condition_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier((&___condition_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQADDCOMMUNITYLEAVEMESSAGE_TC00835B739F901074D4EF43310CA3D2348BB5166_H
#ifndef REQCOMMENTFRIENDCIRCLE_TB41D146F8EA7E896B39303E18B3B4AB32B81DDEE_H
#define REQCOMMENTFRIENDCIRCLE_TB41D146F8EA7E896B39303E18B3B4AB32B81DDEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqCommentFriendCircle
struct  ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqCommentFriendCircle::targetRoleId
	int64_t ___targetRoleId_1;
	// System.UInt64 MSG_Community.ReqCommentFriendCircle::friendCircleId
	uint64_t ___friendCircleId_2;
	// System.String MSG_Community.ReqCommentFriendCircle::commentCondition
	String_t* ___commentCondition_3;

public:
	inline static int32_t get_offset_of_targetRoleId_1() { return static_cast<int32_t>(offsetof(ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE, ___targetRoleId_1)); }
	inline int64_t get_targetRoleId_1() const { return ___targetRoleId_1; }
	inline int64_t* get_address_of_targetRoleId_1() { return &___targetRoleId_1; }
	inline void set_targetRoleId_1(int64_t value)
	{
		___targetRoleId_1 = value;
	}

	inline static int32_t get_offset_of_friendCircleId_2() { return static_cast<int32_t>(offsetof(ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE, ___friendCircleId_2)); }
	inline uint64_t get_friendCircleId_2() const { return ___friendCircleId_2; }
	inline uint64_t* get_address_of_friendCircleId_2() { return &___friendCircleId_2; }
	inline void set_friendCircleId_2(uint64_t value)
	{
		___friendCircleId_2 = value;
	}

	inline static int32_t get_offset_of_commentCondition_3() { return static_cast<int32_t>(offsetof(ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE, ___commentCondition_3)); }
	inline String_t* get_commentCondition_3() const { return ___commentCondition_3; }
	inline String_t** get_address_of_commentCondition_3() { return &___commentCondition_3; }
	inline void set_commentCondition_3(String_t* value)
	{
		___commentCondition_3 = value;
		Il2CppCodeGenWriteBarrier((&___commentCondition_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOMMENTFRIENDCIRCLE_TB41D146F8EA7E896B39303E18B3B4AB32B81DDEE_H
#ifndef REQCOMMUNITYLEAVEMESSAGE_T50D1836BF13A2EF0627F086130BBFFC09EB9BB11_H
#define REQCOMMUNITYLEAVEMESSAGE_T50D1836BF13A2EF0627F086130BBFFC09EB9BB11_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqCommunityLeaveMessage
struct  ReqCommunityLeaveMessage_t50D1836BF13A2EF0627F086130BBFFC09EB9BB11  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqCommunityLeaveMessage::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqCommunityLeaveMessage_t50D1836BF13A2EF0627F086130BBFFC09EB9BB11, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOMMUNITYLEAVEMESSAGE_T50D1836BF13A2EF0627F086130BBFFC09EB9BB11_H
#ifndef REQDELETECOMMUNITYLEAVEMESSAGE_T6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE_H
#define REQDELETECOMMUNITYLEAVEMESSAGE_T6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqDeleteCommunityLeaveMessage
struct  ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqDeleteCommunityLeaveMessage::roleId
	int64_t ___roleId_1;
	// System.UInt64 MSG_Community.ReqDeleteCommunityLeaveMessage::leaveMessageId
	uint64_t ___leaveMessageId_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_leaveMessageId_2() { return static_cast<int32_t>(offsetof(ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE, ___leaveMessageId_2)); }
	inline uint64_t get_leaveMessageId_2() const { return ___leaveMessageId_2; }
	inline uint64_t* get_address_of_leaveMessageId_2() { return &___leaveMessageId_2; }
	inline void set_leaveMessageId_2(uint64_t value)
	{
		___leaveMessageId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDELETECOMMUNITYLEAVEMESSAGE_T6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE_H
#ifndef REQDELETEFRIENDCIRCLE_T0006CD76B73FD77CCB50768BF61585AF1ECAA36D_H
#define REQDELETEFRIENDCIRCLE_T0006CD76B73FD77CCB50768BF61585AF1ECAA36D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqDeleteFriendCircle
struct  ReqDeleteFriendCircle_t0006CD76B73FD77CCB50768BF61585AF1ECAA36D  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Community.ReqDeleteFriendCircle::friendCircleId
	uint64_t ___friendCircleId_1;

public:
	inline static int32_t get_offset_of_friendCircleId_1() { return static_cast<int32_t>(offsetof(ReqDeleteFriendCircle_t0006CD76B73FD77CCB50768BF61585AF1ECAA36D, ___friendCircleId_1)); }
	inline uint64_t get_friendCircleId_1() const { return ___friendCircleId_1; }
	inline uint64_t* get_address_of_friendCircleId_1() { return &___friendCircleId_1; }
	inline void set_friendCircleId_1(uint64_t value)
	{
		___friendCircleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDELETEFRIENDCIRCLE_T0006CD76B73FD77CCB50768BF61585AF1ECAA36D_H
#ifndef REQFRIENDCIRCLE_TC9A45D65206D697DFAE947045712D1EEDEA66C34_H
#define REQFRIENDCIRCLE_TC9A45D65206D697DFAE947045712D1EEDEA66C34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqFriendCircle
struct  ReqFriendCircle_tC9A45D65206D697DFAE947045712D1EEDEA66C34  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqFriendCircle::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqFriendCircle_tC9A45D65206D697DFAE947045712D1EEDEA66C34, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFRIENDCIRCLE_TC9A45D65206D697DFAE947045712D1EEDEA66C34_H
#ifndef REQPLAYERCOMMUNITYINFO_T908198D95CD05A07AA9036CD68F4AB833C70EB80_H
#define REQPLAYERCOMMUNITYINFO_T908198D95CD05A07AA9036CD68F4AB833C70EB80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqPlayerCommunityInfo
struct  ReqPlayerCommunityInfo_t908198D95CD05A07AA9036CD68F4AB833C70EB80  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqPlayerCommunityInfo::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqPlayerCommunityInfo_t908198D95CD05A07AA9036CD68F4AB833C70EB80, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERCOMMUNITYINFO_T908198D95CD05A07AA9036CD68F4AB833C70EB80_H
#ifndef REQPLAYERCOMMUNITYINFOSETTING_T6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63_H
#define REQPLAYERCOMMUNITYINFOSETTING_T6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqPlayerCommunityInfoSetting
struct  ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63  : public RuntimeObject
{
public:
	// System.Int32 MSG_Community.ReqPlayerCommunityInfoSetting::settingType
	int32_t ___settingType_1;
	// MSG_Community.PlayerCommunityInfoSettingInfo MSG_Community.ReqPlayerCommunityInfoSetting::playerCommunityInfoSettingInfo
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * ___playerCommunityInfoSettingInfo_2;

public:
	inline static int32_t get_offset_of_settingType_1() { return static_cast<int32_t>(offsetof(ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63, ___settingType_1)); }
	inline int32_t get_settingType_1() const { return ___settingType_1; }
	inline int32_t* get_address_of_settingType_1() { return &___settingType_1; }
	inline void set_settingType_1(int32_t value)
	{
		___settingType_1 = value;
	}

	inline static int32_t get_offset_of_playerCommunityInfoSettingInfo_2() { return static_cast<int32_t>(offsetof(ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63, ___playerCommunityInfoSettingInfo_2)); }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * get_playerCommunityInfoSettingInfo_2() const { return ___playerCommunityInfoSettingInfo_2; }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 ** get_address_of_playerCommunityInfoSettingInfo_2() { return &___playerCommunityInfoSettingInfo_2; }
	inline void set_playerCommunityInfoSettingInfo_2(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * value)
	{
		___playerCommunityInfoSettingInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerCommunityInfoSettingInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERCOMMUNITYINFOSETTING_T6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63_H
#ifndef REQSENDFRIENDCIRCLE_T314C5000EA857532EE3FD28BB655185E2102F4F4_H
#define REQSENDFRIENDCIRCLE_T314C5000EA857532EE3FD28BB655185E2102F4F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ReqSendFriendCircle
struct  ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4  : public RuntimeObject
{
public:
	// System.Int64 MSG_Community.ReqSendFriendCircle::roleId
	int64_t ___roleId_1;
	// System.String MSG_Community.ReqSendFriendCircle::condition
	String_t* ___condition_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_condition_2() { return static_cast<int32_t>(offsetof(ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4, ___condition_2)); }
	inline String_t* get_condition_2() const { return ___condition_2; }
	inline String_t** get_address_of_condition_2() { return &___condition_2; }
	inline void set_condition_2(String_t* value)
	{
		___condition_2 = value;
		Il2CppCodeGenWriteBarrier((&___condition_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSENDFRIENDCIRCLE_T314C5000EA857532EE3FD28BB655185E2102F4F4_H
#ifndef RESCOMMUNITYLEAVEMESSAGE_TF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34_H
#define RESCOMMUNITYLEAVEMESSAGE_TF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ResCommunityLeaveMessage
struct  ResCommunityLeaveMessage_tF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Community.CommunityLeaveMessageInfo> MSG_Community.ResCommunityLeaveMessage::communityLeaveMessageInfoList
	List_1_t5A249E324E0BD0255447233ADC6F41C360728E7B * ___communityLeaveMessageInfoList_1;

public:
	inline static int32_t get_offset_of_communityLeaveMessageInfoList_1() { return static_cast<int32_t>(offsetof(ResCommunityLeaveMessage_tF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34, ___communityLeaveMessageInfoList_1)); }
	inline List_1_t5A249E324E0BD0255447233ADC6F41C360728E7B * get_communityLeaveMessageInfoList_1() const { return ___communityLeaveMessageInfoList_1; }
	inline List_1_t5A249E324E0BD0255447233ADC6F41C360728E7B ** get_address_of_communityLeaveMessageInfoList_1() { return &___communityLeaveMessageInfoList_1; }
	inline void set_communityLeaveMessageInfoList_1(List_1_t5A249E324E0BD0255447233ADC6F41C360728E7B * value)
	{
		___communityLeaveMessageInfoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___communityLeaveMessageInfoList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOMMUNITYLEAVEMESSAGE_TF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34_H
#ifndef RESFRIENDCIRCLELIST_T5E940401D6A795BDB68DFBEE23759126C4401D1F_H
#define RESFRIENDCIRCLELIST_T5E940401D6A795BDB68DFBEE23759126C4401D1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ResFriendCircleList
struct  ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Community.ResFriendCircleList::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<MSG_Community.FriendCircleInfo> MSG_Community.ResFriendCircleList::friendCircleInfo
	List_1_t167ED2F89F302AD6822A70006FD4AA017BA5B45A * ___friendCircleInfo_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_friendCircleInfo_2() { return static_cast<int32_t>(offsetof(ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F, ___friendCircleInfo_2)); }
	inline List_1_t167ED2F89F302AD6822A70006FD4AA017BA5B45A * get_friendCircleInfo_2() const { return ___friendCircleInfo_2; }
	inline List_1_t167ED2F89F302AD6822A70006FD4AA017BA5B45A ** get_address_of_friendCircleInfo_2() { return &___friendCircleInfo_2; }
	inline void set_friendCircleInfo_2(List_1_t167ED2F89F302AD6822A70006FD4AA017BA5B45A * value)
	{
		___friendCircleInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___friendCircleInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFRIENDCIRCLELIST_T5E940401D6A795BDB68DFBEE23759126C4401D1F_H
#ifndef RESPLAYERCOMMUNITYINFO_TD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B_H
#define RESPLAYERCOMMUNITYINFO_TD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ResPlayerCommunityInfo
struct  ResPlayerCommunityInfo_tD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B  : public RuntimeObject
{
public:
	// MSG_Community.PlayerCommunityInfo MSG_Community.ResPlayerCommunityInfo::playerCommunityInfo
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2 * ___playerCommunityInfo_1;

public:
	inline static int32_t get_offset_of_playerCommunityInfo_1() { return static_cast<int32_t>(offsetof(ResPlayerCommunityInfo_tD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B, ___playerCommunityInfo_1)); }
	inline PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2 * get_playerCommunityInfo_1() const { return ___playerCommunityInfo_1; }
	inline PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2 ** get_address_of_playerCommunityInfo_1() { return &___playerCommunityInfo_1; }
	inline void set_playerCommunityInfo_1(PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2 * value)
	{
		___playerCommunityInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___playerCommunityInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERCOMMUNITYINFO_TD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B_H
#ifndef RESPLAYERCOMMUNITYINFOSETTING_T8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F_H
#define RESPLAYERCOMMUNITYINFOSETTING_T8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Community.ResPlayerCommunityInfoSetting
struct  ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Community.ResPlayerCommunityInfoSetting::settingType
	int32_t ___settingType_1;
	// System.Boolean MSG_Community.ResPlayerCommunityInfoSetting::isSettingSucceed
	bool ___isSettingSucceed_2;
	// MSG_Community.PlayerCommunityInfoSettingInfo MSG_Community.ResPlayerCommunityInfoSetting::playerCommunityInfoSettingInfo
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * ___playerCommunityInfoSettingInfo_3;

public:
	inline static int32_t get_offset_of_settingType_1() { return static_cast<int32_t>(offsetof(ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F, ___settingType_1)); }
	inline int32_t get_settingType_1() const { return ___settingType_1; }
	inline int32_t* get_address_of_settingType_1() { return &___settingType_1; }
	inline void set_settingType_1(int32_t value)
	{
		___settingType_1 = value;
	}

	inline static int32_t get_offset_of_isSettingSucceed_2() { return static_cast<int32_t>(offsetof(ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F, ___isSettingSucceed_2)); }
	inline bool get_isSettingSucceed_2() const { return ___isSettingSucceed_2; }
	inline bool* get_address_of_isSettingSucceed_2() { return &___isSettingSucceed_2; }
	inline void set_isSettingSucceed_2(bool value)
	{
		___isSettingSucceed_2 = value;
	}

	inline static int32_t get_offset_of_playerCommunityInfoSettingInfo_3() { return static_cast<int32_t>(offsetof(ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F, ___playerCommunityInfoSettingInfo_3)); }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * get_playerCommunityInfoSettingInfo_3() const { return ___playerCommunityInfoSettingInfo_3; }
	inline PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 ** get_address_of_playerCommunityInfoSettingInfo_3() { return &___playerCommunityInfoSettingInfo_3; }
	inline void set_playerCommunityInfoSettingInfo_3(PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23 * value)
	{
		___playerCommunityInfoSettingInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerCommunityInfoSettingInfo_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERCOMMUNITYINFOSETTING_T8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F_H
#ifndef BOSSSTATEINFO_T442A99E297028912D7587CA811C2D7EF8C7C4B5A_H
#define BOSSSTATEINFO_T442A99E297028912D7587CA811C2D7EF8C7C4B5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.BossStateInfo
struct  BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.BossStateInfo::layer
	int32_t ___layer_0;
	// System.Int32 MSG_copyMap.BossStateInfo::bossId
	int32_t ___bossId_1;
	// System.Boolean MSG_copyMap.BossStateInfo::isGetReward
	bool ___isGetReward_2;
	// System.Boolean MSG_copyMap.BossStateInfo::first
	bool ___first_3;

public:
	inline static int32_t get_offset_of_layer_0() { return static_cast<int32_t>(offsetof(BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A, ___layer_0)); }
	inline int32_t get_layer_0() const { return ___layer_0; }
	inline int32_t* get_address_of_layer_0() { return &___layer_0; }
	inline void set_layer_0(int32_t value)
	{
		___layer_0 = value;
	}

	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_isGetReward_2() { return static_cast<int32_t>(offsetof(BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A, ___isGetReward_2)); }
	inline bool get_isGetReward_2() const { return ___isGetReward_2; }
	inline bool* get_address_of_isGetReward_2() { return &___isGetReward_2; }
	inline void set_isGetReward_2(bool value)
	{
		___isGetReward_2 = value;
	}

	inline static int32_t get_offset_of_first_3() { return static_cast<int32_t>(offsetof(BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A, ___first_3)); }
	inline bool get_first_3() const { return ___first_3; }
	inline bool* get_address_of_first_3() { return &___first_3; }
	inline void set_first_3(bool value)
	{
		___first_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOSSSTATEINFO_T442A99E297028912D7587CA811C2D7EF8C7C4B5A_H
#ifndef CAMPINFO_TA667950EC56EE8D4BA603F77960AEEA911344331_H
#define CAMPINFO_TA667950EC56EE8D4BA603F77960AEEA911344331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.CampInfo
struct  CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.CampInfo::camp
	int32_t ___camp_0;
	// System.Int32 MSG_copyMap.CampInfo::count
	int32_t ___count_1;
	// System.Int32 MSG_copyMap.CampInfo::points
	int32_t ___points_2;

public:
	inline static int32_t get_offset_of_camp_0() { return static_cast<int32_t>(offsetof(CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331, ___camp_0)); }
	inline int32_t get_camp_0() const { return ___camp_0; }
	inline int32_t* get_address_of_camp_0() { return &___camp_0; }
	inline void set_camp_0(int32_t value)
	{
		___camp_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331, ___points_2)); }
	inline int32_t get_points_2() const { return ___points_2; }
	inline int32_t* get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(int32_t value)
	{
		___points_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMPINFO_TA667950EC56EE8D4BA603F77960AEEA911344331_H
#ifndef RANKINFO_T4CD161728EE351623C2DDDE720BC76381E530F1F_H
#define RANKINFO_T4CD161728EE351623C2DDDE720BC76381E530F1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.RankInfo
struct  RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.RankInfo::camp
	int32_t ___camp_0;
	// System.String MSG_copyMap.RankInfo::name
	String_t* ___name_1;
	// System.Int32 MSG_copyMap.RankInfo::lv
	int32_t ___lv_2;
	// System.Int64 MSG_copyMap.RankInfo::fight
	int64_t ___fight_3;
	// System.Int32 MSG_copyMap.RankInfo::points
	int32_t ___points_4;

public:
	inline static int32_t get_offset_of_camp_0() { return static_cast<int32_t>(offsetof(RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F, ___camp_0)); }
	inline int32_t get_camp_0() const { return ___camp_0; }
	inline int32_t* get_address_of_camp_0() { return &___camp_0; }
	inline void set_camp_0(int32_t value)
	{
		___camp_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_lv_2() { return static_cast<int32_t>(offsetof(RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F, ___lv_2)); }
	inline int32_t get_lv_2() const { return ___lv_2; }
	inline int32_t* get_address_of_lv_2() { return &___lv_2; }
	inline void set_lv_2(int32_t value)
	{
		___lv_2 = value;
	}

	inline static int32_t get_offset_of_fight_3() { return static_cast<int32_t>(offsetof(RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F, ___fight_3)); }
	inline int64_t get_fight_3() const { return ___fight_3; }
	inline int64_t* get_address_of_fight_3() { return &___fight_3; }
	inline void set_fight_3(int64_t value)
	{
		___fight_3 = value;
	}

	inline static int32_t get_offset_of_points_4() { return static_cast<int32_t>(offsetof(RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F, ___points_4)); }
	inline int32_t get_points_4() const { return ___points_4; }
	inline int32_t* get_address_of_points_4() { return &___points_4; }
	inline void set_points_4(int32_t value)
	{
		___points_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKINFO_T4CD161728EE351623C2DDDE720BC76381E530F1F_H
#ifndef REQBOSSSTATECLEARCD_T92420087ED4110395635FF1D108B41F141E72215_H
#define REQBOSSSTATECLEARCD_T92420087ED4110395635FF1D108B41F141E72215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqBossStateClearCd
struct  ReqBossStateClearCd_t92420087ED4110395635FF1D108B41F141E72215  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBOSSSTATECLEARCD_T92420087ED4110395635FF1D108B41F141E72215_H
#ifndef REQBUYBOSSSTATECOUNT_T5C39D5097AD0D18C95F28FBCC14A456798779909_H
#define REQBUYBOSSSTATECOUNT_T5C39D5097AD0D18C95F28FBCC14A456798779909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqBuyBossStateCount
struct  ReqBuyBossStateCount_t5C39D5097AD0D18C95F28FBCC14A456798779909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBUYBOSSSTATECOUNT_T5C39D5097AD0D18C95F28FBCC14A456798779909_H
#ifndef REQCALLMONSTER_TE00EA6701DB112D4C09B7FE539D2CC90BFE9AD15_H
#define REQCALLMONSTER_TE00EA6701DB112D4C09B7FE539D2CC90BFE9AD15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqCallMonster
struct  ReqCallMonster_tE00EA6701DB112D4C09B7FE539D2CC90BFE9AD15  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCALLMONSTER_TE00EA6701DB112D4C09B7FE539D2CC90BFE9AD15_H
#ifndef REQCOPYSETTING_T5C253C4B9A03B5C56C0B3C88B1B89837436AFB94_H
#define REQCOPYSETTING_T5C253C4B9A03B5C56C0B3C88B1B89837436AFB94_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqCopySetting
struct  ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ReqCopySetting::copyId
	int32_t ___copyId_1;
	// System.Int32 MSG_copyMap.ReqCopySetting::mergeCount
	int32_t ___mergeCount_2;

public:
	inline static int32_t get_offset_of_copyId_1() { return static_cast<int32_t>(offsetof(ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94, ___copyId_1)); }
	inline int32_t get_copyId_1() const { return ___copyId_1; }
	inline int32_t* get_address_of_copyId_1() { return &___copyId_1; }
	inline void set_copyId_1(int32_t value)
	{
		___copyId_1 = value;
	}

	inline static int32_t get_offset_of_mergeCount_2() { return static_cast<int32_t>(offsetof(ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94, ___mergeCount_2)); }
	inline int32_t get_mergeCount_2() const { return ___mergeCount_2; }
	inline int32_t* get_address_of_mergeCount_2() { return &___mergeCount_2; }
	inline void set_mergeCount_2(int32_t value)
	{
		___mergeCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOPYSETTING_T5C253C4B9A03B5C56C0B3C88B1B89837436AFB94_H
#ifndef REQFLASHMONSTER_T92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010_H
#define REQFLASHMONSTER_T92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqFlashMonster
struct  ReqFlashMonster_t92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ReqFlashMonster::num
	int32_t ___num_1;

public:
	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(ReqFlashMonster_t92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010, ___num_1)); }
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
#endif // REQFLASHMONSTER_T92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010_H
#ifndef REQGOONCHALLENGE_TC4D41606858B206674A218D6040866A50B235E76_H
#define REQGOONCHALLENGE_TC4D41606858B206674A218D6040866A50B235E76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqGoOnChallenge
struct  ReqGoOnChallenge_tC4D41606858B206674A218D6040866A50B235E76  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGOONCHALLENGE_TC4D41606858B206674A218D6040866A50B235E76_H
#ifndef REQGOTONEXTCHALLENGE_TB22E10E123DCBFBF90505FDC0F3B69D3DEFB373F_H
#define REQGOTONEXTCHALLENGE_TB22E10E123DCBFBF90505FDC0F3B69D3DEFB373F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqGotoNextChallenge
struct  ReqGotoNextChallenge_tB22E10E123DCBFBF90505FDC0F3B69D3DEFB373F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGOTONEXTCHALLENGE_TB22E10E123DCBFBF90505FDC0F3B69D3DEFB373F_H
#ifndef REQKILLMONSTER_T9286C9E7AB93EBC294D414DF0A1E7181928C2CCC_H
#define REQKILLMONSTER_T9286C9E7AB93EBC294D414DF0A1E7181928C2CCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqKillMonster
struct  ReqKillMonster_t9286C9E7AB93EBC294D414DF0A1E7181928C2CCC  : public RuntimeObject
{
public:
	// System.Int64 MSG_copyMap.ReqKillMonster::monsterId
	int64_t ___monsterId_1;

public:
	inline static int32_t get_offset_of_monsterId_1() { return static_cast<int32_t>(offsetof(ReqKillMonster_t9286C9E7AB93EBC294D414DF0A1E7181928C2CCC, ___monsterId_1)); }
	inline int64_t get_monsterId_1() const { return ___monsterId_1; }
	inline int64_t* get_address_of_monsterId_1() { return &___monsterId_1; }
	inline void set_monsterId_1(int64_t value)
	{
		___monsterId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQKILLMONSTER_T9286C9E7AB93EBC294D414DF0A1E7181928C2CCC_H
#ifndef REQOPENBOSSSTATEPANLE_TB732EB1204FAE5DE7E2BB2DDBE03804813F9DD93_H
#define REQOPENBOSSSTATEPANLE_TB732EB1204FAE5DE7E2BB2DDBE03804813F9DD93_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqOpenBossStatePanle
struct  ReqOpenBossStatePanle_tB732EB1204FAE5DE7E2BB2DDBE03804813F9DD93  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENBOSSSTATEPANLE_TB732EB1204FAE5DE7E2BB2DDBE03804813F9DD93_H
#ifndef REQOPENFAIRYCOPYPANEL_T906E178A6ACC11518A948EC0439288DA66A12980_H
#define REQOPENFAIRYCOPYPANEL_T906E178A6ACC11518A948EC0439288DA66A12980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqOpenFairyCopyPanel
struct  ReqOpenFairyCopyPanel_t906E178A6ACC11518A948EC0439288DA66A12980  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ReqOpenFairyCopyPanel::copyId
	int32_t ___copyId_1;

public:
	inline static int32_t get_offset_of_copyId_1() { return static_cast<int32_t>(offsetof(ReqOpenFairyCopyPanel_t906E178A6ACC11518A948EC0439288DA66A12980, ___copyId_1)); }
	inline int32_t get_copyId_1() const { return ___copyId_1; }
	inline int32_t* get_address_of_copyId_1() { return &___copyId_1; }
	inline void set_copyId_1(int32_t value)
	{
		___copyId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENFAIRYCOPYPANEL_T906E178A6ACC11518A948EC0439288DA66A12980_H
#ifndef REQOPENMANYCOPYPANEL_T5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19_H
#define REQOPENMANYCOPYPANEL_T5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqOpenManyCopyPanel
struct  ReqOpenManyCopyPanel_t5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ReqOpenManyCopyPanel::copyId
	int32_t ___copyId_1;

public:
	inline static int32_t get_offset_of_copyId_1() { return static_cast<int32_t>(offsetof(ReqOpenManyCopyPanel_t5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19, ___copyId_1)); }
	inline int32_t get_copyId_1() const { return ___copyId_1; }
	inline int32_t* get_address_of_copyId_1() { return &___copyId_1; }
	inline void set_copyId_1(int32_t value)
	{
		___copyId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENMANYCOPYPANEL_T5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19_H
#ifndef REQREFRESHNEXTMONSTER_T099F1D06C5DE5E787D13DDEF4CC9780C6143C6CC_H
#define REQREFRESHNEXTMONSTER_T099F1D06C5DE5E787D13DDEF4CC9780C6143C6CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ReqRefreshNextMonster
struct  ReqRefreshNextMonster_t099F1D06C5DE5E787D13DDEF4CC9780C6143C6CC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQREFRESHNEXTMONSTER_T099F1D06C5DE5E787D13DDEF4CC9780C6143C6CC_H
#ifndef RESBUYBOSSSTATECOUNT_T7A0929BCF26C3B033FAD575A04305A8DE0BFF353_H
#define RESBUYBOSSSTATECOUNT_T7A0929BCF26C3B033FAD575A04305A8DE0BFF353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResBuyBossStateCount
struct  ResBuyBossStateCount_t7A0929BCF26C3B033FAD575A04305A8DE0BFF353  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResBuyBossStateCount::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(ResBuyBossStateCount_t7A0929BCF26C3B033FAD575A04305A8DE0BFF353, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBUYBOSSSTATECOUNT_T7A0929BCF26C3B033FAD575A04305A8DE0BFF353_H
#ifndef RESCHALLENGEENDINFO_TDF48EEA03153A10867AE7A42D5EB5176E2DA9A61_H
#define RESCHALLENGEENDINFO_TDF48EEA03153A10867AE7A42D5EB5176E2DA9A61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResChallengeEndInfo
struct  ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResChallengeEndInfo::challengeLevel
	int32_t ___challengeLevel_1;
	// System.Int32 MSG_copyMap.ResChallengeEndInfo::state
	int32_t ___state_2;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResChallengeEndInfo::reward
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___reward_3;

public:
	inline static int32_t get_offset_of_challengeLevel_1() { return static_cast<int32_t>(offsetof(ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61, ___challengeLevel_1)); }
	inline int32_t get_challengeLevel_1() const { return ___challengeLevel_1; }
	inline int32_t* get_address_of_challengeLevel_1() { return &___challengeLevel_1; }
	inline void set_challengeLevel_1(int32_t value)
	{
		___challengeLevel_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_reward_3() { return static_cast<int32_t>(offsetof(ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61, ___reward_3)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_reward_3() const { return ___reward_3; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_reward_3() { return &___reward_3; }
	inline void set_reward_3(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___reward_3 = value;
		Il2CppCodeGenWriteBarrier((&___reward_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHALLENGEENDINFO_TDF48EEA03153A10867AE7A42D5EB5176E2DA9A61_H
#ifndef RESCHALLENGEENTERPANEL_T2E5C687C3C0525D1130BA6AD96044D91426F5C2D_H
#define RESCHALLENGEENTERPANEL_T2E5C687C3C0525D1130BA6AD96044D91426F5C2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResChallengeEnterPanel
struct  ResChallengeEnterPanel_t2E5C687C3C0525D1130BA6AD96044D91426F5C2D  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResChallengeEnterPanel::overLevel
	int32_t ___overLevel_1;

public:
	inline static int32_t get_offset_of_overLevel_1() { return static_cast<int32_t>(offsetof(ResChallengeEnterPanel_t2E5C687C3C0525D1130BA6AD96044D91426F5C2D, ___overLevel_1)); }
	inline int32_t get_overLevel_1() const { return ___overLevel_1; }
	inline int32_t* get_address_of_overLevel_1() { return &___overLevel_1; }
	inline void set_overLevel_1(int32_t value)
	{
		___overLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHALLENGEENTERPANEL_T2E5C687C3C0525D1130BA6AD96044D91426F5C2D_H
#ifndef RESCHALLENGEINFO_TD7F242B0DA32E95AF90552B70A45842ED7711FA5_H
#define RESCHALLENGEINFO_TD7F242B0DA32E95AF90552B70A45842ED7711FA5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResChallengeInfo
struct  ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResChallengeInfo::challengeLevel
	int32_t ___challengeLevel_1;
	// System.Int32 MSG_copyMap.ResChallengeInfo::endTime
	int32_t ___endTime_2;
	// System.Boolean MSG_copyMap.ResChallengeInfo::refresh
	bool ___refresh_3;

public:
	inline static int32_t get_offset_of_challengeLevel_1() { return static_cast<int32_t>(offsetof(ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5, ___challengeLevel_1)); }
	inline int32_t get_challengeLevel_1() const { return ___challengeLevel_1; }
	inline int32_t* get_address_of_challengeLevel_1() { return &___challengeLevel_1; }
	inline void set_challengeLevel_1(int32_t value)
	{
		___challengeLevel_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5, ___endTime_2)); }
	inline int32_t get_endTime_2() const { return ___endTime_2; }
	inline int32_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int32_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_refresh_3() { return static_cast<int32_t>(offsetof(ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5, ___refresh_3)); }
	inline bool get_refresh_3() const { return ___refresh_3; }
	inline bool* get_address_of_refresh_3() { return &___refresh_3; }
	inline void set_refresh_3(bool value)
	{
		___refresh_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHALLENGEINFO_TD7F242B0DA32E95AF90552B70A45842ED7711FA5_H
#ifndef RESCOPYSETTING_TD70846E7C611D7AE5749D64C03D8BB5831C2346D_H
#define RESCOPYSETTING_TD70846E7C611D7AE5749D64C03D8BB5831C2346D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResCopySetting
struct  ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResCopySetting::copyId
	int32_t ___copyId_1;
	// System.Int32 MSG_copyMap.ResCopySetting::mergeCount
	int32_t ___mergeCount_2;

public:
	inline static int32_t get_offset_of_copyId_1() { return static_cast<int32_t>(offsetof(ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D, ___copyId_1)); }
	inline int32_t get_copyId_1() const { return ___copyId_1; }
	inline int32_t* get_address_of_copyId_1() { return &___copyId_1; }
	inline void set_copyId_1(int32_t value)
	{
		___copyId_1 = value;
	}

	inline static int32_t get_offset_of_mergeCount_2() { return static_cast<int32_t>(offsetof(ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D, ___mergeCount_2)); }
	inline int32_t get_mergeCount_2() const { return ___mergeCount_2; }
	inline int32_t* get_address_of_mergeCount_2() { return &___mergeCount_2; }
	inline void set_mergeCount_2(int32_t value)
	{
		___mergeCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOPYSETTING_TD70846E7C611D7AE5749D64C03D8BB5831C2346D_H
#ifndef RESENTERFAIRYCOPY_T1439AC38015A19E40B897DA20442901E72B7177A_H
#define RESENTERFAIRYCOPY_T1439AC38015A19E40B897DA20442901E72B7177A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResEnterFairyCopy
struct  ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResEnterFairyCopy::endTime
	int32_t ___endTime_1;
	// System.Int32 MSG_copyMap.ResEnterFairyCopy::level
	int32_t ___level_2;

public:
	inline static int32_t get_offset_of_endTime_1() { return static_cast<int32_t>(offsetof(ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A, ___endTime_1)); }
	inline int32_t get_endTime_1() const { return ___endTime_1; }
	inline int32_t* get_address_of_endTime_1() { return &___endTime_1; }
	inline void set_endTime_1(int32_t value)
	{
		___endTime_1 = value;
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESENTERFAIRYCOPY_T1439AC38015A19E40B897DA20442901E72B7177A_H
#ifndef RESEXPCOPY_T451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE_H
#define RESEXPCOPY_T451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResExpCopy
struct  ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResExpCopy::startTime
	int32_t ___startTime_1;
	// System.Int32 MSG_copyMap.ResExpCopy::endTime
	int32_t ___endTime_2;
	// System.Int32 MSG_copyMap.ResExpCopy::monsterNum
	int32_t ___monsterNum_3;
	// System.Int64 MSG_copyMap.ResExpCopy::totalExp
	int64_t ___totalExp_4;

public:
	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE, ___startTime_1)); }
	inline int32_t get_startTime_1() const { return ___startTime_1; }
	inline int32_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(int32_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE, ___endTime_2)); }
	inline int32_t get_endTime_2() const { return ___endTime_2; }
	inline int32_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int32_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_monsterNum_3() { return static_cast<int32_t>(offsetof(ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE, ___monsterNum_3)); }
	inline int32_t get_monsterNum_3() const { return ___monsterNum_3; }
	inline int32_t* get_address_of_monsterNum_3() { return &___monsterNum_3; }
	inline void set_monsterNum_3(int32_t value)
	{
		___monsterNum_3 = value;
	}

	inline static int32_t get_offset_of_totalExp_4() { return static_cast<int32_t>(offsetof(ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE, ___totalExp_4)); }
	inline int64_t get_totalExp_4() const { return ___totalExp_4; }
	inline int64_t* get_address_of_totalExp_4() { return &___totalExp_4; }
	inline void set_totalExp_4(int64_t value)
	{
		___totalExp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESEXPCOPY_T451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE_H
#ifndef RESFAIRYCOPYRESULT_T0686641DF2F59B8E023C2B6EF235543A46AF9996_H
#define RESFAIRYCOPYRESULT_T0686641DF2F59B8E023C2B6EF235543A46AF9996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResFairyCopyResult
struct  ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResFairyCopyResult::score
	int32_t ___score_1;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResFairyCopyResult::rewardlist
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___rewardlist_2;

public:
	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_rewardlist_2() { return static_cast<int32_t>(offsetof(ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996, ___rewardlist_2)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_rewardlist_2() const { return ___rewardlist_2; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_rewardlist_2() { return &___rewardlist_2; }
	inline void set_rewardlist_2(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___rewardlist_2 = value;
		Il2CppCodeGenWriteBarrier((&___rewardlist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFAIRYCOPYRESULT_T0686641DF2F59B8E023C2B6EF235543A46AF9996_H
#ifndef RESGUILDTASKCOPYENTER_T02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9_H
#define RESGUILDTASKCOPYENTER_T02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResGuildTaskCopyEnter
struct  ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResGuildTaskCopyEnter::startTime
	int32_t ___startTime_1;
	// System.Int32 MSG_copyMap.ResGuildTaskCopyEnter::endTime
	int32_t ___endTime_2;
	// System.Int32 MSG_copyMap.ResGuildTaskCopyEnter::monsterCount
	int32_t ___monsterCount_3;
	// System.Int32 MSG_copyMap.ResGuildTaskCopyEnter::stage
	int32_t ___stage_4;
	// System.Int32 MSG_copyMap.ResGuildTaskCopyEnter::stageCount
	int32_t ___stageCount_5;

public:
	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9, ___startTime_1)); }
	inline int32_t get_startTime_1() const { return ___startTime_1; }
	inline int32_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(int32_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9, ___endTime_2)); }
	inline int32_t get_endTime_2() const { return ___endTime_2; }
	inline int32_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int32_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_monsterCount_3() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9, ___monsterCount_3)); }
	inline int32_t get_monsterCount_3() const { return ___monsterCount_3; }
	inline int32_t* get_address_of_monsterCount_3() { return &___monsterCount_3; }
	inline void set_monsterCount_3(int32_t value)
	{
		___monsterCount_3 = value;
	}

	inline static int32_t get_offset_of_stage_4() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9, ___stage_4)); }
	inline int32_t get_stage_4() const { return ___stage_4; }
	inline int32_t* get_address_of_stage_4() { return &___stage_4; }
	inline void set_stage_4(int32_t value)
	{
		___stage_4 = value;
	}

	inline static int32_t get_offset_of_stageCount_5() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9, ___stageCount_5)); }
	inline int32_t get_stageCount_5() const { return ___stageCount_5; }
	inline int32_t* get_address_of_stageCount_5() { return &___stageCount_5; }
	inline void set_stageCount_5(int32_t value)
	{
		___stageCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGUILDTASKCOPYENTER_T02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9_H
#ifndef RESGUILDTASKCOPYINFO_T313E2164188B8842A071FC1E3336EFC9C0E35DFD_H
#define RESGUILDTASKCOPYINFO_T313E2164188B8842A071FC1E3336EFC9C0E35DFD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResGuildTaskCopyInfo
struct  ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResGuildTaskCopyInfo::monsterCount
	int32_t ___monsterCount_1;
	// System.Int32 MSG_copyMap.ResGuildTaskCopyInfo::stage
	int32_t ___stage_2;

public:
	inline static int32_t get_offset_of_monsterCount_1() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD, ___monsterCount_1)); }
	inline int32_t get_monsterCount_1() const { return ___monsterCount_1; }
	inline int32_t* get_address_of_monsterCount_1() { return &___monsterCount_1; }
	inline void set_monsterCount_1(int32_t value)
	{
		___monsterCount_1 = value;
	}

	inline static int32_t get_offset_of_stage_2() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD, ___stage_2)); }
	inline int32_t get_stage_2() const { return ___stage_2; }
	inline int32_t* get_address_of_stage_2() { return &___stage_2; }
	inline void set_stage_2(int32_t value)
	{
		___stage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGUILDTASKCOPYINFO_T313E2164188B8842A071FC1E3336EFC9C0E35DFD_H
#ifndef RESGUILDTASKCOPYRESULT_TF0B6403F2432CC05D0892939BC22BB88F3DE4676_H
#define RESGUILDTASKCOPYRESULT_TF0B6403F2432CC05D0892939BC22BB88F3DE4676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResGuildTaskCopyResult
struct  ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResGuildTaskCopyResult::winType
	int32_t ___winType_1;
	// System.String MSG_copyMap.ResGuildTaskCopyResult::roleName
	String_t* ___roleName_2;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResGuildTaskCopyResult::rewardlist
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___rewardlist_3;

public:
	inline static int32_t get_offset_of_winType_1() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676, ___winType_1)); }
	inline int32_t get_winType_1() const { return ___winType_1; }
	inline int32_t* get_address_of_winType_1() { return &___winType_1; }
	inline void set_winType_1(int32_t value)
	{
		___winType_1 = value;
	}

	inline static int32_t get_offset_of_roleName_2() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676, ___roleName_2)); }
	inline String_t* get_roleName_2() const { return ___roleName_2; }
	inline String_t** get_address_of_roleName_2() { return &___roleName_2; }
	inline void set_roleName_2(String_t* value)
	{
		___roleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_2), value);
	}

	inline static int32_t get_offset_of_rewardlist_3() { return static_cast<int32_t>(offsetof(ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676, ___rewardlist_3)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_rewardlist_3() const { return ___rewardlist_3; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_rewardlist_3() { return &___rewardlist_3; }
	inline void set_rewardlist_3(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___rewardlist_3 = value;
		Il2CppCodeGenWriteBarrier((&___rewardlist_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGUILDTASKCOPYRESULT_TF0B6403F2432CC05D0892939BC22BB88F3DE4676_H
#ifndef RESMANYCOPY_T8C31701DC6E3DCE611F27CFAD457F469ACA01636_H
#define RESMANYCOPY_T8C31701DC6E3DCE611F27CFAD457F469ACA01636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResManyCopy
struct  ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResManyCopy::startTime
	int32_t ___startTime_1;
	// System.Int32 MSG_copyMap.ResManyCopy::endTime
	int32_t ___endTime_2;
	// System.Int32 MSG_copyMap.ResManyCopy::monsterNum
	int32_t ___monsterNum_3;
	// System.Int32 MSG_copyMap.ResManyCopy::stage
	int32_t ___stage_4;

public:
	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636, ___startTime_1)); }
	inline int32_t get_startTime_1() const { return ___startTime_1; }
	inline int32_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(int32_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636, ___endTime_2)); }
	inline int32_t get_endTime_2() const { return ___endTime_2; }
	inline int32_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(int32_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_monsterNum_3() { return static_cast<int32_t>(offsetof(ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636, ___monsterNum_3)); }
	inline int32_t get_monsterNum_3() const { return ___monsterNum_3; }
	inline int32_t* get_address_of_monsterNum_3() { return &___monsterNum_3; }
	inline void set_monsterNum_3(int32_t value)
	{
		___monsterNum_3 = value;
	}

	inline static int32_t get_offset_of_stage_4() { return static_cast<int32_t>(offsetof(ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636, ___stage_4)); }
	inline int32_t get_stage_4() const { return ___stage_4; }
	inline int32_t* get_address_of_stage_4() { return &___stage_4; }
	inline void set_stage_4(int32_t value)
	{
		___stage_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMANYCOPY_T8C31701DC6E3DCE611F27CFAD457F469ACA01636_H
#ifndef RESMANYCOPYRESULT_TB410479FED06E223A572878A98380D9A8D9E6DD2_H
#define RESMANYCOPYRESULT_TB410479FED06E223A572878A98380D9A8D9E6DD2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResManyCopyResult
struct  ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResManyCopyResult::starNum
	int32_t ___starNum_1;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResManyCopyResult::rewardlist
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___rewardlist_2;

public:
	inline static int32_t get_offset_of_starNum_1() { return static_cast<int32_t>(offsetof(ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2, ___starNum_1)); }
	inline int32_t get_starNum_1() const { return ___starNum_1; }
	inline int32_t* get_address_of_starNum_1() { return &___starNum_1; }
	inline void set_starNum_1(int32_t value)
	{
		___starNum_1 = value;
	}

	inline static int32_t get_offset_of_rewardlist_2() { return static_cast<int32_t>(offsetof(ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2, ___rewardlist_2)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_rewardlist_2() const { return ___rewardlist_2; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_rewardlist_2() { return &___rewardlist_2; }
	inline void set_rewardlist_2(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___rewardlist_2 = value;
		Il2CppCodeGenWriteBarrier((&___rewardlist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMANYCOPYRESULT_TB410479FED06E223A572878A98380D9A8D9E6DD2_H
#ifndef RESOPENBOSSSTATEPANLE_TCB9848BB0B4769FC020B8089C7EE9871EF5B4BED_H
#define RESOPENBOSSSTATEPANLE_TCB9848BB0B4769FC020B8089C7EE9871EF5B4BED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResOpenBossStatePanle
struct  ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_copyMap.BossStateInfo> MSG_copyMap.ResOpenBossStatePanle::bossList
	List_1_t66B7FC44BB124A6240989B912720E4D72C603FF2 * ___bossList_1;
	// System.Int32 MSG_copyMap.ResOpenBossStatePanle::maxLayer
	int32_t ___maxLayer_2;
	// System.Int32 MSG_copyMap.ResOpenBossStatePanle::count
	int32_t ___count_3;
	// System.Int32 MSG_copyMap.ResOpenBossStatePanle::boughtCount
	int32_t ___boughtCount_4;

public:
	inline static int32_t get_offset_of_bossList_1() { return static_cast<int32_t>(offsetof(ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED, ___bossList_1)); }
	inline List_1_t66B7FC44BB124A6240989B912720E4D72C603FF2 * get_bossList_1() const { return ___bossList_1; }
	inline List_1_t66B7FC44BB124A6240989B912720E4D72C603FF2 ** get_address_of_bossList_1() { return &___bossList_1; }
	inline void set_bossList_1(List_1_t66B7FC44BB124A6240989B912720E4D72C603FF2 * value)
	{
		___bossList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_1), value);
	}

	inline static int32_t get_offset_of_maxLayer_2() { return static_cast<int32_t>(offsetof(ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED, ___maxLayer_2)); }
	inline int32_t get_maxLayer_2() const { return ___maxLayer_2; }
	inline int32_t* get_address_of_maxLayer_2() { return &___maxLayer_2; }
	inline void set_maxLayer_2(int32_t value)
	{
		___maxLayer_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_boughtCount_4() { return static_cast<int32_t>(offsetof(ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED, ___boughtCount_4)); }
	inline int32_t get_boughtCount_4() const { return ___boughtCount_4; }
	inline int32_t* get_address_of_boughtCount_4() { return &___boughtCount_4; }
	inline void set_boughtCount_4(int32_t value)
	{
		___boughtCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENBOSSSTATEPANLE_TCB9848BB0B4769FC020B8089C7EE9871EF5B4BED_H
#ifndef RESOPENFAIRYCOPYPANEL_TD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD_H
#define RESOPENFAIRYCOPYPANEL_TD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResOpenFairyCopyPanel
struct  ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResOpenFairyCopyPanel::remainCount
	int32_t ___remainCount_1;
	// System.Int32 MSG_copyMap.ResOpenFairyCopyPanel::maxCount
	int32_t ___maxCount_2;
	// System.Int32 MSG_copyMap.ResOpenFairyCopyPanel::buyCount
	int32_t ___buyCount_3;
	// System.Int32 MSG_copyMap.ResOpenFairyCopyPanel::canBuyCount
	int32_t ___canBuyCount_4;
	// System.Int32 MSG_copyMap.ResOpenFairyCopyPanel::mergeCount
	int32_t ___mergeCount_5;

public:
	inline static int32_t get_offset_of_remainCount_1() { return static_cast<int32_t>(offsetof(ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD, ___remainCount_1)); }
	inline int32_t get_remainCount_1() const { return ___remainCount_1; }
	inline int32_t* get_address_of_remainCount_1() { return &___remainCount_1; }
	inline void set_remainCount_1(int32_t value)
	{
		___remainCount_1 = value;
	}

	inline static int32_t get_offset_of_maxCount_2() { return static_cast<int32_t>(offsetof(ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD, ___maxCount_2)); }
	inline int32_t get_maxCount_2() const { return ___maxCount_2; }
	inline int32_t* get_address_of_maxCount_2() { return &___maxCount_2; }
	inline void set_maxCount_2(int32_t value)
	{
		___maxCount_2 = value;
	}

	inline static int32_t get_offset_of_buyCount_3() { return static_cast<int32_t>(offsetof(ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD, ___buyCount_3)); }
	inline int32_t get_buyCount_3() const { return ___buyCount_3; }
	inline int32_t* get_address_of_buyCount_3() { return &___buyCount_3; }
	inline void set_buyCount_3(int32_t value)
	{
		___buyCount_3 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_4() { return static_cast<int32_t>(offsetof(ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD, ___canBuyCount_4)); }
	inline int32_t get_canBuyCount_4() const { return ___canBuyCount_4; }
	inline int32_t* get_address_of_canBuyCount_4() { return &___canBuyCount_4; }
	inline void set_canBuyCount_4(int32_t value)
	{
		___canBuyCount_4 = value;
	}

	inline static int32_t get_offset_of_mergeCount_5() { return static_cast<int32_t>(offsetof(ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD, ___mergeCount_5)); }
	inline int32_t get_mergeCount_5() const { return ___mergeCount_5; }
	inline int32_t* get_address_of_mergeCount_5() { return &___mergeCount_5; }
	inline void set_mergeCount_5(int32_t value)
	{
		___mergeCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENFAIRYCOPYPANEL_TD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD_H
#ifndef RESOPENMANYCOPYPANEL_TDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F_H
#define RESOPENMANYCOPYPANEL_TDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResOpenManyCopyPanel
struct  ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::copyId
	int32_t ___copyId_1;
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::remainCount
	int32_t ___remainCount_2;
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::maxCount
	int32_t ___maxCount_3;
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::buyCount
	int32_t ___buyCount_4;
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::canBuyCount
	int32_t ___canBuyCount_5;
	// System.Int32 MSG_copyMap.ResOpenManyCopyPanel::mergeCount
	int32_t ___mergeCount_6;

public:
	inline static int32_t get_offset_of_copyId_1() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___copyId_1)); }
	inline int32_t get_copyId_1() const { return ___copyId_1; }
	inline int32_t* get_address_of_copyId_1() { return &___copyId_1; }
	inline void set_copyId_1(int32_t value)
	{
		___copyId_1 = value;
	}

	inline static int32_t get_offset_of_remainCount_2() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___remainCount_2)); }
	inline int32_t get_remainCount_2() const { return ___remainCount_2; }
	inline int32_t* get_address_of_remainCount_2() { return &___remainCount_2; }
	inline void set_remainCount_2(int32_t value)
	{
		___remainCount_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_buyCount_4() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___buyCount_4)); }
	inline int32_t get_buyCount_4() const { return ___buyCount_4; }
	inline int32_t* get_address_of_buyCount_4() { return &___buyCount_4; }
	inline void set_buyCount_4(int32_t value)
	{
		___buyCount_4 = value;
	}

	inline static int32_t get_offset_of_canBuyCount_5() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___canBuyCount_5)); }
	inline int32_t get_canBuyCount_5() const { return ___canBuyCount_5; }
	inline int32_t* get_address_of_canBuyCount_5() { return &___canBuyCount_5; }
	inline void set_canBuyCount_5(int32_t value)
	{
		___canBuyCount_5 = value;
	}

	inline static int32_t get_offset_of_mergeCount_6() { return static_cast<int32_t>(offsetof(ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F, ___mergeCount_6)); }
	inline int32_t get_mergeCount_6() const { return ___mergeCount_6; }
	inline int32_t* get_address_of_mergeCount_6() { return &___mergeCount_6; }
	inline void set_mergeCount_6(int32_t value)
	{
		___mergeCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENMANYCOPYPANEL_TDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F_H
#ifndef RESSTARTCOPYINFO_TE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B_H
#define RESSTARTCOPYINFO_TE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResStartCopyInfo
struct  ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResStartCopyInfo::stage
	int32_t ___stage_1;
	// System.Int32 MSG_copyMap.ResStartCopyInfo::remainTime
	int32_t ___remainTime_2;
	// System.Int32 MSG_copyMap.ResStartCopyInfo::startTime
	int32_t ___startTime_3;
	// System.Int32 MSG_copyMap.ResStartCopyInfo::monsterNum
	int32_t ___monsterNum_4;
	// System.Int32 MSG_copyMap.ResStartCopyInfo::starNum
	int32_t ___starNum_5;

public:
	inline static int32_t get_offset_of_stage_1() { return static_cast<int32_t>(offsetof(ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B, ___stage_1)); }
	inline int32_t get_stage_1() const { return ___stage_1; }
	inline int32_t* get_address_of_stage_1() { return &___stage_1; }
	inline void set_stage_1(int32_t value)
	{
		___stage_1 = value;
	}

	inline static int32_t get_offset_of_remainTime_2() { return static_cast<int32_t>(offsetof(ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B, ___remainTime_2)); }
	inline int32_t get_remainTime_2() const { return ___remainTime_2; }
	inline int32_t* get_address_of_remainTime_2() { return &___remainTime_2; }
	inline void set_remainTime_2(int32_t value)
	{
		___remainTime_2 = value;
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B, ___startTime_3)); }
	inline int32_t get_startTime_3() const { return ___startTime_3; }
	inline int32_t* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(int32_t value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_monsterNum_4() { return static_cast<int32_t>(offsetof(ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B, ___monsterNum_4)); }
	inline int32_t get_monsterNum_4() const { return ___monsterNum_4; }
	inline int32_t* get_address_of_monsterNum_4() { return &___monsterNum_4; }
	inline void set_monsterNum_4(int32_t value)
	{
		___monsterNum_4 = value;
	}

	inline static int32_t get_offset_of_starNum_5() { return static_cast<int32_t>(offsetof(ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B, ___starNum_5)); }
	inline int32_t get_starNum_5() const { return ___starNum_5; }
	inline int32_t* get_address_of_starNum_5() { return &___starNum_5; }
	inline void set_starNum_5(int32_t value)
	{
		___starNum_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSTARTCOPYINFO_TE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B_H
#ifndef RESSTARTCOPYRESULT_T3B0222905567C49D2C3F7802DA9DBD2686B58E01_H
#define RESSTARTCOPYRESULT_T3B0222905567C49D2C3F7802DA9DBD2686B58E01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResStartCopyResult
struct  ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResStartCopyResult::starNum
	int32_t ___starNum_1;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResStartCopyResult::rewardlist
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___rewardlist_2;

public:
	inline static int32_t get_offset_of_starNum_1() { return static_cast<int32_t>(offsetof(ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01, ___starNum_1)); }
	inline int32_t get_starNum_1() const { return ___starNum_1; }
	inline int32_t* get_address_of_starNum_1() { return &___starNum_1; }
	inline void set_starNum_1(int32_t value)
	{
		___starNum_1 = value;
	}

	inline static int32_t get_offset_of_rewardlist_2() { return static_cast<int32_t>(offsetof(ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01, ___rewardlist_2)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_rewardlist_2() const { return ___rewardlist_2; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_rewardlist_2() { return &___rewardlist_2; }
	inline void set_rewardlist_2(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___rewardlist_2 = value;
		Il2CppCodeGenWriteBarrier((&___rewardlist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSTARTCOPYRESULT_T3B0222905567C49D2C3F7802DA9DBD2686B58E01_H
#ifndef RESSYNCMANYCOPY_T914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE_H
#define RESSYNCMANYCOPY_T914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResSyncManyCopy
struct  ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResSyncManyCopy::monsterNum
	int32_t ___monsterNum_1;
	// System.Int32 MSG_copyMap.ResSyncManyCopy::stage
	int32_t ___stage_2;

public:
	inline static int32_t get_offset_of_monsterNum_1() { return static_cast<int32_t>(offsetof(ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE, ___monsterNum_1)); }
	inline int32_t get_monsterNum_1() const { return ___monsterNum_1; }
	inline int32_t* get_address_of_monsterNum_1() { return &___monsterNum_1; }
	inline void set_monsterNum_1(int32_t value)
	{
		___monsterNum_1 = value;
	}

	inline static int32_t get_offset_of_stage_2() { return static_cast<int32_t>(offsetof(ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE, ___stage_2)); }
	inline int32_t get_stage_2() const { return ___stage_2; }
	inline int32_t* get_address_of_stage_2() { return &___stage_2; }
	inline void set_stage_2(int32_t value)
	{
		___stage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYNCMANYCOPY_T914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE_H
#ifndef RESSYNCMONSTEREXP_TECD8E85BC372A5B034676BED49EAF0245346E35B_H
#define RESSYNCMONSTEREXP_TECD8E85BC372A5B034676BED49EAF0245346E35B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResSyncMonsterExp
struct  ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResSyncMonsterExp::monsterNum
	int32_t ___monsterNum_1;
	// System.Int64 MSG_copyMap.ResSyncMonsterExp::totalExp
	int64_t ___totalExp_2;
	// System.Boolean MSG_copyMap.ResSyncMonsterExp::isEnd
	bool ___isEnd_3;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResSyncMonsterExp::list
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___list_4;

public:
	inline static int32_t get_offset_of_monsterNum_1() { return static_cast<int32_t>(offsetof(ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B, ___monsterNum_1)); }
	inline int32_t get_monsterNum_1() const { return ___monsterNum_1; }
	inline int32_t* get_address_of_monsterNum_1() { return &___monsterNum_1; }
	inline void set_monsterNum_1(int32_t value)
	{
		___monsterNum_1 = value;
	}

	inline static int32_t get_offset_of_totalExp_2() { return static_cast<int32_t>(offsetof(ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B, ___totalExp_2)); }
	inline int64_t get_totalExp_2() const { return ___totalExp_2; }
	inline int64_t* get_address_of_totalExp_2() { return &___totalExp_2; }
	inline void set_totalExp_2(int64_t value)
	{
		___totalExp_2 = value;
	}

	inline static int32_t get_offset_of_isEnd_3() { return static_cast<int32_t>(offsetof(ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B, ___isEnd_3)); }
	inline bool get_isEnd_3() const { return ___isEnd_3; }
	inline bool* get_address_of_isEnd_3() { return &___isEnd_3; }
	inline void set_isEnd_3(bool value)
	{
		___isEnd_3 = value;
	}

	inline static int32_t get_offset_of_list_4() { return static_cast<int32_t>(offsetof(ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B, ___list_4)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_list_4() const { return ___list_4; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_list_4() { return &___list_4; }
	inline void set_list_4(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___list_4 = value;
		Il2CppCodeGenWriteBarrier((&___list_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYNCMONSTEREXP_TECD8E85BC372A5B034676BED49EAF0245346E35B_H
#ifndef RESSYNCMONSTERNUM_T3DEE092B583D7EEB975743A05E6E18BBB800A0AF_H
#define RESSYNCMONSTERNUM_T3DEE092B583D7EEB975743A05E6E18BBB800A0AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResSyncMonsterNum
struct  ResSyncMonsterNum_t3DEE092B583D7EEB975743A05E6E18BBB800A0AF  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResSyncMonsterNum::monsterNum
	int32_t ___monsterNum_1;

public:
	inline static int32_t get_offset_of_monsterNum_1() { return static_cast<int32_t>(offsetof(ResSyncMonsterNum_t3DEE092B583D7EEB975743A05E6E18BBB800A0AF, ___monsterNum_1)); }
	inline int32_t get_monsterNum_1() const { return ___monsterNum_1; }
	inline int32_t* get_address_of_monsterNum_1() { return &___monsterNum_1; }
	inline void set_monsterNum_1(int32_t value)
	{
		___monsterNum_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYNCMONSTERNUM_T3DEE092B583D7EEB975743A05E6E18BBB800A0AF_H
#ifndef RESTEAMCAMPWAR_TDD80C7BED7E5BC2205804F6E00FD9BF921B17990_H
#define RESTEAMCAMPWAR_TDD80C7BED7E5BC2205804F6E00FD9BF921B17990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResTeamCampWar
struct  ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_copyMap.CampInfo> MSG_copyMap.ResTeamCampWar::campInfo
	List_1_t0B50F8D8D59466A4C633F85A2B664D46CC6F3B11 * ___campInfo_1;
	// System.Int32 MSG_copyMap.ResTeamCampWar::selfScore
	int32_t ___selfScore_2;
	// System.Int32 MSG_copyMap.ResTeamCampWar::selfRank
	int32_t ___selfRank_3;

public:
	inline static int32_t get_offset_of_campInfo_1() { return static_cast<int32_t>(offsetof(ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990, ___campInfo_1)); }
	inline List_1_t0B50F8D8D59466A4C633F85A2B664D46CC6F3B11 * get_campInfo_1() const { return ___campInfo_1; }
	inline List_1_t0B50F8D8D59466A4C633F85A2B664D46CC6F3B11 ** get_address_of_campInfo_1() { return &___campInfo_1; }
	inline void set_campInfo_1(List_1_t0B50F8D8D59466A4C633F85A2B664D46CC6F3B11 * value)
	{
		___campInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___campInfo_1), value);
	}

	inline static int32_t get_offset_of_selfScore_2() { return static_cast<int32_t>(offsetof(ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990, ___selfScore_2)); }
	inline int32_t get_selfScore_2() const { return ___selfScore_2; }
	inline int32_t* get_address_of_selfScore_2() { return &___selfScore_2; }
	inline void set_selfScore_2(int32_t value)
	{
		___selfScore_2 = value;
	}

	inline static int32_t get_offset_of_selfRank_3() { return static_cast<int32_t>(offsetof(ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990, ___selfRank_3)); }
	inline int32_t get_selfRank_3() const { return ___selfRank_3; }
	inline int32_t* get_address_of_selfRank_3() { return &___selfRank_3; }
	inline void set_selfRank_3(int32_t value)
	{
		___selfRank_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTEAMCAMPWAR_TDD80C7BED7E5BC2205804F6E00FD9BF921B17990_H
#ifndef RESTEAMCAMPWARENDINFO_T41DD549775E88859A89ADB3277A71A6AE9A40C14_H
#define RESTEAMCAMPWARENDINFO_T41DD549775E88859A89ADB3277A71A6AE9A40C14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResTeamCampWarEndInfo
struct  ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14  : public RuntimeObject
{
public:
	// System.Int32 MSG_copyMap.ResTeamCampWarEndInfo::selfScore
	int32_t ___selfScore_1;
	// System.Int32 MSG_copyMap.ResTeamCampWarEndInfo::selfRank
	int32_t ___selfRank_2;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_copyMap.ResTeamCampWarEndInfo::rewardlist
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___rewardlist_3;

public:
	inline static int32_t get_offset_of_selfScore_1() { return static_cast<int32_t>(offsetof(ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14, ___selfScore_1)); }
	inline int32_t get_selfScore_1() const { return ___selfScore_1; }
	inline int32_t* get_address_of_selfScore_1() { return &___selfScore_1; }
	inline void set_selfScore_1(int32_t value)
	{
		___selfScore_1 = value;
	}

	inline static int32_t get_offset_of_selfRank_2() { return static_cast<int32_t>(offsetof(ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14, ___selfRank_2)); }
	inline int32_t get_selfRank_2() const { return ___selfRank_2; }
	inline int32_t* get_address_of_selfRank_2() { return &___selfRank_2; }
	inline void set_selfRank_2(int32_t value)
	{
		___selfRank_2 = value;
	}

	inline static int32_t get_offset_of_rewardlist_3() { return static_cast<int32_t>(offsetof(ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14, ___rewardlist_3)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_rewardlist_3() const { return ___rewardlist_3; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_rewardlist_3() { return &___rewardlist_3; }
	inline void set_rewardlist_3(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___rewardlist_3 = value;
		Il2CppCodeGenWriteBarrier((&___rewardlist_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTEAMCAMPWARENDINFO_T41DD549775E88859A89ADB3277A71A6AE9A40C14_H
#ifndef RESTEAMCAMPWARRANK_T667CED95D1197D553EFB2A26EEB3A504A5696548_H
#define RESTEAMCAMPWARRANK_T667CED95D1197D553EFB2A26EEB3A504A5696548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResTeamCampWarRank
struct  ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_copyMap.RankInfo> MSG_copyMap.ResTeamCampWarRank::rankInfo
	List_1_tE74329557BEA0A6F99501594E74CF925AC70803B * ___rankInfo_1;
	// System.Int32 MSG_copyMap.ResTeamCampWarRank::selfScore
	int32_t ___selfScore_2;
	// System.Int32 MSG_copyMap.ResTeamCampWarRank::selfRank
	int32_t ___selfRank_3;

public:
	inline static int32_t get_offset_of_rankInfo_1() { return static_cast<int32_t>(offsetof(ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548, ___rankInfo_1)); }
	inline List_1_tE74329557BEA0A6F99501594E74CF925AC70803B * get_rankInfo_1() const { return ___rankInfo_1; }
	inline List_1_tE74329557BEA0A6F99501594E74CF925AC70803B ** get_address_of_rankInfo_1() { return &___rankInfo_1; }
	inline void set_rankInfo_1(List_1_tE74329557BEA0A6F99501594E74CF925AC70803B * value)
	{
		___rankInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___rankInfo_1), value);
	}

	inline static int32_t get_offset_of_selfScore_2() { return static_cast<int32_t>(offsetof(ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548, ___selfScore_2)); }
	inline int32_t get_selfScore_2() const { return ___selfScore_2; }
	inline int32_t* get_address_of_selfScore_2() { return &___selfScore_2; }
	inline void set_selfScore_2(int32_t value)
	{
		___selfScore_2 = value;
	}

	inline static int32_t get_offset_of_selfRank_3() { return static_cast<int32_t>(offsetof(ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548, ___selfRank_3)); }
	inline int32_t get_selfRank_3() const { return ___selfRank_3; }
	inline int32_t* get_address_of_selfRank_3() { return &___selfRank_3; }
	inline void set_selfRank_3(int32_t value)
	{
		___selfRank_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTEAMCAMPWARRANK_T667CED95D1197D553EFB2A26EEB3A504A5696548_H
#ifndef RESUPDATEBOSSSTATE_T305A53F402A0D72AF4CA9507C3FD2D84EF276A36_H
#define RESUPDATEBOSSSTATE_T305A53F402A0D72AF4CA9507C3FD2D84EF276A36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_copyMap.ResupdateBossState
struct  ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36  : public RuntimeObject
{
public:
	// MSG_copyMap.BossStateInfo MSG_copyMap.ResupdateBossState::bossList
	BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A * ___bossList_1;
	// System.Int32 MSG_copyMap.ResupdateBossState::maxLayer
	int32_t ___maxLayer_2;

public:
	inline static int32_t get_offset_of_bossList_1() { return static_cast<int32_t>(offsetof(ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36, ___bossList_1)); }
	inline BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A * get_bossList_1() const { return ___bossList_1; }
	inline BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A ** get_address_of_bossList_1() { return &___bossList_1; }
	inline void set_bossList_1(BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A * value)
	{
		___bossList_1 = value;
		Il2CppCodeGenWriteBarrier((&___bossList_1), value);
	}

	inline static int32_t get_offset_of_maxLayer_2() { return static_cast<int32_t>(offsetof(ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36, ___maxLayer_2)); }
	inline int32_t get_maxLayer_2() const { return ___maxLayer_2; }
	inline int32_t* get_address_of_maxLayer_2() { return &___maxLayer_2; }
	inline void set_maxLayer_2(int32_t value)
	{
		___maxLayer_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEBOSSSTATE_T305A53F402A0D72AF4CA9507C3FD2D84EF276A36_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8300 = { sizeof (ReqGoOnChallenge_tC4D41606858B206674A218D6040866A50B235E76), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8300[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8301 = { sizeof (ReqGotoNextChallenge_tB22E10E123DCBFBF90505FDC0F3B69D3DEFB373F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8301[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8302 = { sizeof (ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8302[4] = 
{
	0,
	ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5::get_offset_of_challengeLevel_1(),
	ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5::get_offset_of_endTime_2(),
	ResChallengeInfo_tD7F242B0DA32E95AF90552B70A45842ED7711FA5::get_offset_of_refresh_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8303 = { sizeof (ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8303[4] = 
{
	0,
	ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61::get_offset_of_challengeLevel_1(),
	ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61::get_offset_of_state_2(),
	ResChallengeEndInfo_tDF48EEA03153A10867AE7A42D5EB5176E2DA9A61::get_offset_of_reward_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8304 = { sizeof (ResChallengeEnterPanel_t2E5C687C3C0525D1130BA6AD96044D91426F5C2D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8304[2] = 
{
	0,
	ResChallengeEnterPanel_t2E5C687C3C0525D1130BA6AD96044D91426F5C2D::get_offset_of_overLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8305 = { sizeof (CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8305[3] = 
{
	CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331::get_offset_of_camp_0(),
	CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331::get_offset_of_count_1(),
	CampInfo_tA667950EC56EE8D4BA603F77960AEEA911344331::get_offset_of_points_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8306 = { sizeof (ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8306[4] = 
{
	0,
	ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990::get_offset_of_campInfo_1(),
	ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990::get_offset_of_selfScore_2(),
	ResTeamCampWar_tDD80C7BED7E5BC2205804F6E00FD9BF921B17990::get_offset_of_selfRank_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8307 = { sizeof (RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8307[5] = 
{
	RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F::get_offset_of_camp_0(),
	RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F::get_offset_of_name_1(),
	RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F::get_offset_of_lv_2(),
	RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F::get_offset_of_fight_3(),
	RankInfo_t4CD161728EE351623C2DDDE720BC76381E530F1F::get_offset_of_points_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8308 = { sizeof (ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8308[4] = 
{
	0,
	ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548::get_offset_of_rankInfo_1(),
	ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548::get_offset_of_selfScore_2(),
	ResTeamCampWarRank_t667CED95D1197D553EFB2A26EEB3A504A5696548::get_offset_of_selfRank_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8309 = { sizeof (ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8309[4] = 
{
	0,
	ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14::get_offset_of_selfScore_1(),
	ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14::get_offset_of_selfRank_2(),
	ResTeamCampWarEndInfo_t41DD549775E88859A89ADB3277A71A6AE9A40C14::get_offset_of_rewardlist_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8310 = { sizeof (ReqKillMonster_t9286C9E7AB93EBC294D414DF0A1E7181928C2CCC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8310[2] = 
{
	0,
	ReqKillMonster_t9286C9E7AB93EBC294D414DF0A1E7181928C2CCC::get_offset_of_monsterId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8311 = { sizeof (ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8311[6] = 
{
	0,
	ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B::get_offset_of_stage_1(),
	ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B::get_offset_of_remainTime_2(),
	ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B::get_offset_of_startTime_3(),
	ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B::get_offset_of_monsterNum_4(),
	ResStartCopyInfo_tE3DE10F7BCA8ACF71D3AE02652E2E2B685B97E4B::get_offset_of_starNum_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8312 = { sizeof (ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8312[3] = 
{
	0,
	ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01::get_offset_of_starNum_1(),
	ResStartCopyResult_t3B0222905567C49D2C3F7802DA9DBD2686B58E01::get_offset_of_rewardlist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8313 = { sizeof (ResSyncMonsterNum_t3DEE092B583D7EEB975743A05E6E18BBB800A0AF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8313[2] = 
{
	0,
	ResSyncMonsterNum_t3DEE092B583D7EEB975743A05E6E18BBB800A0AF::get_offset_of_monsterNum_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8314 = { sizeof (ReqOpenFairyCopyPanel_t906E178A6ACC11518A948EC0439288DA66A12980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8314[2] = 
{
	0,
	ReqOpenFairyCopyPanel_t906E178A6ACC11518A948EC0439288DA66A12980::get_offset_of_copyId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8315 = { sizeof (ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8315[6] = 
{
	0,
	ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD::get_offset_of_remainCount_1(),
	ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD::get_offset_of_maxCount_2(),
	ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD::get_offset_of_buyCount_3(),
	ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD::get_offset_of_canBuyCount_4(),
	ResOpenFairyCopyPanel_tD563F8B42CC11F577BAA9EE14EDFDFACD60C84AD::get_offset_of_mergeCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8316 = { sizeof (ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8316[3] = 
{
	0,
	ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996::get_offset_of_score_1(),
	ResFairyCopyResult_t0686641DF2F59B8E023C2B6EF235543A46AF9996::get_offset_of_rewardlist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8317 = { sizeof (ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8317[3] = 
{
	0,
	ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A::get_offset_of_endTime_1(),
	ResEnterFairyCopy_t1439AC38015A19E40B897DA20442901E72B7177A::get_offset_of_level_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8318 = { sizeof (ReqOpenManyCopyPanel_t5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8318[2] = 
{
	0,
	ReqOpenManyCopyPanel_t5B5C377355FA5D54C5A4A8D942C3AD2A16D2FC19::get_offset_of_copyId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8319 = { sizeof (ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8319[7] = 
{
	0,
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_copyId_1(),
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_remainCount_2(),
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_maxCount_3(),
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_buyCount_4(),
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_canBuyCount_5(),
	ResOpenManyCopyPanel_tDA4C7A2513DE45BCECFEFDB20DB2038AE02F0B8F::get_offset_of_mergeCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8320 = { sizeof (ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8320[3] = 
{
	0,
	ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94::get_offset_of_copyId_1(),
	ReqCopySetting_t5C253C4B9A03B5C56C0B3C88B1B89837436AFB94::get_offset_of_mergeCount_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8321 = { sizeof (ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8321[3] = 
{
	0,
	ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D::get_offset_of_copyId_1(),
	ResCopySetting_tD70846E7C611D7AE5749D64C03D8BB5831C2346D::get_offset_of_mergeCount_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8322 = { sizeof (ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8322[5] = 
{
	0,
	ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE::get_offset_of_startTime_1(),
	ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE::get_offset_of_endTime_2(),
	ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE::get_offset_of_monsterNum_3(),
	ResExpCopy_t451EC047DDF0DAF819BCC20C8DA2B38D4097BAEE::get_offset_of_totalExp_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8323 = { sizeof (ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8323[5] = 
{
	0,
	ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B::get_offset_of_monsterNum_1(),
	ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B::get_offset_of_totalExp_2(),
	ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B::get_offset_of_isEnd_3(),
	ResSyncMonsterExp_tECD8E85BC372A5B034676BED49EAF0245346E35B::get_offset_of_list_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8324 = { sizeof (ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8324[5] = 
{
	0,
	ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636::get_offset_of_startTime_1(),
	ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636::get_offset_of_endTime_2(),
	ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636::get_offset_of_monsterNum_3(),
	ResManyCopy_t8C31701DC6E3DCE611F27CFAD457F469ACA01636::get_offset_of_stage_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8325 = { sizeof (ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8325[3] = 
{
	0,
	ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE::get_offset_of_monsterNum_1(),
	ResSyncManyCopy_t914F58E5A8BAEA49E97FD8C501FA610C0CD85FEE::get_offset_of_stage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8326 = { sizeof (ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8326[3] = 
{
	0,
	ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2::get_offset_of_starNum_1(),
	ResManyCopyResult_tB410479FED06E223A572878A98380D9A8D9E6DD2::get_offset_of_rewardlist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8327 = { sizeof (ReqRefreshNextMonster_t099F1D06C5DE5E787D13DDEF4CC9780C6143C6CC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8327[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8328 = { sizeof (BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8328[4] = 
{
	BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A::get_offset_of_layer_0(),
	BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A::get_offset_of_bossId_1(),
	BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A::get_offset_of_isGetReward_2(),
	BossStateInfo_t442A99E297028912D7587CA811C2D7EF8C7C4B5A::get_offset_of_first_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8329 = { sizeof (ReqOpenBossStatePanle_tB732EB1204FAE5DE7E2BB2DDBE03804813F9DD93), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8329[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8330 = { sizeof (ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8330[5] = 
{
	0,
	ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED::get_offset_of_bossList_1(),
	ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED::get_offset_of_maxLayer_2(),
	ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED::get_offset_of_count_3(),
	ResOpenBossStatePanle_tCB9848BB0B4769FC020B8089C7EE9871EF5B4BED::get_offset_of_boughtCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8331 = { sizeof (ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8331[3] = 
{
	0,
	ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36::get_offset_of_bossList_1(),
	ResupdateBossState_t305A53F402A0D72AF4CA9507C3FD2D84EF276A36::get_offset_of_maxLayer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8332 = { sizeof (ReqBuyBossStateCount_t5C39D5097AD0D18C95F28FBCC14A456798779909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8332[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8333 = { sizeof (ResBuyBossStateCount_t7A0929BCF26C3B033FAD575A04305A8DE0BFF353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8333[2] = 
{
	0,
	ResBuyBossStateCount_t7A0929BCF26C3B033FAD575A04305A8DE0BFF353::get_offset_of_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8334 = { sizeof (ReqBossStateClearCd_t92420087ED4110395635FF1D108B41F141E72215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8334[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8335 = { sizeof (ReqCallMonster_tE00EA6701DB112D4C09B7FE539D2CC90BFE9AD15), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8335[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8336 = { sizeof (ReqFlashMonster_t92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8336[2] = 
{
	0,
	ReqFlashMonster_t92CF45E59D2C36F209EE4F3ADBD3FD324EBCB010::get_offset_of_num_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8337 = { sizeof (ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8337[6] = 
{
	0,
	ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9::get_offset_of_startTime_1(),
	ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9::get_offset_of_endTime_2(),
	ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9::get_offset_of_monsterCount_3(),
	ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9::get_offset_of_stage_4(),
	ResGuildTaskCopyEnter_t02D2815CBAF02F2C3C75BDDA1AF7E31A762B4AA9::get_offset_of_stageCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8338 = { sizeof (ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8338[3] = 
{
	0,
	ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD::get_offset_of_monsterCount_1(),
	ResGuildTaskCopyInfo_t313E2164188B8842A071FC1E3336EFC9C0E35DFD::get_offset_of_stage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8339 = { sizeof (ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8339[4] = 
{
	0,
	ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676::get_offset_of_winType_1(),
	ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676::get_offset_of_roleName_2(),
	ResGuildTaskCopyResult_tF0B6403F2432CC05D0892939BC22BB88F3DE4676::get_offset_of_rewardlist_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8340 = { sizeof (ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8340[3] = 
{
	0,
	ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63::get_offset_of_settingType_1(),
	ReqPlayerCommunityInfoSetting_t6A524146DC3C2E5BEEAEFA9B9DF1C7B7C2DA5E63::get_offset_of_playerCommunityInfoSettingInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8341 = { sizeof (PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8341[5] = 
{
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23::get_offset_of_decorate_0(),
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23::get_offset_of_pendan_1(),
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23::get_offset_of_sign_2(),
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23::get_offset_of_brith_3(),
	PlayerCommunityInfoSettingInfo_t717E5B75B4C109DE677C4E84420A1F3424D9AB23::get_offset_of_isNotFriendLeaveMsg_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8342 = { sizeof (ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8342[4] = 
{
	0,
	ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F::get_offset_of_settingType_1(),
	ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F::get_offset_of_isSettingSucceed_2(),
	ResPlayerCommunityInfoSetting_t8F36B8DFFFCE9C8B2E0DB82D12976BAAFBD7E34F::get_offset_of_playerCommunityInfoSettingInfo_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8343 = { sizeof (ReqPlayerCommunityInfo_t908198D95CD05A07AA9036CD68F4AB833C70EB80), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8343[2] = 
{
	0,
	ReqPlayerCommunityInfo_t908198D95CD05A07AA9036CD68F4AB833C70EB80::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8344 = { sizeof (PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8344[11] = 
{
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_roleId_0(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_roleName_1(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_roleLv_2(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_career_3(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_fightpower_4(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_guildName_5(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_serverId_6(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_facade_7(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_stateLv_8(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_playerCommunityInfoSettingInfo_9(),
	PlayerCommunityInfo_t1A241838C1A169143D9CD47D1447895E6B5C5BF2::get_offset_of_head_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8345 = { sizeof (ResPlayerCommunityInfo_tD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8345[2] = 
{
	0,
	ResPlayerCommunityInfo_tD7D002F4937F2C377F2C54C9CD3AECAEBFA6BC7B::get_offset_of_playerCommunityInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8346 = { sizeof (G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8346[3] = 
{
	0,
	G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797::get_offset_of_settingType_1(),
	G2SReqPlayerCommunityInfoSetting_t9B11F4AFD5D2F854C180818CF33F87DA67173797::get_offset_of_playerCommunityInfoSettingInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8347 = { sizeof (G2SReqPlayerCommunityInfo_tEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8347[2] = 
{
	0,
	G2SReqPlayerCommunityInfo_tEED3D43B2BD654EBD8B4889D1BAB8ECFD2EFBBC8::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8348 = { sizeof (CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8348[9] = 
{
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_leaveMessageId_0(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_chatername_1(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_condition_2(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_time_3(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_level_4(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_chaterSid_5(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_career_6(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_roleId_7(),
	CommunityLeaveMessageInfo_t9C2FDE4D6B84401177114770ADA2011B431D6CEB::get_offset_of_head_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8349 = { sizeof (ReqCommunityLeaveMessage_t50D1836BF13A2EF0627F086130BBFFC09EB9BB11), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8349[2] = 
{
	0,
	ReqCommunityLeaveMessage_t50D1836BF13A2EF0627F086130BBFFC09EB9BB11::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8350 = { sizeof (G2SReqCommunityLeaveMessage_t212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8350[2] = 
{
	0,
	G2SReqCommunityLeaveMessage_t212BC6ABF0CABAC529B8E1CFAA1E084F3F6500E0::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8351 = { sizeof (ResCommunityLeaveMessage_tF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8351[2] = 
{
	0,
	ResCommunityLeaveMessage_tF603C2CA2467E91D5EB3C55AF2D2B84EC94F0A34::get_offset_of_communityLeaveMessageInfoList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8352 = { sizeof (ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8352[3] = 
{
	0,
	ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166::get_offset_of_roleId_1(),
	ReqAddCommunityLeaveMessage_tC00835B739F901074D4EF43310CA3D2348BB5166::get_offset_of_condition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8353 = { sizeof (G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8353[4] = 
{
	0,
	G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7::get_offset_of_roleId_1(),
	G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7::get_offset_of_condition_2(),
	G2SReqAddCommunityLeaveMessage_t4D91B7F6F61C638E08295ACC783CA3CE9F5320A7::get_offset_of_isFriend_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8354 = { sizeof (ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8354[3] = 
{
	0,
	ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE::get_offset_of_roleId_1(),
	ReqDeleteCommunityLeaveMessage_t6DEE5B71D0AF8FEB1AF27E0FF036218A30CC06CE::get_offset_of_leaveMessageId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8355 = { sizeof (G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8355[3] = 
{
	0,
	G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC::get_offset_of_roleId_1(),
	G2SReqDeleteCommunityLeaveMessage_tB40CCEB582CD4CD449756E455D62B98F758F1EFC::get_offset_of_leaveMessageId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8356 = { sizeof (ReqFriendCircle_tC9A45D65206D697DFAE947045712D1EEDEA66C34), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8356[2] = 
{
	0,
	ReqFriendCircle_tC9A45D65206D697DFAE947045712D1EEDEA66C34::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8357 = { sizeof (G2SReqFriendCircle_tC65722D76F0FA272A663EA3463A2681CBD8047E8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8357[2] = 
{
	0,
	G2SReqFriendCircle_tC65722D76F0FA272A663EA3463A2681CBD8047E8::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8358 = { sizeof (FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8358[2] = 
{
	FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D::get_offset_of_chatername_0(),
	FriendCircleLeaveMessageInfo_t8D246323BA1AFA6208265576F71C28CCFE46448D::get_offset_of_condition_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8359 = { sizeof (FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8359[3] = 
{
	FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8::get_offset_of_friendCircleId_0(),
	FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8::get_offset_of_condition_1(),
	FriendCircleInfo_t0D4640172C4E7229CEDA5C746B8CAF63ABB92BE8::get_offset_of_friendCircleLeaveMessageInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8360 = { sizeof (ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8360[3] = 
{
	0,
	ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F::get_offset_of_type_1(),
	ResFriendCircleList_t5E940401D6A795BDB68DFBEE23759126C4401D1F::get_offset_of_friendCircleInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8361 = { sizeof (ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8361[3] = 
{
	0,
	ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4::get_offset_of_roleId_1(),
	ReqSendFriendCircle_t314C5000EA857532EE3FD28BB655185E2102F4F4::get_offset_of_condition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8362 = { sizeof (G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8362[3] = 
{
	0,
	G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1::get_offset_of_roleId_1(),
	G2SReqSendFriendCircle_tD6A90D2DADE734EEC6F64E481FB0259018041CE1::get_offset_of_condition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8363 = { sizeof (ReqDeleteFriendCircle_t0006CD76B73FD77CCB50768BF61585AF1ECAA36D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8363[2] = 
{
	0,
	ReqDeleteFriendCircle_t0006CD76B73FD77CCB50768BF61585AF1ECAA36D::get_offset_of_friendCircleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8364 = { sizeof (G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8364[3] = 
{
	0,
	G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9::get_offset_of_roleId_1(),
	G2SReqDeleteFriendCircle_t7C67DA8436BD85B103E1DE687D810F3C7C386BA9::get_offset_of_friendCircleId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8365 = { sizeof (ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8365[4] = 
{
	0,
	ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE::get_offset_of_targetRoleId_1(),
	ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE::get_offset_of_friendCircleId_2(),
	ReqCommentFriendCircle_tB41D146F8EA7E896B39303E18B3B4AB32B81DDEE::get_offset_of_commentCondition_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8366 = { sizeof (G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8366[4] = 
{
	0,
	G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C::get_offset_of_targetRoleId_1(),
	G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C::get_offset_of_friendCircleId_2(),
	G2SReqCommentFriendCircle_t95BF92D4C90ADD6FB7FD2FD92B8E4A719CDCE22C::get_offset_of_commentCondition_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8367 = { sizeof (CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8367[6] = 
{
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_roleId_0(),
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_name_1(),
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_platform_2(),
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_serverId_3(),
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_power_4(),
	CrossRole_tE52ECE508B3FE1E9961527A7BE7FCF774E5D08D9::get_offset_of_career_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8368 = { sizeof (ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8368[2] = 
{
	ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7::get_offset_of_modelId_0(),
	ShowItemInfo_tFD1431833EABA0C03DF1131FF709BFB413183ED7::get_offset_of_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8369 = { sizeof (GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8369[6] = 
{
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_id_0(),
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_modelId_1(),
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_x_2(),
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_y_3(),
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_radius_4(),
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9::get_offset_of_actType_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8370 = { sizeof (Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8370[8] = 
{
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_id_0(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_modelId_1(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_x_2(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_y_3(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_delay_4(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_radius_5(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_ownerId_6(),
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98::get_offset_of_moveSpeedFinal_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8371 = { sizeof (BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8371[5] = 
{
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F::get_offset_of_id_0(),
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F::get_offset_of_bonfireId_1(),
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F::get_offset_of_modelId_2(),
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F::get_offset_of_x_3(),
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F::get_offset_of_y_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8372 = { sizeof (TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8372[5] = 
{
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273::get_offset_of_id_0(),
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273::get_offset_of_stoneId_1(),
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273::get_offset_of_x_2(),
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273::get_offset_of_y_3(),
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273::get_offset_of_cd_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8373 = { sizeof (Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8373[4] = 
{
	Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C::get_offset_of_buffId_0(),
	Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C::get_offset_of_curLevel_1(),
	Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C::get_offset_of_remainTime_2(),
	Buff_t3620CE1D04466ECFE314DA49CE921B5F8627D16C::get_offset_of_args_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8374 = { sizeof (Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8374[2] = 
{
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94::get_offset_of_x_0(),
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94::get_offset_of_y_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8375 = { sizeof (PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8375[41] = 
{
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_playerId_0(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_name_1(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_career_2(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_level_3(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_x_4(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_y_5(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_curHp_6(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_maxHp_7(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_moveSpeedFinal_8(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_attackSpeedFinal_9(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_mountId_10(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_guildId_11(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_guildName_12(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_guildPost_13(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_posList_14(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_buffList_15(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_title_16(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_dirX_17(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_dirY_18(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_isGather_19(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_marriageOtherName_20(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_stateVip_21(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_onSitting_22(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_camp_23(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_fabaoId_24(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_fabaoUid_25(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_soulSpirte1_26(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_soulSpirte2_27(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_soulSpirte3_28(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_shiHaiCfgId_29(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_serverId_30(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_curWakan_31(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_maxWakan_32(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_facade_33(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_fightState_34(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_feijianId_35(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_feijianUid_36(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_childId_37(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_fightPower_38(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_head_39(),
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B::get_offset_of_childName_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8376 = { sizeof (MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8376[18] = 
{
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_id_0(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_dataID_1(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_camp_2(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_x_3(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_y_4(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_curHp_5(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_maxHp_6(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_moveSpeedFinal_7(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_attackSpeedFinal_8(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_fightState_9(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_posList_10(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_buffList_11(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_dirX_12(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_dirY_13(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_isRun_14(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_isbirth_15(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_armor_16(),
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE::get_offset_of_dropUserIds_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8377 = { sizeof (PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8377[14] = 
{
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_id_0(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_dataID_1(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_ownerID_2(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_ownerName_3(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_x_4(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_y_5(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_speed_6(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_posList_7(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_level_8(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_camp_9(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_curHp_10(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_maxHp_11(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_fightState_12(),
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB::get_offset_of_buffList_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8378 = { sizeof (NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8378[5] = 
{
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6::get_offset_of_npcId_0(),
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6::get_offset_of_dataID_1(),
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6::get_offset_of_x_2(),
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6::get_offset_of_y_3(),
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6::get_offset_of_dir_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8379 = { sizeof (GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8379[5] = 
{
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3::get_offset_of_gatherId_0(),
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3::get_offset_of_dataID_1(),
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3::get_offset_of_mapId_2(),
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3::get_offset_of_x_3(),
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3::get_offset_of_y_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8380 = { sizeof (NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8380[9] = 
{
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberId_0(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberName_1(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberLv_2(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberFighting_3(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberMapId_4(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_memberLine_5(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_career_6(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_haveTeam_7(),
	NearPlayerInfo_tE56834194A8FD72EB5A920B7A1F5426A766FE074::get_offset_of_mrank_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8381 = { sizeof (FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8381[8] = 
{
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberId_0(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberName_1(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberLv_2(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberFighting_3(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberMapId_4(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_memberLine_5(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_career_6(),
	FuzzyQueryList_tDAEE0455A44424E1FBE2CADE322547732969D718::get_offset_of_haveTeam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8382 = { sizeof (ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8382[6] = 
{
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_roleId_0(),
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_lv_1(),
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_name_2(),
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_sex_3(),
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_guildId_4(),
	ApplyInfo_t33EFFA5EC5A810CD4F46FE2074081889410C0FEF::get_offset_of_guildName_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8383 = { sizeof (powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8383[2] = 
{
	powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB::get_offset_of_type_0(),
	powerAttribute_t6A4513D44C987CA7FD284DBF44C1C73FBE2D68AB::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8384 = { sizeof (CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8384[4] = 
{
	CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7::get_offset_of_type_0(),
	CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7::get_offset_of_value_1(),
	CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7::get_offset_of_param_2(),
	CrossAttribute_t7AAE07202C007226E5697913F4558EFCEFD644D7::get_offset_of_param1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8385 = { sizeof (FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8385[7] = 
{
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_fashionBody_0(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_fashionWeapon_1(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_fashionHalo_2(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_fashionMatrix_3(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_wingId_4(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_spiritId_5(),
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3::get_offset_of_soulArmorId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8386 = { sizeof (HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8386[4] = 
{
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176::get_offset_of_fashionHead_0(),
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176::get_offset_of_fashionFrame_1(),
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176::get_offset_of_customHeadPath_2(),
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176::get_offset_of_useCustomHead_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8387 = { sizeof (KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8387[2] = 
{
	KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314::get_offset_of_key_0(),
	KeyValueInfo_t5B558EF676B5789D9C28E0E6C0B4DF47108DD314::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8388 = { sizeof (ReqCommercialize_tD0BAF70EADD41F3231DA76B4C3E3F851872698A7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8388[2] = 
{
	0,
	ReqCommercialize_tD0BAF70EADD41F3231DA76B4C3E3F851872698A7::get_offset_of_typ_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8389 = { sizeof (ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8389[3] = 
{
	ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9::get_offset_of_itemID_0(),
	ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9::get_offset_of_num_1(),
	ItemInfo_t74F77288CFAE11D0A73BDDEC517A2E5188EC1CF9::get_offset_of_bind_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8390 = { sizeof (DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8390[5] = 
{
	DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C::get_offset_of_awardId_0(),
	DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C::get_offset_of_position_1(),
	DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C::get_offset_of_day_2(),
	DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C::get_offset_of_money_3(),
	DailyRechargeCfg_t80FAFF92DB7C0B69FA104525B5B3177C46934C2C::get_offset_of_items_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8391 = { sizeof (ReqDailyRechargeCfg_t2FF3A0C6AF5A5A630F63651EB7CD842436F44496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8391[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8392 = { sizeof (ReqGetDailyRechargeAward_t73B847A85331647EEEC1E25DA6B8633F8A3E4504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8392[2] = 
{
	0,
	ReqGetDailyRechargeAward_t73B847A85331647EEEC1E25DA6B8633F8A3E4504::get_offset_of_awardId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8393 = { sizeof (ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8393[4] = 
{
	0,
	ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE::get_offset_of_startTime_1(),
	ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE::get_offset_of_endTime_2(),
	ResDailyRechargeCfg_t43AB99BCD976D60C225829449E1A1049763720BE::get_offset_of_cfgList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8394 = { sizeof (DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8394[3] = 
{
	DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89::get_offset_of_awardId_0(),
	DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89::get_offset_of_status_1(),
	DailyRechargeInfo_t8C1E2AE82EE0CD599947AEA4ACFFB8D3F3B8AA89::get_offset_of_day_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8395 = { sizeof (SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8395[4] = 
{
	0,
	SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63::get_offset_of_dailyRechargeList_1(),
	SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63::get_offset_of_isOpen_2(),
	SyncDailyRechargeInfo_t729E5B1F86BCB6A6DFF98A0990C7962518706A63::get_offset_of_count_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8396 = { sizeof (FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8396[3] = 
{
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9::get_offset_of_cfgID_0(),
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9::get_offset_of_goldCount_1(),
	FCChargeData_tF386C9BB09FC0FFEE48BDAB71BACDE0942BA7DA9::get_offset_of_isReward_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8397 = { sizeof (ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8397[4] = 
{
	0,
	ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7::get_offset_of_firstData_1(),
	ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7::get_offset_of_nextData_2(),
	ResFCChargeData_t6E7457C85AFC7238E90E50B576FAD9F076158AA7::get_offset_of_hundredData_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8398 = { sizeof (ReqFCChargeReward_tA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8398[2] = 
{
	0,
	ReqFCChargeReward_tA136A8239C0D28AD92262ECF87D5B7FD3DC6DBC9::get_offset_of_cfgID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8399 = { sizeof (ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable8399[6] = 
{
	0,
	ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F::get_offset_of_rechargeTotal_1(),
	ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F::get_offset_of_consumeTotal_2(),
	ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F::get_offset_of_rechargeIdList_3(),
	ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F::get_offset_of_consumeIdList_4(),
	ResDailyRechargeInfo_tB0181E11AB45865AC8FA47110063E1AC6C95536F::get_offset_of_boxRewardCount_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
