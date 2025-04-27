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


// MSG_Common.FacadeAttribute
struct FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3;
// MSG_Common.HeadAttribute
struct HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176;
// MSG_Marriage.MarryClone
struct MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139;
// MSG_Marriage.WeddingData
struct WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E;
// MSG_Marriage.WeddingMember
struct WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12;
// System.Collections.Generic.List`1<MSG_Marriage.BlessData>
struct List_1_t1CDA9E9785951C2BB324A4E8D90EF18A13169FE0;
// System.Collections.Generic.List`1<MSG_Marriage.MarryActivityShopInfo>
struct List_1_tD5631D10D5F808E88C497774BC38CC930036ED88;
// System.Collections.Generic.List`1<MSG_Marriage.MarryActivityTaskData>
struct List_1_t3D55FA1B1689D81991E96BA4EA9A9C86FB806B20;
// System.Collections.Generic.List`1<MSG_Marriage.MarryBox>
struct List_1_t091C2618869A886242D7BAE4F7876677C4D1D8B5;
// System.Collections.Generic.List`1<MSG_Marriage.MarryChild>
struct List_1_t7C870B251851F4157D532BFB8D4FC8A7944EBF07;
// System.Collections.Generic.List`1<MSG_Marriage.MarryDeclaration>
struct List_1_t6F87DA0372A99AA94E8196850CFEF172E9A4A8F5;
// System.Collections.Generic.List`1<MSG_Marriage.WeddingData>
struct List_1_t4636CAC30074A21B0DE86AAAADA0E58D0F98A309;
// System.Collections.Generic.List`1<MSG_Marriage.WeddingMember>
struct List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8;
// System.Collections.Generic.List`1<MSG_Melting.Material>
struct List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
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
#ifndef BLESSDATA_T6EF80E81F685866D6EEDD2DE197A91C57C64A3A0_H
#define BLESSDATA_T6EF80E81F685866D6EEDD2DE197A91C57C64A3A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.BlessData
struct  BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0  : public RuntimeObject
{
public:
	// System.String MSG_Marriage.BlessData::sendName
	String_t* ___sendName_0;
	// System.String MSG_Marriage.BlessData::receiveName
	String_t* ___receiveName_1;
	// System.Int32 MSG_Marriage.BlessData::itemID
	int32_t ___itemID_2;
	// System.Int32 MSG_Marriage.BlessData::num
	int32_t ___num_3;

public:
	inline static int32_t get_offset_of_sendName_0() { return static_cast<int32_t>(offsetof(BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0, ___sendName_0)); }
	inline String_t* get_sendName_0() const { return ___sendName_0; }
	inline String_t** get_address_of_sendName_0() { return &___sendName_0; }
	inline void set_sendName_0(String_t* value)
	{
		___sendName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sendName_0), value);
	}

	inline static int32_t get_offset_of_receiveName_1() { return static_cast<int32_t>(offsetof(BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0, ___receiveName_1)); }
	inline String_t* get_receiveName_1() const { return ___receiveName_1; }
	inline String_t** get_address_of_receiveName_1() { return &___receiveName_1; }
	inline void set_receiveName_1(String_t* value)
	{
		___receiveName_1 = value;
		Il2CppCodeGenWriteBarrier((&___receiveName_1), value);
	}

	inline static int32_t get_offset_of_itemID_2() { return static_cast<int32_t>(offsetof(BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0, ___itemID_2)); }
	inline int32_t get_itemID_2() const { return ___itemID_2; }
	inline int32_t* get_address_of_itemID_2() { return &___itemID_2; }
	inline void set_itemID_2(int32_t value)
	{
		___itemID_2 = value;
	}

	inline static int32_t get_offset_of_num_3() { return static_cast<int32_t>(offsetof(BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0, ___num_3)); }
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
#endif // BLESSDATA_T6EF80E81F685866D6EEDD2DE197A91C57C64A3A0_H
#ifndef MARRYACTIVITYSHOPINFO_T55765DF7639C0B77424FB55B12015C983B3AAF98_H
#define MARRYACTIVITYSHOPINFO_T55765DF7639C0B77424FB55B12015C983B3AAF98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryActivityShopInfo
struct  MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.MarryActivityShopInfo::shopId
	int32_t ___shopId_0;
	// System.Int32 MSG_Marriage.MarryActivityShopInfo::buyCount
	int32_t ___buyCount_1;

public:
	inline static int32_t get_offset_of_shopId_0() { return static_cast<int32_t>(offsetof(MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98, ___shopId_0)); }
	inline int32_t get_shopId_0() const { return ___shopId_0; }
	inline int32_t* get_address_of_shopId_0() { return &___shopId_0; }
	inline void set_shopId_0(int32_t value)
	{
		___shopId_0 = value;
	}

	inline static int32_t get_offset_of_buyCount_1() { return static_cast<int32_t>(offsetof(MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98, ___buyCount_1)); }
	inline int32_t get_buyCount_1() const { return ___buyCount_1; }
	inline int32_t* get_address_of_buyCount_1() { return &___buyCount_1; }
	inline void set_buyCount_1(int32_t value)
	{
		___buyCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYACTIVITYSHOPINFO_T55765DF7639C0B77424FB55B12015C983B3AAF98_H
#ifndef MARRYACTIVITYTASKDATA_T9837BAD0257AD36D218D0BE7DC65166C4571498A_H
#define MARRYACTIVITYTASKDATA_T9837BAD0257AD36D218D0BE7DC65166C4571498A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryActivityTaskData
struct  MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.MarryActivityTaskData::taskID
	int32_t ___taskID_0;
	// System.Int32 MSG_Marriage.MarryActivityTaskData::progress
	int32_t ___progress_1;
	// System.Boolean MSG_Marriage.MarryActivityTaskData::state
	bool ___state_2;

public:
	inline static int32_t get_offset_of_taskID_0() { return static_cast<int32_t>(offsetof(MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A, ___taskID_0)); }
	inline int32_t get_taskID_0() const { return ___taskID_0; }
	inline int32_t* get_address_of_taskID_0() { return &___taskID_0; }
	inline void set_taskID_0(int32_t value)
	{
		___taskID_0 = value;
	}

	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A, ___progress_1)); }
	inline int32_t get_progress_1() const { return ___progress_1; }
	inline int32_t* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(int32_t value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A, ___state_2)); }
	inline bool get_state_2() const { return ___state_2; }
	inline bool* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(bool value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYACTIVITYTASKDATA_T9837BAD0257AD36D218D0BE7DC65166C4571498A_H
#ifndef MARRYBOX_TD80C4B5E4E2745CBD2019833344A4D7824409C45_H
#define MARRYBOX_TD80C4B5E4E2745CBD2019833344A4D7824409C45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryBox
struct  MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.MarryBox::role
	int64_t ___role_0;
	// System.Int32 MSG_Marriage.MarryBox::reward
	int32_t ___reward_1;
	// System.Int32 MSG_Marriage.MarryBox::onceReward
	int32_t ___onceReward_2;
	// System.Int32 MSG_Marriage.MarryBox::remainTime
	int32_t ___remainTime_3;

public:
	inline static int32_t get_offset_of_role_0() { return static_cast<int32_t>(offsetof(MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45, ___role_0)); }
	inline int64_t get_role_0() const { return ___role_0; }
	inline int64_t* get_address_of_role_0() { return &___role_0; }
	inline void set_role_0(int64_t value)
	{
		___role_0 = value;
	}

	inline static int32_t get_offset_of_reward_1() { return static_cast<int32_t>(offsetof(MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45, ___reward_1)); }
	inline int32_t get_reward_1() const { return ___reward_1; }
	inline int32_t* get_address_of_reward_1() { return &___reward_1; }
	inline void set_reward_1(int32_t value)
	{
		___reward_1 = value;
	}

	inline static int32_t get_offset_of_onceReward_2() { return static_cast<int32_t>(offsetof(MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45, ___onceReward_2)); }
	inline int32_t get_onceReward_2() const { return ___onceReward_2; }
	inline int32_t* get_address_of_onceReward_2() { return &___onceReward_2; }
	inline void set_onceReward_2(int32_t value)
	{
		___onceReward_2 = value;
	}

	inline static int32_t get_offset_of_remainTime_3() { return static_cast<int32_t>(offsetof(MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45, ___remainTime_3)); }
	inline int32_t get_remainTime_3() const { return ___remainTime_3; }
	inline int32_t* get_address_of_remainTime_3() { return &___remainTime_3; }
	inline void set_remainTime_3(int32_t value)
	{
		___remainTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYBOX_TD80C4B5E4E2745CBD2019833344A4D7824409C45_H
#ifndef MARRYCHILD_T435216DCAFB1E70BC8BC44E26C975F48397F44A0_H
#define MARRYCHILD_T435216DCAFB1E70BC8BC44E26C975F48397F44A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryChild
struct  MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.MarryChild::id
	int32_t ___id_0;
	// System.String MSG_Marriage.MarryChild::name
	String_t* ___name_1;
	// System.Int32 MSG_Marriage.MarryChild::level
	int32_t ___level_2;
	// System.Int32 MSG_Marriage.MarryChild::exp
	int32_t ___exp_3;
	// System.Boolean MSG_Marriage.MarryChild::isActive
	bool ___isActive_4;
	// System.Int32 MSG_Marriage.MarryChild::battle
	int32_t ___battle_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_exp_3() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___exp_3)); }
	inline int32_t get_exp_3() const { return ___exp_3; }
	inline int32_t* get_address_of_exp_3() { return &___exp_3; }
	inline void set_exp_3(int32_t value)
	{
		___exp_3 = value;
	}

	inline static int32_t get_offset_of_isActive_4() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___isActive_4)); }
	inline bool get_isActive_4() const { return ___isActive_4; }
	inline bool* get_address_of_isActive_4() { return &___isActive_4; }
	inline void set_isActive_4(bool value)
	{
		___isActive_4 = value;
	}

	inline static int32_t get_offset_of_battle_5() { return static_cast<int32_t>(offsetof(MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0, ___battle_5)); }
	inline int32_t get_battle_5() const { return ___battle_5; }
	inline int32_t* get_address_of_battle_5() { return &___battle_5; }
	inline void set_battle_5(int32_t value)
	{
		___battle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYCHILD_T435216DCAFB1E70BC8BC44E26C975F48397F44A0_H
#ifndef MARRYCLONE_T4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139_H
#define MARRYCLONE_T4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryClone
struct  MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.MarryClone::remainTimes
	int32_t ___remainTimes_0;
	// System.Int32 MSG_Marriage.MarryClone::remainBuy
	int32_t ___remainBuy_1;

public:
	inline static int32_t get_offset_of_remainTimes_0() { return static_cast<int32_t>(offsetof(MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139, ___remainTimes_0)); }
	inline int32_t get_remainTimes_0() const { return ___remainTimes_0; }
	inline int32_t* get_address_of_remainTimes_0() { return &___remainTimes_0; }
	inline void set_remainTimes_0(int32_t value)
	{
		___remainTimes_0 = value;
	}

	inline static int32_t get_offset_of_remainBuy_1() { return static_cast<int32_t>(offsetof(MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139, ___remainBuy_1)); }
	inline int32_t get_remainBuy_1() const { return ___remainBuy_1; }
	inline int32_t* get_address_of_remainBuy_1() { return &___remainBuy_1; }
	inline void set_remainBuy_1(int32_t value)
	{
		___remainBuy_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYCLONE_T4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139_H
#ifndef MARRYDECLARATION_TDB6AF80FCF8F33D0ED25E111BB06077FBE588E54_H
#define MARRYDECLARATION_TDB6AF80FCF8F33D0ED25E111BB06077FBE588E54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryDeclaration
struct  MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.MarryDeclaration::roleId
	uint64_t ___roleId_0;
	// System.String MSG_Marriage.MarryDeclaration::name
	String_t* ___name_1;
	// System.Int32 MSG_Marriage.MarryDeclaration::level
	int32_t ___level_2;
	// System.Int32 MSG_Marriage.MarryDeclaration::vip
	int32_t ___vip_3;
	// System.Int32 MSG_Marriage.MarryDeclaration::career
	int32_t ___career_4;
	// System.Int32 MSG_Marriage.MarryDeclaration::declarationId
	int32_t ___declarationId_5;
	// System.UInt64 MSG_Marriage.MarryDeclaration::guildId
	uint64_t ___guildId_6;
	// System.Boolean MSG_Marriage.MarryDeclaration::friend
	bool ___friend_7;
	// MSG_Common.HeadAttribute MSG_Marriage.MarryDeclaration::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_8;
	// System.Boolean MSG_Marriage.MarryDeclaration::online
	bool ___online_9;

public:
	inline static int32_t get_offset_of_roleId_0() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___roleId_0)); }
	inline uint64_t get_roleId_0() const { return ___roleId_0; }
	inline uint64_t* get_address_of_roleId_0() { return &___roleId_0; }
	inline void set_roleId_0(uint64_t value)
	{
		___roleId_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_vip_3() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___vip_3)); }
	inline int32_t get_vip_3() const { return ___vip_3; }
	inline int32_t* get_address_of_vip_3() { return &___vip_3; }
	inline void set_vip_3(int32_t value)
	{
		___vip_3 = value;
	}

	inline static int32_t get_offset_of_career_4() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___career_4)); }
	inline int32_t get_career_4() const { return ___career_4; }
	inline int32_t* get_address_of_career_4() { return &___career_4; }
	inline void set_career_4(int32_t value)
	{
		___career_4 = value;
	}

	inline static int32_t get_offset_of_declarationId_5() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___declarationId_5)); }
	inline int32_t get_declarationId_5() const { return ___declarationId_5; }
	inline int32_t* get_address_of_declarationId_5() { return &___declarationId_5; }
	inline void set_declarationId_5(int32_t value)
	{
		___declarationId_5 = value;
	}

	inline static int32_t get_offset_of_guildId_6() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___guildId_6)); }
	inline uint64_t get_guildId_6() const { return ___guildId_6; }
	inline uint64_t* get_address_of_guildId_6() { return &___guildId_6; }
	inline void set_guildId_6(uint64_t value)
	{
		___guildId_6 = value;
	}

	inline static int32_t get_offset_of_friend_7() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___friend_7)); }
	inline bool get_friend_7() const { return ___friend_7; }
	inline bool* get_address_of_friend_7() { return &___friend_7; }
	inline void set_friend_7(bool value)
	{
		___friend_7 = value;
	}

	inline static int32_t get_offset_of_head_8() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___head_8)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_8() const { return ___head_8; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_8() { return &___head_8; }
	inline void set_head_8(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_8 = value;
		Il2CppCodeGenWriteBarrier((&___head_8), value);
	}

	inline static int32_t get_offset_of_online_9() { return static_cast<int32_t>(offsetof(MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54, ___online_9)); }
	inline bool get_online_9() const { return ___online_9; }
	inline bool* get_address_of_online_9() { return &___online_9; }
	inline void set_online_9(bool value)
	{
		___online_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYDECLARATION_TDB6AF80FCF8F33D0ED25E111BB06077FBE588E54_H
#ifndef MARRYROLE_T3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0_H
#define MARRYROLE_T3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.MarryRole
struct  MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.MarryRole::id
	int64_t ___id_0;
	// System.String MSG_Marriage.MarryRole::name
	String_t* ___name_1;
	// System.Int32 MSG_Marriage.MarryRole::career
	int32_t ___career_2;
	// MSG_Common.HeadAttribute MSG_Marriage.MarryRole::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0, ___id_0)); }
	inline int64_t get_id_0() const { return ___id_0; }
	inline int64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_career_2() { return static_cast<int32_t>(offsetof(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0, ___career_2)); }
	inline int32_t get_career_2() const { return ___career_2; }
	inline int32_t* get_address_of_career_2() { return &___career_2; }
	inline void set_career_2(int32_t value)
	{
		___career_2 = value;
	}

	inline static int32_t get_offset_of_head_3() { return static_cast<int32_t>(offsetof(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0, ___head_3)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_3() const { return ___head_3; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_3() { return &___head_3; }
	inline void set_head_3(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_3 = value;
		Il2CppCodeGenWriteBarrier((&___head_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARRYROLE_T3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0_H
#ifndef REQAFFIRMDIVORCE_T3BCC46A6EB4CA9E0E93F6220AB882077800451AB_H
#define REQAFFIRMDIVORCE_T3BCC46A6EB4CA9E0E93F6220AB882077800451AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqAffirmDivorce
struct  ReqAffirmDivorce_t3BCC46A6EB4CA9E0E93F6220AB882077800451AB  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqAffirmDivorce::opt
	int32_t ___opt_1;

public:
	inline static int32_t get_offset_of_opt_1() { return static_cast<int32_t>(offsetof(ReqAffirmDivorce_t3BCC46A6EB4CA9E0E93F6220AB882077800451AB, ___opt_1)); }
	inline int32_t get_opt_1() const { return ___opt_1; }
	inline int32_t* get_address_of_opt_1() { return &___opt_1; }
	inline void set_opt_1(int32_t value)
	{
		___opt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQAFFIRMDIVORCE_T3BCC46A6EB4CA9E0E93F6220AB882077800451AB_H
#ifndef REQAGREEINVIT_TE011F23312BE3136EA61908B6463136EB961F121_H
#define REQAGREEINVIT_TE011F23312BE3136EA61908B6463136EB961F121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqAgreeInvit
struct  ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.ReqAgreeInvit::roleId
	uint64_t ___roleId_1;
	// System.Boolean MSG_Marriage.ReqAgreeInvit::isAgree
	bool ___isAgree_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_isAgree_2() { return static_cast<int32_t>(offsetof(ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121, ___isAgree_2)); }
	inline bool get_isAgree_2() const { return ___isAgree_2; }
	inline bool* get_address_of_isAgree_2() { return &___isAgree_2; }
	inline void set_isAgree_2(bool value)
	{
		___isAgree_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQAGREEINVIT_TE011F23312BE3136EA61908B6463136EB961F121_H
#ifndef REQBUYMARRYBOX_TB83CAD0450864501833785A23B5CE87C2111C85E_H
#define REQBUYMARRYBOX_TB83CAD0450864501833785A23B5CE87C2111C85E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqBuyMarryBox
struct  ReqBuyMarryBox_tB83CAD0450864501833785A23B5CE87C2111C85E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBUYMARRYBOX_TB83CAD0450864501833785A23B5CE87C2111C85E_H
#ifndef REQCALLBUYMARRYBOX_TA72CB5DCF0D0557BDBBAAF1F19A9C9B8380CBF40_H
#define REQCALLBUYMARRYBOX_TA72CB5DCF0D0557BDBBAAF1F19A9C9B8380CBF40_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqCallBuyMarryBox
struct  ReqCallBuyMarryBox_tA72CB5DCF0D0557BDBBAAF1F19A9C9B8380CBF40  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCALLBUYMARRYBOX_TA72CB5DCF0D0557BDBBAAF1F19A9C9B8380CBF40_H
#ifndef REQCALLMARRYCLONEBUY_TBCEDB3AEDF0CE2D21DEFC5BF82F0FE438F18FC34_H
#define REQCALLMARRYCLONEBUY_TBCEDB3AEDF0CE2D21DEFC5BF82F0FE438F18FC34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqCallMarryCloneBuy
struct  ReqCallMarryCloneBuy_tBCEDB3AEDF0CE2D21DEFC5BF82F0FE438F18FC34  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCALLMARRYCLONEBUY_TBCEDB3AEDF0CE2D21DEFC5BF82F0FE438F18FC34_H
#ifndef REQCHILDCALL_T3DC137579F2837AF7E5434EF4729B765B889DC77_H
#define REQCHILDCALL_T3DC137579F2837AF7E5434EF4729B765B889DC77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqChildCall
struct  ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqChildCall::childId
	int32_t ___childId_1;
	// System.Int32 MSG_Marriage.ReqChildCall::opt
	int32_t ___opt_2;

public:
	inline static int32_t get_offset_of_childId_1() { return static_cast<int32_t>(offsetof(ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77, ___childId_1)); }
	inline int32_t get_childId_1() const { return ___childId_1; }
	inline int32_t* get_address_of_childId_1() { return &___childId_1; }
	inline void set_childId_1(int32_t value)
	{
		___childId_1 = value;
	}

	inline static int32_t get_offset_of_opt_2() { return static_cast<int32_t>(offsetof(ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77, ___opt_2)); }
	inline int32_t get_opt_2() const { return ___opt_2; }
	inline int32_t* get_address_of_opt_2() { return &___opt_2; }
	inline void set_opt_2(int32_t value)
	{
		___opt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCHILDCALL_T3DC137579F2837AF7E5434EF4729B765B889DC77_H
#ifndef REQDEALMARRYPROPOSE_T91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A_H
#define REQDEALMARRYPROPOSE_T91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqDealMarryPropose
struct  ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A  : public RuntimeObject
{
public:
	// System.Boolean MSG_Marriage.ReqDealMarryPropose::isAgree
	bool ___isAgree_1;
	// System.UInt64 MSG_Marriage.ReqDealMarryPropose::marrayId
	uint64_t ___marrayId_2;

public:
	inline static int32_t get_offset_of_isAgree_1() { return static_cast<int32_t>(offsetof(ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A, ___isAgree_1)); }
	inline bool get_isAgree_1() const { return ___isAgree_1; }
	inline bool* get_address_of_isAgree_1() { return &___isAgree_1; }
	inline void set_isAgree_1(bool value)
	{
		___isAgree_1 = value;
	}

	inline static int32_t get_offset_of_marrayId_2() { return static_cast<int32_t>(offsetof(ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A, ___marrayId_2)); }
	inline uint64_t get_marrayId_2() const { return ___marrayId_2; }
	inline uint64_t* get_address_of_marrayId_2() { return &___marrayId_2; }
	inline void set_marrayId_2(uint64_t value)
	{
		___marrayId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDEALMARRYPROPOSE_T91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A_H
#ifndef REQDEMANDINVIT_T14EC98240A8BDC03D12856FBB666452ABC9C9365_H
#define REQDEMANDINVIT_T14EC98240A8BDC03D12856FBB666452ABC9C9365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqDemandInvit
struct  ReqDemandInvit_t14EC98240A8BDC03D12856FBB666452ABC9C9365  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqDemandInvit::timeStart
	int32_t ___timeStart_1;

public:
	inline static int32_t get_offset_of_timeStart_1() { return static_cast<int32_t>(offsetof(ReqDemandInvit_t14EC98240A8BDC03D12856FBB666452ABC9C9365, ___timeStart_1)); }
	inline int32_t get_timeStart_1() const { return ___timeStart_1; }
	inline int32_t* get_address_of_timeStart_1() { return &___timeStart_1; }
	inline void set_timeStart_1(int32_t value)
	{
		___timeStart_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDEMANDINVIT_T14EC98240A8BDC03D12856FBB666452ABC9C9365_H
#ifndef REQDIVORCE_T8884BDCEF3FEFC8CB262007782B588288DC7F00E_H
#define REQDIVORCE_T8884BDCEF3FEFC8CB262007782B588288DC7F00E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqDivorce
struct  ReqDivorce_t8884BDCEF3FEFC8CB262007782B588288DC7F00E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqDivorce::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqDivorce_t8884BDCEF3FEFC8CB262007782B588288DC7F00E, ___type_1)); }
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
#endif // REQDIVORCE_T8884BDCEF3FEFC8CB262007782B588288DC7F00E_H
#ifndef REQGETMARRIED_TC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7_H
#define REQGETMARRIED_TC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqGetMarried
struct  ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqGetMarried::type
	int32_t ___type_1;
	// System.UInt64 MSG_Marriage.ReqGetMarried::beMarrayId
	uint64_t ___beMarrayId_2;
	// System.Boolean MSG_Marriage.ReqGetMarried::isNotice
	bool ___isNotice_3;
	// System.String MSG_Marriage.ReqGetMarried::notice
	String_t* ___notice_4;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_beMarrayId_2() { return static_cast<int32_t>(offsetof(ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7, ___beMarrayId_2)); }
	inline uint64_t get_beMarrayId_2() const { return ___beMarrayId_2; }
	inline uint64_t* get_address_of_beMarrayId_2() { return &___beMarrayId_2; }
	inline void set_beMarrayId_2(uint64_t value)
	{
		___beMarrayId_2 = value;
	}

	inline static int32_t get_offset_of_isNotice_3() { return static_cast<int32_t>(offsetof(ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7, ___isNotice_3)); }
	inline bool get_isNotice_3() const { return ___isNotice_3; }
	inline bool* get_address_of_isNotice_3() { return &___isNotice_3; }
	inline void set_isNotice_3(bool value)
	{
		___isNotice_3 = value;
	}

	inline static int32_t get_offset_of_notice_4() { return static_cast<int32_t>(offsetof(ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7, ___notice_4)); }
	inline String_t* get_notice_4() const { return ___notice_4; }
	inline String_t** get_address_of_notice_4() { return &___notice_4; }
	inline void set_notice_4(String_t* value)
	{
		___notice_4 = value;
		Il2CppCodeGenWriteBarrier((&___notice_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETMARRIED_TC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7_H
#ifndef REQGETMARRYACTIVITYTASKREWARD_TC4B16479F6F4FEB7D687F182C6D99FA8AB56B278_H
#define REQGETMARRYACTIVITYTASKREWARD_TC4B16479F6F4FEB7D687F182C6D99FA8AB56B278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqGetMarryActivityTaskReward
struct  ReqGetMarryActivityTaskReward_tC4B16479F6F4FEB7D687F182C6D99FA8AB56B278  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqGetMarryActivityTaskReward::taskID
	int32_t ___taskID_1;

public:
	inline static int32_t get_offset_of_taskID_1() { return static_cast<int32_t>(offsetof(ReqGetMarryActivityTaskReward_tC4B16479F6F4FEB7D687F182C6D99FA8AB56B278, ___taskID_1)); }
	inline int32_t get_taskID_1() const { return ___taskID_1; }
	inline int32_t* get_address_of_taskID_1() { return &___taskID_1; }
	inline void set_taskID_1(int32_t value)
	{
		___taskID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETMARRYACTIVITYTASKREWARD_TC4B16479F6F4FEB7D687F182C6D99FA8AB56B278_H
#ifndef REQINVIT_T716097819C512E82A975AB13C926E251F305915D_H
#define REQINVIT_T716097819C512E82A975AB13C926E251F305915D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqInvit
struct  ReqInvit_t716097819C512E82A975AB13C926E251F305915D  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.ReqInvit::roleId
	uint64_t ___roleId_1;
	// System.Int32 MSG_Marriage.ReqInvit::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqInvit_t716097819C512E82A975AB13C926E251F305915D, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ReqInvit_t716097819C512E82A975AB13C926E251F305915D, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQINVIT_T716097819C512E82A975AB13C926E251F305915D_H
#ifndef REQMARRYACTIVITYINTIMACY_T13542076B0A8EB2148EE2450229DC399C291D417_H
#define REQMARRYACTIVITYINTIMACY_T13542076B0A8EB2148EE2450229DC399C291D417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryActivityIntimacy
struct  ReqMarryActivityIntimacy_t13542076B0A8EB2148EE2450229DC399C291D417  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYACTIVITYINTIMACY_T13542076B0A8EB2148EE2450229DC399C291D417_H
#ifndef REQMARRYACTIVITYINTIMACYREWARD_TA4165ABCED6502244ABCE7874D1FB3C4B1F8843F_H
#define REQMARRYACTIVITYINTIMACYREWARD_TA4165ABCED6502244ABCE7874D1FB3C4B1F8843F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryActivityIntimacyReward
struct  ReqMarryActivityIntimacyReward_tA4165ABCED6502244ABCE7874D1FB3C4B1F8843F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryActivityIntimacyReward::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqMarryActivityIntimacyReward_tA4165ABCED6502244ABCE7874D1FB3C4B1F8843F, ___id_1)); }
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
#endif // REQMARRYACTIVITYINTIMACYREWARD_TA4165ABCED6502244ABCE7874D1FB3C4B1F8843F_H
#ifndef REQMARRYACTIVITYSHOPBUY_TF57C3981BA864692545B12D7BC260FC3853B142D_H
#define REQMARRYACTIVITYSHOPBUY_TF57C3981BA864692545B12D7BC260FC3853B142D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryActivityShopBuy
struct  ReqMarryActivityShopBuy_tF57C3981BA864692545B12D7BC260FC3853B142D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryActivityShopBuy::shopId
	int32_t ___shopId_1;

public:
	inline static int32_t get_offset_of_shopId_1() { return static_cast<int32_t>(offsetof(ReqMarryActivityShopBuy_tF57C3981BA864692545B12D7BC260FC3853B142D, ___shopId_1)); }
	inline int32_t get_shopId_1() const { return ___shopId_1; }
	inline int32_t* get_address_of_shopId_1() { return &___shopId_1; }
	inline void set_shopId_1(int32_t value)
	{
		___shopId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYACTIVITYSHOPBUY_TF57C3981BA864692545B12D7BC260FC3853B142D_H
#ifndef REQMARRYADDFRIEND_T01DA4FF1E8761C6F1C983F7D845E3D4F39793627_H
#define REQMARRYADDFRIEND_T01DA4FF1E8761C6F1C983F7D845E3D4F39793627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryAddFriend
struct  ReqMarryAddFriend_t01DA4FF1E8761C6F1C983F7D845E3D4F39793627  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.ReqMarryAddFriend::roleId
	uint64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqMarryAddFriend_t01DA4FF1E8761C6F1C983F7D845E3D4F39793627, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYADDFRIEND_T01DA4FF1E8761C6F1C983F7D845E3D4F39793627_H
#ifndef REQMARRYADDFRIENDOPT_TF07AA2954DE969FAF084ACC107FD08C1FBC2AD45_H
#define REQMARRYADDFRIENDOPT_TF07AA2954DE969FAF084ACC107FD08C1FBC2AD45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryAddFriendOpt
struct  ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.ReqMarryAddFriendOpt::roleId
	uint64_t ___roleId_1;
	// System.Int32 MSG_Marriage.ReqMarryAddFriendOpt::opt
	int32_t ___opt_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_opt_2() { return static_cast<int32_t>(offsetof(ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45, ___opt_2)); }
	inline int32_t get_opt_2() const { return ___opt_2; }
	inline int32_t* get_address_of_opt_2() { return &___opt_2; }
	inline void set_opt_2(int32_t value)
	{
		___opt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYADDFRIENDOPT_TF07AA2954DE969FAF084ACC107FD08C1FBC2AD45_H
#ifndef REQMARRYBLESSLIST_TC3BBF428960A5BD5078C9A679FE734258DC06C0C_H
#define REQMARRYBLESSLIST_TC3BBF428960A5BD5078C9A679FE734258DC06C0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryBlessList
struct  ReqMarryBlessList_tC3BBF428960A5BD5078C9A679FE734258DC06C0C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYBLESSLIST_TC3BBF428960A5BD5078C9A679FE734258DC06C0C_H
#ifndef REQMARRYBOXREWARD_TED76CE79C94F21195BD03349BBE0C4363C11EE4F_H
#define REQMARRYBOXREWARD_TED76CE79C94F21195BD03349BBE0C4363C11EE4F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryBoxReward
struct  ReqMarryBoxReward_tED76CE79C94F21195BD03349BBE0C4363C11EE4F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryBoxReward::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqMarryBoxReward_tED76CE79C94F21195BD03349BBE0C4363C11EE4F, ___type_1)); }
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
#endif // REQMARRYBOXREWARD_TED76CE79C94F21195BD03349BBE0C4363C11EE4F_H
#ifndef REQMARRYCHILDCHANGENAME_T7A04C9828EBC6FFECDD76F57E889B29FFADE342B_H
#define REQMARRYCHILDCHANGENAME_T7A04C9828EBC6FFECDD76F57E889B29FFADE342B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryChildChangeName
struct  ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryChildChangeName::childId
	int32_t ___childId_1;
	// System.String MSG_Marriage.ReqMarryChildChangeName::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_childId_1() { return static_cast<int32_t>(offsetof(ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B, ___childId_1)); }
	inline int32_t get_childId_1() const { return ___childId_1; }
	inline int32_t* get_address_of_childId_1() { return &___childId_1; }
	inline void set_childId_1(int32_t value)
	{
		___childId_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYCHILDCHANGENAME_T7A04C9828EBC6FFECDD76F57E889B29FFADE342B_H
#ifndef REQMARRYCLONEBUY_TEFC9F4D3E36E5355577A9CFB2B2017470EEAE5EB_H
#define REQMARRYCLONEBUY_TEFC9F4D3E36E5355577A9CFB2B2017470EEAE5EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryCloneBuy
struct  ReqMarryCloneBuy_tEFC9F4D3E36E5355577A9CFB2B2017470EEAE5EB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYCLONEBUY_TEFC9F4D3E36E5355577A9CFB2B2017470EEAE5EB_H
#ifndef REQMARRYCOPYBUY_T142B04EF9A52911301E538322644EFA33321BEF7_H
#define REQMARRYCOPYBUY_T142B04EF9A52911301E538322644EFA33321BEF7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryCopyBuy
struct  ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryCopyBuy::id
	int32_t ___id_1;
	// System.Int32 MSG_Marriage.ReqMarryCopyBuy::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7, ___num_2)); }
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
#endif // REQMARRYCOPYBUY_T142B04EF9A52911301E538322644EFA33321BEF7_H
#ifndef REQMARRYCOPYBUYHOT_T275F05C50747772D672F176CD6326EB57459B683_H
#define REQMARRYCOPYBUYHOT_T275F05C50747772D672F176CD6326EB57459B683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryCopyBuyHot
struct  ReqMarryCopyBuyHot_t275F05C50747772D672F176CD6326EB57459B683  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYCOPYBUYHOT_T275F05C50747772D672F176CD6326EB57459B683_H
#ifndef REQMARRYDATA_T66DC4F3BA036326DD3CF1422389A5F7D13DB75C9_H
#define REQMARRYDATA_T66DC4F3BA036326DD3CF1422389A5F7D13DB75C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryData
struct  ReqMarryData_t66DC4F3BA036326DD3CF1422389A5F7D13DB75C9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYDATA_T66DC4F3BA036326DD3CF1422389A5F7D13DB75C9_H
#ifndef REQMARRYSENDBULLETSCREEN_T8183091DEECB3A4E62C7D8DCEBA55E3E85E53572_H
#define REQMARRYSENDBULLETSCREEN_T8183091DEECB3A4E62C7D8DCEBA55E3E85E53572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarrySendBulletScreen
struct  ReqMarrySendBulletScreen_t8183091DEECB3A4E62C7D8DCEBA55E3E85E53572  : public RuntimeObject
{
public:
	// System.String MSG_Marriage.ReqMarrySendBulletScreen::context
	String_t* ___context_1;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(ReqMarrySendBulletScreen_t8183091DEECB3A4E62C7D8DCEBA55E3E85E53572, ___context_1)); }
	inline String_t* get_context_1() const { return ___context_1; }
	inline String_t** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(String_t* value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYSENDBULLETSCREEN_T8183091DEECB3A4E62C7D8DCEBA55E3E85E53572_H
#ifndef REQMARRYSENDITEM_T0E47782437CD366D19C65010C5C10D93E6730E51_H
#define REQMARRYSENDITEM_T0E47782437CD366D19C65010C5C10D93E6730E51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarrySendItem
struct  ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarrySendItem::index
	int32_t ___index_1;
	// System.Int64 MSG_Marriage.ReqMarrySendItem::roleId
	int64_t ___roleId_2;

public:
	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51, ___roleId_2)); }
	inline int64_t get_roleId_2() const { return ___roleId_2; }
	inline int64_t* get_address_of_roleId_2() { return &___roleId_2; }
	inline void set_roleId_2(int64_t value)
	{
		___roleId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYSENDITEM_T0E47782437CD366D19C65010C5C10D93E6730E51_H
#ifndef REQMARRYTASK_TD79893F972EF6409D2D4817F53DC4B30A2FF11EF_H
#define REQMARRYTASK_TD79893F972EF6409D2D4817F53DC4B30A2FF11EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryTask
struct  ReqMarryTask_tD79893F972EF6409D2D4817F53DC4B30A2FF11EF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYTASK_TD79893F972EF6409D2D4817F53DC4B30A2FF11EF_H
#ifndef REQMARRYTASKREWARD_TB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98_H
#define REQMARRYTASKREWARD_TB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryTaskReward
struct  ReqMarryTaskReward_tB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryTaskReward::taskId
	int32_t ___taskId_1;

public:
	inline static int32_t get_offset_of_taskId_1() { return static_cast<int32_t>(offsetof(ReqMarryTaskReward_tB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98, ___taskId_1)); }
	inline int32_t get_taskId_1() const { return ___taskId_1; }
	inline int32_t* get_address_of_taskId_1() { return &___taskId_1; }
	inline void set_taskId_1(int32_t value)
	{
		___taskId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYTASKREWARD_TB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98_H
#ifndef REQMARRYUSEITEM_TAD89BA4DA41664FD208C612FD372DC9244C4F646_H
#define REQMARRYUSEITEM_TAD89BA4DA41664FD208C612FD372DC9244C4F646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryUseItem
struct  ReqMarryUseItem_tAD89BA4DA41664FD208C612FD372DC9244C4F646  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqMarryUseItem::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqMarryUseItem_tAD89BA4DA41664FD208C612FD372DC9244C4F646, ___id_1)); }
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
#endif // REQMARRYUSEITEM_TAD89BA4DA41664FD208C612FD372DC9244C4F646_H
#ifndef REQMARRYWALLDECLARATION_T19A080412661D8AF2E054F9F7C816FD2CCCE3EF4_H
#define REQMARRYWALLDECLARATION_T19A080412661D8AF2E054F9F7C816FD2CCCE3EF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryWallDeclaration
struct  ReqMarryWallDeclaration_t19A080412661D8AF2E054F9F7C816FD2CCCE3EF4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYWALLDECLARATION_T19A080412661D8AF2E054F9F7C816FD2CCCE3EF4_H
#ifndef REQMARRYWALLREWARD_TA41051DD7802F02FDED839C0E708B111924DCAF0_H
#define REQMARRYWALLREWARD_TA41051DD7802F02FDED839C0E708B111924DCAF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryWallReward
struct  ReqMarryWallReward_tA41051DD7802F02FDED839C0E708B111924DCAF0  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYWALLREWARD_TA41051DD7802F02FDED839C0E708B111924DCAF0_H
#ifndef REQOPENMARRYCHILD_TF9A272E9D1C1E647BEBB5B2288FF99433B8CB785_H
#define REQOPENMARRYCHILD_TF9A272E9D1C1E647BEBB5B2288FF99433B8CB785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqOpenMarryChild
struct  ReqOpenMarryChild_tF9A272E9D1C1E647BEBB5B2288FF99433B8CB785  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqOpenMarryChild::childId
	int32_t ___childId_1;

public:
	inline static int32_t get_offset_of_childId_1() { return static_cast<int32_t>(offsetof(ReqOpenMarryChild_tF9A272E9D1C1E647BEBB5B2288FF99433B8CB785, ___childId_1)); }
	inline int32_t get_childId_1() const { return ___childId_1; }
	inline int32_t* get_address_of_childId_1() { return &___childId_1; }
	inline void set_childId_1(int32_t value)
	{
		___childId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENMARRYCHILD_TF9A272E9D1C1E647BEBB5B2288FF99433B8CB785_H
#ifndef REQPURINVITNUM_TCD268D0F0450310DF869A01B05213D46C1B1B7E7_H
#define REQPURINVITNUM_TCD268D0F0450310DF869A01B05213D46C1B1B7E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqPurInvitNum
struct  ReqPurInvitNum_tCD268D0F0450310DF869A01B05213D46C1B1B7E7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPURINVITNUM_TCD268D0F0450310DF869A01B05213D46C1B1B7E7_H
#ifndef REQPUSHMARRYDECLARATION_TEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651_H
#define REQPUSHMARRYDECLARATION_TEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqPushMarryDeclaration
struct  ReqPushMarryDeclaration_tEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqPushMarryDeclaration::declarationId
	int32_t ___declarationId_1;

public:
	inline static int32_t get_offset_of_declarationId_1() { return static_cast<int32_t>(offsetof(ReqPushMarryDeclaration_tEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651, ___declarationId_1)); }
	inline int32_t get_declarationId_1() const { return ___declarationId_1; }
	inline int32_t* get_address_of_declarationId_1() { return &___declarationId_1; }
	inline void set_declarationId_1(int32_t value)
	{
		___declarationId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPUSHMARRYDECLARATION_TEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651_H
#ifndef REQREFUSEBUYMARRYBOX_T5DFD71BFA45A42A4E3C2027569861BE986524443_H
#define REQREFUSEBUYMARRYBOX_T5DFD71BFA45A42A4E3C2027569861BE986524443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqRefuseBuyMarryBox
struct  ReqRefuseBuyMarryBox_t5DFD71BFA45A42A4E3C2027569861BE986524443  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQREFUSEBUYMARRYBOX_T5DFD71BFA45A42A4E3C2027569861BE986524443_H
#ifndef REQREFUSEMARRYCLONEBUY_T213119071B630141F6AFB98B759F5EE3B4461944_H
#define REQREFUSEMARRYCLONEBUY_T213119071B630141F6AFB98B759F5EE3B4461944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqRefuseMarryCloneBuy
struct  ReqRefuseMarryCloneBuy_t213119071B630141F6AFB98B759F5EE3B4461944  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQREFUSEMARRYCLONEBUY_T213119071B630141F6AFB98B759F5EE3B4461944_H
#ifndef REQREWARDTITLE_T2CB573B19F8AA45217E8F3F955BD2CA32BA656D1_H
#define REQREWARDTITLE_T2CB573B19F8AA45217E8F3F955BD2CA32BA656D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqRewardTitle
struct  ReqRewardTitle_t2CB573B19F8AA45217E8F3F955BD2CA32BA656D1  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqRewardTitle::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqRewardTitle_t2CB573B19F8AA45217E8F3F955BD2CA32BA656D1, ___id_1)); }
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
#endif // REQREWARDTITLE_T2CB573B19F8AA45217E8F3F955BD2CA32BA656D1_H
#ifndef REQSELECTMARRYCLONEIMG_TDA0973C44BAFDFA468D0BF119A73E800D31C8D1F_H
#define REQSELECTMARRYCLONEIMG_TDA0973C44BAFDFA468D0BF119A73E800D31C8D1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqSelectMarryCloneImg
struct  ReqSelectMarryCloneImg_tDA0973C44BAFDFA468D0BF119A73E800D31C8D1F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqSelectMarryCloneImg::imgId
	int32_t ___imgId_1;

public:
	inline static int32_t get_offset_of_imgId_1() { return static_cast<int32_t>(offsetof(ReqSelectMarryCloneImg_tDA0973C44BAFDFA468D0BF119A73E800D31C8D1F, ___imgId_1)); }
	inline int32_t get_imgId_1() const { return ___imgId_1; }
	inline int32_t* get_address_of_imgId_1() { return &___imgId_1; }
	inline void set_imgId_1(int32_t value)
	{
		___imgId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSELECTMARRYCLONEIMG_TDA0973C44BAFDFA468D0BF119A73E800D31C8D1F_H
#ifndef REQSELECTWEDDING_TEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F_H
#define REQSELECTWEDDING_TEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqSelectWedding
struct  ReqSelectWedding_tEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqSelectWedding::timeStart
	int32_t ___timeStart_1;

public:
	inline static int32_t get_offset_of_timeStart_1() { return static_cast<int32_t>(offsetof(ReqSelectWedding_tEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F, ___timeStart_1)); }
	inline int32_t get_timeStart_1() const { return ___timeStart_1; }
	inline int32_t* get_address_of_timeStart_1() { return &___timeStart_1; }
	inline void set_timeStart_1(int32_t value)
	{
		___timeStart_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSELECTWEDDING_TEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F_H
#ifndef REQUPGRADEMARRYCHILD_T7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46_H
#define REQUPGRADEMARRYCHILD_T7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqUpgradeMarryChild
struct  ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqUpgradeMarryChild::childId
	int32_t ___childId_1;
	// System.Int32 MSG_Marriage.ReqUpgradeMarryChild::itemId
	int32_t ___itemId_2;
	// System.Int32 MSG_Marriage.ReqUpgradeMarryChild::oneKey
	int32_t ___oneKey_3;

public:
	inline static int32_t get_offset_of_childId_1() { return static_cast<int32_t>(offsetof(ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46, ___childId_1)); }
	inline int32_t get_childId_1() const { return ___childId_1; }
	inline int32_t* get_address_of_childId_1() { return &___childId_1; }
	inline void set_childId_1(int32_t value)
	{
		___childId_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46, ___itemId_2)); }
	inline int32_t get_itemId_2() const { return ___itemId_2; }
	inline int32_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(int32_t value)
	{
		___itemId_2 = value;
	}

	inline static int32_t get_offset_of_oneKey_3() { return static_cast<int32_t>(offsetof(ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46, ___oneKey_3)); }
	inline int32_t get_oneKey_3() const { return ___oneKey_3; }
	inline int32_t* get_address_of_oneKey_3() { return &___oneKey_3; }
	inline void set_oneKey_3(int32_t value)
	{
		___oneKey_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPGRADEMARRYCHILD_T7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46_H
#ifndef REQUPGRADEMARRYLOCK_TC24BC231315A90C1BA285D5548B44AB5F3F3DD45_H
#define REQUPGRADEMARRYLOCK_TC24BC231315A90C1BA285D5548B44AB5F3F3DD45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqUpgradeMarryLock
struct  ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ReqUpgradeMarryLock::oneKey
	int32_t ___oneKey_1;
	// System.Int32 MSG_Marriage.ReqUpgradeMarryLock::itemId
	int32_t ___itemId_2;

public:
	inline static int32_t get_offset_of_oneKey_1() { return static_cast<int32_t>(offsetof(ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45, ___oneKey_1)); }
	inline int32_t get_oneKey_1() const { return ___oneKey_1; }
	inline int32_t* get_address_of_oneKey_1() { return &___oneKey_1; }
	inline void set_oneKey_1(int32_t value)
	{
		___oneKey_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45, ___itemId_2)); }
	inline int32_t get_itemId_2() const { return ___itemId_2; }
	inline int32_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(int32_t value)
	{
		___itemId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPGRADEMARRYLOCK_TC24BC231315A90C1BA285D5548B44AB5F3F3DD45_H
#ifndef RESCALLBUYMARRYBOX_TFD5D9700708C55FFD20C5A7D383378469471D0FB_H
#define RESCALLBUYMARRYBOX_TFD5D9700708C55FFD20C5A7D383378469471D0FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResCallBuyMarryBox
struct  ResCallBuyMarryBox_tFD5D9700708C55FFD20C5A7D383378469471D0FB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCALLBUYMARRYBOX_TFD5D9700708C55FFD20C5A7D383378469471D0FB_H
#ifndef RESCALLMARRYCLONEBUY_TA86DFF9053329680141979058431D3BE44175DDD_H
#define RESCALLMARRYCLONEBUY_TA86DFF9053329680141979058431D3BE44175DDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResCallMarryCloneBuy
struct  ResCallMarryCloneBuy_tA86DFF9053329680141979058431D3BE44175DDD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCALLMARRYCLONEBUY_TA86DFF9053329680141979058431D3BE44175DDD_H
#ifndef RESDEALMARRYPROPOSE_T9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C_H
#define RESDEALMARRYPROPOSE_T9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResDealMarryPropose
struct  ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C  : public RuntimeObject
{
public:
	// System.String MSG_Marriage.ResDealMarryPropose::marrayName
	String_t* ___marrayName_1;
	// System.Int32 MSG_Marriage.ResDealMarryPropose::marraycareer
	int32_t ___marraycareer_2;
	// System.String MSG_Marriage.ResDealMarryPropose::bemarrayName
	String_t* ___bemarrayName_3;
	// System.Int32 MSG_Marriage.ResDealMarryPropose::bemarraycareer
	int32_t ___bemarraycareer_4;

public:
	inline static int32_t get_offset_of_marrayName_1() { return static_cast<int32_t>(offsetof(ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C, ___marrayName_1)); }
	inline String_t* get_marrayName_1() const { return ___marrayName_1; }
	inline String_t** get_address_of_marrayName_1() { return &___marrayName_1; }
	inline void set_marrayName_1(String_t* value)
	{
		___marrayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___marrayName_1), value);
	}

	inline static int32_t get_offset_of_marraycareer_2() { return static_cast<int32_t>(offsetof(ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C, ___marraycareer_2)); }
	inline int32_t get_marraycareer_2() const { return ___marraycareer_2; }
	inline int32_t* get_address_of_marraycareer_2() { return &___marraycareer_2; }
	inline void set_marraycareer_2(int32_t value)
	{
		___marraycareer_2 = value;
	}

	inline static int32_t get_offset_of_bemarrayName_3() { return static_cast<int32_t>(offsetof(ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C, ___bemarrayName_3)); }
	inline String_t* get_bemarrayName_3() const { return ___bemarrayName_3; }
	inline String_t** get_address_of_bemarrayName_3() { return &___bemarrayName_3; }
	inline void set_bemarrayName_3(String_t* value)
	{
		___bemarrayName_3 = value;
		Il2CppCodeGenWriteBarrier((&___bemarrayName_3), value);
	}

	inline static int32_t get_offset_of_bemarraycareer_4() { return static_cast<int32_t>(offsetof(ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C, ___bemarraycareer_4)); }
	inline int32_t get_bemarraycareer_4() const { return ___bemarraycareer_4; }
	inline int32_t* get_address_of_bemarraycareer_4() { return &___bemarraycareer_4; }
	inline void set_bemarraycareer_4(int32_t value)
	{
		___bemarraycareer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDEALMARRYPROPOSE_T9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C_H
#ifndef RESDELETEDEMANDINVIT_TC3E66B65FB34D6D1B3CDB091FC84521B70999E44_H
#define RESDELETEDEMANDINVIT_TC3E66B65FB34D6D1B3CDB091FC84521B70999E44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResDeleteDemandInvit
struct  ResDeleteDemandInvit_tC3E66B65FB34D6D1B3CDB091FC84521B70999E44  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ResDeleteDemandInvit::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResDeleteDemandInvit_tC3E66B65FB34D6D1B3CDB091FC84521B70999E44, ___roleId_1)); }
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
#endif // RESDELETEDEMANDINVIT_TC3E66B65FB34D6D1B3CDB091FC84521B70999E44_H
#ifndef RESDEMANDINVIT_T0184636B0A78BA8B6AC0C522AD071029C68C2272_H
#define RESDEMANDINVIT_T0184636B0A78BA8B6AC0C522AD071029C68C2272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResDemandInvit
struct  ResDemandInvit_t0184636B0A78BA8B6AC0C522AD071029C68C2272  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResDemandInvit::res
	int32_t ___res_1;

public:
	inline static int32_t get_offset_of_res_1() { return static_cast<int32_t>(offsetof(ResDemandInvit_t0184636B0A78BA8B6AC0C522AD071029C68C2272, ___res_1)); }
	inline int32_t get_res_1() const { return ___res_1; }
	inline int32_t* get_address_of_res_1() { return &___res_1; }
	inline void set_res_1(int32_t value)
	{
		___res_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDEMANDINVIT_T0184636B0A78BA8B6AC0C522AD071029C68C2272_H
#ifndef RESDIVORCE_TAD90DF5030A05DAE1E5F7194AC59DF1A48184567_H
#define RESDIVORCE_TAD90DF5030A05DAE1E5F7194AC59DF1A48184567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResDivorce
struct  ResDivorce_tAD90DF5030A05DAE1E5F7194AC59DF1A48184567  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDIVORCE_TAD90DF5030A05DAE1E5F7194AC59DF1A48184567_H
#ifndef RESDIVORCEID_T2AACCDA35F43D60ED34634FB8C376F687C012159_H
#define RESDIVORCEID_T2AACCDA35F43D60ED34634FB8C376F687C012159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResDivorceID
struct  ResDivorceID_t2AACCDA35F43D60ED34634FB8C376F687C012159  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ResDivorceID::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResDivorceID_t2AACCDA35F43D60ED34634FB8C376F687C012159, ___roleId_1)); }
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
#endif // RESDIVORCEID_T2AACCDA35F43D60ED34634FB8C376F687C012159_H
#ifndef RESMARRYACTIVITYINTIMACY_T908EE4E59E4917896523263E56F9A78FE8832834_H
#define RESMARRYACTIVITYINTIMACY_T908EE4E59E4917896523263E56F9A78FE8832834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryActivityIntimacy
struct  ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResMarryActivityIntimacy::rank
	int32_t ___rank_1;
	// System.Int32 MSG_Marriage.ResMarryActivityIntimacy::intimacy
	int32_t ___intimacy_2;
	// System.Collections.Generic.List`1<System.Int32> MSG_Marriage.ResMarryActivityIntimacy::rankRewardEd
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___rankRewardEd_3;

public:
	inline static int32_t get_offset_of_rank_1() { return static_cast<int32_t>(offsetof(ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834, ___rank_1)); }
	inline int32_t get_rank_1() const { return ___rank_1; }
	inline int32_t* get_address_of_rank_1() { return &___rank_1; }
	inline void set_rank_1(int32_t value)
	{
		___rank_1 = value;
	}

	inline static int32_t get_offset_of_intimacy_2() { return static_cast<int32_t>(offsetof(ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834, ___intimacy_2)); }
	inline int32_t get_intimacy_2() const { return ___intimacy_2; }
	inline int32_t* get_address_of_intimacy_2() { return &___intimacy_2; }
	inline void set_intimacy_2(int32_t value)
	{
		___intimacy_2 = value;
	}

	inline static int32_t get_offset_of_rankRewardEd_3() { return static_cast<int32_t>(offsetof(ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834, ___rankRewardEd_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_rankRewardEd_3() const { return ___rankRewardEd_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_rankRewardEd_3() { return &___rankRewardEd_3; }
	inline void set_rankRewardEd_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___rankRewardEd_3 = value;
		Il2CppCodeGenWriteBarrier((&___rankRewardEd_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYACTIVITYINTIMACY_T908EE4E59E4917896523263E56F9A78FE8832834_H
#ifndef RESMARRYACTIVITYSHOPBUY_T9908E4F61F8D8BF568275A96042A0D6FE1E0FC58_H
#define RESMARRYACTIVITYSHOPBUY_T9908E4F61F8D8BF568275A96042A0D6FE1E0FC58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryActivityShopBuy
struct  ResMarryActivityShopBuy_t9908E4F61F8D8BF568275A96042A0D6FE1E0FC58  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.MarryActivityShopInfo> MSG_Marriage.ResMarryActivityShopBuy::shopInfoList
	List_1_tD5631D10D5F808E88C497774BC38CC930036ED88 * ___shopInfoList_1;

public:
	inline static int32_t get_offset_of_shopInfoList_1() { return static_cast<int32_t>(offsetof(ResMarryActivityShopBuy_t9908E4F61F8D8BF568275A96042A0D6FE1E0FC58, ___shopInfoList_1)); }
	inline List_1_tD5631D10D5F808E88C497774BC38CC930036ED88 * get_shopInfoList_1() const { return ___shopInfoList_1; }
	inline List_1_tD5631D10D5F808E88C497774BC38CC930036ED88 ** get_address_of_shopInfoList_1() { return &___shopInfoList_1; }
	inline void set_shopInfoList_1(List_1_tD5631D10D5F808E88C497774BC38CC930036ED88 * value)
	{
		___shopInfoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___shopInfoList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYACTIVITYSHOPBUY_T9908E4F61F8D8BF568275A96042A0D6FE1E0FC58_H
#ifndef RESMARRYADDFRIENDNOTIFY_T1BE0C563AB84C746AECDD80A4344146853F20422_H
#define RESMARRYADDFRIENDNOTIFY_T1BE0C563AB84C746AECDD80A4344146853F20422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryAddFriendNotify
struct  ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.ResMarryAddFriendNotify::roleId
	uint64_t ___roleId_1;
	// System.String MSG_Marriage.ResMarryAddFriendNotify::roleName
	String_t* ___roleName_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_roleName_2() { return static_cast<int32_t>(offsetof(ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422, ___roleName_2)); }
	inline String_t* get_roleName_2() const { return ___roleName_2; }
	inline String_t** get_address_of_roleName_2() { return &___roleName_2; }
	inline void set_roleName_2(String_t* value)
	{
		___roleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYADDFRIENDNOTIFY_T1BE0C563AB84C746AECDD80A4344146853F20422_H
#ifndef RESMARRYBLESSLIST_T2A11E967DBA39AA96E37F0B27717151115ED4F20_H
#define RESMARRYBLESSLIST_T2A11E967DBA39AA96E37F0B27717151115ED4F20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryBlessList
struct  ResMarryBlessList_t2A11E967DBA39AA96E37F0B27717151115ED4F20  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.BlessData> MSG_Marriage.ResMarryBlessList::blessDataList
	List_1_t1CDA9E9785951C2BB324A4E8D90EF18A13169FE0 * ___blessDataList_1;

public:
	inline static int32_t get_offset_of_blessDataList_1() { return static_cast<int32_t>(offsetof(ResMarryBlessList_t2A11E967DBA39AA96E37F0B27717151115ED4F20, ___blessDataList_1)); }
	inline List_1_t1CDA9E9785951C2BB324A4E8D90EF18A13169FE0 * get_blessDataList_1() const { return ___blessDataList_1; }
	inline List_1_t1CDA9E9785951C2BB324A4E8D90EF18A13169FE0 ** get_address_of_blessDataList_1() { return &___blessDataList_1; }
	inline void set_blessDataList_1(List_1_t1CDA9E9785951C2BB324A4E8D90EF18A13169FE0 * value)
	{
		___blessDataList_1 = value;
		Il2CppCodeGenWriteBarrier((&___blessDataList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYBLESSLIST_T2A11E967DBA39AA96E37F0B27717151115ED4F20_H
#ifndef RESMARRYBOX_T82C6DE795550E2C0E422C7A2C1E66BD07DE203D3_H
#define RESMARRYBOX_T82C6DE795550E2C0E422C7A2C1E66BD07DE203D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryBox
struct  ResMarryBox_t82C6DE795550E2C0E422C7A2C1E66BD07DE203D3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.MarryBox> MSG_Marriage.ResMarryBox::box
	List_1_t091C2618869A886242D7BAE4F7876677C4D1D8B5 * ___box_1;

public:
	inline static int32_t get_offset_of_box_1() { return static_cast<int32_t>(offsetof(ResMarryBox_t82C6DE795550E2C0E422C7A2C1E66BD07DE203D3, ___box_1)); }
	inline List_1_t091C2618869A886242D7BAE4F7876677C4D1D8B5 * get_box_1() const { return ___box_1; }
	inline List_1_t091C2618869A886242D7BAE4F7876677C4D1D8B5 ** get_address_of_box_1() { return &___box_1; }
	inline void set_box_1(List_1_t091C2618869A886242D7BAE4F7876677C4D1D8B5 * value)
	{
		___box_1 = value;
		Il2CppCodeGenWriteBarrier((&___box_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYBOX_T82C6DE795550E2C0E422C7A2C1E66BD07DE203D3_H
#ifndef RESMARRYCHILDINFO_TF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105_H
#define RESMARRYCHILDINFO_TF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryChildInfo
struct  ResMarryChildInfo_tF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.MarryChild> MSG_Marriage.ResMarryChildInfo::childs
	List_1_t7C870B251851F4157D532BFB8D4FC8A7944EBF07 * ___childs_1;

public:
	inline static int32_t get_offset_of_childs_1() { return static_cast<int32_t>(offsetof(ResMarryChildInfo_tF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105, ___childs_1)); }
	inline List_1_t7C870B251851F4157D532BFB8D4FC8A7944EBF07 * get_childs_1() const { return ___childs_1; }
	inline List_1_t7C870B251851F4157D532BFB8D4FC8A7944EBF07 ** get_address_of_childs_1() { return &___childs_1; }
	inline void set_childs_1(List_1_t7C870B251851F4157D532BFB8D4FC8A7944EBF07 * value)
	{
		___childs_1 = value;
		Il2CppCodeGenWriteBarrier((&___childs_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCHILDINFO_TF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105_H
#ifndef RESMARRYCLONE_TCBDD302BA96FDB02E8C25597A97722F82926D785_H
#define RESMARRYCLONE_TCBDD302BA96FDB02E8C25597A97722F82926D785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryClone
struct  ResMarryClone_tCBDD302BA96FDB02E8C25597A97722F82926D785  : public RuntimeObject
{
public:
	// MSG_Marriage.MarryClone MSG_Marriage.ResMarryClone::clone
	MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139 * ___clone_1;

public:
	inline static int32_t get_offset_of_clone_1() { return static_cast<int32_t>(offsetof(ResMarryClone_tCBDD302BA96FDB02E8C25597A97722F82926D785, ___clone_1)); }
	inline MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139 * get_clone_1() const { return ___clone_1; }
	inline MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139 ** get_address_of_clone_1() { return &___clone_1; }
	inline void set_clone_1(MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139 * value)
	{
		___clone_1 = value;
		Il2CppCodeGenWriteBarrier((&___clone_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCLONE_TCBDD302BA96FDB02E8C25597A97722F82926D785_H
#ifndef RESMARRYCLONEFAILINFO_T7128132B82501E90D8DB399C3BCD5D2355015958_H
#define RESMARRYCLONEFAILINFO_T7128132B82501E90D8DB399C3BCD5D2355015958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCloneFailInfo
struct  ResMarryCloneFailInfo_t7128132B82501E90D8DB399C3BCD5D2355015958  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCLONEFAILINFO_T7128132B82501E90D8DB399C3BCD5D2355015958_H
#ifndef RESMARRYCLONEINFO_T36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF_H
#define RESMARRYCLONEINFO_T36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCloneInfo
struct  ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::bossId
	int32_t ___bossId_1;
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::bossDie
	int32_t ___bossDie_2;
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::bossMax
	int32_t ___bossMax_3;
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::monsterDie
	int32_t ___monsterDie_4;
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::monsterMax
	int32_t ___monsterMax_5;
	// System.Int32 MSG_Marriage.ResMarryCloneInfo::remainTime
	int32_t ___remainTime_6;

public:
	inline static int32_t get_offset_of_bossId_1() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___bossId_1)); }
	inline int32_t get_bossId_1() const { return ___bossId_1; }
	inline int32_t* get_address_of_bossId_1() { return &___bossId_1; }
	inline void set_bossId_1(int32_t value)
	{
		___bossId_1 = value;
	}

	inline static int32_t get_offset_of_bossDie_2() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___bossDie_2)); }
	inline int32_t get_bossDie_2() const { return ___bossDie_2; }
	inline int32_t* get_address_of_bossDie_2() { return &___bossDie_2; }
	inline void set_bossDie_2(int32_t value)
	{
		___bossDie_2 = value;
	}

	inline static int32_t get_offset_of_bossMax_3() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___bossMax_3)); }
	inline int32_t get_bossMax_3() const { return ___bossMax_3; }
	inline int32_t* get_address_of_bossMax_3() { return &___bossMax_3; }
	inline void set_bossMax_3(int32_t value)
	{
		___bossMax_3 = value;
	}

	inline static int32_t get_offset_of_monsterDie_4() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___monsterDie_4)); }
	inline int32_t get_monsterDie_4() const { return ___monsterDie_4; }
	inline int32_t* get_address_of_monsterDie_4() { return &___monsterDie_4; }
	inline void set_monsterDie_4(int32_t value)
	{
		___monsterDie_4 = value;
	}

	inline static int32_t get_offset_of_monsterMax_5() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___monsterMax_5)); }
	inline int32_t get_monsterMax_5() const { return ___monsterMax_5; }
	inline int32_t* get_address_of_monsterMax_5() { return &___monsterMax_5; }
	inline void set_monsterMax_5(int32_t value)
	{
		___monsterMax_5 = value;
	}

	inline static int32_t get_offset_of_remainTime_6() { return static_cast<int32_t>(offsetof(ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF, ___remainTime_6)); }
	inline int32_t get_remainTime_6() const { return ___remainTime_6; }
	inline int32_t* get_address_of_remainTime_6() { return &___remainTime_6; }
	inline void set_remainTime_6(int32_t value)
	{
		___remainTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCLONEINFO_T36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF_H
#ifndef RESMARRYCLONESUCINFO_TC22101390144C37DB0E14F6CF23FC0AE08D630D2_H
#define RESMARRYCLONESUCINFO_TC22101390144C37DB0E14F6CF23FC0AE08D630D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCloneSucInfo
struct  ResMarryCloneSucInfo_tC22101390144C37DB0E14F6CF23FC0AE08D630D2  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Marriage.ResMarryCloneSucInfo::imgList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___imgList_1;

public:
	inline static int32_t get_offset_of_imgList_1() { return static_cast<int32_t>(offsetof(ResMarryCloneSucInfo_tC22101390144C37DB0E14F6CF23FC0AE08D630D2, ___imgList_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_imgList_1() const { return ___imgList_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_imgList_1() { return &___imgList_1; }
	inline void set_imgList_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___imgList_1 = value;
		Il2CppCodeGenWriteBarrier((&___imgList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCLONESUCINFO_TC22101390144C37DB0E14F6CF23FC0AE08D630D2_H
#ifndef RESMARRYCOPYBOSSSTATE_T5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29_H
#define RESMARRYCOPYBOSSSTATE_T5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCopyBossState
struct  ResMarryCopyBossState_t5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29  : public RuntimeObject
{
public:
	// System.Boolean MSG_Marriage.ResMarryCopyBossState::bossIsDie
	bool ___bossIsDie_1;

public:
	inline static int32_t get_offset_of_bossIsDie_1() { return static_cast<int32_t>(offsetof(ResMarryCopyBossState_t5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29, ___bossIsDie_1)); }
	inline bool get_bossIsDie_1() const { return ___bossIsDie_1; }
	inline bool* get_address_of_bossIsDie_1() { return &___bossIsDie_1; }
	inline void set_bossIsDie_1(bool value)
	{
		___bossIsDie_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCOPYBOSSSTATE_T5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29_H
#ifndef RESMARRYCOPYENTER_TA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7_H
#define RESMARRYCOPYENTER_TA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCopyEnter
struct  ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResMarryCopyEnter::remianTime
	int32_t ___remianTime_1;
	// System.Int64 MSG_Marriage.ResMarryCopyEnter::roleId1
	int64_t ___roleId1_2;
	// System.Int32 MSG_Marriage.ResMarryCopyEnter::roleCareer1
	int32_t ___roleCareer1_3;
	// System.String MSG_Marriage.ResMarryCopyEnter::roleName1
	String_t* ___roleName1_4;
	// System.Int64 MSG_Marriage.ResMarryCopyEnter::roleId2
	int64_t ___roleId2_5;
	// System.Int32 MSG_Marriage.ResMarryCopyEnter::roleCareer2
	int32_t ___roleCareer2_6;
	// System.String MSG_Marriage.ResMarryCopyEnter::roleName2
	String_t* ___roleName2_7;
	// System.Boolean MSG_Marriage.ResMarryCopyEnter::marryCopyHotIsBuy1
	bool ___marryCopyHotIsBuy1_8;
	// System.Boolean MSG_Marriage.ResMarryCopyEnter::marryCopyHotIsBuy2
	bool ___marryCopyHotIsBuy2_9;
	// System.Boolean MSG_Marriage.ResMarryCopyEnter::isSign
	bool ___isSign_10;
	// System.Int32 MSG_Marriage.ResMarryCopyEnter::signCount
	int32_t ___signCount_11;

public:
	inline static int32_t get_offset_of_remianTime_1() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___remianTime_1)); }
	inline int32_t get_remianTime_1() const { return ___remianTime_1; }
	inline int32_t* get_address_of_remianTime_1() { return &___remianTime_1; }
	inline void set_remianTime_1(int32_t value)
	{
		___remianTime_1 = value;
	}

	inline static int32_t get_offset_of_roleId1_2() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleId1_2)); }
	inline int64_t get_roleId1_2() const { return ___roleId1_2; }
	inline int64_t* get_address_of_roleId1_2() { return &___roleId1_2; }
	inline void set_roleId1_2(int64_t value)
	{
		___roleId1_2 = value;
	}

	inline static int32_t get_offset_of_roleCareer1_3() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleCareer1_3)); }
	inline int32_t get_roleCareer1_3() const { return ___roleCareer1_3; }
	inline int32_t* get_address_of_roleCareer1_3() { return &___roleCareer1_3; }
	inline void set_roleCareer1_3(int32_t value)
	{
		___roleCareer1_3 = value;
	}

	inline static int32_t get_offset_of_roleName1_4() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleName1_4)); }
	inline String_t* get_roleName1_4() const { return ___roleName1_4; }
	inline String_t** get_address_of_roleName1_4() { return &___roleName1_4; }
	inline void set_roleName1_4(String_t* value)
	{
		___roleName1_4 = value;
		Il2CppCodeGenWriteBarrier((&___roleName1_4), value);
	}

	inline static int32_t get_offset_of_roleId2_5() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleId2_5)); }
	inline int64_t get_roleId2_5() const { return ___roleId2_5; }
	inline int64_t* get_address_of_roleId2_5() { return &___roleId2_5; }
	inline void set_roleId2_5(int64_t value)
	{
		___roleId2_5 = value;
	}

	inline static int32_t get_offset_of_roleCareer2_6() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleCareer2_6)); }
	inline int32_t get_roleCareer2_6() const { return ___roleCareer2_6; }
	inline int32_t* get_address_of_roleCareer2_6() { return &___roleCareer2_6; }
	inline void set_roleCareer2_6(int32_t value)
	{
		___roleCareer2_6 = value;
	}

	inline static int32_t get_offset_of_roleName2_7() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___roleName2_7)); }
	inline String_t* get_roleName2_7() const { return ___roleName2_7; }
	inline String_t** get_address_of_roleName2_7() { return &___roleName2_7; }
	inline void set_roleName2_7(String_t* value)
	{
		___roleName2_7 = value;
		Il2CppCodeGenWriteBarrier((&___roleName2_7), value);
	}

	inline static int32_t get_offset_of_marryCopyHotIsBuy1_8() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___marryCopyHotIsBuy1_8)); }
	inline bool get_marryCopyHotIsBuy1_8() const { return ___marryCopyHotIsBuy1_8; }
	inline bool* get_address_of_marryCopyHotIsBuy1_8() { return &___marryCopyHotIsBuy1_8; }
	inline void set_marryCopyHotIsBuy1_8(bool value)
	{
		___marryCopyHotIsBuy1_8 = value;
	}

	inline static int32_t get_offset_of_marryCopyHotIsBuy2_9() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___marryCopyHotIsBuy2_9)); }
	inline bool get_marryCopyHotIsBuy2_9() const { return ___marryCopyHotIsBuy2_9; }
	inline bool* get_address_of_marryCopyHotIsBuy2_9() { return &___marryCopyHotIsBuy2_9; }
	inline void set_marryCopyHotIsBuy2_9(bool value)
	{
		___marryCopyHotIsBuy2_9 = value;
	}

	inline static int32_t get_offset_of_isSign_10() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___isSign_10)); }
	inline bool get_isSign_10() const { return ___isSign_10; }
	inline bool* get_address_of_isSign_10() { return &___isSign_10; }
	inline void set_isSign_10(bool value)
	{
		___isSign_10 = value;
	}

	inline static int32_t get_offset_of_signCount_11() { return static_cast<int32_t>(offsetof(ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7, ___signCount_11)); }
	inline int32_t get_signCount_11() const { return ___signCount_11; }
	inline int32_t* get_address_of_signCount_11() { return &___signCount_11; }
	inline void set_signCount_11(int32_t value)
	{
		___signCount_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCOPYENTER_TA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7_H
#ifndef RESMARRYCOPYINFO_T03EB7930443CD76CDB53D3229D7B6A2CCB17F666_H
#define RESMARRYCOPYINFO_T03EB7930443CD76CDB53D3229D7B6A2CCB17F666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCopyInfo
struct  ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResMarryCopyInfo::stage
	int32_t ___stage_1;
	// System.Int32 MSG_Marriage.ResMarryCopyInfo::eatCount
	int32_t ___eatCount_2;
	// System.Int64 MSG_Marriage.ResMarryCopyInfo::exp
	int64_t ___exp_3;
	// System.Int32 MSG_Marriage.ResMarryCopyInfo::gatherCount
	int32_t ___gatherCount_4;
	// System.Int32 MSG_Marriage.ResMarryCopyInfo::hot
	int32_t ___hot_5;

public:
	inline static int32_t get_offset_of_stage_1() { return static_cast<int32_t>(offsetof(ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666, ___stage_1)); }
	inline int32_t get_stage_1() const { return ___stage_1; }
	inline int32_t* get_address_of_stage_1() { return &___stage_1; }
	inline void set_stage_1(int32_t value)
	{
		___stage_1 = value;
	}

	inline static int32_t get_offset_of_eatCount_2() { return static_cast<int32_t>(offsetof(ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666, ___eatCount_2)); }
	inline int32_t get_eatCount_2() const { return ___eatCount_2; }
	inline int32_t* get_address_of_eatCount_2() { return &___eatCount_2; }
	inline void set_eatCount_2(int32_t value)
	{
		___eatCount_2 = value;
	}

	inline static int32_t get_offset_of_exp_3() { return static_cast<int32_t>(offsetof(ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666, ___exp_3)); }
	inline int64_t get_exp_3() const { return ___exp_3; }
	inline int64_t* get_address_of_exp_3() { return &___exp_3; }
	inline void set_exp_3(int64_t value)
	{
		___exp_3 = value;
	}

	inline static int32_t get_offset_of_gatherCount_4() { return static_cast<int32_t>(offsetof(ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666, ___gatherCount_4)); }
	inline int32_t get_gatherCount_4() const { return ___gatherCount_4; }
	inline int32_t* get_address_of_gatherCount_4() { return &___gatherCount_4; }
	inline void set_gatherCount_4(int32_t value)
	{
		___gatherCount_4 = value;
	}

	inline static int32_t get_offset_of_hot_5() { return static_cast<int32_t>(offsetof(ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666, ___hot_5)); }
	inline int32_t get_hot_5() const { return ___hot_5; }
	inline int32_t* get_address_of_hot_5() { return &___hot_5; }
	inline void set_hot_5(int32_t value)
	{
		___hot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCOPYINFO_T03EB7930443CD76CDB53D3229D7B6A2CCB17F666_H
#ifndef RESMARRYCOPYPLAYVIEDO_TAC10B97BA704D7FF13CAEEF509634F5CC628DB62_H
#define RESMARRYCOPYPLAYVIEDO_TAC10B97BA704D7FF13CAEEF509634F5CC628DB62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCopyPlayViedo
struct  ResMarryCopyPlayViedo_tAC10B97BA704D7FF13CAEEF509634F5CC628DB62  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCOPYPLAYVIEDO_TAC10B97BA704D7FF13CAEEF509634F5CC628DB62_H
#ifndef RESMARRYDATA_T6F02663F3252D4F8AE448E2F08F79E8B697F091F_H
#define RESMARRYDATA_T6F02663F3252D4F8AE448E2F08F79E8B697F091F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryData
struct  ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Marriage.ResMarryData::tList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___tList_1;
	// System.String MSG_Marriage.ResMarryData::name
	String_t* ___name_2;
	// System.Int32 MSG_Marriage.ResMarryData::career
	int32_t ___career_3;
	// System.UInt64 MSG_Marriage.ResMarryData::playerId
	uint64_t ___playerId_4;
	// MSG_Common.FacadeAttribute MSG_Marriage.ResMarryData::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_5;
	// System.Int32 MSG_Marriage.ResMarryData::marryDay
	int32_t ___marryDay_6;
	// System.Int32 MSG_Marriage.ResMarryData::intimacy
	int32_t ___intimacy_7;
	// System.Int32 MSG_Marriage.ResMarryData::weddingNum
	int32_t ___weddingNum_8;
	// System.Int32 MSG_Marriage.ResMarryData::stateLv
	int32_t ___stateLv_9;
	// System.UInt64 MSG_Marriage.ResMarryData::divorceId
	uint64_t ___divorceId_10;
	// System.Collections.Generic.List`1<MSG_Marriage.WeddingMember> MSG_Marriage.ResMarryData::weddingMembersList
	List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * ___weddingMembersList_11;
	// System.Int32 MSG_Marriage.ResMarryData::purNum
	int32_t ___purNum_12;

public:
	inline static int32_t get_offset_of_tList_1() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___tList_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_tList_1() const { return ___tList_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_tList_1() { return &___tList_1; }
	inline void set_tList_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___tList_1 = value;
		Il2CppCodeGenWriteBarrier((&___tList_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_career_3() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___career_3)); }
	inline int32_t get_career_3() const { return ___career_3; }
	inline int32_t* get_address_of_career_3() { return &___career_3; }
	inline void set_career_3(int32_t value)
	{
		___career_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___playerId_4)); }
	inline uint64_t get_playerId_4() const { return ___playerId_4; }
	inline uint64_t* get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(uint64_t value)
	{
		___playerId_4 = value;
	}

	inline static int32_t get_offset_of_facade_5() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___facade_5)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_5() const { return ___facade_5; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_5() { return &___facade_5; }
	inline void set_facade_5(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_5 = value;
		Il2CppCodeGenWriteBarrier((&___facade_5), value);
	}

	inline static int32_t get_offset_of_marryDay_6() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___marryDay_6)); }
	inline int32_t get_marryDay_6() const { return ___marryDay_6; }
	inline int32_t* get_address_of_marryDay_6() { return &___marryDay_6; }
	inline void set_marryDay_6(int32_t value)
	{
		___marryDay_6 = value;
	}

	inline static int32_t get_offset_of_intimacy_7() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___intimacy_7)); }
	inline int32_t get_intimacy_7() const { return ___intimacy_7; }
	inline int32_t* get_address_of_intimacy_7() { return &___intimacy_7; }
	inline void set_intimacy_7(int32_t value)
	{
		___intimacy_7 = value;
	}

	inline static int32_t get_offset_of_weddingNum_8() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___weddingNum_8)); }
	inline int32_t get_weddingNum_8() const { return ___weddingNum_8; }
	inline int32_t* get_address_of_weddingNum_8() { return &___weddingNum_8; }
	inline void set_weddingNum_8(int32_t value)
	{
		___weddingNum_8 = value;
	}

	inline static int32_t get_offset_of_stateLv_9() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___stateLv_9)); }
	inline int32_t get_stateLv_9() const { return ___stateLv_9; }
	inline int32_t* get_address_of_stateLv_9() { return &___stateLv_9; }
	inline void set_stateLv_9(int32_t value)
	{
		___stateLv_9 = value;
	}

	inline static int32_t get_offset_of_divorceId_10() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___divorceId_10)); }
	inline uint64_t get_divorceId_10() const { return ___divorceId_10; }
	inline uint64_t* get_address_of_divorceId_10() { return &___divorceId_10; }
	inline void set_divorceId_10(uint64_t value)
	{
		___divorceId_10 = value;
	}

	inline static int32_t get_offset_of_weddingMembersList_11() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___weddingMembersList_11)); }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * get_weddingMembersList_11() const { return ___weddingMembersList_11; }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 ** get_address_of_weddingMembersList_11() { return &___weddingMembersList_11; }
	inline void set_weddingMembersList_11(List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * value)
	{
		___weddingMembersList_11 = value;
		Il2CppCodeGenWriteBarrier((&___weddingMembersList_11), value);
	}

	inline static int32_t get_offset_of_purNum_12() { return static_cast<int32_t>(offsetof(ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F, ___purNum_12)); }
	inline int32_t get_purNum_12() const { return ___purNum_12; }
	inline int32_t* get_address_of_purNum_12() { return &___purNum_12; }
	inline void set_purNum_12(int32_t value)
	{
		___purNum_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYDATA_T6F02663F3252D4F8AE448E2F08F79E8B697F091F_H
#ifndef RESMARRYONLINE_TAC2844A93C654E99E9C7DC483B9F106270765849_H
#define RESMARRYONLINE_TAC2844A93C654E99E9C7DC483B9F106270765849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryOnline
struct  ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.WeddingData> MSG_Marriage.ResMarryOnline::weddingDataList
	List_1_t4636CAC30074A21B0DE86AAAADA0E58D0F98A309 * ___weddingDataList_1;
	// System.Collections.Generic.List`1<MSG_Marriage.WeddingMember> MSG_Marriage.ResMarryOnline::weddingMembersList
	List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * ___weddingMembersList_2;

public:
	inline static int32_t get_offset_of_weddingDataList_1() { return static_cast<int32_t>(offsetof(ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849, ___weddingDataList_1)); }
	inline List_1_t4636CAC30074A21B0DE86AAAADA0E58D0F98A309 * get_weddingDataList_1() const { return ___weddingDataList_1; }
	inline List_1_t4636CAC30074A21B0DE86AAAADA0E58D0F98A309 ** get_address_of_weddingDataList_1() { return &___weddingDataList_1; }
	inline void set_weddingDataList_1(List_1_t4636CAC30074A21B0DE86AAAADA0E58D0F98A309 * value)
	{
		___weddingDataList_1 = value;
		Il2CppCodeGenWriteBarrier((&___weddingDataList_1), value);
	}

	inline static int32_t get_offset_of_weddingMembersList_2() { return static_cast<int32_t>(offsetof(ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849, ___weddingMembersList_2)); }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * get_weddingMembersList_2() const { return ___weddingMembersList_2; }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 ** get_address_of_weddingMembersList_2() { return &___weddingMembersList_2; }
	inline void set_weddingMembersList_2(List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * value)
	{
		___weddingMembersList_2 = value;
		Il2CppCodeGenWriteBarrier((&___weddingMembersList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYONLINE_TAC2844A93C654E99E9C7DC483B9F106270765849_H
#ifndef RESMARRYPROPOSE_TE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991_H
#define RESMARRYPROPOSE_TE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryPropose
struct  ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991  : public RuntimeObject
{
public:
	// System.String MSG_Marriage.ResMarryPropose::name
	String_t* ___name_1;
	// System.Int32 MSG_Marriage.ResMarryPropose::career
	int32_t ___career_2;
	// System.Int32 MSG_Marriage.ResMarryPropose::type
	int32_t ___type_3;
	// System.Int64 MSG_Marriage.ResMarryPropose::marrayId
	int64_t ___marrayId_4;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_career_2() { return static_cast<int32_t>(offsetof(ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991, ___career_2)); }
	inline int32_t get_career_2() const { return ___career_2; }
	inline int32_t* get_address_of_career_2() { return &___career_2; }
	inline void set_career_2(int32_t value)
	{
		___career_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_marrayId_4() { return static_cast<int32_t>(offsetof(ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991, ___marrayId_4)); }
	inline int64_t get_marrayId_4() const { return ___marrayId_4; }
	inline int64_t* get_address_of_marrayId_4() { return &___marrayId_4; }
	inline void set_marrayId_4(int64_t value)
	{
		___marrayId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYPROPOSE_TE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991_H
#ifndef RESMARRYSENDBULLETSCREEN_T78A10D9A8954AF10150290C051CBC2C968E49FCD_H
#define RESMARRYSENDBULLETSCREEN_T78A10D9A8954AF10150290C051CBC2C968E49FCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarrySendBulletScreen
struct  ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ResMarrySendBulletScreen::roleId
	int64_t ___roleId_1;
	// System.Int32 MSG_Marriage.ResMarrySendBulletScreen::roleCareer
	int32_t ___roleCareer_2;
	// System.String MSG_Marriage.ResMarrySendBulletScreen::roleName
	String_t* ___roleName_3;
	// System.String MSG_Marriage.ResMarrySendBulletScreen::context
	String_t* ___context_4;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_roleCareer_2() { return static_cast<int32_t>(offsetof(ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD, ___roleCareer_2)); }
	inline int32_t get_roleCareer_2() const { return ___roleCareer_2; }
	inline int32_t* get_address_of_roleCareer_2() { return &___roleCareer_2; }
	inline void set_roleCareer_2(int32_t value)
	{
		___roleCareer_2 = value;
	}

	inline static int32_t get_offset_of_roleName_3() { return static_cast<int32_t>(offsetof(ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD, ___roleName_3)); }
	inline String_t* get_roleName_3() const { return ___roleName_3; }
	inline String_t** get_address_of_roleName_3() { return &___roleName_3; }
	inline void set_roleName_3(String_t* value)
	{
		___roleName_3 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_3), value);
	}

	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD, ___context_4)); }
	inline String_t* get_context_4() const { return ___context_4; }
	inline String_t** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(String_t* value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier((&___context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYSENDBULLETSCREEN_T78A10D9A8954AF10150290C051CBC2C968E49FCD_H
#ifndef RESMARRYTASK_TB07078EAF01920D364F056A45B55212E53263724_H
#define RESMARRYTASK_TB07078EAF01920D364F056A45B55212E53263724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryTask
struct  ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Marriage.ResMarryTask::taskId
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___taskId_1;
	// System.Collections.Generic.List`1<System.Int32> MSG_Marriage.ResMarryTask::overId
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___overId_2;

public:
	inline static int32_t get_offset_of_taskId_1() { return static_cast<int32_t>(offsetof(ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724, ___taskId_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_taskId_1() const { return ___taskId_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_taskId_1() { return &___taskId_1; }
	inline void set_taskId_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___taskId_1 = value;
		Il2CppCodeGenWriteBarrier((&___taskId_1), value);
	}

	inline static int32_t get_offset_of_overId_2() { return static_cast<int32_t>(offsetof(ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724, ___overId_2)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_overId_2() const { return ___overId_2; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_overId_2() { return &___overId_2; }
	inline void set_overId_2(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___overId_2 = value;
		Il2CppCodeGenWriteBarrier((&___overId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYTASK_TB07078EAF01920D364F056A45B55212E53263724_H
#ifndef RESMARRYUSEITEMBROADCAST_TD62CC5FF3884B849C977D4CCC1FED319BF0905BD_H
#define RESMARRYUSEITEMBROADCAST_TD62CC5FF3884B849C977D4CCC1FED319BF0905BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryUseItemBroadcast
struct  ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ResMarryUseItemBroadcast::roleId
	int64_t ___roleId_1;
	// System.String MSG_Marriage.ResMarryUseItemBroadcast::roleName
	String_t* ___roleName_2;
	// System.Int32 MSG_Marriage.ResMarryUseItemBroadcast::itemID
	int32_t ___itemID_3;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_roleName_2() { return static_cast<int32_t>(offsetof(ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD, ___roleName_2)); }
	inline String_t* get_roleName_2() const { return ___roleName_2; }
	inline String_t** get_address_of_roleName_2() { return &___roleName_2; }
	inline void set_roleName_2(String_t* value)
	{
		___roleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_2), value);
	}

	inline static int32_t get_offset_of_itemID_3() { return static_cast<int32_t>(offsetof(ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD, ___itemID_3)); }
	inline int32_t get_itemID_3() const { return ___itemID_3; }
	inline int32_t* get_address_of_itemID_3() { return &___itemID_3; }
	inline void set_itemID_3(int32_t value)
	{
		___itemID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYUSEITEMBROADCAST_TD62CC5FF3884B849C977D4CCC1FED319BF0905BD_H
#ifndef RESMARRYWALLINFO_T39DAF812F47B4C4473C97D868A0A9470EA1FACD6_H
#define RESMARRYWALLINFO_T39DAF812F47B4C4473C97D868A0A9470EA1FACD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryWallInfo
struct  ResMarryWallInfo_t39DAF812F47B4C4473C97D868A0A9470EA1FACD6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.MarryDeclaration> MSG_Marriage.ResMarryWallInfo::declarations
	List_1_t6F87DA0372A99AA94E8196850CFEF172E9A4A8F5 * ___declarations_1;

public:
	inline static int32_t get_offset_of_declarations_1() { return static_cast<int32_t>(offsetof(ResMarryWallInfo_t39DAF812F47B4C4473C97D868A0A9470EA1FACD6, ___declarations_1)); }
	inline List_1_t6F87DA0372A99AA94E8196850CFEF172E9A4A8F5 * get_declarations_1() const { return ___declarations_1; }
	inline List_1_t6F87DA0372A99AA94E8196850CFEF172E9A4A8F5 ** get_address_of_declarations_1() { return &___declarations_1; }
	inline void set_declarations_1(List_1_t6F87DA0372A99AA94E8196850CFEF172E9A4A8F5 * value)
	{
		___declarations_1 = value;
		Il2CppCodeGenWriteBarrier((&___declarations_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYWALLINFO_T39DAF812F47B4C4473C97D868A0A9470EA1FACD6_H
#ifndef RESMARRYWALLREWARDINFO_TA026D04F51BFA744B239092EC8A883FEAA11D82E_H
#define RESMARRYWALLREWARDINFO_TA026D04F51BFA744B239092EC8A883FEAA11D82E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryWallRewardInfo
struct  ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResMarryWallRewardInfo::haveReward
	int32_t ___haveReward_1;
	// System.Int32 MSG_Marriage.ResMarryWallRewardInfo::cd
	int32_t ___cd_2;

public:
	inline static int32_t get_offset_of_haveReward_1() { return static_cast<int32_t>(offsetof(ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E, ___haveReward_1)); }
	inline int32_t get_haveReward_1() const { return ___haveReward_1; }
	inline int32_t* get_address_of_haveReward_1() { return &___haveReward_1; }
	inline void set_haveReward_1(int32_t value)
	{
		___haveReward_1 = value;
	}

	inline static int32_t get_offset_of_cd_2() { return static_cast<int32_t>(offsetof(ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E, ___cd_2)); }
	inline int32_t get_cd_2() const { return ___cd_2; }
	inline int32_t* get_address_of_cd_2() { return &___cd_2; }
	inline void set_cd_2(int32_t value)
	{
		___cd_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYWALLREWARDINFO_TA026D04F51BFA744B239092EC8A883FEAA11D82E_H
#ifndef RESPURINVITNUM_TDC76CC557CD014C7FBFD6E85757E53F12F4B936C_H
#define RESPURINVITNUM_TDC76CC557CD014C7FBFD6E85757E53F12F4B936C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResPurInvitNum
struct  ResPurInvitNum_tDC76CC557CD014C7FBFD6E85757E53F12F4B936C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPURINVITNUM_TDC76CC557CD014C7FBFD6E85757E53F12F4B936C_H
#ifndef RESREFRESHMARRYACTIVITYTASK_T3E6580DB58AE33E5B0B598B5930C93B24423A877_H
#define RESREFRESHMARRYACTIVITYTASK_T3E6580DB58AE33E5B0B598B5930C93B24423A877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResRefreshMarryActivityTask
struct  ResRefreshMarryActivityTask_t3E6580DB58AE33E5B0B598B5930C93B24423A877  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.MarryActivityTaskData> MSG_Marriage.ResRefreshMarryActivityTask::taskData
	List_1_t3D55FA1B1689D81991E96BA4EA9A9C86FB806B20 * ___taskData_1;

public:
	inline static int32_t get_offset_of_taskData_1() { return static_cast<int32_t>(offsetof(ResRefreshMarryActivityTask_t3E6580DB58AE33E5B0B598B5930C93B24423A877, ___taskData_1)); }
	inline List_1_t3D55FA1B1689D81991E96BA4EA9A9C86FB806B20 * get_taskData_1() const { return ___taskData_1; }
	inline List_1_t3D55FA1B1689D81991E96BA4EA9A9C86FB806B20 ** get_address_of_taskData_1() { return &___taskData_1; }
	inline void set_taskData_1(List_1_t3D55FA1B1689D81991E96BA4EA9A9C86FB806B20 * value)
	{
		___taskData_1 = value;
		Il2CppCodeGenWriteBarrier((&___taskData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESREFRESHMARRYACTIVITYTASK_T3E6580DB58AE33E5B0B598B5930C93B24423A877_H
#ifndef RESSELECTWEDDING_T8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E_H
#define RESSELECTWEDDING_T8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResSelectWedding
struct  ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResSelectWedding::res
	int32_t ___res_1;
	// System.Int32 MSG_Marriage.ResSelectWedding::weddingId
	int32_t ___weddingId_2;

public:
	inline static int32_t get_offset_of_res_1() { return static_cast<int32_t>(offsetof(ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E, ___res_1)); }
	inline int32_t get_res_1() const { return ___res_1; }
	inline int32_t* get_address_of_res_1() { return &___res_1; }
	inline void set_res_1(int32_t value)
	{
		___res_1 = value;
	}

	inline static int32_t get_offset_of_weddingId_2() { return static_cast<int32_t>(offsetof(ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E, ___weddingId_2)); }
	inline int32_t get_weddingId_2() const { return ___weddingId_2; }
	inline int32_t* get_address_of_weddingId_2() { return &___weddingId_2; }
	inline void set_weddingId_2(int32_t value)
	{
		___weddingId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSELECTWEDDING_T8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E_H
#ifndef RESUPDATEDEMANDINVIT_TAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5_H
#define RESUPDATEDEMANDINVIT_TAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResUpdateDemandInvit
struct  ResUpdateDemandInvit_tAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5  : public RuntimeObject
{
public:
	// MSG_Marriage.WeddingMember MSG_Marriage.ResUpdateDemandInvit::member
	WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12 * ___member_1;

public:
	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(ResUpdateDemandInvit_tAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5, ___member_1)); }
	inline WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12 * get_member_1() const { return ___member_1; }
	inline WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12 ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12 * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((&___member_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEDEMANDINVIT_TAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5_H
#ifndef RESUPDATEINVIT_TA40C43A027EC480015235CA3BF4B2C1D1B34BB57_H
#define RESUPDATEINVIT_TA40C43A027EC480015235CA3BF4B2C1D1B34BB57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResUpdateInvit
struct  ResUpdateInvit_tA40C43A027EC480015235CA3BF4B2C1D1B34BB57  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Marriage.WeddingMember> MSG_Marriage.ResUpdateInvit::memberList
	List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * ___memberList_1;

public:
	inline static int32_t get_offset_of_memberList_1() { return static_cast<int32_t>(offsetof(ResUpdateInvit_tA40C43A027EC480015235CA3BF4B2C1D1B34BB57, ___memberList_1)); }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * get_memberList_1() const { return ___memberList_1; }
	inline List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 ** get_address_of_memberList_1() { return &___memberList_1; }
	inline void set_memberList_1(List_1_t784DAA2FB0D99CD4E3FF95CCA4CD90A9E56895D8 * value)
	{
		___memberList_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEINVIT_TA40C43A027EC480015235CA3BF4B2C1D1B34BB57_H
#ifndef RESUPDATEWEDDING_T9085378BDA89AC163E4E4747803E5637980F8758_H
#define RESUPDATEWEDDING_T9085378BDA89AC163E4E4747803E5637980F8758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResUpdateWedding
struct  ResUpdateWedding_t9085378BDA89AC163E4E4747803E5637980F8758  : public RuntimeObject
{
public:
	// MSG_Marriage.WeddingData MSG_Marriage.ResUpdateWedding::weddingData
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E * ___weddingData_1;

public:
	inline static int32_t get_offset_of_weddingData_1() { return static_cast<int32_t>(offsetof(ResUpdateWedding_t9085378BDA89AC163E4E4747803E5637980F8758, ___weddingData_1)); }
	inline WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E * get_weddingData_1() const { return ___weddingData_1; }
	inline WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E ** get_address_of_weddingData_1() { return &___weddingData_1; }
	inline void set_weddingData_1(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E * value)
	{
		___weddingData_1 = value;
		Il2CppCodeGenWriteBarrier((&___weddingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEWEDDING_T9085378BDA89AC163E4E4747803E5637980F8758_H
#ifndef RESUPGRADEMARRYLOCKINFO_T04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8_H
#define RESUPGRADEMARRYLOCKINFO_T04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResUpgradeMarryLockInfo
struct  ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResUpgradeMarryLockInfo::level
	int32_t ___level_1;
	// System.Int32 MSG_Marriage.ResUpgradeMarryLockInfo::exp
	int32_t ___exp_2;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_exp_2() { return static_cast<int32_t>(offsetof(ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8, ___exp_2)); }
	inline int32_t get_exp_2() const { return ___exp_2; }
	inline int32_t* get_address_of_exp_2() { return &___exp_2; }
	inline void set_exp_2(int32_t value)
	{
		___exp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPGRADEMARRYLOCKINFO_T04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8_H
#ifndef RESWEDDINGSTART_T2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE_H
#define RESWEDDINGSTART_T2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResWeddingStart
struct  ResWeddingStart_t2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.ResWeddingStart::copyMapId
	int32_t ___copyMapId_1;

public:
	inline static int32_t get_offset_of_copyMapId_1() { return static_cast<int32_t>(offsetof(ResWeddingStart_t2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE, ___copyMapId_1)); }
	inline int32_t get_copyMapId_1() const { return ___copyMapId_1; }
	inline int32_t* get_address_of_copyMapId_1() { return &___copyMapId_1; }
	inline void set_copyMapId_1(int32_t value)
	{
		___copyMapId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESWEDDINGSTART_T2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE_H
#ifndef WEDDINGDATA_T9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E_H
#define WEDDINGDATA_T9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.WeddingData
struct  WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Marriage.WeddingData::timeStart
	int32_t ___timeStart_0;
	// System.String MSG_Marriage.WeddingData::marrayName
	String_t* ___marrayName_1;
	// System.String MSG_Marriage.WeddingData::beMarrayName
	String_t* ___beMarrayName_2;
	// System.UInt32 MSG_Marriage.WeddingData::marrayCareer
	uint32_t ___marrayCareer_3;
	// System.UInt32 MSG_Marriage.WeddingData::beMarrayCareer
	uint32_t ___beMarrayCareer_4;
	// System.Int64 MSG_Marriage.WeddingData::marryId
	int64_t ___marryId_5;
	// System.Int64 MSG_Marriage.WeddingData::bemMarryId
	int64_t ___bemMarryId_6;
	// MSG_Common.HeadAttribute MSG_Marriage.WeddingData::marryHead
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___marryHead_7;
	// MSG_Common.HeadAttribute MSG_Marriage.WeddingData::beMarryHead
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___beMarryHead_8;

public:
	inline static int32_t get_offset_of_timeStart_0() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___timeStart_0)); }
	inline int32_t get_timeStart_0() const { return ___timeStart_0; }
	inline int32_t* get_address_of_timeStart_0() { return &___timeStart_0; }
	inline void set_timeStart_0(int32_t value)
	{
		___timeStart_0 = value;
	}

	inline static int32_t get_offset_of_marrayName_1() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___marrayName_1)); }
	inline String_t* get_marrayName_1() const { return ___marrayName_1; }
	inline String_t** get_address_of_marrayName_1() { return &___marrayName_1; }
	inline void set_marrayName_1(String_t* value)
	{
		___marrayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___marrayName_1), value);
	}

	inline static int32_t get_offset_of_beMarrayName_2() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___beMarrayName_2)); }
	inline String_t* get_beMarrayName_2() const { return ___beMarrayName_2; }
	inline String_t** get_address_of_beMarrayName_2() { return &___beMarrayName_2; }
	inline void set_beMarrayName_2(String_t* value)
	{
		___beMarrayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___beMarrayName_2), value);
	}

	inline static int32_t get_offset_of_marrayCareer_3() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___marrayCareer_3)); }
	inline uint32_t get_marrayCareer_3() const { return ___marrayCareer_3; }
	inline uint32_t* get_address_of_marrayCareer_3() { return &___marrayCareer_3; }
	inline void set_marrayCareer_3(uint32_t value)
	{
		___marrayCareer_3 = value;
	}

	inline static int32_t get_offset_of_beMarrayCareer_4() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___beMarrayCareer_4)); }
	inline uint32_t get_beMarrayCareer_4() const { return ___beMarrayCareer_4; }
	inline uint32_t* get_address_of_beMarrayCareer_4() { return &___beMarrayCareer_4; }
	inline void set_beMarrayCareer_4(uint32_t value)
	{
		___beMarrayCareer_4 = value;
	}

	inline static int32_t get_offset_of_marryId_5() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___marryId_5)); }
	inline int64_t get_marryId_5() const { return ___marryId_5; }
	inline int64_t* get_address_of_marryId_5() { return &___marryId_5; }
	inline void set_marryId_5(int64_t value)
	{
		___marryId_5 = value;
	}

	inline static int32_t get_offset_of_bemMarryId_6() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___bemMarryId_6)); }
	inline int64_t get_bemMarryId_6() const { return ___bemMarryId_6; }
	inline int64_t* get_address_of_bemMarryId_6() { return &___bemMarryId_6; }
	inline void set_bemMarryId_6(int64_t value)
	{
		___bemMarryId_6 = value;
	}

	inline static int32_t get_offset_of_marryHead_7() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___marryHead_7)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_marryHead_7() const { return ___marryHead_7; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_marryHead_7() { return &___marryHead_7; }
	inline void set_marryHead_7(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___marryHead_7 = value;
		Il2CppCodeGenWriteBarrier((&___marryHead_7), value);
	}

	inline static int32_t get_offset_of_beMarryHead_8() { return static_cast<int32_t>(offsetof(WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E, ___beMarryHead_8)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_beMarryHead_8() const { return ___beMarryHead_8; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_beMarryHead_8() { return &___beMarryHead_8; }
	inline void set_beMarryHead_8(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___beMarryHead_8 = value;
		Il2CppCodeGenWriteBarrier((&___beMarryHead_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEDDINGDATA_T9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E_H
#ifndef WEDDINGMEMBER_T6F1F8871C73B14438BA90E348D15B802821C3D12_H
#define WEDDINGMEMBER_T6F1F8871C73B14438BA90E348D15B802821C3D12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.WeddingMember
struct  WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Marriage.WeddingMember::roleId
	uint64_t ___roleId_0;
	// System.String MSG_Marriage.WeddingMember::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_roleId_0() { return static_cast<int32_t>(offsetof(WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12, ___roleId_0)); }
	inline uint64_t get_roleId_0() const { return ___roleId_0; }
	inline uint64_t* get_address_of_roleId_0() { return &___roleId_0; }
	inline void set_roleId_0(uint64_t value)
	{
		___roleId_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEDDINGMEMBER_T6F1F8871C73B14438BA90E348D15B802821C3D12_H
#ifndef MATERIAL_TBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81_H
#define MATERIAL_TBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.Material
struct  Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81  : public RuntimeObject
{
public:
	// System.Int32 MSG_Melting.Material::itemId
	int32_t ___itemId_0;
	// System.Int32 MSG_Melting.Material::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_itemId_0() { return static_cast<int32_t>(offsetof(Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81, ___itemId_0)); }
	inline int32_t get_itemId_0() const { return ___itemId_0; }
	inline int32_t* get_address_of_itemId_0() { return &___itemId_0; }
	inline void set_itemId_0(int32_t value)
	{
		___itemId_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81, ___count_1)); }
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
#endif // MATERIAL_TBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81_H
#ifndef REQMELTING_TF193D6E2B723D4208F51A217A29700B8D6D24DB7_H
#define REQMELTING_TF193D6E2B723D4208F51A217A29700B8D6D24DB7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ReqMelting
struct  ReqMelting_tF193D6E2B723D4208F51A217A29700B8D6D24DB7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMELTING_TF193D6E2B723D4208F51A217A29700B8D6D24DB7_H
#ifndef REQOPENMELTING_T010654DEE8C69F1DF123A1EB5FAEBAFE3E20BE35_H
#define REQOPENMELTING_T010654DEE8C69F1DF123A1EB5FAEBAFE3E20BE35_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ReqOpenMelting
struct  ReqOpenMelting_t010654DEE8C69F1DF123A1EB5FAEBAFE3E20BE35  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENMELTING_T010654DEE8C69F1DF123A1EB5FAEBAFE3E20BE35_H
#ifndef REQRESETMATERIAL_T458D6A14ABF3833C3D4957BAFA882B09B282D2FC_H
#define REQRESETMATERIAL_T458D6A14ABF3833C3D4957BAFA882B09B282D2FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ReqResetMaterial
struct  ReqResetMaterial_t458D6A14ABF3833C3D4957BAFA882B09B282D2FC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQRESETMATERIAL_T458D6A14ABF3833C3D4957BAFA882B09B282D2FC_H
#ifndef RESOPENMELTINGRES_T706431BBACEC9AC3559DA117293A352B933C61EA_H
#define RESOPENMELTINGRES_T706431BBACEC9AC3559DA117293A352B933C61EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ResOpenMeltingRes
struct  ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA  : public RuntimeObject
{
public:
	// System.Int32 MSG_Melting.ResOpenMeltingRes::curCount
	int32_t ___curCount_1;
	// System.Collections.Generic.List`1<MSG_Melting.Material> MSG_Melting.ResOpenMeltingRes::material
	List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * ___material_2;

public:
	inline static int32_t get_offset_of_curCount_1() { return static_cast<int32_t>(offsetof(ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA, ___curCount_1)); }
	inline int32_t get_curCount_1() const { return ___curCount_1; }
	inline int32_t* get_address_of_curCount_1() { return &___curCount_1; }
	inline void set_curCount_1(int32_t value)
	{
		___curCount_1 = value;
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA, ___material_2)); }
	inline List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * get_material_2() const { return ___material_2; }
	inline List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((&___material_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOPENMELTINGRES_T706431BBACEC9AC3559DA117293A352B933C61EA_H
#ifndef RESRESETMATERIALRES_T3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F_H
#define RESRESETMATERIALRES_T3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ResResetMaterialRes
struct  ResResetMaterialRes_t3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Melting.Material> MSG_Melting.ResResetMaterialRes::material
	List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * ___material_1;

public:
	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(ResResetMaterialRes_t3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F, ___material_1)); }
	inline List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * get_material_1() const { return ___material_1; }
	inline List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(List_1_tC40DD0AE283BE56E8B483797CCA6C781C4CABF92 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier((&___material_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESRESETMATERIALRES_T3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F_H
#ifndef RESSENDMATERIALRES_T9FCBDD034CBB8286BB782C09F3E4920A0006AC76_H
#define RESSENDMATERIALRES_T9FCBDD034CBB8286BB782C09F3E4920A0006AC76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ResSendMaterialRes
struct  ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76  : public RuntimeObject
{
public:
	// System.Int32 MSG_Melting.ResSendMaterialRes::itemId
	int32_t ___itemId_1;
	// System.Int32 MSG_Melting.ResSendMaterialRes::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76, ___itemId_1)); }
	inline int32_t get_itemId_1() const { return ___itemId_1; }
	inline int32_t* get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(int32_t value)
	{
		___itemId_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSENDMATERIALRES_T9FCBDD034CBB8286BB782C09F3E4920A0006AC76_H
#ifndef RESUPDATECOUNT_T8EC087181A6ACD2D8E427DE91D66A8E92ED2F659_H
#define RESUPDATECOUNT_T8EC087181A6ACD2D8E427DE91D66A8E92ED2F659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Melting.ResUpdateCount
struct  ResUpdateCount_t8EC087181A6ACD2D8E427DE91D66A8E92ED2F659  : public RuntimeObject
{
public:
	// System.Int32 MSG_Melting.ResUpdateCount::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(ResUpdateCount_t8EC087181A6ACD2D8E427DE91D66A8E92ED2F659, ___count_1)); }
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
#endif // RESUPDATECOUNT_T8EC087181A6ACD2D8E427DE91D66A8E92ED2F659_H
#ifndef RESNATUREMODELIDCHANGE_T7177ABB5280F1A32D684D38BA2148E4CD506540D_H
#define RESNATUREMODELIDCHANGE_T7177ABB5280F1A32D684D38BA2148E4CD506540D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Nature.ResNatureModelIdChange
struct  ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Nature.ResNatureModelIdChange::type
	int32_t ___type_1;
	// System.UInt64 MSG_Nature.ResNatureModelIdChange::playerid
	uint64_t ___playerid_2;
	// System.Int32 MSG_Nature.ResNatureModelIdChange::modelid
	int32_t ___modelid_3;
	// System.UInt64 MSG_Nature.ResNatureModelIdChange::natureId
	uint64_t ___natureId_4;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_playerid_2() { return static_cast<int32_t>(offsetof(ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D, ___playerid_2)); }
	inline uint64_t get_playerid_2() const { return ___playerid_2; }
	inline uint64_t* get_address_of_playerid_2() { return &___playerid_2; }
	inline void set_playerid_2(uint64_t value)
	{
		___playerid_2 = value;
	}

	inline static int32_t get_offset_of_modelid_3() { return static_cast<int32_t>(offsetof(ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D, ___modelid_3)); }
	inline int32_t get_modelid_3() const { return ___modelid_3; }
	inline int32_t* get_address_of_modelid_3() { return &___modelid_3; }
	inline void set_modelid_3(int32_t value)
	{
		___modelid_3 = value;
	}

	inline static int32_t get_offset_of_natureId_4() { return static_cast<int32_t>(offsetof(ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D, ___natureId_4)); }
	inline uint64_t get_natureId_4() const { return ___natureId_4; }
	inline uint64_t* get_address_of_natureId_4() { return &___natureId_4; }
	inline void set_natureId_4(uint64_t value)
	{
		___natureId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESNATUREMODELIDCHANGE_T7177ABB5280F1A32D684D38BA2148E4CD506540D_H
#ifndef RESPOWERCHANGE_T892A5D22CA2F20EE4E87465F586DFFD7B716352A_H
#define RESPOWERCHANGE_T892A5D22CA2F20EE4E87465F586DFFD7B716352A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Nature.ResPowerChange
struct  ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A  : public RuntimeObject
{
public:
	// System.Int32 MSG_Nature.ResPowerChange::natureType
	int32_t ___natureType_1;
	// System.Int32 MSG_Nature.ResPowerChange::fight
	int32_t ___fight_2;

public:
	inline static int32_t get_offset_of_natureType_1() { return static_cast<int32_t>(offsetof(ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A, ___natureType_1)); }
	inline int32_t get_natureType_1() const { return ___natureType_1; }
	inline int32_t* get_address_of_natureType_1() { return &___natureType_1; }
	inline void set_natureType_1(int32_t value)
	{
		___natureType_1 = value;
	}

	inline static int32_t get_offset_of_fight_2() { return static_cast<int32_t>(offsetof(ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A, ___fight_2)); }
	inline int32_t get_fight_2() const { return ___fight_2; }
	inline int32_t* get_address_of_fight_2() { return &___fight_2; }
	inline void set_fight_2(int32_t value)
	{
		___fight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPOWERCHANGE_T892A5D22CA2F20EE4E87465F586DFFD7B716352A_H
#ifndef ITEMMODELINFO_T92745229904AA7EBD44E5BEF3AB690965B8615EC_H
#define ITEMMODELINFO_T92745229904AA7EBD44E5BEF3AB690965B8615EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Nature.itemModelInfo
struct  itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC  : public RuntimeObject
{
public:
	// System.Int32 MSG_Nature.itemModelInfo::itemModelId
	int32_t ___itemModelId_0;
	// System.Int32 MSG_Nature.itemModelInfo::num
	int32_t ___num_1;

public:
	inline static int32_t get_offset_of_itemModelId_0() { return static_cast<int32_t>(offsetof(itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC, ___itemModelId_0)); }
	inline int32_t get_itemModelId_0() const { return ___itemModelId_0; }
	inline int32_t* get_address_of_itemModelId_0() { return &___itemModelId_0; }
	inline void set_itemModelId_0(int32_t value)
	{
		___itemModelId_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC, ___num_1)); }
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
#endif // ITEMMODELINFO_T92745229904AA7EBD44E5BEF3AB690965B8615EC_H
#ifndef ITEMONLYINFO_T94A10684D520F734B66A1E6763F1AC6ED75CEB52_H
#define ITEMONLYINFO_T94A10684D520F734B66A1E6763F1AC6ED75CEB52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Nature.itemOnlyInfo
struct  itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52  : public RuntimeObject
{
public:
	// System.Int64 MSG_Nature.itemOnlyInfo::itemOnlyId
	int64_t ___itemOnlyId_0;
	// System.Int32 MSG_Nature.itemOnlyInfo::num
	int32_t ___num_1;

public:
	inline static int32_t get_offset_of_itemOnlyId_0() { return static_cast<int32_t>(offsetof(itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52, ___itemOnlyId_0)); }
	inline int64_t get_itemOnlyId_0() const { return ___itemOnlyId_0; }
	inline int64_t* get_address_of_itemOnlyId_0() { return &___itemOnlyId_0; }
	inline void set_itemOnlyId_0(int64_t value)
	{
		___itemOnlyId_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52, ___num_1)); }
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
#endif // ITEMONLYINFO_T94A10684D520F734B66A1E6763F1AC6ED75CEB52_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7100 = { sizeof (itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7100[2] = 
{
	itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52::get_offset_of_itemOnlyId_0(),
	itemOnlyInfo_t94A10684D520F734B66A1E6763F1AC6ED75CEB52::get_offset_of_num_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7101 = { sizeof (itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7101[2] = 
{
	itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC::get_offset_of_itemModelId_0(),
	itemModelInfo_t92745229904AA7EBD44E5BEF3AB690965B8615EC::get_offset_of_num_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7102 = { sizeof (ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7102[5] = 
{
	0,
	ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D::get_offset_of_type_1(),
	ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D::get_offset_of_playerid_2(),
	ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D::get_offset_of_modelid_3(),
	ResNatureModelIdChange_t7177ABB5280F1A32D684D38BA2148E4CD506540D::get_offset_of_natureId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7103 = { sizeof (ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7103[3] = 
{
	0,
	ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A::get_offset_of_natureType_1(),
	ResPowerChange_t892A5D22CA2F20EE4E87465F586DFFD7B716352A::get_offset_of_fight_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7104 = { sizeof (ReqOpenMelting_t010654DEE8C69F1DF123A1EB5FAEBAFE3E20BE35), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7104[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7105 = { sizeof (Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7105[2] = 
{
	Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81::get_offset_of_itemId_0(),
	Material_tBC2A9B26B75F9F6701FA2338EC6EF1A40A573C81::get_offset_of_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7106 = { sizeof (ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7106[3] = 
{
	0,
	ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA::get_offset_of_curCount_1(),
	ResOpenMeltingRes_t706431BBACEC9AC3559DA117293A352B933C61EA::get_offset_of_material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7107 = { sizeof (ReqResetMaterial_t458D6A14ABF3833C3D4957BAFA882B09B282D2FC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7107[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7108 = { sizeof (ResResetMaterialRes_t3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7108[2] = 
{
	0,
	ResResetMaterialRes_t3BE991BC5184D3C59EF61F82B9C0ABF2BCE53E6F::get_offset_of_material_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7109 = { sizeof (ResUpdateCount_t8EC087181A6ACD2D8E427DE91D66A8E92ED2F659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7109[2] = 
{
	0,
	ResUpdateCount_t8EC087181A6ACD2D8E427DE91D66A8E92ED2F659::get_offset_of_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7110 = { sizeof (ReqMelting_tF193D6E2B723D4208F51A217A29700B8D6D24DB7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7110[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7111 = { sizeof (ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7111[3] = 
{
	0,
	ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76::get_offset_of_itemId_1(),
	ResSendMaterialRes_t9FCBDD034CBB8286BB782C09F3E4920A0006AC76::get_offset_of_count_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7112 = { sizeof (MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7112[10] = 
{
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_roleId_0(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_name_1(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_level_2(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_vip_3(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_career_4(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_declarationId_5(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_guildId_6(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_friend_7(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_head_8(),
	MarryDeclaration_tDB6AF80FCF8F33D0ED25E111BB06077FBE588E54::get_offset_of_online_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7113 = { sizeof (MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7113[4] = 
{
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0::get_offset_of_id_0(),
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0::get_offset_of_name_1(),
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0::get_offset_of_career_2(),
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0::get_offset_of_head_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7114 = { sizeof (MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7114[2] = 
{
	MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139::get_offset_of_remainTimes_0(),
	MarryClone_t4C5B3ACB35F5A59B9CA794C037D9A9B9340BE139::get_offset_of_remainBuy_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7115 = { sizeof (MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7115[4] = 
{
	MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45::get_offset_of_role_0(),
	MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45::get_offset_of_reward_1(),
	MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45::get_offset_of_onceReward_2(),
	MarryBox_tD80C4B5E4E2745CBD2019833344A4D7824409C45::get_offset_of_remainTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7116 = { sizeof (MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7116[6] = 
{
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_id_0(),
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_name_1(),
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_level_2(),
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_exp_3(),
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_isActive_4(),
	MarryChild_t435216DCAFB1E70BC8BC44E26C975F48397F44A0::get_offset_of_battle_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7117 = { sizeof (WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7117[9] = 
{
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_timeStart_0(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_marrayName_1(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_beMarrayName_2(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_marrayCareer_3(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_beMarrayCareer_4(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_marryId_5(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_bemMarryId_6(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_marryHead_7(),
	WeddingData_t9A7BBA2FEB0A09727EFC5F0CD8411AC35A607A4E::get_offset_of_beMarryHead_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7118 = { sizeof (WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7118[2] = 
{
	WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12::get_offset_of_roleId_0(),
	WeddingMember_t6F1F8871C73B14438BA90E348D15B802821C3D12::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7119 = { sizeof (ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7119[5] = 
{
	0,
	ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7::get_offset_of_type_1(),
	ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7::get_offset_of_beMarrayId_2(),
	ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7::get_offset_of_isNotice_3(),
	ReqGetMarried_tC380BDC05D50A732B7C1F1CEF07C9B7BB8AE41A7::get_offset_of_notice_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7120 = { sizeof (ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7120[3] = 
{
	0,
	ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A::get_offset_of_isAgree_1(),
	ReqDealMarryPropose_t91B3B1FC9E77463D735BB6FCE2FE077615EFFB9A::get_offset_of_marrayId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7121 = { sizeof (ReqSelectWedding_tEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7121[2] = 
{
	0,
	ReqSelectWedding_tEAE1B70BF82369AAA7C8930B6AFE3F506C8D6B9F::get_offset_of_timeStart_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7122 = { sizeof (ReqMarryData_t66DC4F3BA036326DD3CF1422389A5F7D13DB75C9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7122[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7123 = { sizeof (ReqDivorce_t8884BDCEF3FEFC8CB262007782B588288DC7F00E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7123[2] = 
{
	0,
	ReqDivorce_t8884BDCEF3FEFC8CB262007782B588288DC7F00E::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7124 = { sizeof (ReqAffirmDivorce_t3BCC46A6EB4CA9E0E93F6220AB882077800451AB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7124[2] = 
{
	0,
	ReqAffirmDivorce_t3BCC46A6EB4CA9E0E93F6220AB882077800451AB::get_offset_of_opt_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7125 = { sizeof (ReqDemandInvit_t14EC98240A8BDC03D12856FBB666452ABC9C9365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7125[2] = 
{
	0,
	ReqDemandInvit_t14EC98240A8BDC03D12856FBB666452ABC9C9365::get_offset_of_timeStart_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7126 = { sizeof (ReqInvit_t716097819C512E82A975AB13C926E251F305915D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7126[3] = 
{
	0,
	ReqInvit_t716097819C512E82A975AB13C926E251F305915D::get_offset_of_roleId_1(),
	ReqInvit_t716097819C512E82A975AB13C926E251F305915D::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7127 = { sizeof (ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7127[3] = 
{
	0,
	ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121::get_offset_of_roleId_1(),
	ReqAgreeInvit_tE011F23312BE3136EA61908B6463136EB961F121::get_offset_of_isAgree_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7128 = { sizeof (ReqPurInvitNum_tCD268D0F0450310DF869A01B05213D46C1B1B7E7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7128[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7129 = { sizeof (ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7129[5] = 
{
	0,
	ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991::get_offset_of_name_1(),
	ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991::get_offset_of_career_2(),
	ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991::get_offset_of_type_3(),
	ResMarryPropose_tE5E87343D8FAAC2DF0C7F88719C94B58FE5FE991::get_offset_of_marrayId_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7130 = { sizeof (ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7130[5] = 
{
	0,
	ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C::get_offset_of_marrayName_1(),
	ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C::get_offset_of_marraycareer_2(),
	ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C::get_offset_of_bemarrayName_3(),
	ResDealMarryPropose_t9B8E9B8356AD4BF76B783C8E7EF3A004DD2E3B1C::get_offset_of_bemarraycareer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7131 = { sizeof (ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7131[3] = 
{
	0,
	ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E::get_offset_of_res_1(),
	ResSelectWedding_t8292D8FF30BEF6BDA8C4BF836DB6750D9CF12E3E::get_offset_of_weddingId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7132 = { sizeof (ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7132[3] = 
{
	0,
	ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849::get_offset_of_weddingDataList_1(),
	ResMarryOnline_tAC2844A93C654E99E9C7DC483B9F106270765849::get_offset_of_weddingMembersList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7133 = { sizeof (ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7133[13] = 
{
	0,
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_tList_1(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_name_2(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_career_3(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_playerId_4(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_facade_5(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_marryDay_6(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_intimacy_7(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_weddingNum_8(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_stateLv_9(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_divorceId_10(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_weddingMembersList_11(),
	ResMarryData_t6F02663F3252D4F8AE448E2F08F79E8B697F091F::get_offset_of_purNum_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7134 = { sizeof (ResUpdateWedding_t9085378BDA89AC163E4E4747803E5637980F8758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7134[2] = 
{
	0,
	ResUpdateWedding_t9085378BDA89AC163E4E4747803E5637980F8758::get_offset_of_weddingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7135 = { sizeof (ResDivorce_tAD90DF5030A05DAE1E5F7194AC59DF1A48184567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7135[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7136 = { sizeof (ResDivorceID_t2AACCDA35F43D60ED34634FB8C376F687C012159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7136[2] = 
{
	0,
	ResDivorceID_t2AACCDA35F43D60ED34634FB8C376F687C012159::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7137 = { sizeof (ResDeleteDemandInvit_tC3E66B65FB34D6D1B3CDB091FC84521B70999E44), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7137[2] = 
{
	0,
	ResDeleteDemandInvit_tC3E66B65FB34D6D1B3CDB091FC84521B70999E44::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7138 = { sizeof (ResUpdateInvit_tA40C43A027EC480015235CA3BF4B2C1D1B34BB57), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7138[2] = 
{
	0,
	ResUpdateInvit_tA40C43A027EC480015235CA3BF4B2C1D1B34BB57::get_offset_of_memberList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7139 = { sizeof (ResDemandInvit_t0184636B0A78BA8B6AC0C522AD071029C68C2272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7139[2] = 
{
	0,
	ResDemandInvit_t0184636B0A78BA8B6AC0C522AD071029C68C2272::get_offset_of_res_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7140 = { sizeof (ResUpdateDemandInvit_tAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7140[2] = 
{
	0,
	ResUpdateDemandInvit_tAD9E3426A2A5E5B6CD886A8F66D1E7304ECB0BF5::get_offset_of_member_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7141 = { sizeof (ResPurInvitNum_tDC76CC557CD014C7FBFD6E85757E53F12F4B936C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7141[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7142 = { sizeof (ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7142[3] = 
{
	0,
	ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7::get_offset_of_id_1(),
	ReqMarryCopyBuy_t142B04EF9A52911301E538322644EFA33321BEF7::get_offset_of_num_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7143 = { sizeof (ReqMarryUseItem_tAD89BA4DA41664FD208C612FD372DC9244C4F646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7143[2] = 
{
	0,
	ReqMarryUseItem_tAD89BA4DA41664FD208C612FD372DC9244C4F646::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7144 = { sizeof (ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7144[3] = 
{
	0,
	ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51::get_offset_of_index_1(),
	ReqMarrySendItem_t0E47782437CD366D19C65010C5C10D93E6730E51::get_offset_of_roleId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7145 = { sizeof (ReqMarrySendBulletScreen_t8183091DEECB3A4E62C7D8DCEBA55E3E85E53572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7145[2] = 
{
	0,
	ReqMarrySendBulletScreen_t8183091DEECB3A4E62C7D8DCEBA55E3E85E53572::get_offset_of_context_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7146 = { sizeof (ResMarryCopyPlayViedo_tAC10B97BA704D7FF13CAEEF509634F5CC628DB62), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7146[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7147 = { sizeof (ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7147[12] = 
{
	0,
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_remianTime_1(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleId1_2(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleCareer1_3(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleName1_4(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleId2_5(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleCareer2_6(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_roleName2_7(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_marryCopyHotIsBuy1_8(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_marryCopyHotIsBuy2_9(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_isSign_10(),
	ResMarryCopyEnter_tA59C9EAFF37F76ABA6451F3AB2334AF83499B5B7::get_offset_of_signCount_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7148 = { sizeof (ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7148[6] = 
{
	0,
	ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666::get_offset_of_stage_1(),
	ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666::get_offset_of_eatCount_2(),
	ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666::get_offset_of_exp_3(),
	ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666::get_offset_of_gatherCount_4(),
	ResMarryCopyInfo_t03EB7930443CD76CDB53D3229D7B6A2CCB17F666::get_offset_of_hot_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7149 = { sizeof (ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7149[5] = 
{
	0,
	ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD::get_offset_of_roleId_1(),
	ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD::get_offset_of_roleCareer_2(),
	ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD::get_offset_of_roleName_3(),
	ResMarrySendBulletScreen_t78A10D9A8954AF10150290C051CBC2C968E49FCD::get_offset_of_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7150 = { sizeof (ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7150[4] = 
{
	0,
	ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD::get_offset_of_roleId_1(),
	ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD::get_offset_of_roleName_2(),
	ResMarryUseItemBroadcast_tD62CC5FF3884B849C977D4CCC1FED319BF0905BD::get_offset_of_itemID_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7151 = { sizeof (ReqMarryBlessList_tC3BBF428960A5BD5078C9A679FE734258DC06C0C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7151[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7152 = { sizeof (BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7152[4] = 
{
	BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0::get_offset_of_sendName_0(),
	BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0::get_offset_of_receiveName_1(),
	BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0::get_offset_of_itemID_2(),
	BlessData_t6EF80E81F685866D6EEDD2DE197A91C57C64A3A0::get_offset_of_num_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7153 = { sizeof (ResMarryBlessList_t2A11E967DBA39AA96E37F0B27717151115ED4F20), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7153[2] = 
{
	0,
	ResMarryBlessList_t2A11E967DBA39AA96E37F0B27717151115ED4F20::get_offset_of_blessDataList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7154 = { sizeof (ReqRewardTitle_t2CB573B19F8AA45217E8F3F955BD2CA32BA656D1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7154[2] = 
{
	0,
	ReqRewardTitle_t2CB573B19F8AA45217E8F3F955BD2CA32BA656D1::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7155 = { sizeof (ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7155[3] = 
{
	0,
	ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45::get_offset_of_oneKey_1(),
	ReqUpgradeMarryLock_tC24BC231315A90C1BA285D5548B44AB5F3F3DD45::get_offset_of_itemId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7156 = { sizeof (ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7156[3] = 
{
	0,
	ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8::get_offset_of_level_1(),
	ResUpgradeMarryLockInfo_t04F5BF6DCA155E0AC1F629CFE513A515D14CD9F8::get_offset_of_exp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7157 = { sizeof (ReqBuyMarryBox_tB83CAD0450864501833785A23B5CE87C2111C85E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7157[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7158 = { sizeof (ResMarryBox_t82C6DE795550E2C0E422C7A2C1E66BD07DE203D3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7158[2] = 
{
	0,
	ResMarryBox_t82C6DE795550E2C0E422C7A2C1E66BD07DE203D3::get_offset_of_box_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7159 = { sizeof (ReqCallBuyMarryBox_tA72CB5DCF0D0557BDBBAAF1F19A9C9B8380CBF40), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7159[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7160 = { sizeof (ResCallBuyMarryBox_tFD5D9700708C55FFD20C5A7D383378469471D0FB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7160[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7161 = { sizeof (ReqMarryBoxReward_tED76CE79C94F21195BD03349BBE0C4363C11EE4F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7161[2] = 
{
	0,
	ReqMarryBoxReward_tED76CE79C94F21195BD03349BBE0C4363C11EE4F::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7162 = { sizeof (ReqRefuseBuyMarryBox_t5DFD71BFA45A42A4E3C2027569861BE986524443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7162[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7163 = { sizeof (ReqOpenMarryChild_tF9A272E9D1C1E647BEBB5B2288FF99433B8CB785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7163[2] = 
{
	0,
	ReqOpenMarryChild_tF9A272E9D1C1E647BEBB5B2288FF99433B8CB785::get_offset_of_childId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7164 = { sizeof (ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7164[4] = 
{
	0,
	ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46::get_offset_of_childId_1(),
	ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46::get_offset_of_itemId_2(),
	ReqUpgradeMarryChild_t7C418E741BBA613A58AF1B8B8FB8D6BF362F4E46::get_offset_of_oneKey_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7165 = { sizeof (ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7165[3] = 
{
	0,
	ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B::get_offset_of_childId_1(),
	ReqMarryChildChangeName_t7A04C9828EBC6FFECDD76F57E889B29FFADE342B::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7166 = { sizeof (ResMarryChildInfo_tF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7166[2] = 
{
	0,
	ResMarryChildInfo_tF376DD228DE3153DF75ABDB65A7F4B5C3A8CE105::get_offset_of_childs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7167 = { sizeof (ReqCallMarryCloneBuy_tBCEDB3AEDF0CE2D21DEFC5BF82F0FE438F18FC34), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7167[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7168 = { sizeof (ReqMarryCloneBuy_tEFC9F4D3E36E5355577A9CFB2B2017470EEAE5EB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7168[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7169 = { sizeof (ReqRefuseMarryCloneBuy_t213119071B630141F6AFB98B759F5EE3B4461944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7169[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7170 = { sizeof (ReqSelectMarryCloneImg_tDA0973C44BAFDFA468D0BF119A73E800D31C8D1F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7170[2] = 
{
	0,
	ReqSelectMarryCloneImg_tDA0973C44BAFDFA468D0BF119A73E800D31C8D1F::get_offset_of_imgId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7171 = { sizeof (ResCallMarryCloneBuy_tA86DFF9053329680141979058431D3BE44175DDD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7171[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7172 = { sizeof (ResMarryClone_tCBDD302BA96FDB02E8C25597A97722F82926D785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7172[2] = 
{
	0,
	ResMarryClone_tCBDD302BA96FDB02E8C25597A97722F82926D785::get_offset_of_clone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7173 = { sizeof (ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7173[7] = 
{
	0,
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_bossId_1(),
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_bossDie_2(),
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_bossMax_3(),
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_monsterDie_4(),
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_monsterMax_5(),
	ResMarryCloneInfo_t36DB9C40ADF3CE0D8D219EC14409AA03311C5CCF::get_offset_of_remainTime_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7174 = { sizeof (ResMarryCloneSucInfo_tC22101390144C37DB0E14F6CF23FC0AE08D630D2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7174[2] = 
{
	0,
	ResMarryCloneSucInfo_tC22101390144C37DB0E14F6CF23FC0AE08D630D2::get_offset_of_imgList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7175 = { sizeof (ResMarryCloneFailInfo_t7128132B82501E90D8DB399C3BCD5D2355015958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7175[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7176 = { sizeof (ReqMarryWallReward_tA41051DD7802F02FDED839C0E708B111924DCAF0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7176[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7177 = { sizeof (ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7177[3] = 
{
	0,
	ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E::get_offset_of_haveReward_1(),
	ResMarryWallRewardInfo_tA026D04F51BFA744B239092EC8A883FEAA11D82E::get_offset_of_cd_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7178 = { sizeof (ReqPushMarryDeclaration_tEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7178[2] = 
{
	0,
	ReqPushMarryDeclaration_tEAA1C8A1B8E267A7B79CC9A5F72E4240428AB651::get_offset_of_declarationId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7179 = { sizeof (ReqMarryWallDeclaration_t19A080412661D8AF2E054F9F7C816FD2CCCE3EF4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7179[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7180 = { sizeof (ResMarryWallInfo_t39DAF812F47B4C4473C97D868A0A9470EA1FACD6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7180[2] = 
{
	0,
	ResMarryWallInfo_t39DAF812F47B4C4473C97D868A0A9470EA1FACD6::get_offset_of_declarations_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7181 = { sizeof (ReqMarryAddFriend_t01DA4FF1E8761C6F1C983F7D845E3D4F39793627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7181[2] = 
{
	0,
	ReqMarryAddFriend_t01DA4FF1E8761C6F1C983F7D845E3D4F39793627::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7182 = { sizeof (ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7182[3] = 
{
	0,
	ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45::get_offset_of_roleId_1(),
	ReqMarryAddFriendOpt_tF07AA2954DE969FAF084ACC107FD08C1FBC2AD45::get_offset_of_opt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7183 = { sizeof (ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7183[3] = 
{
	0,
	ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422::get_offset_of_roleId_1(),
	ResMarryAddFriendNotify_t1BE0C563AB84C746AECDD80A4344146853F20422::get_offset_of_roleName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7184 = { sizeof (ResWeddingStart_t2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7184[2] = 
{
	0,
	ResWeddingStart_t2EAF93FFD1748E31749158DFBB85ED1C2EFBE1BE::get_offset_of_copyMapId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7185 = { sizeof (ResMarryCopyBossState_t5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7185[2] = 
{
	0,
	ResMarryCopyBossState_t5DB7E7AC1F0A27A124F70F02C3404D74C3D1CB29::get_offset_of_bossIsDie_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7186 = { sizeof (ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7186[3] = 
{
	0,
	ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77::get_offset_of_childId_1(),
	ReqChildCall_t3DC137579F2837AF7E5434EF4729B765B889DC77::get_offset_of_opt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7187 = { sizeof (ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7187[3] = 
{
	0,
	ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724::get_offset_of_taskId_1(),
	ResMarryTask_tB07078EAF01920D364F056A45B55212E53263724::get_offset_of_overId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7188 = { sizeof (ReqMarryTask_tD79893F972EF6409D2D4817F53DC4B30A2FF11EF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7188[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7189 = { sizeof (ReqMarryTaskReward_tB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7189[2] = 
{
	0,
	ReqMarryTaskReward_tB9641EFBDEA7B0570E7E4ADFCE7E34322FEC9E98::get_offset_of_taskId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7190 = { sizeof (ReqMarryActivityShopBuy_tF57C3981BA864692545B12D7BC260FC3853B142D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7190[2] = 
{
	0,
	ReqMarryActivityShopBuy_tF57C3981BA864692545B12D7BC260FC3853B142D::get_offset_of_shopId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7191 = { sizeof (MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7191[2] = 
{
	MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98::get_offset_of_shopId_0(),
	MarryActivityShopInfo_t55765DF7639C0B77424FB55B12015C983B3AAF98::get_offset_of_buyCount_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7192 = { sizeof (ResMarryActivityShopBuy_t9908E4F61F8D8BF568275A96042A0D6FE1E0FC58), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7192[2] = 
{
	0,
	ResMarryActivityShopBuy_t9908E4F61F8D8BF568275A96042A0D6FE1E0FC58::get_offset_of_shopInfoList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7193 = { sizeof (ReqMarryActivityIntimacy_t13542076B0A8EB2148EE2450229DC399C291D417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7193[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7194 = { sizeof (ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7194[4] = 
{
	0,
	ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834::get_offset_of_rank_1(),
	ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834::get_offset_of_intimacy_2(),
	ResMarryActivityIntimacy_t908EE4E59E4917896523263E56F9A78FE8832834::get_offset_of_rankRewardEd_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7195 = { sizeof (ReqMarryActivityIntimacyReward_tA4165ABCED6502244ABCE7874D1FB3C4B1F8843F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7195[2] = 
{
	0,
	ReqMarryActivityIntimacyReward_tA4165ABCED6502244ABCE7874D1FB3C4B1F8843F::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7196 = { sizeof (MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7196[3] = 
{
	MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A::get_offset_of_taskID_0(),
	MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A::get_offset_of_progress_1(),
	MarryActivityTaskData_t9837BAD0257AD36D218D0BE7DC65166C4571498A::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7197 = { sizeof (ResRefreshMarryActivityTask_t3E6580DB58AE33E5B0B598B5930C93B24423A877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7197[2] = 
{
	0,
	ResRefreshMarryActivityTask_t3E6580DB58AE33E5B0B598B5930C93B24423A877::get_offset_of_taskData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7198 = { sizeof (ReqGetMarryActivityTaskReward_tC4B16479F6F4FEB7D687F182C6D99FA8AB56B278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7198[2] = 
{
	0,
	ReqGetMarryActivityTaskReward_tC4B16479F6F4FEB7D687F182C6D99FA8AB56B278::get_offset_of_taskID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7199 = { sizeof (ReqMarryCopyBuyHot_t275F05C50747772D672F176CD6326EB57459B683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7199[1] = 
{
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
