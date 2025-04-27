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
// MSG_Pet.PetInfo
struct PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D;
// MSG_Player.FateStar
struct FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E;
// MSG_Player.GlobalPlayerWorldInfo
struct GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690;
// MSG_backpack.ItemInfo
struct ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C;
// System.Collections.Generic.List`1<MSG_Pet.PetAssistantCellInfo>
struct List_1_tBC8357541EBD7F9B79CC17438D6E134F65489C8C;
// System.Collections.Generic.List`1<MSG_Player.Attribute>
struct List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298;
// System.Collections.Generic.List`1<MSG_Player.Gift>
struct List_1_t9176C6924E0BD9CEF2F4E8E014F05CD717965380;
// System.Collections.Generic.List`1<MSG_Player.GiftLog>
struct List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB;
// System.Collections.Generic.List`1<MSG_Question.Anwserresult>
struct List_1_tFB5E0F46361DD062B5880AE0479B6683ABF331A1;
// System.Collections.Generic.List`1<MSG_Question.KV>
struct List_1_tBBE42E9AD45C0D4633F3F3797B65776C231485F9;
// System.Collections.Generic.List`1<MSG_backpack.ItemInfo>
struct List_1_tE33393B445B8280160D222A3232DF1C02536A76C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
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
#ifndef PETASSISTANTCELLINFO_TC60BF683E112F3AE00B2D3CAADE26289977AC7AB_H
#define PETASSISTANTCELLINFO_TC60BF683E112F3AE00B2D3CAADE26289977AC7AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.PetAssistantCellInfo
struct  PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pet.PetAssistantCellInfo::cellId
	int32_t ___cellId_0;
	// MSG_backpack.ItemInfo MSG_Pet.PetAssistantCellInfo::equip
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___equip_1;
	// System.Int32 MSG_Pet.PetAssistantCellInfo::strengthLv
	int32_t ___strengthLv_2;
	// System.Int32 MSG_Pet.PetAssistantCellInfo::soulLv
	int32_t ___soulLv_3;
	// System.Boolean MSG_Pet.PetAssistantCellInfo::open
	bool ___open_4;

public:
	inline static int32_t get_offset_of_cellId_0() { return static_cast<int32_t>(offsetof(PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB, ___cellId_0)); }
	inline int32_t get_cellId_0() const { return ___cellId_0; }
	inline int32_t* get_address_of_cellId_0() { return &___cellId_0; }
	inline void set_cellId_0(int32_t value)
	{
		___cellId_0 = value;
	}

	inline static int32_t get_offset_of_equip_1() { return static_cast<int32_t>(offsetof(PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB, ___equip_1)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_equip_1() const { return ___equip_1; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_equip_1() { return &___equip_1; }
	inline void set_equip_1(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___equip_1 = value;
		Il2CppCodeGenWriteBarrier((&___equip_1), value);
	}

	inline static int32_t get_offset_of_strengthLv_2() { return static_cast<int32_t>(offsetof(PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB, ___strengthLv_2)); }
	inline int32_t get_strengthLv_2() const { return ___strengthLv_2; }
	inline int32_t* get_address_of_strengthLv_2() { return &___strengthLv_2; }
	inline void set_strengthLv_2(int32_t value)
	{
		___strengthLv_2 = value;
	}

	inline static int32_t get_offset_of_soulLv_3() { return static_cast<int32_t>(offsetof(PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB, ___soulLv_3)); }
	inline int32_t get_soulLv_3() const { return ___soulLv_3; }
	inline int32_t* get_address_of_soulLv_3() { return &___soulLv_3; }
	inline void set_soulLv_3(int32_t value)
	{
		___soulLv_3 = value;
	}

	inline static int32_t get_offset_of_open_4() { return static_cast<int32_t>(offsetof(PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB, ___open_4)); }
	inline bool get_open_4() const { return ___open_4; }
	inline bool* get_address_of_open_4() { return &___open_4; }
	inline void set_open_4(bool value)
	{
		___open_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PETASSISTANTCELLINFO_TC60BF683E112F3AE00B2D3CAADE26289977AC7AB_H
#ifndef PETASSISTANTINFO_TF165BB9AE4F27DCC335CC3BD4787196C01D150EF_H
#define PETASSISTANTINFO_TF165BB9AE4F27DCC335CC3BD4787196C01D150EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.PetAssistantInfo
struct  PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pet.PetAssistantInfo::assistantId
	int32_t ___assistantId_0;
	// System.Int32 MSG_Pet.PetAssistantInfo::petId
	int32_t ___petId_1;
	// System.Collections.Generic.List`1<MSG_Pet.PetAssistantCellInfo> MSG_Pet.PetAssistantInfo::cellList
	List_1_tBC8357541EBD7F9B79CC17438D6E134F65489C8C * ___cellList_2;
	// System.Int32 MSG_Pet.PetAssistantInfo::strengthActiveId
	int32_t ___strengthActiveId_3;
	// System.Int32 MSG_Pet.PetAssistantInfo::soulActiveId
	int32_t ___soulActiveId_4;
	// System.Boolean MSG_Pet.PetAssistantInfo::open
	bool ___open_5;
	// System.Int32 MSG_Pet.PetAssistantInfo::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_assistantId_0() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___assistantId_0)); }
	inline int32_t get_assistantId_0() const { return ___assistantId_0; }
	inline int32_t* get_address_of_assistantId_0() { return &___assistantId_0; }
	inline void set_assistantId_0(int32_t value)
	{
		___assistantId_0 = value;
	}

	inline static int32_t get_offset_of_petId_1() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___petId_1)); }
	inline int32_t get_petId_1() const { return ___petId_1; }
	inline int32_t* get_address_of_petId_1() { return &___petId_1; }
	inline void set_petId_1(int32_t value)
	{
		___petId_1 = value;
	}

	inline static int32_t get_offset_of_cellList_2() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___cellList_2)); }
	inline List_1_tBC8357541EBD7F9B79CC17438D6E134F65489C8C * get_cellList_2() const { return ___cellList_2; }
	inline List_1_tBC8357541EBD7F9B79CC17438D6E134F65489C8C ** get_address_of_cellList_2() { return &___cellList_2; }
	inline void set_cellList_2(List_1_tBC8357541EBD7F9B79CC17438D6E134F65489C8C * value)
	{
		___cellList_2 = value;
		Il2CppCodeGenWriteBarrier((&___cellList_2), value);
	}

	inline static int32_t get_offset_of_strengthActiveId_3() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___strengthActiveId_3)); }
	inline int32_t get_strengthActiveId_3() const { return ___strengthActiveId_3; }
	inline int32_t* get_address_of_strengthActiveId_3() { return &___strengthActiveId_3; }
	inline void set_strengthActiveId_3(int32_t value)
	{
		___strengthActiveId_3 = value;
	}

	inline static int32_t get_offset_of_soulActiveId_4() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___soulActiveId_4)); }
	inline int32_t get_soulActiveId_4() const { return ___soulActiveId_4; }
	inline int32_t* get_address_of_soulActiveId_4() { return &___soulActiveId_4; }
	inline void set_soulActiveId_4(int32_t value)
	{
		___soulActiveId_4 = value;
	}

	inline static int32_t get_offset_of_open_5() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___open_5)); }
	inline bool get_open_5() const { return ___open_5; }
	inline bool* get_address_of_open_5() { return &___open_5; }
	inline void set_open_5(bool value)
	{
		___open_5 = value;
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PETASSISTANTINFO_TF165BB9AE4F27DCC335CC3BD4787196C01D150EF_H
#ifndef PETINFO_TCD674B41124D5CBDE77E68D41C3634DED345AE7D_H
#define PETINFO_TCD674B41124D5CBDE77E68D41C3634DED345AE7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.PetInfo
struct  PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pet.PetInfo::modelId
	int32_t ___modelId_0;
	// System.Int32 MSG_Pet.PetInfo::curStage
	int32_t ___curStage_1;

public:
	inline static int32_t get_offset_of_modelId_0() { return static_cast<int32_t>(offsetof(PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D, ___modelId_0)); }
	inline int32_t get_modelId_0() const { return ___modelId_0; }
	inline int32_t* get_address_of_modelId_0() { return &___modelId_0; }
	inline void set_modelId_0(int32_t value)
	{
		___modelId_0 = value;
	}

	inline static int32_t get_offset_of_curStage_1() { return static_cast<int32_t>(offsetof(PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D, ___curStage_1)); }
	inline int32_t get_curStage_1() const { return ___curStage_1; }
	inline int32_t* get_address_of_curStage_1() { return &___curStage_1; }
	inline void set_curStage_1(int32_t value)
	{
		___curStage_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PETINFO_TCD674B41124D5CBDE77E68D41C3634DED345AE7D_H
#ifndef PETSOULINFO_TA573001DA42C0111A24B5CF668A900DFE7840A88_H
#define PETSOULINFO_TA573001DA42C0111A24B5CF668A900DFE7840A88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.PetSoulInfo
struct  PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pet.PetSoulInfo::soulId
	int32_t ___soulId_0;
	// System.Int32 MSG_Pet.PetSoulInfo::soulLevel
	int32_t ___soulLevel_1;

public:
	inline static int32_t get_offset_of_soulId_0() { return static_cast<int32_t>(offsetof(PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88, ___soulId_0)); }
	inline int32_t get_soulId_0() const { return ___soulId_0; }
	inline int32_t* get_address_of_soulId_0() { return &___soulId_0; }
	inline void set_soulId_0(int32_t value)
	{
		___soulId_0 = value;
	}

	inline static int32_t get_offset_of_soulLevel_1() { return static_cast<int32_t>(offsetof(PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88, ___soulLevel_1)); }
	inline int32_t get_soulLevel_1() const { return ___soulLevel_1; }
	inline int32_t* get_address_of_soulLevel_1() { return &___soulLevel_1; }
	inline void set_soulLevel_1(int32_t value)
	{
		___soulLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PETSOULINFO_TA573001DA42C0111A24B5CF668A900DFE7840A88_H
#ifndef RESBATTLEPET_TA170400FCEAB900CECFE4210A3E12509CF1F0399_H
#define RESBATTLEPET_TA170400FCEAB900CECFE4210A3E12509CF1F0399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.ResBattlePet
struct  ResBattlePet_tA170400FCEAB900CECFE4210A3E12509CF1F0399  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pet.ResBattlePet::battlePetId
	int32_t ___battlePetId_1;

public:
	inline static int32_t get_offset_of_battlePetId_1() { return static_cast<int32_t>(offsetof(ResBattlePet_tA170400FCEAB900CECFE4210A3E12509CF1F0399, ___battlePetId_1)); }
	inline int32_t get_battlePetId_1() const { return ___battlePetId_1; }
	inline int32_t* get_address_of_battlePetId_1() { return &___battlePetId_1; }
	inline void set_battlePetId_1(int32_t value)
	{
		___battlePetId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBATTLEPET_TA170400FCEAB900CECFE4210A3E12509CF1F0399_H
#ifndef RESSYNCPET_TD779D88D207A80CE8ED2BBE7FFB07005216F15F7_H
#define RESSYNCPET_TD779D88D207A80CE8ED2BBE7FFB07005216F15F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pet.ResSyncPet
struct  ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7  : public RuntimeObject
{
public:
	// MSG_Pet.PetInfo MSG_Pet.ResSyncPet::pet
	PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D * ___pet_1;
	// System.Int32 MSG_Pet.ResSyncPet::fight
	int32_t ___fight_2;

public:
	inline static int32_t get_offset_of_pet_1() { return static_cast<int32_t>(offsetof(ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7, ___pet_1)); }
	inline PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D * get_pet_1() const { return ___pet_1; }
	inline PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D ** get_address_of_pet_1() { return &___pet_1; }
	inline void set_pet_1(PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D * value)
	{
		___pet_1 = value;
		Il2CppCodeGenWriteBarrier((&___pet_1), value);
	}

	inline static int32_t get_offset_of_fight_2() { return static_cast<int32_t>(offsetof(ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7, ___fight_2)); }
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
#endif // RESSYNCPET_TD779D88D207A80CE8ED2BBE7FFB07005216F15F7_H
#ifndef REQEVALUATE_TBF31BDB52E403F02DF8BC803F78739210E4BEBAB_H
#define REQEVALUATE_TBF31BDB52E403F02DF8BC803F78739210E4BEBAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_PlatformEvaluate.ReqEvaluate
struct  ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB  : public RuntimeObject
{
public:
	// System.Int32 MSG_PlatformEvaluate.ReqEvaluate::type
	int32_t ___type_1;
	// System.Int32 MSG_PlatformEvaluate.ReqEvaluate::actType
	int32_t ___actType_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_actType_2() { return static_cast<int32_t>(offsetof(ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB, ___actType_2)); }
	inline int32_t get_actType_2() const { return ___actType_2; }
	inline int32_t* get_address_of_actType_2() { return &___actType_2; }
	inline void set_actType_2(int32_t value)
	{
		___actType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQEVALUATE_TBF31BDB52E403F02DF8BC803F78739210E4BEBAB_H
#ifndef RESEVALUATEINFO_T13E2BD676835060F6CCE195E64B429141C513BA4_H
#define RESEVALUATEINFO_T13E2BD676835060F6CCE195E64B429141C513BA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_PlatformEvaluate.ResEvaluateInfo
struct  ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4  : public RuntimeObject
{
public:
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateInfo::like
	int32_t ___like_1;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateInfo::share
	int32_t ___share_2;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateInfo::evaluate
	int32_t ___evaluate_3;
	// System.Boolean MSG_PlatformEvaluate.ResEvaluateInfo::openLike
	bool ___openLike_4;
	// System.Boolean MSG_PlatformEvaluate.ResEvaluateInfo::openShare
	bool ___openShare_5;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateInfo::everyDayShare
	int32_t ___everyDayShare_6;
	// System.Boolean MSG_PlatformEvaluate.ResEvaluateInfo::openEveryDayShare
	bool ___openEveryDayShare_7;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateInfo::shopEvaluate
	int32_t ___shopEvaluate_8;
	// System.Boolean MSG_PlatformEvaluate.ResEvaluateInfo::openShopEvaluate
	bool ___openShopEvaluate_9;

public:
	inline static int32_t get_offset_of_like_1() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___like_1)); }
	inline int32_t get_like_1() const { return ___like_1; }
	inline int32_t* get_address_of_like_1() { return &___like_1; }
	inline void set_like_1(int32_t value)
	{
		___like_1 = value;
	}

	inline static int32_t get_offset_of_share_2() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___share_2)); }
	inline int32_t get_share_2() const { return ___share_2; }
	inline int32_t* get_address_of_share_2() { return &___share_2; }
	inline void set_share_2(int32_t value)
	{
		___share_2 = value;
	}

	inline static int32_t get_offset_of_evaluate_3() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___evaluate_3)); }
	inline int32_t get_evaluate_3() const { return ___evaluate_3; }
	inline int32_t* get_address_of_evaluate_3() { return &___evaluate_3; }
	inline void set_evaluate_3(int32_t value)
	{
		___evaluate_3 = value;
	}

	inline static int32_t get_offset_of_openLike_4() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___openLike_4)); }
	inline bool get_openLike_4() const { return ___openLike_4; }
	inline bool* get_address_of_openLike_4() { return &___openLike_4; }
	inline void set_openLike_4(bool value)
	{
		___openLike_4 = value;
	}

	inline static int32_t get_offset_of_openShare_5() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___openShare_5)); }
	inline bool get_openShare_5() const { return ___openShare_5; }
	inline bool* get_address_of_openShare_5() { return &___openShare_5; }
	inline void set_openShare_5(bool value)
	{
		___openShare_5 = value;
	}

	inline static int32_t get_offset_of_everyDayShare_6() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___everyDayShare_6)); }
	inline int32_t get_everyDayShare_6() const { return ___everyDayShare_6; }
	inline int32_t* get_address_of_everyDayShare_6() { return &___everyDayShare_6; }
	inline void set_everyDayShare_6(int32_t value)
	{
		___everyDayShare_6 = value;
	}

	inline static int32_t get_offset_of_openEveryDayShare_7() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___openEveryDayShare_7)); }
	inline bool get_openEveryDayShare_7() const { return ___openEveryDayShare_7; }
	inline bool* get_address_of_openEveryDayShare_7() { return &___openEveryDayShare_7; }
	inline void set_openEveryDayShare_7(bool value)
	{
		___openEveryDayShare_7 = value;
	}

	inline static int32_t get_offset_of_shopEvaluate_8() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___shopEvaluate_8)); }
	inline int32_t get_shopEvaluate_8() const { return ___shopEvaluate_8; }
	inline int32_t* get_address_of_shopEvaluate_8() { return &___shopEvaluate_8; }
	inline void set_shopEvaluate_8(int32_t value)
	{
		___shopEvaluate_8 = value;
	}

	inline static int32_t get_offset_of_openShopEvaluate_9() { return static_cast<int32_t>(offsetof(ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4, ___openShopEvaluate_9)); }
	inline bool get_openShopEvaluate_9() const { return ___openShopEvaluate_9; }
	inline bool* get_address_of_openShopEvaluate_9() { return &___openShopEvaluate_9; }
	inline void set_openShopEvaluate_9(bool value)
	{
		___openShopEvaluate_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESEVALUATEINFO_T13E2BD676835060F6CCE195E64B429141C513BA4_H
#ifndef RESEVALUATERESULT_TF7F2912442FA12DBF347530083A7F1484D5DFAFD_H
#define RESEVALUATERESULT_TF7F2912442FA12DBF347530083A7F1484D5DFAFD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_PlatformEvaluate.ResEvaluateResult
struct  ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD  : public RuntimeObject
{
public:
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateResult::like
	int32_t ___like_1;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateResult::share
	int32_t ___share_2;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateResult::evaluate
	int32_t ___evaluate_3;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateResult::everyDayShare
	int32_t ___everyDayShare_4;
	// System.Int32 MSG_PlatformEvaluate.ResEvaluateResult::shopEvaluate
	int32_t ___shopEvaluate_5;

public:
	inline static int32_t get_offset_of_like_1() { return static_cast<int32_t>(offsetof(ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD, ___like_1)); }
	inline int32_t get_like_1() const { return ___like_1; }
	inline int32_t* get_address_of_like_1() { return &___like_1; }
	inline void set_like_1(int32_t value)
	{
		___like_1 = value;
	}

	inline static int32_t get_offset_of_share_2() { return static_cast<int32_t>(offsetof(ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD, ___share_2)); }
	inline int32_t get_share_2() const { return ___share_2; }
	inline int32_t* get_address_of_share_2() { return &___share_2; }
	inline void set_share_2(int32_t value)
	{
		___share_2 = value;
	}

	inline static int32_t get_offset_of_evaluate_3() { return static_cast<int32_t>(offsetof(ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD, ___evaluate_3)); }
	inline int32_t get_evaluate_3() const { return ___evaluate_3; }
	inline int32_t* get_address_of_evaluate_3() { return &___evaluate_3; }
	inline void set_evaluate_3(int32_t value)
	{
		___evaluate_3 = value;
	}

	inline static int32_t get_offset_of_everyDayShare_4() { return static_cast<int32_t>(offsetof(ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD, ___everyDayShare_4)); }
	inline int32_t get_everyDayShare_4() const { return ___everyDayShare_4; }
	inline int32_t* get_address_of_everyDayShare_4() { return &___everyDayShare_4; }
	inline void set_everyDayShare_4(int32_t value)
	{
		___everyDayShare_4 = value;
	}

	inline static int32_t get_offset_of_shopEvaluate_5() { return static_cast<int32_t>(offsetof(ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD, ___shopEvaluate_5)); }
	inline int32_t get_shopEvaluate_5() const { return ___shopEvaluate_5; }
	inline int32_t* get_address_of_shopEvaluate_5() { return &___shopEvaluate_5; }
	inline void set_shopEvaluate_5(int32_t value)
	{
		___shopEvaluate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESEVALUATERESULT_TF7F2912442FA12DBF347530083A7F1484D5DFAFD_H
#ifndef ATTRIBUTE_TB2AD65148D4CE258231EAAD7369A7F081A0AA45F_H
#define ATTRIBUTE_TB2AD65148D4CE258231EAAD7369A7F081A0AA45F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.Attribute
struct  Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.Attribute::type
	int32_t ___type_0;
	// System.Int64 MSG_Player.Attribute::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F, ___value_1)); }
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
#endif // ATTRIBUTE_TB2AD65148D4CE258231EAAD7369A7F081A0AA45F_H
#ifndef FATESTAR_T750B6D13B3CD304D4FBB8992B48C3BB86AED587E_H
#define FATESTAR_T750B6D13B3CD304D4FBB8992B48C3BB86AED587E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.FateStar
struct  FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.FateStar::id
	int32_t ___id_0;
	// System.Int32 MSG_Player.FateStar::gender
	int32_t ___gender_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_gender_1() { return static_cast<int32_t>(offsetof(FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E, ___gender_1)); }
	inline int32_t get_gender_1() const { return ___gender_1; }
	inline int32_t* get_address_of_gender_1() { return &___gender_1; }
	inline void set_gender_1(int32_t value)
	{
		___gender_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FATESTAR_T750B6D13B3CD304D4FBB8992B48C3BB86AED587E_H
#ifndef G2SREQPLAYERSUMMARYINFO_TA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05_H
#define G2SREQPLAYERSUMMARYINFO_TA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.G2SReqPlayerSummaryInfo
struct  G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.G2SReqPlayerSummaryInfo::roleId
	int64_t ___roleId_1;
	// System.Int64 MSG_Player.G2SReqPlayerSummaryInfo::targetRoleId
	int64_t ___targetRoleId_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_targetRoleId_2() { return static_cast<int32_t>(offsetof(G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05, ___targetRoleId_2)); }
	inline int64_t get_targetRoleId_2() const { return ___targetRoleId_2; }
	inline int64_t* get_address_of_targetRoleId_2() { return &___targetRoleId_2; }
	inline void set_targetRoleId_2(int64_t value)
	{
		___targetRoleId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // G2SREQPLAYERSUMMARYINFO_TA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05_H
#ifndef G2SSYNPLAYERSOCIALINFO_T2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1_H
#define G2SSYNPLAYERSOCIALINFO_T2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.G2SSynPlayerSocialInfo
struct  G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1  : public RuntimeObject
{
public:
	// MSG_Player.GlobalPlayerWorldInfo MSG_Player.G2SSynPlayerSocialInfo::globalPlayerWorldInfo
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690 * ___globalPlayerWorldInfo_1;
	// System.Int32 MSG_Player.G2SSynPlayerSocialInfo::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_globalPlayerWorldInfo_1() { return static_cast<int32_t>(offsetof(G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1, ___globalPlayerWorldInfo_1)); }
	inline GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690 * get_globalPlayerWorldInfo_1() const { return ___globalPlayerWorldInfo_1; }
	inline GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690 ** get_address_of_globalPlayerWorldInfo_1() { return &___globalPlayerWorldInfo_1; }
	inline void set_globalPlayerWorldInfo_1(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690 * value)
	{
		___globalPlayerWorldInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___globalPlayerWorldInfo_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1, ___type_2)); }
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
#endif // G2SSYNPLAYERSOCIALINFO_T2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1_H
#ifndef GIFT_TFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C_H
#define GIFT_TFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.Gift
struct  Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.Gift::giftId
	int32_t ___giftId_0;
	// System.Int32 MSG_Player.Gift::giftNumber
	int32_t ___giftNumber_1;

public:
	inline static int32_t get_offset_of_giftId_0() { return static_cast<int32_t>(offsetof(Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C, ___giftId_0)); }
	inline int32_t get_giftId_0() const { return ___giftId_0; }
	inline int32_t* get_address_of_giftId_0() { return &___giftId_0; }
	inline void set_giftId_0(int32_t value)
	{
		___giftId_0 = value;
	}

	inline static int32_t get_offset_of_giftNumber_1() { return static_cast<int32_t>(offsetof(Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C, ___giftNumber_1)); }
	inline int32_t get_giftNumber_1() const { return ___giftNumber_1; }
	inline int32_t* get_address_of_giftNumber_1() { return &___giftNumber_1; }
	inline void set_giftNumber_1(int32_t value)
	{
		___giftNumber_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIFT_TFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C_H
#ifndef GIFTLOG_TE80438DADC54B902A2F76BBD9BD2FE84939CE54E_H
#define GIFTLOG_TE80438DADC54B902A2F76BBD9BD2FE84939CE54E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.GiftLog
struct  GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.GiftLog::id
	int64_t ___id_0;
	// System.Int32 MSG_Player.GiftLog::type
	int32_t ___type_1;
	// System.String MSG_Player.GiftLog::sender
	String_t* ___sender_2;
	// System.String MSG_Player.GiftLog::receiver
	String_t* ___receiver_3;
	// System.Int32 MSG_Player.GiftLog::itemId
	int32_t ___itemId_4;
	// System.Int32 MSG_Player.GiftLog::num
	int32_t ___num_5;
	// System.Int32 MSG_Player.GiftLog::time
	int32_t ___time_6;
	// System.Int32 MSG_Player.GiftLog::readStatus
	int32_t ___readStatus_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___id_0)); }
	inline int64_t get_id_0() const { return ___id_0; }
	inline int64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_sender_2() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___sender_2)); }
	inline String_t* get_sender_2() const { return ___sender_2; }
	inline String_t** get_address_of_sender_2() { return &___sender_2; }
	inline void set_sender_2(String_t* value)
	{
		___sender_2 = value;
		Il2CppCodeGenWriteBarrier((&___sender_2), value);
	}

	inline static int32_t get_offset_of_receiver_3() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___receiver_3)); }
	inline String_t* get_receiver_3() const { return ___receiver_3; }
	inline String_t** get_address_of_receiver_3() { return &___receiver_3; }
	inline void set_receiver_3(String_t* value)
	{
		___receiver_3 = value;
		Il2CppCodeGenWriteBarrier((&___receiver_3), value);
	}

	inline static int32_t get_offset_of_itemId_4() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___itemId_4)); }
	inline int32_t get_itemId_4() const { return ___itemId_4; }
	inline int32_t* get_address_of_itemId_4() { return &___itemId_4; }
	inline void set_itemId_4(int32_t value)
	{
		___itemId_4 = value;
	}

	inline static int32_t get_offset_of_num_5() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___num_5)); }
	inline int32_t get_num_5() const { return ___num_5; }
	inline int32_t* get_address_of_num_5() { return &___num_5; }
	inline void set_num_5(int32_t value)
	{
		___num_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___time_6)); }
	inline int32_t get_time_6() const { return ___time_6; }
	inline int32_t* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(int32_t value)
	{
		___time_6 = value;
	}

	inline static int32_t get_offset_of_readStatus_7() { return static_cast<int32_t>(offsetof(GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E, ___readStatus_7)); }
	inline int32_t get_readStatus_7() const { return ___readStatus_7; }
	inline int32_t* get_address_of_readStatus_7() { return &___readStatus_7; }
	inline void set_readStatus_7(int32_t value)
	{
		___readStatus_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIFTLOG_TE80438DADC54B902A2F76BBD9BD2FE84939CE54E_H
#ifndef GLOBALPLAYERWORLDINFO_T5BDAFFD2F0D59C47A18455BB8FE10920F4A82690_H
#define GLOBALPLAYERWORLDINFO_T5BDAFFD2F0D59C47A18455BB8FE10920F4A82690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.GlobalPlayerWorldInfo
struct  GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.GlobalPlayerWorldInfo::userId
	int64_t ___userId_0;
	// System.Int64 MSG_Player.GlobalPlayerWorldInfo::roleid
	int64_t ___roleid_1;
	// System.String MSG_Player.GlobalPlayerWorldInfo::rolename
	String_t* ___rolename_2;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::career
	int32_t ___career_3;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::level
	int32_t ___level_4;
	// System.String MSG_Player.GlobalPlayerWorldInfo::plat
	String_t* ___plat_5;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::createTime
	int32_t ___createTime_6;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::csid
	int32_t ___csid_7;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::lastOffTime
	int32_t ___lastOffTime_8;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::horseId
	int32_t ___horseId_9;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::wingId
	int32_t ___wingId_10;
	// System.Int64 MSG_Player.GlobalPlayerWorldInfo::fightPower
	int64_t ___fightPower_11;
	// System.Int64 MSG_Player.GlobalPlayerWorldInfo::guildId
	int64_t ___guildId_12;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionHeadId
	int32_t ___fashionHeadId_13;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionHeadFrameId
	int32_t ___fashionHeadFrameId_14;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionBodyId
	int32_t ___fashionBodyId_15;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionWeaponId
	int32_t ___fashionWeaponId_16;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionHalo
	int32_t ___fashionHalo_17;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::fashionMatrix
	int32_t ___fashionMatrix_18;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::sex
	int32_t ___sex_19;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::stateVip
	int32_t ___stateVip_20;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::shiHaiLevel
	int32_t ___shiHaiLevel_21;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::playerVip
	int32_t ___playerVip_22;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::spiritId
	int32_t ___spiritId_23;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::soulArmorId
	int32_t ___soulArmorId_24;
	// System.Int32 MSG_Player.GlobalPlayerWorldInfo::serverId
	int32_t ___serverId_25;
	// System.String MSG_Player.GlobalPlayerWorldInfo::customHeadPath
	String_t* ___customHeadPath_26;
	// System.Boolean MSG_Player.GlobalPlayerWorldInfo::useCustomHead
	bool ___useCustomHead_27;
	// System.String MSG_Player.GlobalPlayerWorldInfo::guildName
	String_t* ___guildName_28;

public:
	inline static int32_t get_offset_of_userId_0() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___userId_0)); }
	inline int64_t get_userId_0() const { return ___userId_0; }
	inline int64_t* get_address_of_userId_0() { return &___userId_0; }
	inline void set_userId_0(int64_t value)
	{
		___userId_0 = value;
	}

	inline static int32_t get_offset_of_roleid_1() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___roleid_1)); }
	inline int64_t get_roleid_1() const { return ___roleid_1; }
	inline int64_t* get_address_of_roleid_1() { return &___roleid_1; }
	inline void set_roleid_1(int64_t value)
	{
		___roleid_1 = value;
	}

	inline static int32_t get_offset_of_rolename_2() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___rolename_2)); }
	inline String_t* get_rolename_2() const { return ___rolename_2; }
	inline String_t** get_address_of_rolename_2() { return &___rolename_2; }
	inline void set_rolename_2(String_t* value)
	{
		___rolename_2 = value;
		Il2CppCodeGenWriteBarrier((&___rolename_2), value);
	}

	inline static int32_t get_offset_of_career_3() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___career_3)); }
	inline int32_t get_career_3() const { return ___career_3; }
	inline int32_t* get_address_of_career_3() { return &___career_3; }
	inline void set_career_3(int32_t value)
	{
		___career_3 = value;
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}

	inline static int32_t get_offset_of_plat_5() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___plat_5)); }
	inline String_t* get_plat_5() const { return ___plat_5; }
	inline String_t** get_address_of_plat_5() { return &___plat_5; }
	inline void set_plat_5(String_t* value)
	{
		___plat_5 = value;
		Il2CppCodeGenWriteBarrier((&___plat_5), value);
	}

	inline static int32_t get_offset_of_createTime_6() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___createTime_6)); }
	inline int32_t get_createTime_6() const { return ___createTime_6; }
	inline int32_t* get_address_of_createTime_6() { return &___createTime_6; }
	inline void set_createTime_6(int32_t value)
	{
		___createTime_6 = value;
	}

	inline static int32_t get_offset_of_csid_7() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___csid_7)); }
	inline int32_t get_csid_7() const { return ___csid_7; }
	inline int32_t* get_address_of_csid_7() { return &___csid_7; }
	inline void set_csid_7(int32_t value)
	{
		___csid_7 = value;
	}

	inline static int32_t get_offset_of_lastOffTime_8() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___lastOffTime_8)); }
	inline int32_t get_lastOffTime_8() const { return ___lastOffTime_8; }
	inline int32_t* get_address_of_lastOffTime_8() { return &___lastOffTime_8; }
	inline void set_lastOffTime_8(int32_t value)
	{
		___lastOffTime_8 = value;
	}

	inline static int32_t get_offset_of_horseId_9() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___horseId_9)); }
	inline int32_t get_horseId_9() const { return ___horseId_9; }
	inline int32_t* get_address_of_horseId_9() { return &___horseId_9; }
	inline void set_horseId_9(int32_t value)
	{
		___horseId_9 = value;
	}

	inline static int32_t get_offset_of_wingId_10() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___wingId_10)); }
	inline int32_t get_wingId_10() const { return ___wingId_10; }
	inline int32_t* get_address_of_wingId_10() { return &___wingId_10; }
	inline void set_wingId_10(int32_t value)
	{
		___wingId_10 = value;
	}

	inline static int32_t get_offset_of_fightPower_11() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fightPower_11)); }
	inline int64_t get_fightPower_11() const { return ___fightPower_11; }
	inline int64_t* get_address_of_fightPower_11() { return &___fightPower_11; }
	inline void set_fightPower_11(int64_t value)
	{
		___fightPower_11 = value;
	}

	inline static int32_t get_offset_of_guildId_12() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___guildId_12)); }
	inline int64_t get_guildId_12() const { return ___guildId_12; }
	inline int64_t* get_address_of_guildId_12() { return &___guildId_12; }
	inline void set_guildId_12(int64_t value)
	{
		___guildId_12 = value;
	}

	inline static int32_t get_offset_of_fashionHeadId_13() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionHeadId_13)); }
	inline int32_t get_fashionHeadId_13() const { return ___fashionHeadId_13; }
	inline int32_t* get_address_of_fashionHeadId_13() { return &___fashionHeadId_13; }
	inline void set_fashionHeadId_13(int32_t value)
	{
		___fashionHeadId_13 = value;
	}

	inline static int32_t get_offset_of_fashionHeadFrameId_14() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionHeadFrameId_14)); }
	inline int32_t get_fashionHeadFrameId_14() const { return ___fashionHeadFrameId_14; }
	inline int32_t* get_address_of_fashionHeadFrameId_14() { return &___fashionHeadFrameId_14; }
	inline void set_fashionHeadFrameId_14(int32_t value)
	{
		___fashionHeadFrameId_14 = value;
	}

	inline static int32_t get_offset_of_fashionBodyId_15() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionBodyId_15)); }
	inline int32_t get_fashionBodyId_15() const { return ___fashionBodyId_15; }
	inline int32_t* get_address_of_fashionBodyId_15() { return &___fashionBodyId_15; }
	inline void set_fashionBodyId_15(int32_t value)
	{
		___fashionBodyId_15 = value;
	}

	inline static int32_t get_offset_of_fashionWeaponId_16() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionWeaponId_16)); }
	inline int32_t get_fashionWeaponId_16() const { return ___fashionWeaponId_16; }
	inline int32_t* get_address_of_fashionWeaponId_16() { return &___fashionWeaponId_16; }
	inline void set_fashionWeaponId_16(int32_t value)
	{
		___fashionWeaponId_16 = value;
	}

	inline static int32_t get_offset_of_fashionHalo_17() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionHalo_17)); }
	inline int32_t get_fashionHalo_17() const { return ___fashionHalo_17; }
	inline int32_t* get_address_of_fashionHalo_17() { return &___fashionHalo_17; }
	inline void set_fashionHalo_17(int32_t value)
	{
		___fashionHalo_17 = value;
	}

	inline static int32_t get_offset_of_fashionMatrix_18() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___fashionMatrix_18)); }
	inline int32_t get_fashionMatrix_18() const { return ___fashionMatrix_18; }
	inline int32_t* get_address_of_fashionMatrix_18() { return &___fashionMatrix_18; }
	inline void set_fashionMatrix_18(int32_t value)
	{
		___fashionMatrix_18 = value;
	}

	inline static int32_t get_offset_of_sex_19() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___sex_19)); }
	inline int32_t get_sex_19() const { return ___sex_19; }
	inline int32_t* get_address_of_sex_19() { return &___sex_19; }
	inline void set_sex_19(int32_t value)
	{
		___sex_19 = value;
	}

	inline static int32_t get_offset_of_stateVip_20() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___stateVip_20)); }
	inline int32_t get_stateVip_20() const { return ___stateVip_20; }
	inline int32_t* get_address_of_stateVip_20() { return &___stateVip_20; }
	inline void set_stateVip_20(int32_t value)
	{
		___stateVip_20 = value;
	}

	inline static int32_t get_offset_of_shiHaiLevel_21() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___shiHaiLevel_21)); }
	inline int32_t get_shiHaiLevel_21() const { return ___shiHaiLevel_21; }
	inline int32_t* get_address_of_shiHaiLevel_21() { return &___shiHaiLevel_21; }
	inline void set_shiHaiLevel_21(int32_t value)
	{
		___shiHaiLevel_21 = value;
	}

	inline static int32_t get_offset_of_playerVip_22() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___playerVip_22)); }
	inline int32_t get_playerVip_22() const { return ___playerVip_22; }
	inline int32_t* get_address_of_playerVip_22() { return &___playerVip_22; }
	inline void set_playerVip_22(int32_t value)
	{
		___playerVip_22 = value;
	}

	inline static int32_t get_offset_of_spiritId_23() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___spiritId_23)); }
	inline int32_t get_spiritId_23() const { return ___spiritId_23; }
	inline int32_t* get_address_of_spiritId_23() { return &___spiritId_23; }
	inline void set_spiritId_23(int32_t value)
	{
		___spiritId_23 = value;
	}

	inline static int32_t get_offset_of_soulArmorId_24() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___soulArmorId_24)); }
	inline int32_t get_soulArmorId_24() const { return ___soulArmorId_24; }
	inline int32_t* get_address_of_soulArmorId_24() { return &___soulArmorId_24; }
	inline void set_soulArmorId_24(int32_t value)
	{
		___soulArmorId_24 = value;
	}

	inline static int32_t get_offset_of_serverId_25() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___serverId_25)); }
	inline int32_t get_serverId_25() const { return ___serverId_25; }
	inline int32_t* get_address_of_serverId_25() { return &___serverId_25; }
	inline void set_serverId_25(int32_t value)
	{
		___serverId_25 = value;
	}

	inline static int32_t get_offset_of_customHeadPath_26() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___customHeadPath_26)); }
	inline String_t* get_customHeadPath_26() const { return ___customHeadPath_26; }
	inline String_t** get_address_of_customHeadPath_26() { return &___customHeadPath_26; }
	inline void set_customHeadPath_26(String_t* value)
	{
		___customHeadPath_26 = value;
		Il2CppCodeGenWriteBarrier((&___customHeadPath_26), value);
	}

	inline static int32_t get_offset_of_useCustomHead_27() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___useCustomHead_27)); }
	inline bool get_useCustomHead_27() const { return ___useCustomHead_27; }
	inline bool* get_address_of_useCustomHead_27() { return &___useCustomHead_27; }
	inline void set_useCustomHead_27(bool value)
	{
		___useCustomHead_27 = value;
	}

	inline static int32_t get_offset_of_guildName_28() { return static_cast<int32_t>(offsetof(GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690, ___guildName_28)); }
	inline String_t* get_guildName_28() const { return ___guildName_28; }
	inline String_t** get_address_of_guildName_28() { return &___guildName_28; }
	inline void set_guildName_28(String_t* value)
	{
		___guildName_28 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALPLAYERWORLDINFO_T5BDAFFD2F0D59C47A18455BB8FE10920F4A82690_H
#ifndef REQACTIVEFATESTAR_T01CA7733687065D0C3B44D526708872B03757426_H
#define REQACTIVEFATESTAR_T01CA7733687065D0C3B44D526708872B03757426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqActiveFateStar
struct  ReqActiveFateStar_t01CA7733687065D0C3B44D526708872B03757426  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqActiveFateStar::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqActiveFateStar_t01CA7733687065D0C3B44D526708872B03757426, ___id_1)); }
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
#endif // REQACTIVEFATESTAR_T01CA7733687065D0C3B44D526708872B03757426_H
#ifndef REQCHANGEJOB_TC806C592562BB8D566F0638A4DF14FDBED8A53D7_H
#define REQCHANGEJOB_TC806C592562BB8D566F0638A4DF14FDBED8A53D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqChangeJob
struct  ReqChangeJob_tC806C592562BB8D566F0638A4DF14FDBED8A53D7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCHANGEJOB_TC806C592562BB8D566F0638A4DF14FDBED8A53D7_H
#ifndef REQCHANGEJOBPANEL_TDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B_H
#define REQCHANGEJOBPANEL_TDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqChangeJobPanel
struct  ReqChangeJobPanel_tDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqChangeJobPanel::gender
	int32_t ___gender_1;

public:
	inline static int32_t get_offset_of_gender_1() { return static_cast<int32_t>(offsetof(ReqChangeJobPanel_tDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B, ___gender_1)); }
	inline int32_t get_gender_1() const { return ___gender_1; }
	inline int32_t* get_address_of_gender_1() { return &___gender_1; }
	inline void set_gender_1(int32_t value)
	{
		___gender_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCHANGEJOBPANEL_TDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B_H
#ifndef REQCHANGEROLENAME_T53455D5934FF99936B3DC62D5F6368F1C26AF68C_H
#define REQCHANGEROLENAME_T53455D5934FF99936B3DC62D5F6368F1C26AF68C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqChangeRoleName
struct  ReqChangeRoleName_t53455D5934FF99936B3DC62D5F6368F1C26AF68C  : public RuntimeObject
{
public:
	// System.String MSG_Player.ReqChangeRoleName::newName
	String_t* ___newName_1;

public:
	inline static int32_t get_offset_of_newName_1() { return static_cast<int32_t>(offsetof(ReqChangeRoleName_t53455D5934FF99936B3DC62D5F6368F1C26AF68C, ___newName_1)); }
	inline String_t* get_newName_1() const { return ___newName_1; }
	inline String_t** get_address_of_newName_1() { return &___newName_1; }
	inline void set_newName_1(String_t* value)
	{
		___newName_1 = value;
		Il2CppCodeGenWriteBarrier((&___newName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCHANGEROLENAME_T53455D5934FF99936B3DC62D5F6368F1C26AF68C_H
#ifndef REQCOURAGELIST_TFE7B08B0D3E1080255E07F8E5E3E6A47F9FEDB04_H
#define REQCOURAGELIST_TFE7B08B0D3E1080255E07F8E5E3E6A47F9FEDB04_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqCourageList
struct  ReqCourageList_tFE7B08B0D3E1080255E07F8E5E3E6A47F9FEDB04  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOURAGELIST_TFE7B08B0D3E1080255E07F8E5E3E6A47F9FEDB04_H
#ifndef REQGETACCUNONLINETIME_T0B2A5DBF5C87CF8F557F2A264BC27AEB1F1FC4C3_H
#define REQGETACCUNONLINETIME_T0B2A5DBF5C87CF8F557F2A264BC27AEB1F1FC4C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqGetAccunonlinetime
struct  ReqGetAccunonlinetime_t0B2A5DBF5C87CF8F557F2A264BC27AEB1F1FC4C3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETACCUNONLINETIME_T0B2A5DBF5C87CF8F557F2A264BC27AEB1F1FC4C3_H
#ifndef REQGETGIFTLOG_T0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8_H
#define REQGETGIFTLOG_T0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqGetGiftLog
struct  ReqGetGiftLog_t0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqGetGiftLog::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqGetGiftLog_t0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8, ___type_1)); }
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
#endif // REQGETGIFTLOG_T0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8_H
#ifndef REQLOOKOTHERPLAYER_T37772370B956D14BBC3ACD159E4CA134F4C55789_H
#define REQLOOKOTHERPLAYER_T37772370B956D14BBC3ACD159E4CA134F4C55789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqLookOtherPlayer
struct  ReqLookOtherPlayer_t37772370B956D14BBC3ACD159E4CA134F4C55789  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ReqLookOtherPlayer::otherPlayerId
	uint64_t ___otherPlayerId_1;

public:
	inline static int32_t get_offset_of_otherPlayerId_1() { return static_cast<int32_t>(offsetof(ReqLookOtherPlayer_t37772370B956D14BBC3ACD159E4CA134F4C55789, ___otherPlayerId_1)); }
	inline uint64_t get_otherPlayerId_1() const { return ___otherPlayerId_1; }
	inline uint64_t* get_address_of_otherPlayerId_1() { return &___otherPlayerId_1; }
	inline void set_otherPlayerId_1(uint64_t value)
	{
		___otherPlayerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQLOOKOTHERPLAYER_T37772370B956D14BBC3ACD159E4CA134F4C55789_H
#ifndef REQMAINUIGUIDEID_T0A7AA236A49638834953673DE8AC0DE444C0B510_H
#define REQMAINUIGUIDEID_T0A7AA236A49638834953673DE8AC0DE444C0B510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqMainUIGuideID
struct  ReqMainUIGuideID_t0A7AA236A49638834953673DE8AC0DE444C0B510  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMAINUIGUIDEID_T0A7AA236A49638834953673DE8AC0DE444C0B510_H
#ifndef REQOPENBLOODPANNEL_T92ADF16630360F2CDB3FBDA2011D300020AA23AE_H
#define REQOPENBLOODPANNEL_T92ADF16630360F2CDB3FBDA2011D300020AA23AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqOpenBloodPannel
struct  ReqOpenBloodPannel_t92ADF16630360F2CDB3FBDA2011D300020AA23AE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENBLOODPANNEL_T92ADF16630360F2CDB3FBDA2011D300020AA23AE_H
#ifndef REQPEAKLEVELPANEL_TBEABB7B4066D81B194FAB7B128AB79A8978FDB61_H
#define REQPEAKLEVELPANEL_TBEABB7B4066D81B194FAB7B128AB79A8978FDB61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqPeakLevelPanel
struct  ReqPeakLevelPanel_tBEABB7B4066D81B194FAB7B128AB79A8978FDB61  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPEAKLEVELPANEL_TBEABB7B4066D81B194FAB7B128AB79A8978FDB61_H
#ifndef REQPLAYERCAREERCHANGE_T816D7A718100433CADCFE8EBDC79D6C0B17B24A1_H
#define REQPLAYERCAREERCHANGE_T816D7A718100433CADCFE8EBDC79D6C0B17B24A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqPlayerCareerChange
struct  ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqPlayerCareerChange::careerNo
	int32_t ___careerNo_1;
	// System.Collections.Generic.List`1<System.Int64> MSG_Player.ReqPlayerCareerChange::eqiupNos
	List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * ___eqiupNos_2;

public:
	inline static int32_t get_offset_of_careerNo_1() { return static_cast<int32_t>(offsetof(ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1, ___careerNo_1)); }
	inline int32_t get_careerNo_1() const { return ___careerNo_1; }
	inline int32_t* get_address_of_careerNo_1() { return &___careerNo_1; }
	inline void set_careerNo_1(int32_t value)
	{
		___careerNo_1 = value;
	}

	inline static int32_t get_offset_of_eqiupNos_2() { return static_cast<int32_t>(offsetof(ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1, ___eqiupNos_2)); }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * get_eqiupNos_2() const { return ___eqiupNos_2; }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D ** get_address_of_eqiupNos_2() { return &___eqiupNos_2; }
	inline void set_eqiupNos_2(List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * value)
	{
		___eqiupNos_2 = value;
		Il2CppCodeGenWriteBarrier((&___eqiupNos_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERCAREERCHANGE_T816D7A718100433CADCFE8EBDC79D6C0B17B24A1_H
#ifndef REQPLAYERSETTINGCUSTOMHEAD_TE802FDDFA6D72FAA5B21F714FF4030F71BA43630_H
#define REQPLAYERSETTINGCUSTOMHEAD_TE802FDDFA6D72FAA5B21F714FF4030F71BA43630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqPlayerSettingCustomHead
struct  ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630  : public RuntimeObject
{
public:
	// System.String MSG_Player.ReqPlayerSettingCustomHead::customHeadPath
	String_t* ___customHeadPath_1;
	// System.Boolean MSG_Player.ReqPlayerSettingCustomHead::useCustomHead
	bool ___useCustomHead_2;

public:
	inline static int32_t get_offset_of_customHeadPath_1() { return static_cast<int32_t>(offsetof(ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630, ___customHeadPath_1)); }
	inline String_t* get_customHeadPath_1() const { return ___customHeadPath_1; }
	inline String_t** get_address_of_customHeadPath_1() { return &___customHeadPath_1; }
	inline void set_customHeadPath_1(String_t* value)
	{
		___customHeadPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___customHeadPath_1), value);
	}

	inline static int32_t get_offset_of_useCustomHead_2() { return static_cast<int32_t>(offsetof(ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630, ___useCustomHead_2)); }
	inline bool get_useCustomHead_2() const { return ___useCustomHead_2; }
	inline bool* get_address_of_useCustomHead_2() { return &___useCustomHead_2; }
	inline void set_useCustomHead_2(bool value)
	{
		___useCustomHead_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERSETTINGCUSTOMHEAD_TE802FDDFA6D72FAA5B21F714FF4030F71BA43630_H
#ifndef REQPLAYERSUMMARYINFO_TDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6_H
#define REQPLAYERSUMMARYINFO_TDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqPlayerSummaryInfo
struct  ReqPlayerSummaryInfo_tDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.ReqPlayerSummaryInfo::roleId
	int64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ReqPlayerSummaryInfo_tDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6, ___roleId_1)); }
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
#endif // REQPLAYERSUMMARYINFO_TDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6_H
#ifndef REQREADGIFTLOG_T7A649881855BB84E10D01F70F24F8230AE7BA069_H
#define REQREADGIFTLOG_T7A649881855BB84E10D01F70F24F8230AE7BA069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqReadGiftLog
struct  ReqReadGiftLog_t7A649881855BB84E10D01F70F24F8230AE7BA069  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int64> MSG_Player.ReqReadGiftLog::ids
	List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * ___ids_1;

public:
	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(ReqReadGiftLog_t7A649881855BB84E10D01F70F24F8230AE7BA069, ___ids_1)); }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * get_ids_1() const { return ___ids_1; }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D ** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((&___ids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQREADGIFTLOG_T7A649881855BB84E10D01F70F24F8230AE7BA069_H
#ifndef REQSENDGIFT_T201B5BED28526541229E0ED965DFB439B7394F6D_H
#define REQSENDGIFT_T201B5BED28526541229E0ED965DFB439B7394F6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqSendGift
struct  ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqSendGift::type
	int32_t ___type_1;
	// System.Int64 MSG_Player.ReqSendGift::roleId
	int64_t ___roleId_2;
	// System.Boolean MSG_Player.ReqSendGift::force
	bool ___force_3;
	// System.Collections.Generic.List`1<MSG_Player.Gift> MSG_Player.ReqSendGift::gifts
	List_1_t9176C6924E0BD9CEF2F4E8E014F05CD717965380 * ___gifts_4;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D, ___roleId_2)); }
	inline int64_t get_roleId_2() const { return ___roleId_2; }
	inline int64_t* get_address_of_roleId_2() { return &___roleId_2; }
	inline void set_roleId_2(int64_t value)
	{
		___roleId_2 = value;
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D, ___force_3)); }
	inline bool get_force_3() const { return ___force_3; }
	inline bool* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(bool value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_gifts_4() { return static_cast<int32_t>(offsetof(ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D, ___gifts_4)); }
	inline List_1_t9176C6924E0BD9CEF2F4E8E014F05CD717965380 * get_gifts_4() const { return ___gifts_4; }
	inline List_1_t9176C6924E0BD9CEF2F4E8E014F05CD717965380 ** get_address_of_gifts_4() { return &___gifts_4; }
	inline void set_gifts_4(List_1_t9176C6924E0BD9CEF2F4E8E014F05CD717965380 * value)
	{
		___gifts_4 = value;
		Il2CppCodeGenWriteBarrier((&___gifts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSENDGIFT_T201B5BED28526541229E0ED965DFB439B7394F6D_H
#ifndef REQUPDATAPKSTATE_T4674B4347DB7C0EF089655C6FF263FCCC618E9AC_H
#define REQUPDATAPKSTATE_T4674B4347DB7C0EF089655C6FF263FCCC618E9AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqUpdataPkState
struct  ReqUpdataPkState_t4674B4347DB7C0EF089655C6FF263FCCC618E9AC  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqUpdataPkState::pkState
	int32_t ___pkState_1;

public:
	inline static int32_t get_offset_of_pkState_1() { return static_cast<int32_t>(offsetof(ReqUpdataPkState_t4674B4347DB7C0EF089655C6FF263FCCC618E9AC, ___pkState_1)); }
	inline int32_t get_pkState_1() const { return ___pkState_1; }
	inline int32_t* get_address_of_pkState_1() { return &___pkState_1; }
	inline void set_pkState_1(int32_t value)
	{
		___pkState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPDATAPKSTATE_T4674B4347DB7C0EF089655C6FF263FCCC618E9AC_H
#ifndef REQUPDATEMAINUIGUIDEID_T6BBCCCC021594D94F713406C00BC36A27149EDC0_H
#define REQUPDATEMAINUIGUIDEID_T6BBCCCC021594D94F713406C00BC36A27149EDC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqUpdateMainUIGuideID
struct  ReqUpdateMainUIGuideID_t6BBCCCC021594D94F713406C00BC36A27149EDC0  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ReqUpdateMainUIGuideID::gid
	int32_t ___gid_1;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(ReqUpdateMainUIGuideID_t6BBCCCC021594D94F713406C00BC36A27149EDC0, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPDATEMAINUIGUIDEID_T6BBCCCC021594D94F713406C00BC36A27149EDC0_H
#ifndef REQUPGRADEBLOOD_T9672DF22D6737BB112E80C0C76F5C25858A4A457_H
#define REQUPGRADEBLOOD_T9672DF22D6737BB112E80C0C76F5C25858A4A457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqUpgradeBlood
struct  ReqUpgradeBlood_t9672DF22D6737BB112E80C0C76F5C25858A4A457  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPGRADEBLOOD_T9672DF22D6737BB112E80C0C76F5C25858A4A457_H
#ifndef REQXISUI_T2480FE9EB90BD2B41B63252F8D9CB334E1797156_H
#define REQXISUI_T2480FE9EB90BD2B41B63252F8D9CB334E1797156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ReqXiSui
struct  ReqXiSui_t2480FE9EB90BD2B41B63252F8D9CB334E1797156  : public RuntimeObject
{
public:
	// System.Boolean MSG_Player.ReqXiSui::free
	bool ___free_1;

public:
	inline static int32_t get_offset_of_free_1() { return static_cast<int32_t>(offsetof(ReqXiSui_t2480FE9EB90BD2B41B63252F8D9CB334E1797156, ___free_1)); }
	inline bool get_free_1() const { return ___free_1; }
	inline bool* get_address_of_free_1() { return &___free_1; }
	inline void set_free_1(bool value)
	{
		___free_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQXISUI_T2480FE9EB90BD2B41B63252F8D9CB334E1797156_H
#ifndef RESACCUNONLINETIME_T3E603193A247304F472CECF571FC2E54B225230C_H
#define RESACCUNONLINETIME_T3E603193A247304F472CECF571FC2E54B225230C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResAccunonlinetime
struct  ResAccunonlinetime_t3E603193A247304F472CECF571FC2E54B225230C  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResAccunonlinetime::time
	int32_t ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ResAccunonlinetime_t3E603193A247304F472CECF571FC2E54B225230C, ___time_1)); }
	inline int32_t get_time_1() const { return ___time_1; }
	inline int32_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int32_t value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESACCUNONLINETIME_T3E603193A247304F472CECF571FC2E54B225230C_H
#ifndef RESACTIVEFATESTAR_T09C4A3FF72A0A94A824D313991CAFBACACF9AC00_H
#define RESACTIVEFATESTAR_T09C4A3FF72A0A94A824D313991CAFBACACF9AC00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResActiveFateStar
struct  ResActiveFateStar_t09C4A3FF72A0A94A824D313991CAFBACACF9AC00  : public RuntimeObject
{
public:
	// MSG_Player.FateStar MSG_Player.ResActiveFateStar::ids
	FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E * ___ids_1;

public:
	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(ResActiveFateStar_t09C4A3FF72A0A94A824D313991CAFBACACF9AC00, ___ids_1)); }
	inline FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E * get_ids_1() const { return ___ids_1; }
	inline FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E ** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E * value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((&___ids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESACTIVEFATESTAR_T09C4A3FF72A0A94A824D313991CAFBACACF9AC00_H
#ifndef RESADDHATRED_TB39CA970D14EB1399EB8CC7EAF588447EF2E78B4_H
#define RESADDHATRED_TB39CA970D14EB1399EB8CC7EAF588447EF2E78B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResAddHatred
struct  ResAddHatred_tB39CA970D14EB1399EB8CC7EAF588447EF2E78B4  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResAddHatred::playerId
	uint64_t ___playerId_1;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResAddHatred_tB39CA970D14EB1399EB8CC7EAF588447EF2E78B4, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESADDHATRED_TB39CA970D14EB1399EB8CC7EAF588447EF2E78B4_H
#ifndef RESCHANGEJOBPANEL_T99DB9AAE267704966219EC4DBA4682AF7DCAFB4C_H
#define RESCHANGEJOBPANEL_T99DB9AAE267704966219EC4DBA4682AF7DCAFB4C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResChangeJobPanel
struct  ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Player.ResChangeJobPanel::ids
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___ids_1;
	// System.Boolean MSG_Player.ResChangeJobPanel::isChangeJob
	bool ___isChangeJob_2;
	// System.Boolean MSG_Player.ResChangeJobPanel::isRed
	bool ___isRed_3;
	// System.Int32 MSG_Player.ResChangeJobPanel::gender
	int32_t ___gender_4;

public:
	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C, ___ids_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_ids_1() const { return ___ids_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((&___ids_1), value);
	}

	inline static int32_t get_offset_of_isChangeJob_2() { return static_cast<int32_t>(offsetof(ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C, ___isChangeJob_2)); }
	inline bool get_isChangeJob_2() const { return ___isChangeJob_2; }
	inline bool* get_address_of_isChangeJob_2() { return &___isChangeJob_2; }
	inline void set_isChangeJob_2(bool value)
	{
		___isChangeJob_2 = value;
	}

	inline static int32_t get_offset_of_isRed_3() { return static_cast<int32_t>(offsetof(ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C, ___isRed_3)); }
	inline bool get_isRed_3() const { return ___isRed_3; }
	inline bool* get_address_of_isRed_3() { return &___isRed_3; }
	inline void set_isRed_3(bool value)
	{
		___isRed_3 = value;
	}

	inline static int32_t get_offset_of_gender_4() { return static_cast<int32_t>(offsetof(ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C, ___gender_4)); }
	inline int32_t get_gender_4() const { return ___gender_4; }
	inline int32_t* get_address_of_gender_4() { return &___gender_4; }
	inline void set_gender_4(int32_t value)
	{
		___gender_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHANGEJOBPANEL_T99DB9AAE267704966219EC4DBA4682AF7DCAFB4C_H
#ifndef RESCHANGEJOBRESULT_T3C4CAFCD35EE715BC688AD64705B0748D7C89AC6_H
#define RESCHANGEJOBRESULT_T3C4CAFCD35EE715BC688AD64705B0748D7C89AC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResChangeJobResult
struct  ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResChangeJobResult::result
	int32_t ___result_1;
	// System.Int32 MSG_Player.ResChangeJobResult::grade
	int32_t ___grade_2;

public:
	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_grade_2() { return static_cast<int32_t>(offsetof(ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6, ___grade_2)); }
	inline int32_t get_grade_2() const { return ___grade_2; }
	inline int32_t* get_address_of_grade_2() { return &___grade_2; }
	inline void set_grade_2(int32_t value)
	{
		___grade_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHANGEJOBRESULT_T3C4CAFCD35EE715BC688AD64705B0748D7C89AC6_H
#ifndef RESCHANGEJOBTIPS_TBB55535A2B9FF950A5630893239FA063E08D58DA_H
#define RESCHANGEJOBTIPS_TBB55535A2B9FF950A5630893239FA063E08D58DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResChangeJobTips
struct  ResChangeJobTips_tBB55535A2B9FF950A5630893239FA063E08D58DA  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHANGEJOBTIPS_TBB55535A2B9FF950A5630893239FA063E08D58DA_H
#ifndef RESCHANGEROLENAMERESULT_T82B68D2A78008F61D8CFAF8EC360F22F9B514D1F_H
#define RESCHANGEROLENAMERESULT_T82B68D2A78008F61D8CFAF8EC360F22F9B514D1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResChangeRoleNameResult
struct  ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F  : public RuntimeObject
{
public:
	// System.Boolean MSG_Player.ResChangeRoleNameResult::isSuccess
	bool ___isSuccess_1;
	// System.String MSG_Player.ResChangeRoleNameResult::newName
	String_t* ___newName_2;
	// System.UInt64 MSG_Player.ResChangeRoleNameResult::roleId
	uint64_t ___roleId_3;

public:
	inline static int32_t get_offset_of_isSuccess_1() { return static_cast<int32_t>(offsetof(ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F, ___isSuccess_1)); }
	inline bool get_isSuccess_1() const { return ___isSuccess_1; }
	inline bool* get_address_of_isSuccess_1() { return &___isSuccess_1; }
	inline void set_isSuccess_1(bool value)
	{
		___isSuccess_1 = value;
	}

	inline static int32_t get_offset_of_newName_2() { return static_cast<int32_t>(offsetof(ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F, ___newName_2)); }
	inline String_t* get_newName_2() const { return ___newName_2; }
	inline String_t** get_address_of_newName_2() { return &___newName_2; }
	inline void set_newName_2(String_t* value)
	{
		___newName_2 = value;
		Il2CppCodeGenWriteBarrier((&___newName_2), value);
	}

	inline static int32_t get_offset_of_roleId_3() { return static_cast<int32_t>(offsetof(ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F, ___roleId_3)); }
	inline uint64_t get_roleId_3() const { return ___roleId_3; }
	inline uint64_t* get_address_of_roleId_3() { return &___roleId_3; }
	inline void set_roleId_3(uint64_t value)
	{
		___roleId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCHANGEROLENAMERESULT_T82B68D2A78008F61D8CFAF8EC360F22F9B514D1F_H
#ifndef RESCLEANHATRED_TF12F85DB0AAB008A83EAB69A74D64C6136F05C9F_H
#define RESCLEANHATRED_TF12F85DB0AAB008A83EAB69A74D64C6136F05C9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResCleanHatred
struct  ResCleanHatred_tF12F85DB0AAB008A83EAB69A74D64C6136F05C9F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCLEANHATRED_TF12F85DB0AAB008A83EAB69A74D64C6136F05C9F_H
#ifndef RESCLIENTTOCHOICEBIRTHGROUP_TB41FFD87C382C9ECFB498607E568824F84D67B42_H
#define RESCLIENTTOCHOICEBIRTHGROUP_TB41FFD87C382C9ECFB498607E568824F84D67B42_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResClientToChoiceBirthGroup
struct  ResClientToChoiceBirthGroup_tB41FFD87C382C9ECFB498607E568824F84D67B42  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCLIENTTOCHOICEBIRTHGROUP_TB41FFD87C382C9ECFB498607E568824F84D67B42_H
#ifndef RESDELHATRED_TC9A443F4A058E9DD91550F778457E6AA43AB2C4E_H
#define RESDELHATRED_TC9A443F4A058E9DD91550F778457E6AA43AB2C4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResDelHatred
struct  ResDelHatred_tC9A443F4A058E9DD91550F778457E6AA43AB2C4E  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResDelHatred::playerId
	uint64_t ___playerId_1;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResDelHatred_tC9A443F4A058E9DD91550F778457E6AA43AB2C4E, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDELHATRED_TC9A443F4A058E9DD91550F778457E6AA43AB2C4E_H
#ifndef RESFIGHTORUNFIGHT_T58C2ACD1F6057F7703125E72BCEEDAD4744D6E93_H
#define RESFIGHTORUNFIGHT_T58C2ACD1F6057F7703125E72BCEEDAD4744D6E93_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResFightOrUnFight
struct  ResFightOrUnFight_t58C2ACD1F6057F7703125E72BCEEDAD4744D6E93  : public RuntimeObject
{
public:
	// System.Boolean MSG_Player.ResFightOrUnFight::isFight
	bool ___isFight_1;

public:
	inline static int32_t get_offset_of_isFight_1() { return static_cast<int32_t>(offsetof(ResFightOrUnFight_t58C2ACD1F6057F7703125E72BCEEDAD4744D6E93, ___isFight_1)); }
	inline bool get_isFight_1() const { return ___isFight_1; }
	inline bool* get_address_of_isFight_1() { return &___isFight_1; }
	inline void set_isFight_1(bool value)
	{
		___isFight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESFIGHTORUNFIGHT_T58C2ACD1F6057F7703125E72BCEEDAD4744D6E93_H
#ifndef RESGENDERCLASSCHANGE_T9E596886FAFDB5349EB039A2A731F2F04E13259F_H
#define RESGENDERCLASSCHANGE_T9E596886FAFDB5349EB039A2A731F2F04E13259F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResGenderClassChange
struct  ResGenderClassChange_t9E596886FAFDB5349EB039A2A731F2F04E13259F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResGenderClassChange::genderClass
	int32_t ___genderClass_1;

public:
	inline static int32_t get_offset_of_genderClass_1() { return static_cast<int32_t>(offsetof(ResGenderClassChange_t9E596886FAFDB5349EB039A2A731F2F04E13259F, ___genderClass_1)); }
	inline int32_t get_genderClass_1() const { return ___genderClass_1; }
	inline int32_t* get_address_of_genderClass_1() { return &___genderClass_1; }
	inline void set_genderClass_1(int32_t value)
	{
		___genderClass_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGENDERCLASSCHANGE_T9E596886FAFDB5349EB039A2A731F2F04E13259F_H
#ifndef RESGETGIFTLOG_T7951BDB9FAA9EAF92310175B93F538AFF430E2CB_H
#define RESGETGIFTLOG_T7951BDB9FAA9EAF92310175B93F538AFF430E2CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResGetGiftLog
struct  ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResGetGiftLog::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<MSG_Player.GiftLog> MSG_Player.ResGetGiftLog::recordList
	List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * ___recordList_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_recordList_2() { return static_cast<int32_t>(offsetof(ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB, ___recordList_2)); }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * get_recordList_2() const { return ___recordList_2; }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB ** get_address_of_recordList_2() { return &___recordList_2; }
	inline void set_recordList_2(List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * value)
	{
		___recordList_2 = value;
		Il2CppCodeGenWriteBarrier((&___recordList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGETGIFTLOG_T7951BDB9FAA9EAF92310175B93F538AFF430E2CB_H
#ifndef RESLEVELCHANGE_T86813C79F80DE4C72BF32638B805FF3628EA7C46_H
#define RESLEVELCHANGE_T86813C79F80DE4C72BF32638B805FF3628EA7C46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResLevelChange
struct  ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResLevelChange::level
	int32_t ___level_1;
	// System.UInt64 MSG_Player.ResLevelChange::playerId
	uint64_t ___playerId_2;
	// System.Int32 MSG_Player.ResLevelChange::time
	int32_t ___time_3;
	// System.Int32 MSG_Player.ResLevelChange::grade
	int32_t ___grade_4;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_playerId_2() { return static_cast<int32_t>(offsetof(ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46, ___playerId_2)); }
	inline uint64_t get_playerId_2() const { return ___playerId_2; }
	inline uint64_t* get_address_of_playerId_2() { return &___playerId_2; }
	inline void set_playerId_2(uint64_t value)
	{
		___playerId_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46, ___time_3)); }
	inline int32_t get_time_3() const { return ___time_3; }
	inline int32_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int32_t value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_grade_4() { return static_cast<int32_t>(offsetof(ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46, ___grade_4)); }
	inline int32_t get_grade_4() const { return ___grade_4; }
	inline int32_t* get_address_of_grade_4() { return &___grade_4; }
	inline void set_grade_4(int32_t value)
	{
		___grade_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESLEVELCHANGE_T86813C79F80DE4C72BF32638B805FF3628EA7C46_H
#ifndef RESLOOKOTHERPLAYERRESULT_T308A44BDDF35DDD43CFA3150D37D8923D3A87F63_H
#define RESLOOKOTHERPLAYERRESULT_T308A44BDDF35DDD43CFA3150D37D8923D3A87F63_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResLookOtherPlayerResult
struct  ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResLookOtherPlayerResult::roleId
	uint64_t ___roleId_1;
	// System.String MSG_Player.ResLookOtherPlayerResult::roleName
	String_t* ___roleName_2;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::roleLv
	int32_t ___roleLv_3;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::career
	int32_t ___career_4;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::vip
	int32_t ___vip_5;
	// System.Int64 MSG_Player.ResLookOtherPlayerResult::fightPoint
	int64_t ___fightPoint_6;
	// System.String MSG_Player.ResLookOtherPlayerResult::guildName
	String_t* ___guildName_7;
	// System.Collections.Generic.List`1<MSG_Player.Attribute> MSG_Player.ResLookOtherPlayerResult::attList
	List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * ___attList_8;
	// System.Collections.Generic.List`1<MSG_backpack.ItemInfo> MSG_Player.ResLookOtherPlayerResult::equipList
	List_1_tE33393B445B8280160D222A3232DF1C02536A76C * ___equipList_9;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::stifleFabaoId
	int32_t ___stifleFabaoId_10;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::shiHaiCfgId
	int32_t ___shiHaiCfgId_11;
	// System.Int32 MSG_Player.ResLookOtherPlayerResult::xsLvl
	int32_t ___xsLvl_12;
	// MSG_Common.FacadeAttribute MSG_Player.ResLookOtherPlayerResult::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_13;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_roleName_2() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___roleName_2)); }
	inline String_t* get_roleName_2() const { return ___roleName_2; }
	inline String_t** get_address_of_roleName_2() { return &___roleName_2; }
	inline void set_roleName_2(String_t* value)
	{
		___roleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_2), value);
	}

	inline static int32_t get_offset_of_roleLv_3() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___roleLv_3)); }
	inline int32_t get_roleLv_3() const { return ___roleLv_3; }
	inline int32_t* get_address_of_roleLv_3() { return &___roleLv_3; }
	inline void set_roleLv_3(int32_t value)
	{
		___roleLv_3 = value;
	}

	inline static int32_t get_offset_of_career_4() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___career_4)); }
	inline int32_t get_career_4() const { return ___career_4; }
	inline int32_t* get_address_of_career_4() { return &___career_4; }
	inline void set_career_4(int32_t value)
	{
		___career_4 = value;
	}

	inline static int32_t get_offset_of_vip_5() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___vip_5)); }
	inline int32_t get_vip_5() const { return ___vip_5; }
	inline int32_t* get_address_of_vip_5() { return &___vip_5; }
	inline void set_vip_5(int32_t value)
	{
		___vip_5 = value;
	}

	inline static int32_t get_offset_of_fightPoint_6() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___fightPoint_6)); }
	inline int64_t get_fightPoint_6() const { return ___fightPoint_6; }
	inline int64_t* get_address_of_fightPoint_6() { return &___fightPoint_6; }
	inline void set_fightPoint_6(int64_t value)
	{
		___fightPoint_6 = value;
	}

	inline static int32_t get_offset_of_guildName_7() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___guildName_7)); }
	inline String_t* get_guildName_7() const { return ___guildName_7; }
	inline String_t** get_address_of_guildName_7() { return &___guildName_7; }
	inline void set_guildName_7(String_t* value)
	{
		___guildName_7 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_7), value);
	}

	inline static int32_t get_offset_of_attList_8() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___attList_8)); }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * get_attList_8() const { return ___attList_8; }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 ** get_address_of_attList_8() { return &___attList_8; }
	inline void set_attList_8(List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * value)
	{
		___attList_8 = value;
		Il2CppCodeGenWriteBarrier((&___attList_8), value);
	}

	inline static int32_t get_offset_of_equipList_9() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___equipList_9)); }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C * get_equipList_9() const { return ___equipList_9; }
	inline List_1_tE33393B445B8280160D222A3232DF1C02536A76C ** get_address_of_equipList_9() { return &___equipList_9; }
	inline void set_equipList_9(List_1_tE33393B445B8280160D222A3232DF1C02536A76C * value)
	{
		___equipList_9 = value;
		Il2CppCodeGenWriteBarrier((&___equipList_9), value);
	}

	inline static int32_t get_offset_of_stifleFabaoId_10() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___stifleFabaoId_10)); }
	inline int32_t get_stifleFabaoId_10() const { return ___stifleFabaoId_10; }
	inline int32_t* get_address_of_stifleFabaoId_10() { return &___stifleFabaoId_10; }
	inline void set_stifleFabaoId_10(int32_t value)
	{
		___stifleFabaoId_10 = value;
	}

	inline static int32_t get_offset_of_shiHaiCfgId_11() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___shiHaiCfgId_11)); }
	inline int32_t get_shiHaiCfgId_11() const { return ___shiHaiCfgId_11; }
	inline int32_t* get_address_of_shiHaiCfgId_11() { return &___shiHaiCfgId_11; }
	inline void set_shiHaiCfgId_11(int32_t value)
	{
		___shiHaiCfgId_11 = value;
	}

	inline static int32_t get_offset_of_xsLvl_12() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___xsLvl_12)); }
	inline int32_t get_xsLvl_12() const { return ___xsLvl_12; }
	inline int32_t* get_address_of_xsLvl_12() { return &___xsLvl_12; }
	inline void set_xsLvl_12(int32_t value)
	{
		___xsLvl_12 = value;
	}

	inline static int32_t get_offset_of_facade_13() { return static_cast<int32_t>(offsetof(ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63, ___facade_13)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_13() const { return ___facade_13; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_13() { return &___facade_13; }
	inline void set_facade_13(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_13 = value;
		Il2CppCodeGenWriteBarrier((&___facade_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESLOOKOTHERPLAYERRESULT_T308A44BDDF35DDD43CFA3150D37D8923D3A87F63_H
#ifndef RESMAINUIGUIDEID_T67242C699C1CD1566514F535D9FF14C6232A2875_H
#define RESMAINUIGUIDEID_T67242C699C1CD1566514F535D9FF14C6232A2875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResMainUIGuideID
struct  ResMainUIGuideID_t67242C699C1CD1566514F535D9FF14C6232A2875  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResMainUIGuideID::gid
	int32_t ___gid_1;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(ResMainUIGuideID_t67242C699C1CD1566514F535D9FF14C6232A2875, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAINUIGUIDEID_T67242C699C1CD1566514F535D9FF14C6232A2875_H
#ifndef RESMAXHPCHANGE_TB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A_H
#define RESMAXHPCHANGE_TB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResMaxHpChange
struct  ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.ResMaxHpChange::roleId
	int64_t ___roleId_1;
	// System.Int64 MSG_Player.ResMaxHpChange::maxHp
	int64_t ___maxHp_2;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A, ___roleId_1)); }
	inline int64_t get_roleId_1() const { return ___roleId_1; }
	inline int64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(int64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_maxHp_2() { return static_cast<int32_t>(offsetof(ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A, ___maxHp_2)); }
	inline int64_t get_maxHp_2() const { return ___maxHp_2; }
	inline int64_t* get_address_of_maxHp_2() { return &___maxHp_2; }
	inline void set_maxHp_2(int64_t value)
	{
		___maxHp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAXHPCHANGE_TB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A_H
#ifndef RESNEWGIFTLOG_T31D314E241C492BAB0EC525FD36BD997309AFCA1_H
#define RESNEWGIFTLOG_T31D314E241C492BAB0EC525FD36BD997309AFCA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResNewGiftLog
struct  ResNewGiftLog_t31D314E241C492BAB0EC525FD36BD997309AFCA1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Player.GiftLog> MSG_Player.ResNewGiftLog::log
	List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * ___log_1;

public:
	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(ResNewGiftLog_t31D314E241C492BAB0EC525FD36BD997309AFCA1, ___log_1)); }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * get_log_1() const { return ___log_1; }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB ** get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * value)
	{
		___log_1 = value;
		Il2CppCodeGenWriteBarrier((&___log_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESNEWGIFTLOG_T31D314E241C492BAB0EC525FD36BD997309AFCA1_H
#ifndef RESNOTUPLEVEL_TE7C07295E61F3569CCBD54E62FD9C70FC0D17DCB_H
#define RESNOTUPLEVEL_TE7C07295E61F3569CCBD54E62FD9C70FC0D17DCB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResNotUpLevel
struct  ResNotUpLevel_tE7C07295E61F3569CCBD54E62FD9C70FC0D17DCB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESNOTUPLEVEL_TE7C07295E61F3569CCBD54E62FD9C70FC0D17DCB_H
#ifndef RESOPENBLOODPANNEL_T8099696391974C9CA67FE54EA65E6D004A0F8C4B_H
#define RESOPENBLOODPANNEL_T8099696391974C9CA67FE54EA65E6D004A0F8C4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResOpenBloodPannel
struct  ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResOpenBloodPannel::order
	int32_t ___order_1;
	// System.Int32 MSG_Player.ResOpenBloodPannel::level
	int32_t ___level_2;

public:
	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B, ___level_2)); }
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
#endif // RESOPENBLOODPANNEL_T8099696391974C9CA67FE54EA65E6D004A0F8C4B_H
#ifndef RESOPENSERVERTIME_T43FA91F6F6E6CF658843AF2690CFCFC7274F9624_H
#define RESOPENSERVERTIME_T43FA91F6F6E6CF658843AF2690CFCFC7274F9624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResOpenServerTime
struct  ResOpenServerTime_t43FA91F6F6E6CF658843AF2690CFCFC7274F9624  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.ResOpenServerTime::time
	int64_t ___time_1;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ResOpenServerTime_t43FA91F6F6E6CF658843AF2690CFCFC7274F9624, ___time_1)); }
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
#endif // RESOPENSERVERTIME_T43FA91F6F6E6CF658843AF2690CFCFC7274F9624_H
#ifndef RESPEAKLEVELPANEL_TE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9_H
#define RESPEAKLEVELPANEL_TE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPeakLevelPanel
struct  ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Player.ResPeakLevelPanel::ids
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___ids_1;
	// System.Boolean MSG_Player.ResPeakLevelPanel::isChangeJob
	bool ___isChangeJob_2;
	// System.Boolean MSG_Player.ResPeakLevelPanel::isRed
	bool ___isRed_3;

public:
	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9, ___ids_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_ids_1() const { return ___ids_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((&___ids_1), value);
	}

	inline static int32_t get_offset_of_isChangeJob_2() { return static_cast<int32_t>(offsetof(ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9, ___isChangeJob_2)); }
	inline bool get_isChangeJob_2() const { return ___isChangeJob_2; }
	inline bool* get_address_of_isChangeJob_2() { return &___isChangeJob_2; }
	inline void set_isChangeJob_2(bool value)
	{
		___isChangeJob_2 = value;
	}

	inline static int32_t get_offset_of_isRed_3() { return static_cast<int32_t>(offsetof(ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9, ___isRed_3)); }
	inline bool get_isRed_3() const { return ___isRed_3; }
	inline bool* get_address_of_isRed_3() { return &___isRed_3; }
	inline void set_isRed_3(bool value)
	{
		___isRed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPEAKLEVELPANEL_TE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9_H
#ifndef RESPLAYERATTRIBUTECHANGE_T9E5CF01B773B43D225249BCBC58AD54A154B3E52_H
#define RESPLAYERATTRIBUTECHANGE_T9E5CF01B773B43D225249BCBC58AD54A154B3E52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerAttributeChange
struct  ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPlayerAttributeChange::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<MSG_Player.Attribute> MSG_Player.ResPlayerAttributeChange::changeList
	List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * ___changeList_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_changeList_2() { return static_cast<int32_t>(offsetof(ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52, ___changeList_2)); }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * get_changeList_2() const { return ___changeList_2; }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 ** get_address_of_changeList_2() { return &___changeList_2; }
	inline void set_changeList_2(List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * value)
	{
		___changeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___changeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERATTRIBUTECHANGE_T9E5CF01B773B43D225249BCBC58AD54A154B3E52_H
#ifndef RESPLAYERBASEINFO_T6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9_H
#define RESPLAYERBASEINFO_T6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerBaseInfo
struct  ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResPlayerBaseInfo::roleID
	uint64_t ___roleID_1;
	// System.UInt64 MSG_Player.ResPlayerBaseInfo::accountId
	uint64_t ___accountId_2;
	// System.String MSG_Player.ResPlayerBaseInfo::name
	String_t* ___name_3;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::pkMode
	int32_t ___pkMode_4;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::curTitle
	int32_t ___curTitle_5;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::vipLevel
	int32_t ___vipLevel_6;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::level
	int32_t ___level_7;
	// System.UInt64 MSG_Player.ResPlayerBaseInfo::exp
	uint64_t ___exp_8;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::occupation
	int32_t ___occupation_9;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::mountId
	int32_t ___mountId_10;
	// System.UInt64 MSG_Player.ResPlayerBaseInfo::guild
	uint64_t ___guild_11;
	// System.String MSG_Player.ResPlayerBaseInfo::guildName
	String_t* ___guildName_12;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::pos
	int32_t ___pos_13;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::mapID
	int32_t ___mapID_14;
	// System.Single MSG_Player.ResPlayerBaseInfo::posX
	float ___posX_15;
	// System.Single MSG_Player.ResPlayerBaseInfo::posY
	float ___posY_16;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::curHP
	int32_t ___curHP_17;
	// System.Int64 MSG_Player.ResPlayerBaseInfo::fightpower
	int64_t ___fightpower_18;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::languageType
	int32_t ___languageType_19;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::stateVip
	int32_t ___stateVip_20;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::camp
	int32_t ___camp_21;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::fabaoId
	int32_t ___fabaoId_22;
	// System.Int64 MSG_Player.ResPlayerBaseInfo::fabaoUid
	int64_t ___fabaoUid_23;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::soulSpirte1
	int32_t ___soulSpirte1_24;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::soulSpirte2
	int32_t ___soulSpirte2_25;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::soulSpirte3
	int32_t ___soulSpirte3_26;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::shiHaiCfgId
	int32_t ___shiHaiCfgId_27;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::serverId
	int32_t ___serverId_28;
	// System.Int64 MSG_Player.ResPlayerBaseInfo::vipExp
	int64_t ___vipExp_29;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::xsLvl
	int32_t ___xsLvl_30;
	// System.Int64 MSG_Player.ResPlayerBaseInfo::curWakan
	int64_t ___curWakan_31;
	// MSG_Common.FacadeAttribute MSG_Player.ResPlayerBaseInfo::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_32;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::feijianId
	int32_t ___feijianId_33;
	// System.Int64 MSG_Player.ResPlayerBaseInfo::feijianUid
	int64_t ___feijianUid_34;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::feijianMaxID
	int32_t ___feijianMaxID_35;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::genderClass
	int32_t ___genderClass_36;
	// System.Int32 MSG_Player.ResPlayerBaseInfo::childId
	int32_t ___childId_37;
	// MSG_Common.HeadAttribute MSG_Player.ResPlayerBaseInfo::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_38;
	// System.String MSG_Player.ResPlayerBaseInfo::childName
	String_t* ___childName_39;

public:
	inline static int32_t get_offset_of_roleID_1() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___roleID_1)); }
	inline uint64_t get_roleID_1() const { return ___roleID_1; }
	inline uint64_t* get_address_of_roleID_1() { return &___roleID_1; }
	inline void set_roleID_1(uint64_t value)
	{
		___roleID_1 = value;
	}

	inline static int32_t get_offset_of_accountId_2() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___accountId_2)); }
	inline uint64_t get_accountId_2() const { return ___accountId_2; }
	inline uint64_t* get_address_of_accountId_2() { return &___accountId_2; }
	inline void set_accountId_2(uint64_t value)
	{
		___accountId_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_pkMode_4() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___pkMode_4)); }
	inline int32_t get_pkMode_4() const { return ___pkMode_4; }
	inline int32_t* get_address_of_pkMode_4() { return &___pkMode_4; }
	inline void set_pkMode_4(int32_t value)
	{
		___pkMode_4 = value;
	}

	inline static int32_t get_offset_of_curTitle_5() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___curTitle_5)); }
	inline int32_t get_curTitle_5() const { return ___curTitle_5; }
	inline int32_t* get_address_of_curTitle_5() { return &___curTitle_5; }
	inline void set_curTitle_5(int32_t value)
	{
		___curTitle_5 = value;
	}

	inline static int32_t get_offset_of_vipLevel_6() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___vipLevel_6)); }
	inline int32_t get_vipLevel_6() const { return ___vipLevel_6; }
	inline int32_t* get_address_of_vipLevel_6() { return &___vipLevel_6; }
	inline void set_vipLevel_6(int32_t value)
	{
		___vipLevel_6 = value;
	}

	inline static int32_t get_offset_of_level_7() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___level_7)); }
	inline int32_t get_level_7() const { return ___level_7; }
	inline int32_t* get_address_of_level_7() { return &___level_7; }
	inline void set_level_7(int32_t value)
	{
		___level_7 = value;
	}

	inline static int32_t get_offset_of_exp_8() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___exp_8)); }
	inline uint64_t get_exp_8() const { return ___exp_8; }
	inline uint64_t* get_address_of_exp_8() { return &___exp_8; }
	inline void set_exp_8(uint64_t value)
	{
		___exp_8 = value;
	}

	inline static int32_t get_offset_of_occupation_9() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___occupation_9)); }
	inline int32_t get_occupation_9() const { return ___occupation_9; }
	inline int32_t* get_address_of_occupation_9() { return &___occupation_9; }
	inline void set_occupation_9(int32_t value)
	{
		___occupation_9 = value;
	}

	inline static int32_t get_offset_of_mountId_10() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___mountId_10)); }
	inline int32_t get_mountId_10() const { return ___mountId_10; }
	inline int32_t* get_address_of_mountId_10() { return &___mountId_10; }
	inline void set_mountId_10(int32_t value)
	{
		___mountId_10 = value;
	}

	inline static int32_t get_offset_of_guild_11() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___guild_11)); }
	inline uint64_t get_guild_11() const { return ___guild_11; }
	inline uint64_t* get_address_of_guild_11() { return &___guild_11; }
	inline void set_guild_11(uint64_t value)
	{
		___guild_11 = value;
	}

	inline static int32_t get_offset_of_guildName_12() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___guildName_12)); }
	inline String_t* get_guildName_12() const { return ___guildName_12; }
	inline String_t** get_address_of_guildName_12() { return &___guildName_12; }
	inline void set_guildName_12(String_t* value)
	{
		___guildName_12 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_12), value);
	}

	inline static int32_t get_offset_of_pos_13() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___pos_13)); }
	inline int32_t get_pos_13() const { return ___pos_13; }
	inline int32_t* get_address_of_pos_13() { return &___pos_13; }
	inline void set_pos_13(int32_t value)
	{
		___pos_13 = value;
	}

	inline static int32_t get_offset_of_mapID_14() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___mapID_14)); }
	inline int32_t get_mapID_14() const { return ___mapID_14; }
	inline int32_t* get_address_of_mapID_14() { return &___mapID_14; }
	inline void set_mapID_14(int32_t value)
	{
		___mapID_14 = value;
	}

	inline static int32_t get_offset_of_posX_15() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___posX_15)); }
	inline float get_posX_15() const { return ___posX_15; }
	inline float* get_address_of_posX_15() { return &___posX_15; }
	inline void set_posX_15(float value)
	{
		___posX_15 = value;
	}

	inline static int32_t get_offset_of_posY_16() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___posY_16)); }
	inline float get_posY_16() const { return ___posY_16; }
	inline float* get_address_of_posY_16() { return &___posY_16; }
	inline void set_posY_16(float value)
	{
		___posY_16 = value;
	}

	inline static int32_t get_offset_of_curHP_17() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___curHP_17)); }
	inline int32_t get_curHP_17() const { return ___curHP_17; }
	inline int32_t* get_address_of_curHP_17() { return &___curHP_17; }
	inline void set_curHP_17(int32_t value)
	{
		___curHP_17 = value;
	}

	inline static int32_t get_offset_of_fightpower_18() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___fightpower_18)); }
	inline int64_t get_fightpower_18() const { return ___fightpower_18; }
	inline int64_t* get_address_of_fightpower_18() { return &___fightpower_18; }
	inline void set_fightpower_18(int64_t value)
	{
		___fightpower_18 = value;
	}

	inline static int32_t get_offset_of_languageType_19() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___languageType_19)); }
	inline int32_t get_languageType_19() const { return ___languageType_19; }
	inline int32_t* get_address_of_languageType_19() { return &___languageType_19; }
	inline void set_languageType_19(int32_t value)
	{
		___languageType_19 = value;
	}

	inline static int32_t get_offset_of_stateVip_20() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___stateVip_20)); }
	inline int32_t get_stateVip_20() const { return ___stateVip_20; }
	inline int32_t* get_address_of_stateVip_20() { return &___stateVip_20; }
	inline void set_stateVip_20(int32_t value)
	{
		___stateVip_20 = value;
	}

	inline static int32_t get_offset_of_camp_21() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___camp_21)); }
	inline int32_t get_camp_21() const { return ___camp_21; }
	inline int32_t* get_address_of_camp_21() { return &___camp_21; }
	inline void set_camp_21(int32_t value)
	{
		___camp_21 = value;
	}

	inline static int32_t get_offset_of_fabaoId_22() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___fabaoId_22)); }
	inline int32_t get_fabaoId_22() const { return ___fabaoId_22; }
	inline int32_t* get_address_of_fabaoId_22() { return &___fabaoId_22; }
	inline void set_fabaoId_22(int32_t value)
	{
		___fabaoId_22 = value;
	}

	inline static int32_t get_offset_of_fabaoUid_23() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___fabaoUid_23)); }
	inline int64_t get_fabaoUid_23() const { return ___fabaoUid_23; }
	inline int64_t* get_address_of_fabaoUid_23() { return &___fabaoUid_23; }
	inline void set_fabaoUid_23(int64_t value)
	{
		___fabaoUid_23 = value;
	}

	inline static int32_t get_offset_of_soulSpirte1_24() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___soulSpirte1_24)); }
	inline int32_t get_soulSpirte1_24() const { return ___soulSpirte1_24; }
	inline int32_t* get_address_of_soulSpirte1_24() { return &___soulSpirte1_24; }
	inline void set_soulSpirte1_24(int32_t value)
	{
		___soulSpirte1_24 = value;
	}

	inline static int32_t get_offset_of_soulSpirte2_25() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___soulSpirte2_25)); }
	inline int32_t get_soulSpirte2_25() const { return ___soulSpirte2_25; }
	inline int32_t* get_address_of_soulSpirte2_25() { return &___soulSpirte2_25; }
	inline void set_soulSpirte2_25(int32_t value)
	{
		___soulSpirte2_25 = value;
	}

	inline static int32_t get_offset_of_soulSpirte3_26() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___soulSpirte3_26)); }
	inline int32_t get_soulSpirte3_26() const { return ___soulSpirte3_26; }
	inline int32_t* get_address_of_soulSpirte3_26() { return &___soulSpirte3_26; }
	inline void set_soulSpirte3_26(int32_t value)
	{
		___soulSpirte3_26 = value;
	}

	inline static int32_t get_offset_of_shiHaiCfgId_27() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___shiHaiCfgId_27)); }
	inline int32_t get_shiHaiCfgId_27() const { return ___shiHaiCfgId_27; }
	inline int32_t* get_address_of_shiHaiCfgId_27() { return &___shiHaiCfgId_27; }
	inline void set_shiHaiCfgId_27(int32_t value)
	{
		___shiHaiCfgId_27 = value;
	}

	inline static int32_t get_offset_of_serverId_28() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___serverId_28)); }
	inline int32_t get_serverId_28() const { return ___serverId_28; }
	inline int32_t* get_address_of_serverId_28() { return &___serverId_28; }
	inline void set_serverId_28(int32_t value)
	{
		___serverId_28 = value;
	}

	inline static int32_t get_offset_of_vipExp_29() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___vipExp_29)); }
	inline int64_t get_vipExp_29() const { return ___vipExp_29; }
	inline int64_t* get_address_of_vipExp_29() { return &___vipExp_29; }
	inline void set_vipExp_29(int64_t value)
	{
		___vipExp_29 = value;
	}

	inline static int32_t get_offset_of_xsLvl_30() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___xsLvl_30)); }
	inline int32_t get_xsLvl_30() const { return ___xsLvl_30; }
	inline int32_t* get_address_of_xsLvl_30() { return &___xsLvl_30; }
	inline void set_xsLvl_30(int32_t value)
	{
		___xsLvl_30 = value;
	}

	inline static int32_t get_offset_of_curWakan_31() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___curWakan_31)); }
	inline int64_t get_curWakan_31() const { return ___curWakan_31; }
	inline int64_t* get_address_of_curWakan_31() { return &___curWakan_31; }
	inline void set_curWakan_31(int64_t value)
	{
		___curWakan_31 = value;
	}

	inline static int32_t get_offset_of_facade_32() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___facade_32)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_32() const { return ___facade_32; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_32() { return &___facade_32; }
	inline void set_facade_32(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_32 = value;
		Il2CppCodeGenWriteBarrier((&___facade_32), value);
	}

	inline static int32_t get_offset_of_feijianId_33() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___feijianId_33)); }
	inline int32_t get_feijianId_33() const { return ___feijianId_33; }
	inline int32_t* get_address_of_feijianId_33() { return &___feijianId_33; }
	inline void set_feijianId_33(int32_t value)
	{
		___feijianId_33 = value;
	}

	inline static int32_t get_offset_of_feijianUid_34() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___feijianUid_34)); }
	inline int64_t get_feijianUid_34() const { return ___feijianUid_34; }
	inline int64_t* get_address_of_feijianUid_34() { return &___feijianUid_34; }
	inline void set_feijianUid_34(int64_t value)
	{
		___feijianUid_34 = value;
	}

	inline static int32_t get_offset_of_feijianMaxID_35() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___feijianMaxID_35)); }
	inline int32_t get_feijianMaxID_35() const { return ___feijianMaxID_35; }
	inline int32_t* get_address_of_feijianMaxID_35() { return &___feijianMaxID_35; }
	inline void set_feijianMaxID_35(int32_t value)
	{
		___feijianMaxID_35 = value;
	}

	inline static int32_t get_offset_of_genderClass_36() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___genderClass_36)); }
	inline int32_t get_genderClass_36() const { return ___genderClass_36; }
	inline int32_t* get_address_of_genderClass_36() { return &___genderClass_36; }
	inline void set_genderClass_36(int32_t value)
	{
		___genderClass_36 = value;
	}

	inline static int32_t get_offset_of_childId_37() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___childId_37)); }
	inline int32_t get_childId_37() const { return ___childId_37; }
	inline int32_t* get_address_of_childId_37() { return &___childId_37; }
	inline void set_childId_37(int32_t value)
	{
		___childId_37 = value;
	}

	inline static int32_t get_offset_of_head_38() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___head_38)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_38() const { return ___head_38; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_38() { return &___head_38; }
	inline void set_head_38(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_38 = value;
		Il2CppCodeGenWriteBarrier((&___head_38), value);
	}

	inline static int32_t get_offset_of_childName_39() { return static_cast<int32_t>(offsetof(ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9, ___childName_39)); }
	inline String_t* get_childName_39() const { return ___childName_39; }
	inline String_t** get_address_of_childName_39() { return &___childName_39; }
	inline void set_childName_39(String_t* value)
	{
		___childName_39 = value;
		Il2CppCodeGenWriteBarrier((&___childName_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERBASEINFO_T6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9_H
#ifndef RESPLAYERCAREERCHANGE_TCE3FC70CA4D57CA2B8252D792F02B5A6580C023D_H
#define RESPLAYERCAREERCHANGE_TCE3FC70CA4D57CA2B8252D792F02B5A6580C023D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerCareerChange
struct  ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPlayerCareerChange::careerNo
	int32_t ___careerNo_1;
	// System.Int64 MSG_Player.ResPlayerCareerChange::roleId
	int64_t ___roleId_2;
	// System.Int32 MSG_Player.ResPlayerCareerChange::state
	int32_t ___state_3;

public:
	inline static int32_t get_offset_of_careerNo_1() { return static_cast<int32_t>(offsetof(ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D, ___careerNo_1)); }
	inline int32_t get_careerNo_1() const { return ___careerNo_1; }
	inline int32_t* get_address_of_careerNo_1() { return &___careerNo_1; }
	inline void set_careerNo_1(int32_t value)
	{
		___careerNo_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D, ___roleId_2)); }
	inline int64_t get_roleId_2() const { return ___roleId_2; }
	inline int64_t* get_address_of_roleId_2() { return &___roleId_2; }
	inline void set_roleId_2(int64_t value)
	{
		___roleId_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D, ___state_3)); }
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
#endif // RESPLAYERCAREERCHANGE_TCE3FC70CA4D57CA2B8252D792F02B5A6580C023D_H
#ifndef RESPLAYERFIGHTPOINTCHANGE_TF7220E2532B61A4FB6DC67C888F1A11BE5769305_H
#define RESPLAYERFIGHTPOINTCHANGE_TF7220E2532B61A4FB6DC67C888F1A11BE5769305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerFightPointChange
struct  ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.ResPlayerFightPointChange::fightPoint
	int64_t ___fightPoint_1;
	// System.Int32 MSG_Player.ResPlayerFightPointChange::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_fightPoint_1() { return static_cast<int32_t>(offsetof(ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305, ___fightPoint_1)); }
	inline int64_t get_fightPoint_1() const { return ___fightPoint_1; }
	inline int64_t* get_address_of_fightPoint_1() { return &___fightPoint_1; }
	inline void set_fightPoint_1(int64_t value)
	{
		___fightPoint_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305, ___type_2)); }
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
#endif // RESPLAYERFIGHTPOINTCHANGE_TF7220E2532B61A4FB6DC67C888F1A11BE5769305_H
#ifndef RESPLAYERGENDERNOTICE_T253C8E0C687B86CB289E7E41808D90B4298637DE_H
#define RESPLAYERGENDERNOTICE_T253C8E0C687B86CB289E7E41808D90B4298637DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerGenderNotice
struct  ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.ResPlayerGenderNotice::playerId
	int64_t ___playerId_1;
	// System.Int32 MSG_Player.ResPlayerGenderNotice::genderLevel
	int32_t ___genderLevel_2;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE, ___playerId_1)); }
	inline int64_t get_playerId_1() const { return ___playerId_1; }
	inline int64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(int64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_genderLevel_2() { return static_cast<int32_t>(offsetof(ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE, ___genderLevel_2)); }
	inline int32_t get_genderLevel_2() const { return ___genderLevel_2; }
	inline int32_t* get_address_of_genderLevel_2() { return &___genderLevel_2; }
	inline void set_genderLevel_2(int32_t value)
	{
		___genderLevel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERGENDERNOTICE_T253C8E0C687B86CB289E7E41808D90B4298637DE_H
#ifndef RESPLAYERONLINEATTRIBUTE_T637EA157F902A46D68CCFA288A9A10150D90CF4C_H
#define RESPLAYERONLINEATTRIBUTE_T637EA157F902A46D68CCFA288A9A10150D90CF4C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerOnLineAttribute
struct  ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Player.Attribute> MSG_Player.ResPlayerOnLineAttribute::attributeList
	List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * ___attributeList_1;
	// System.UInt64 MSG_Player.ResPlayerOnLineAttribute::maxHp
	uint64_t ___maxHp_2;

public:
	inline static int32_t get_offset_of_attributeList_1() { return static_cast<int32_t>(offsetof(ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C, ___attributeList_1)); }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * get_attributeList_1() const { return ___attributeList_1; }
	inline List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 ** get_address_of_attributeList_1() { return &___attributeList_1; }
	inline void set_attributeList_1(List_1_tA237338A3BEDB4D4F906C71B8DE13AA0C45C0298 * value)
	{
		___attributeList_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeList_1), value);
	}

	inline static int32_t get_offset_of_maxHp_2() { return static_cast<int32_t>(offsetof(ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C, ___maxHp_2)); }
	inline uint64_t get_maxHp_2() const { return ___maxHp_2; }
	inline uint64_t* get_address_of_maxHp_2() { return &___maxHp_2; }
	inline void set_maxHp_2(uint64_t value)
	{
		___maxHp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERONLINEATTRIBUTE_T637EA157F902A46D68CCFA288A9A10150D90CF4C_H
#ifndef RESPLAYERSETTINGCUSTOMHEADRESULT_TCB17A9F225A22BFC1BD800CF775541B25638CCB8_H
#define RESPLAYERSETTINGCUSTOMHEADRESULT_TCB17A9F225A22BFC1BD800CF775541B25638CCB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerSettingCustomHeadResult
struct  ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8  : public RuntimeObject
{
public:
	// System.Boolean MSG_Player.ResPlayerSettingCustomHeadResult::isSuccess
	bool ___isSuccess_1;
	// System.Int64 MSG_Player.ResPlayerSettingCustomHeadResult::roleId
	int64_t ___roleId_2;
	// MSG_Common.HeadAttribute MSG_Player.ResPlayerSettingCustomHeadResult::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_3;

public:
	inline static int32_t get_offset_of_isSuccess_1() { return static_cast<int32_t>(offsetof(ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8, ___isSuccess_1)); }
	inline bool get_isSuccess_1() const { return ___isSuccess_1; }
	inline bool* get_address_of_isSuccess_1() { return &___isSuccess_1; }
	inline void set_isSuccess_1(bool value)
	{
		___isSuccess_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8, ___roleId_2)); }
	inline int64_t get_roleId_2() const { return ___roleId_2; }
	inline int64_t* get_address_of_roleId_2() { return &___roleId_2; }
	inline void set_roleId_2(int64_t value)
	{
		___roleId_2 = value;
	}

	inline static int32_t get_offset_of_head_3() { return static_cast<int32_t>(offsetof(ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8, ___head_3)); }
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
#endif // RESPLAYERSETTINGCUSTOMHEADRESULT_TCB17A9F225A22BFC1BD800CF775541B25638CCB8_H
#ifndef RESPLAYERSUMMARYINFO_T970AFA6D3E7BD760E72668A5C6121150DDEBEF39_H
#define RESPLAYERSUMMARYINFO_T970AFA6D3E7BD760E72668A5C6121150DDEBEF39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerSummaryInfo
struct  ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResPlayerSummaryInfo::roleId
	uint64_t ___roleId_1;
	// System.String MSG_Player.ResPlayerSummaryInfo::roleName
	String_t* ___roleName_2;
	// System.Int32 MSG_Player.ResPlayerSummaryInfo::roleLv
	int32_t ___roleLv_3;
	// System.Int32 MSG_Player.ResPlayerSummaryInfo::career
	int32_t ___career_4;
	// System.Int64 MSG_Player.ResPlayerSummaryInfo::fightpower
	int64_t ___fightpower_5;
	// System.String MSG_Player.ResPlayerSummaryInfo::guildName
	String_t* ___guildName_6;
	// System.Int32 MSG_Player.ResPlayerSummaryInfo::serverId
	int32_t ___serverId_7;
	// MSG_Common.FacadeAttribute MSG_Player.ResPlayerSummaryInfo::facade
	FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * ___facade_8;
	// MSG_Common.HeadAttribute MSG_Player.ResPlayerSummaryInfo::head
	HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * ___head_9;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_roleName_2() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___roleName_2)); }
	inline String_t* get_roleName_2() const { return ___roleName_2; }
	inline String_t** get_address_of_roleName_2() { return &___roleName_2; }
	inline void set_roleName_2(String_t* value)
	{
		___roleName_2 = value;
		Il2CppCodeGenWriteBarrier((&___roleName_2), value);
	}

	inline static int32_t get_offset_of_roleLv_3() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___roleLv_3)); }
	inline int32_t get_roleLv_3() const { return ___roleLv_3; }
	inline int32_t* get_address_of_roleLv_3() { return &___roleLv_3; }
	inline void set_roleLv_3(int32_t value)
	{
		___roleLv_3 = value;
	}

	inline static int32_t get_offset_of_career_4() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___career_4)); }
	inline int32_t get_career_4() const { return ___career_4; }
	inline int32_t* get_address_of_career_4() { return &___career_4; }
	inline void set_career_4(int32_t value)
	{
		___career_4 = value;
	}

	inline static int32_t get_offset_of_fightpower_5() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___fightpower_5)); }
	inline int64_t get_fightpower_5() const { return ___fightpower_5; }
	inline int64_t* get_address_of_fightpower_5() { return &___fightpower_5; }
	inline void set_fightpower_5(int64_t value)
	{
		___fightpower_5 = value;
	}

	inline static int32_t get_offset_of_guildName_6() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___guildName_6)); }
	inline String_t* get_guildName_6() const { return ___guildName_6; }
	inline String_t** get_address_of_guildName_6() { return &___guildName_6; }
	inline void set_guildName_6(String_t* value)
	{
		___guildName_6 = value;
		Il2CppCodeGenWriteBarrier((&___guildName_6), value);
	}

	inline static int32_t get_offset_of_serverId_7() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___serverId_7)); }
	inline int32_t get_serverId_7() const { return ___serverId_7; }
	inline int32_t* get_address_of_serverId_7() { return &___serverId_7; }
	inline void set_serverId_7(int32_t value)
	{
		___serverId_7 = value;
	}

	inline static int32_t get_offset_of_facade_8() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___facade_8)); }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * get_facade_8() const { return ___facade_8; }
	inline FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 ** get_address_of_facade_8() { return &___facade_8; }
	inline void set_facade_8(FacadeAttribute_t7B6283AED231E73174B1BDB65C4DC7AF419DDDB3 * value)
	{
		___facade_8 = value;
		Il2CppCodeGenWriteBarrier((&___facade_8), value);
	}

	inline static int32_t get_offset_of_head_9() { return static_cast<int32_t>(offsetof(ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39, ___head_9)); }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * get_head_9() const { return ___head_9; }
	inline HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 ** get_address_of_head_9() { return &___head_9; }
	inline void set_head_9(HeadAttribute_t1E3B73B6D92CE0D700AC8EF969F7B1F2DE964176 * value)
	{
		___head_9 = value;
		Il2CppCodeGenWriteBarrier((&___head_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERSUMMARYINFO_T970AFA6D3E7BD760E72668A5C6121150DDEBEF39_H
#ifndef RESPLAYERTODAYDATA_T6EA9ACB9A1E8BC644E94CDBAE9765849437FD409_H
#define RESPLAYERTODAYDATA_T6EA9ACB9A1E8BC644E94CDBAE9765849437FD409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPlayerTodayData
struct  ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPlayerTodayData::continuousDays
	int32_t ___continuousDays_1;
	// System.Int32 MSG_Player.ResPlayerTodayData::accumOnlineDays
	int32_t ___accumOnlineDays_2;

public:
	inline static int32_t get_offset_of_continuousDays_1() { return static_cast<int32_t>(offsetof(ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409, ___continuousDays_1)); }
	inline int32_t get_continuousDays_1() const { return ___continuousDays_1; }
	inline int32_t* get_address_of_continuousDays_1() { return &___continuousDays_1; }
	inline void set_continuousDays_1(int32_t value)
	{
		___continuousDays_1 = value;
	}

	inline static int32_t get_offset_of_accumOnlineDays_2() { return static_cast<int32_t>(offsetof(ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409, ___accumOnlineDays_2)); }
	inline int32_t get_accumOnlineDays_2() const { return ___accumOnlineDays_2; }
	inline int32_t* get_address_of_accumOnlineDays_2() { return &___accumOnlineDays_2; }
	inline void set_accumOnlineDays_2(int32_t value)
	{
		___accumOnlineDays_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERTODAYDATA_T6EA9ACB9A1E8BC644E94CDBAE9765849437FD409_H
#ifndef RESPRACTICEGETRESULT_T4C6CF6722A2B92AEBD5841A6845EBADD736A4B68_H
#define RESPRACTICEGETRESULT_T4C6CF6722A2B92AEBD5841A6845EBADD736A4B68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPracticeGetResult
struct  ResPracticeGetResult_t4C6CF6722A2B92AEBD5841A6845EBADD736A4B68  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPracticeGetResult::result
	int32_t ___result_1;

public:
	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(ResPracticeGetResult_t4C6CF6722A2B92AEBD5841A6845EBADD736A4B68, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPRACTICEGETRESULT_T4C6CF6722A2B92AEBD5841A6845EBADD736A4B68_H
#ifndef RESPRACTICEINFO_TF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16_H
#define RESPRACTICEINFO_TF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPracticeInfo
struct  ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPracticeInfo::time
	int32_t ___time_1;
	// System.Int32 MSG_Player.ResPracticeInfo::getExp
	int32_t ___getExp_2;
	// System.Int32 MSG_Player.ResPracticeInfo::getZhenQi
	int32_t ___getZhenQi_3;
	// System.Boolean MSG_Player.ResPracticeInfo::state
	bool ___state_4;

public:
	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16, ___time_1)); }
	inline int32_t get_time_1() const { return ___time_1; }
	inline int32_t* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(int32_t value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_getExp_2() { return static_cast<int32_t>(offsetof(ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16, ___getExp_2)); }
	inline int32_t get_getExp_2() const { return ___getExp_2; }
	inline int32_t* get_address_of_getExp_2() { return &___getExp_2; }
	inline void set_getExp_2(int32_t value)
	{
		___getExp_2 = value;
	}

	inline static int32_t get_offset_of_getZhenQi_3() { return static_cast<int32_t>(offsetof(ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16, ___getZhenQi_3)); }
	inline int32_t get_getZhenQi_3() const { return ___getZhenQi_3; }
	inline int32_t* get_address_of_getZhenQi_3() { return &___getZhenQi_3; }
	inline void set_getZhenQi_3(int32_t value)
	{
		___getZhenQi_3 = value;
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16, ___state_4)); }
	inline bool get_state_4() const { return ___state_4; }
	inline bool* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(bool value)
	{
		___state_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPRACTICEINFO_TF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16_H
#ifndef RESPRACTICESETDO_T5C4FAE02015D9B6B2CB5F4462565FD8A418645DE_H
#define RESPRACTICESETDO_T5C4FAE02015D9B6B2CB5F4462565FD8A418645DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResPracticeSetDo
struct  ResPracticeSetDo_t5C4FAE02015D9B6B2CB5F4462565FD8A418645DE  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResPracticeSetDo::result
	int32_t ___result_1;

public:
	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(ResPracticeSetDo_t5C4FAE02015D9B6B2CB5F4462565FD8A418645DE, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPRACTICESETDO_T5C4FAE02015D9B6B2CB5F4462565FD8A418645DE_H
#ifndef RESREADGIFTLOG_T22192FB78B994D7E6D493F0D7F839D84712930C9_H
#define RESREADGIFTLOG_T22192FB78B994D7E6D493F0D7F839D84712930C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResReadGiftLog
struct  ResReadGiftLog_t22192FB78B994D7E6D493F0D7F839D84712930C9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int64> MSG_Player.ResReadGiftLog::ids
	List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * ___ids_1;

public:
	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(ResReadGiftLog_t22192FB78B994D7E6D493F0D7F839D84712930C9, ___ids_1)); }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * get_ids_1() const { return ___ids_1; }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D ** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier((&___ids_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESREADGIFTLOG_T22192FB78B994D7E6D493F0D7F839D84712930C9_H
#ifndef RESSENDGIFT_T4B828BC10539032499958B7A4F033354BF860C17_H
#define RESSENDGIFT_T4B828BC10539032499958B7A4F033354BF860C17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResSendGift
struct  ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResSendGift::result
	int32_t ___result_1;
	// System.Collections.Generic.List`1<MSG_Player.GiftLog> MSG_Player.ResSendGift::log
	List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * ___log_2;

public:
	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_log_2() { return static_cast<int32_t>(offsetof(ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17, ___log_2)); }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * get_log_2() const { return ___log_2; }
	inline List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB ** get_address_of_log_2() { return &___log_2; }
	inline void set_log_2(List_1_tB0D4647AF7A55AB5AF5DF905AB072835CBC8B0EB * value)
	{
		___log_2 = value;
		Il2CppCodeGenWriteBarrier((&___log_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSENDGIFT_T4B828BC10539032499958B7A4F033354BF860C17_H
#ifndef RESUPDATAEXPRATE_TC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE_H
#define RESUPDATAEXPRATE_TC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResUpdataExpRate
struct  ResUpdataExpRate_tC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE  : public RuntimeObject
{
public:
	// System.Single MSG_Player.ResUpdataExpRate::expRate
	float ___expRate_1;

public:
	inline static int32_t get_offset_of_expRate_1() { return static_cast<int32_t>(offsetof(ResUpdataExpRate_tC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE, ___expRate_1)); }
	inline float get_expRate_1() const { return ___expRate_1; }
	inline float* get_address_of_expRate_1() { return &___expRate_1; }
	inline void set_expRate_1(float value)
	{
		___expRate_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATAEXPRATE_TC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE_H
#ifndef RESUPDATAPKSTATERESULT_T34619CDAC44E7A9046EB42FA5C89CA03A26B05FA_H
#define RESUPDATAPKSTATERESULT_T34619CDAC44E7A9046EB42FA5C89CA03A26B05FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResUpdataPkStateResult
struct  ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResUpdataPkStateResult::curPkState
	int32_t ___curPkState_1;
	// System.Int32 MSG_Player.ResUpdataPkStateResult::reason
	int32_t ___reason_2;
	// System.Boolean MSG_Player.ResUpdataPkStateResult::notice
	bool ___notice_3;

public:
	inline static int32_t get_offset_of_curPkState_1() { return static_cast<int32_t>(offsetof(ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA, ___curPkState_1)); }
	inline int32_t get_curPkState_1() const { return ___curPkState_1; }
	inline int32_t* get_address_of_curPkState_1() { return &___curPkState_1; }
	inline void set_curPkState_1(int32_t value)
	{
		___curPkState_1 = value;
	}

	inline static int32_t get_offset_of_reason_2() { return static_cast<int32_t>(offsetof(ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA, ___reason_2)); }
	inline int32_t get_reason_2() const { return ___reason_2; }
	inline int32_t* get_address_of_reason_2() { return &___reason_2; }
	inline void set_reason_2(int32_t value)
	{
		___reason_2 = value;
	}

	inline static int32_t get_offset_of_notice_3() { return static_cast<int32_t>(offsetof(ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA, ___notice_3)); }
	inline bool get_notice_3() const { return ___notice_3; }
	inline bool* get_address_of_notice_3() { return &___notice_3; }
	inline void set_notice_3(bool value)
	{
		___notice_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATAPKSTATERESULT_T34619CDAC44E7A9046EB42FA5C89CA03A26B05FA_H
#ifndef RESUPDATAPKVALUE_T79B68CADBAB488D1096F2415FFC48A38441D2788_H
#define RESUPDATAPKVALUE_T79B68CADBAB488D1096F2415FFC48A38441D2788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResUpdataPkValue
struct  ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Player.ResUpdataPkValue::playerId
	uint64_t ___playerId_1;
	// System.Int32 MSG_Player.ResUpdataPkValue::pkValue
	int32_t ___pkValue_2;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_pkValue_2() { return static_cast<int32_t>(offsetof(ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788, ___pkValue_2)); }
	inline int32_t get_pkValue_2() const { return ___pkValue_2; }
	inline int32_t* get_address_of_pkValue_2() { return &___pkValue_2; }
	inline void set_pkValue_2(int32_t value)
	{
		___pkValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATAPKVALUE_T79B68CADBAB488D1096F2415FFC48A38441D2788_H
#ifndef RESUPGRADEBLOOD_T5D296B6DC95685F4C01664972F06EC41FE58BFDE_H
#define RESUPGRADEBLOOD_T5D296B6DC95685F4C01664972F06EC41FE58BFDE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.ResUpgradeBlood
struct  ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE  : public RuntimeObject
{
public:
	// System.Int32 MSG_Player.ResUpgradeBlood::state
	int32_t ___state_1;
	// System.String MSG_Player.ResUpgradeBlood::nextKey
	String_t* ___nextKey_2;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_nextKey_2() { return static_cast<int32_t>(offsetof(ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE, ___nextKey_2)); }
	inline String_t* get_nextKey_2() const { return ___nextKey_2; }
	inline String_t** get_address_of_nextKey_2() { return &___nextKey_2; }
	inline void set_nextKey_2(String_t* value)
	{
		___nextKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___nextKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPGRADEBLOOD_T5D296B6DC95685F4C01664972F06EC41FE58BFDE_H
#ifndef SYNCXISUIDATA_TD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8_H
#define SYNCXISUIDATA_TD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Player.SyncXiSuiData
struct  SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8  : public RuntimeObject
{
public:
	// System.Int64 MSG_Player.SyncXiSuiData::roleID
	int64_t ___roleID_1;
	// System.Int32 MSG_Player.SyncXiSuiData::xsLvl
	int32_t ___xsLvl_2;

public:
	inline static int32_t get_offset_of_roleID_1() { return static_cast<int32_t>(offsetof(SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8, ___roleID_1)); }
	inline int64_t get_roleID_1() const { return ___roleID_1; }
	inline int64_t* get_address_of_roleID_1() { return &___roleID_1; }
	inline void set_roleID_1(int64_t value)
	{
		___roleID_1 = value;
	}

	inline static int32_t get_offset_of_xsLvl_2() { return static_cast<int32_t>(offsetof(SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8, ___xsLvl_2)); }
	inline int32_t get_xsLvl_2() const { return ___xsLvl_2; }
	inline int32_t* get_address_of_xsLvl_2() { return &___xsLvl_2; }
	inline void set_xsLvl_2(int32_t value)
	{
		___xsLvl_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCXISUIDATA_TD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8_H
#ifndef REQOPENPRAYPANEL_T2078415A3B7AE3CAEF9FCA305D8A8375725E9FD6_H
#define REQOPENPRAYPANEL_T2078415A3B7AE3CAEF9FCA305D8A8375725E9FD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ReqOpenPrayPanel
struct  ReqOpenPrayPanel_t2078415A3B7AE3CAEF9FCA305D8A8375725E9FD6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQOPENPRAYPANEL_T2078415A3B7AE3CAEF9FCA305D8A8375725E9FD6_H
#ifndef REQPRAY_TC53717AFE4A42249EBDFACD682AF552EEDDBB780_H
#define REQPRAY_TC53717AFE4A42249EBDFACD682AF552EEDDBB780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ReqPray
struct  ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pray.ReqPray::prayType
	int32_t ___prayType_1;
	// System.Boolean MSG_Pray.ReqPray::free
	bool ___free_2;

public:
	inline static int32_t get_offset_of_prayType_1() { return static_cast<int32_t>(offsetof(ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780, ___prayType_1)); }
	inline int32_t get_prayType_1() const { return ___prayType_1; }
	inline int32_t* get_address_of_prayType_1() { return &___prayType_1; }
	inline void set_prayType_1(int32_t value)
	{
		___prayType_1 = value;
	}

	inline static int32_t get_offset_of_free_2() { return static_cast<int32_t>(offsetof(ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780, ___free_2)); }
	inline bool get_free_2() const { return ___free_2; }
	inline bool* get_address_of_free_2() { return &___free_2; }
	inline void set_free_2(bool value)
	{
		___free_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPRAY_TC53717AFE4A42249EBDFACD682AF552EEDDBB780_H
#ifndef RESPRAYFAILED_T5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F_H
#define RESPRAYFAILED_T5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ResPrayFailed
struct  ResPrayFailed_t5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pray.ResPrayFailed::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPrayFailed_t5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F, ___reason_1)); }
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
#endif // RESPRAYFAILED_T5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F_H
#ifndef RESPRAYSUCCESS_TDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB_H
#define RESPRAYSUCCESS_TDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ResPraySuccess
struct  ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pray.ResPraySuccess::prayType
	int32_t ___prayType_1;
	// System.Boolean MSG_Pray.ResPraySuccess::isDouble
	bool ___isDouble_2;
	// System.Int32 MSG_Pray.ResPraySuccess::prayNum
	int32_t ___prayNum_3;

public:
	inline static int32_t get_offset_of_prayType_1() { return static_cast<int32_t>(offsetof(ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB, ___prayType_1)); }
	inline int32_t get_prayType_1() const { return ___prayType_1; }
	inline int32_t* get_address_of_prayType_1() { return &___prayType_1; }
	inline void set_prayType_1(int32_t value)
	{
		___prayType_1 = value;
	}

	inline static int32_t get_offset_of_isDouble_2() { return static_cast<int32_t>(offsetof(ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB, ___isDouble_2)); }
	inline bool get_isDouble_2() const { return ___isDouble_2; }
	inline bool* get_address_of_isDouble_2() { return &___isDouble_2; }
	inline void set_isDouble_2(bool value)
	{
		___isDouble_2 = value;
	}

	inline static int32_t get_offset_of_prayNum_3() { return static_cast<int32_t>(offsetof(ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB, ___prayNum_3)); }
	inline int32_t get_prayNum_3() const { return ___prayNum_3; }
	inline int32_t* get_address_of_prayNum_3() { return &___prayNum_3; }
	inline void set_prayNum_3(int32_t value)
	{
		___prayNum_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPRAYSUCCESS_TDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB_H
#ifndef RESPRAYTICK_TDBF0B57253DF6941E0CBD33082EB8D2C88CC75DE_H
#define RESPRAYTICK_TDBF0B57253DF6941E0CBD33082EB8D2C88CC75DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ResPrayTick
struct  ResPrayTick_tDBF0B57253DF6941E0CBD33082EB8D2C88CC75DE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPRAYTICK_TDBF0B57253DF6941E0CBD33082EB8D2C88CC75DE_H
#ifndef RESSYNCPRAYINFO_T1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF_H
#define RESSYNCPRAYINFO_T1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Pray.ResSyncPrayInfo
struct  ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF  : public RuntimeObject
{
public:
	// System.Int32 MSG_Pray.ResSyncPrayInfo::prayMoneyNum
	int32_t ___prayMoneyNum_1;
	// System.Int32 MSG_Pray.ResSyncPrayInfo::prayExpNum
	int32_t ___prayExpNum_2;
	// System.Int32 MSG_Pray.ResSyncPrayInfo::freePrayMoneyTime
	int32_t ___freePrayMoneyTime_3;

public:
	inline static int32_t get_offset_of_prayMoneyNum_1() { return static_cast<int32_t>(offsetof(ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF, ___prayMoneyNum_1)); }
	inline int32_t get_prayMoneyNum_1() const { return ___prayMoneyNum_1; }
	inline int32_t* get_address_of_prayMoneyNum_1() { return &___prayMoneyNum_1; }
	inline void set_prayMoneyNum_1(int32_t value)
	{
		___prayMoneyNum_1 = value;
	}

	inline static int32_t get_offset_of_prayExpNum_2() { return static_cast<int32_t>(offsetof(ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF, ___prayExpNum_2)); }
	inline int32_t get_prayExpNum_2() const { return ___prayExpNum_2; }
	inline int32_t* get_address_of_prayExpNum_2() { return &___prayExpNum_2; }
	inline void set_prayExpNum_2(int32_t value)
	{
		___prayExpNum_2 = value;
	}

	inline static int32_t get_offset_of_freePrayMoneyTime_3() { return static_cast<int32_t>(offsetof(ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF, ___freePrayMoneyTime_3)); }
	inline int32_t get_freePrayMoneyTime_3() const { return ___freePrayMoneyTime_3; }
	inline int32_t* get_address_of_freePrayMoneyTime_3() { return &___freePrayMoneyTime_3; }
	inline void set_freePrayMoneyTime_3(int32_t value)
	{
		___freePrayMoneyTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYNCPRAYINFO_T1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF_H
#ifndef ANWSERRESULT_TC07A1675FE27C7489DD65C523F15C7C48DBEAAE4_H
#define ANWSERRESULT_TC07A1675FE27C7489DD65C523F15C7C48DBEAAE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.Anwserresult
struct  Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Question.Anwserresult::id
	uint64_t ___id_0;
	// System.String MSG_Question.Anwserresult::name
	String_t* ___name_1;
	// System.Int32 MSG_Question.Anwserresult::index
	int32_t ___index_2;
	// System.String MSG_Question.Anwserresult::desc
	String_t* ___desc_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4, ___id_0)); }
	inline uint64_t get_id_0() const { return ___id_0; }
	inline uint64_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint64_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_desc_3() { return static_cast<int32_t>(offsetof(Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4, ___desc_3)); }
	inline String_t* get_desc_3() const { return ___desc_3; }
	inline String_t** get_address_of_desc_3() { return &___desc_3; }
	inline void set_desc_3(String_t* value)
	{
		___desc_3 = value;
		Il2CppCodeGenWriteBarrier((&___desc_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANWSERRESULT_TC07A1675FE27C7489DD65C523F15C7C48DBEAAE4_H
#ifndef KV_T90BC3CEA8AA073D9FC28D4520FA02C20194128B1_H
#define KV_T90BC3CEA8AA073D9FC28D4520FA02C20194128B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.KV
struct  KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.KV::K
	int32_t ___K_0;
	// System.Int32 MSG_Question.KV::V
	int32_t ___V_1;

public:
	inline static int32_t get_offset_of_K_0() { return static_cast<int32_t>(offsetof(KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1, ___K_0)); }
	inline int32_t get_K_0() const { return ___K_0; }
	inline int32_t* get_address_of_K_0() { return &___K_0; }
	inline void set_K_0(int32_t value)
	{
		___K_0 = value;
	}

	inline static int32_t get_offset_of_V_1() { return static_cast<int32_t>(offsetof(KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1, ___V_1)); }
	inline int32_t get_V_1() const { return ___V_1; }
	inline int32_t* get_address_of_V_1() { return &___V_1; }
	inline void set_V_1(int32_t value)
	{
		___V_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KV_T90BC3CEA8AA073D9FC28D4520FA02C20194128B1_H
#ifndef REQPLAYERANSWER_T99672C5DB5247FCF4B25C700465B4D82EC79A00B_H
#define REQPLAYERANSWER_T99672C5DB5247FCF4B25C700465B4D82EC79A00B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ReqPlayerAnswer
struct  ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Question.ReqPlayerAnswer::id
	uint64_t ___id_1;
	// System.Int32 MSG_Question.ReqPlayerAnswer::index
	int32_t ___index_2;
	// System.Int32 MSG_Question.ReqPlayerAnswer::appraise
	int32_t ___appraise_3;
	// System.Int32 MSG_Question.ReqPlayerAnswer::exceptional
	int32_t ___exceptional_4;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_appraise_3() { return static_cast<int32_t>(offsetof(ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B, ___appraise_3)); }
	inline int32_t get_appraise_3() const { return ___appraise_3; }
	inline int32_t* get_address_of_appraise_3() { return &___appraise_3; }
	inline void set_appraise_3(int32_t value)
	{
		___appraise_3 = value;
	}

	inline static int32_t get_offset_of_exceptional_4() { return static_cast<int32_t>(offsetof(ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B, ___exceptional_4)); }
	inline int32_t get_exceptional_4() const { return ___exceptional_4; }
	inline int32_t* get_address_of_exceptional_4() { return &___exceptional_4; }
	inline void set_exceptional_4(int32_t value)
	{
		___exceptional_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERANSWER_T99672C5DB5247FCF4B25C700465B4D82EC79A00B_H
#ifndef REQPLAYERQUESTIONSCOUNT_TED8ABF9337568B1B38A4BC9E214D6B5D341042F7_H
#define REQPLAYERQUESTIONSCOUNT_TED8ABF9337568B1B38A4BC9E214D6B5D341042F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ReqPlayerQuestionsCount
struct  ReqPlayerQuestionsCount_tED8ABF9337568B1B38A4BC9E214D6B5D341042F7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERQUESTIONSCOUNT_TED8ABF9337568B1B38A4BC9E214D6B5D341042F7_H
#ifndef REQPLAYERSENDQUESTION_T756FCA3E1FE46850910D15D6737AB2C247E57432_H
#define REQPLAYERSENDQUESTION_T756FCA3E1FE46850910D15D6737AB2C247E57432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ReqPlayerSendQuestion
struct  ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432  : public RuntimeObject
{
public:
	// System.String MSG_Question.ReqPlayerSendQuestion::title
	String_t* ___title_1;
	// System.Collections.Generic.List`1<System.String> MSG_Question.ReqPlayerSendQuestion::options
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___options_2;
	// System.Int32 MSG_Question.ReqPlayerSendQuestion::right
	int32_t ___right_3;

public:
	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((&___title_1), value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432, ___options_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_options_2() const { return ___options_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((&___options_2), value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432, ___right_3)); }
	inline int32_t get_right_3() const { return ___right_3; }
	inline int32_t* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(int32_t value)
	{
		___right_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPLAYERSENDQUESTION_T756FCA3E1FE46850910D15D6737AB2C247E57432_H
#ifndef REQSYSTEMQUESTION_TA84575C5A6902BB6660EA4B9106882F320EA8C47_H
#define REQSYSTEMQUESTION_TA84575C5A6902BB6660EA4B9106882F320EA8C47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ReqSystemQuestion
struct  ReqSystemQuestion_tA84575C5A6902BB6660EA4B9106882F320EA8C47  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSYSTEMQUESTION_TA84575C5A6902BB6660EA4B9106882F320EA8C47_H
#ifndef RESALLPLAYERANSWER_TEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75_H
#define RESALLPLAYERANSWER_TEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResAllPlayerAnswer
struct  ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75  : public RuntimeObject
{
public:
	// System.String MSG_Question.ResAllPlayerAnswer::name
	String_t* ___name_1;
	// System.Int32 MSG_Question.ResAllPlayerAnswer::count
	int32_t ___count_2;
	// System.String MSG_Question.ResAllPlayerAnswer::right
	String_t* ___right_3;
	// System.Collections.Generic.List`1<System.Int32> MSG_Question.ResAllPlayerAnswer::appraise
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___appraise_4;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75, ___right_3)); }
	inline String_t* get_right_3() const { return ___right_3; }
	inline String_t** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(String_t* value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((&___right_3), value);
	}

	inline static int32_t get_offset_of_appraise_4() { return static_cast<int32_t>(offsetof(ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75, ___appraise_4)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_appraise_4() const { return ___appraise_4; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_appraise_4() { return &___appraise_4; }
	inline void set_appraise_4(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___appraise_4 = value;
		Il2CppCodeGenWriteBarrier((&___appraise_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESALLPLAYERANSWER_TEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75_H
#ifndef RESANSWERLIST_TBFA544C4272958B53452C0E40FDB6C6722DAF227_H
#define RESANSWERLIST_TBFA544C4272958B53452C0E40FDB6C6722DAF227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResAnswerList
struct  ResAnswerList_tBFA544C4272958B53452C0E40FDB6C6722DAF227  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Question.Anwserresult> MSG_Question.ResAnswerList::res
	List_1_tFB5E0F46361DD062B5880AE0479B6683ABF331A1 * ___res_1;

public:
	inline static int32_t get_offset_of_res_1() { return static_cast<int32_t>(offsetof(ResAnswerList_tBFA544C4272958B53452C0E40FDB6C6722DAF227, ___res_1)); }
	inline List_1_tFB5E0F46361DD062B5880AE0479B6683ABF331A1 * get_res_1() const { return ___res_1; }
	inline List_1_tFB5E0F46361DD062B5880AE0479B6683ABF331A1 ** get_address_of_res_1() { return &___res_1; }
	inline void set_res_1(List_1_tFB5E0F46361DD062B5880AE0479B6683ABF331A1 * value)
	{
		___res_1 = value;
		Il2CppCodeGenWriteBarrier((&___res_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESANSWERLIST_TBFA544C4272958B53452C0E40FDB6C6722DAF227_H
#ifndef RESANSWERPOINTS_TDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232_H
#define RESANSWERPOINTS_TDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResAnswerPoints
struct  ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> MSG_Question.ResAnswerPoints::name
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___name_1;
	// System.Int32 MSG_Question.ResAnswerPoints::oneself
	int32_t ___oneself_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232, ___name_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_name_1() const { return ___name_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_oneself_2() { return static_cast<int32_t>(offsetof(ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232, ___oneself_2)); }
	inline int32_t get_oneself_2() const { return ___oneself_2; }
	inline int32_t* get_address_of_oneself_2() { return &___oneself_2; }
	inline void set_oneself_2(int32_t value)
	{
		___oneself_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESANSWERPOINTS_TDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232_H
#ifndef RESEXCEPTIONALALLPLAYER_T1BA709ACD46486D0E2D71B4508F94577B118EE37_H
#define RESEXCEPTIONALALLPLAYER_T1BA709ACD46486D0E2D71B4508F94577B118EE37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResExceptionalAllPlayer
struct  ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37  : public RuntimeObject
{
public:
	// System.String MSG_Question.ResExceptionalAllPlayer::answerName
	String_t* ___answerName_1;
	// System.String MSG_Question.ResExceptionalAllPlayer::questionName
	String_t* ___questionName_2;
	// System.Int32 MSG_Question.ResExceptionalAllPlayer::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_answerName_1() { return static_cast<int32_t>(offsetof(ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37, ___answerName_1)); }
	inline String_t* get_answerName_1() const { return ___answerName_1; }
	inline String_t** get_address_of_answerName_1() { return &___answerName_1; }
	inline void set_answerName_1(String_t* value)
	{
		___answerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___answerName_1), value);
	}

	inline static int32_t get_offset_of_questionName_2() { return static_cast<int32_t>(offsetof(ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37, ___questionName_2)); }
	inline String_t* get_questionName_2() const { return ___questionName_2; }
	inline String_t** get_address_of_questionName_2() { return &___questionName_2; }
	inline void set_questionName_2(String_t* value)
	{
		___questionName_2 = value;
		Il2CppCodeGenWriteBarrier((&___questionName_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37, ___count_3)); }
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
#endif // RESEXCEPTIONALALLPLAYER_T1BA709ACD46486D0E2D71B4508F94577B118EE37_H
#ifndef RESOVERQUESTIONS_T6BCCDA927BB11CB84A7B19A1657F904E413B2007_H
#define RESOVERQUESTIONS_T6BCCDA927BB11CB84A7B19A1657F904E413B2007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResOverQuestions
struct  ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResOverQuestions::rightIndex
	int32_t ___rightIndex_1;
	// System.String MSG_Question.ResOverQuestions::desc
	String_t* ___desc_2;
	// System.String MSG_Question.ResOverQuestions::rewardDesc
	String_t* ___rewardDesc_3;
	// System.Int32 MSG_Question.ResOverQuestions::isRight
	int32_t ___isRight_4;
	// System.Collections.Generic.List`1<MSG_Question.KV> MSG_Question.ResOverQuestions::reward
	List_1_tBBE42E9AD45C0D4633F3F3797B65776C231485F9 * ___reward_5;
	// System.Int32 MSG_Question.ResOverQuestions::remaTime
	int32_t ___remaTime_6;
	// System.Boolean MSG_Question.ResOverQuestions::isOver
	bool ___isOver_7;
	// System.Int32 MSG_Question.ResOverQuestions::type
	int32_t ___type_8;
	// System.Int32 MSG_Question.ResOverQuestions::titleId
	int32_t ___titleId_9;

public:
	inline static int32_t get_offset_of_rightIndex_1() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___rightIndex_1)); }
	inline int32_t get_rightIndex_1() const { return ___rightIndex_1; }
	inline int32_t* get_address_of_rightIndex_1() { return &___rightIndex_1; }
	inline void set_rightIndex_1(int32_t value)
	{
		___rightIndex_1 = value;
	}

	inline static int32_t get_offset_of_desc_2() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___desc_2)); }
	inline String_t* get_desc_2() const { return ___desc_2; }
	inline String_t** get_address_of_desc_2() { return &___desc_2; }
	inline void set_desc_2(String_t* value)
	{
		___desc_2 = value;
		Il2CppCodeGenWriteBarrier((&___desc_2), value);
	}

	inline static int32_t get_offset_of_rewardDesc_3() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___rewardDesc_3)); }
	inline String_t* get_rewardDesc_3() const { return ___rewardDesc_3; }
	inline String_t** get_address_of_rewardDesc_3() { return &___rewardDesc_3; }
	inline void set_rewardDesc_3(String_t* value)
	{
		___rewardDesc_3 = value;
		Il2CppCodeGenWriteBarrier((&___rewardDesc_3), value);
	}

	inline static int32_t get_offset_of_isRight_4() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___isRight_4)); }
	inline int32_t get_isRight_4() const { return ___isRight_4; }
	inline int32_t* get_address_of_isRight_4() { return &___isRight_4; }
	inline void set_isRight_4(int32_t value)
	{
		___isRight_4 = value;
	}

	inline static int32_t get_offset_of_reward_5() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___reward_5)); }
	inline List_1_tBBE42E9AD45C0D4633F3F3797B65776C231485F9 * get_reward_5() const { return ___reward_5; }
	inline List_1_tBBE42E9AD45C0D4633F3F3797B65776C231485F9 ** get_address_of_reward_5() { return &___reward_5; }
	inline void set_reward_5(List_1_tBBE42E9AD45C0D4633F3F3797B65776C231485F9 * value)
	{
		___reward_5 = value;
		Il2CppCodeGenWriteBarrier((&___reward_5), value);
	}

	inline static int32_t get_offset_of_remaTime_6() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___remaTime_6)); }
	inline int32_t get_remaTime_6() const { return ___remaTime_6; }
	inline int32_t* get_address_of_remaTime_6() { return &___remaTime_6; }
	inline void set_remaTime_6(int32_t value)
	{
		___remaTime_6 = value;
	}

	inline static int32_t get_offset_of_isOver_7() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___isOver_7)); }
	inline bool get_isOver_7() const { return ___isOver_7; }
	inline bool* get_address_of_isOver_7() { return &___isOver_7; }
	inline void set_isOver_7(bool value)
	{
		___isOver_7 = value;
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_titleId_9() { return static_cast<int32_t>(offsetof(ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007, ___titleId_9)); }
	inline int32_t get_titleId_9() const { return ___titleId_9; }
	inline int32_t* get_address_of_titleId_9() { return &___titleId_9; }
	inline void set_titleId_9(int32_t value)
	{
		___titleId_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOVERQUESTIONS_T6BCCDA927BB11CB84A7B19A1657F904E413B2007_H
#ifndef RESPLAYERANSWERRESULT_T2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666_H
#define RESPLAYERANSWERRESULT_T2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResPlayerAnswerResult
struct  ResPlayerAnswerResult_t2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResPlayerAnswerResult::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPlayerAnswerResult_t2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666, ___reason_1)); }
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
#endif // RESPLAYERANSWERRESULT_T2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666_H
#ifndef RESPLAYERQUESTIONCOUNT_T7259D21758452D1F78BEA0D7CE49D9247FC0EC82_H
#define RESPLAYERQUESTIONCOUNT_T7259D21758452D1F78BEA0D7CE49D9247FC0EC82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResPlayerQuestionCount
struct  ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResPlayerQuestionCount::reason
	int32_t ___reason_1;
	// System.Int32 MSG_Question.ResPlayerQuestionCount::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82, ___count_2)); }
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
#endif // RESPLAYERQUESTIONCOUNT_T7259D21758452D1F78BEA0D7CE49D9247FC0EC82_H
#ifndef RESPLAYERQUESTIONS_TC180E798D5559B4011C2885A4BB45418811DAC44_H
#define RESPLAYERQUESTIONS_TC180E798D5559B4011C2885A4BB45418811DAC44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResPlayerQuestions
struct  ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Question.ResPlayerQuestions::id
	uint64_t ___id_1;
	// System.String MSG_Question.ResPlayerQuestions::title
	String_t* ___title_2;
	// System.Int32 MSG_Question.ResPlayerQuestions::remaining
	int32_t ___remaining_3;
	// System.Int32 MSG_Question.ResPlayerQuestions::answerCount
	int32_t ___answerCount_4;
	// System.Collections.Generic.List`1<System.String> MSG_Question.ResPlayerQuestions::options
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___options_5;
	// System.String MSG_Question.ResPlayerQuestions::name
	String_t* ___name_6;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((&___title_2), value);
	}

	inline static int32_t get_offset_of_remaining_3() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___remaining_3)); }
	inline int32_t get_remaining_3() const { return ___remaining_3; }
	inline int32_t* get_address_of_remaining_3() { return &___remaining_3; }
	inline void set_remaining_3(int32_t value)
	{
		___remaining_3 = value;
	}

	inline static int32_t get_offset_of_answerCount_4() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___answerCount_4)); }
	inline int32_t get_answerCount_4() const { return ___answerCount_4; }
	inline int32_t* get_address_of_answerCount_4() { return &___answerCount_4; }
	inline void set_answerCount_4(int32_t value)
	{
		___answerCount_4 = value;
	}

	inline static int32_t get_offset_of_options_5() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___options_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_options_5() const { return ___options_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_options_5() { return &___options_5; }
	inline void set_options_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___options_5 = value;
		Il2CppCodeGenWriteBarrier((&___options_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERQUESTIONS_TC180E798D5559B4011C2885A4BB45418811DAC44_H
#ifndef RESPLAYERSENDQUESTIONRESULT_TBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919_H
#define RESPLAYERSENDQUESTIONRESULT_TBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResPlayerSendQuestionResult
struct  ResPlayerSendQuestionResult_tBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResPlayerSendQuestionResult::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResPlayerSendQuestionResult_tBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919, ___reason_1)); }
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
#endif // RESPLAYERSENDQUESTIONRESULT_TBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919_H
#ifndef RESSENDQUESTIONS_T4C7A3858EDF15512137586D5605F663D897700BE_H
#define RESSENDQUESTIONS_T4C7A3858EDF15512137586D5605F663D897700BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResSendQuestions
struct  ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResSendQuestions::type
	int32_t ___type_1;
	// System.UInt64 MSG_Question.ResSendQuestions::qid
	uint64_t ___qid_2;
	// System.Int32 MSG_Question.ResSendQuestions::title
	int32_t ___title_3;
	// System.Collections.Generic.List`1<System.Int32> MSG_Question.ResSendQuestions::options
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___options_4;
	// System.Int32 MSG_Question.ResSendQuestions::rightIndex
	int32_t ___rightIndex_5;
	// System.Int32 MSG_Question.ResSendQuestions::remaTime
	int32_t ___remaTime_6;
	// System.Int32 MSG_Question.ResSendQuestions::currentNum
	int32_t ___currentNum_7;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_qid_2() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___qid_2)); }
	inline uint64_t get_qid_2() const { return ___qid_2; }
	inline uint64_t* get_address_of_qid_2() { return &___qid_2; }
	inline void set_qid_2(uint64_t value)
	{
		___qid_2 = value;
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___title_3)); }
	inline int32_t get_title_3() const { return ___title_3; }
	inline int32_t* get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(int32_t value)
	{
		___title_3 = value;
	}

	inline static int32_t get_offset_of_options_4() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___options_4)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_options_4() const { return ___options_4; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_options_4() { return &___options_4; }
	inline void set_options_4(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___options_4 = value;
		Il2CppCodeGenWriteBarrier((&___options_4), value);
	}

	inline static int32_t get_offset_of_rightIndex_5() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___rightIndex_5)); }
	inline int32_t get_rightIndex_5() const { return ___rightIndex_5; }
	inline int32_t* get_address_of_rightIndex_5() { return &___rightIndex_5; }
	inline void set_rightIndex_5(int32_t value)
	{
		___rightIndex_5 = value;
	}

	inline static int32_t get_offset_of_remaTime_6() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___remaTime_6)); }
	inline int32_t get_remaTime_6() const { return ___remaTime_6; }
	inline int32_t* get_address_of_remaTime_6() { return &___remaTime_6; }
	inline void set_remaTime_6(int32_t value)
	{
		___remaTime_6 = value;
	}

	inline static int32_t get_offset_of_currentNum_7() { return static_cast<int32_t>(offsetof(ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE, ___currentNum_7)); }
	inline int32_t get_currentNum_7() const { return ___currentNum_7; }
	inline int32_t* get_address_of_currentNum_7() { return &___currentNum_7; }
	inline void set_currentNum_7(int32_t value)
	{
		___currentNum_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSENDQUESTIONS_T4C7A3858EDF15512137586D5605F663D897700BE_H
#ifndef RESSYSTEMQUESTIONRESULT_TC6F4BC54EE598DD88696118762FD4C2C54331816_H
#define RESSYSTEMQUESTIONRESULT_TC6F4BC54EE598DD88696118762FD4C2C54331816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Question.ResSystemQuestionResult
struct  ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816  : public RuntimeObject
{
public:
	// System.Int32 MSG_Question.ResSystemQuestionResult::reason
	int32_t ___reason_1;
	// System.Int32 MSG_Question.ResSystemQuestionResult::questionId
	int32_t ___questionId_2;
	// System.Collections.Generic.List`1<System.Int32> MSG_Question.ResSystemQuestionResult::options
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___options_3;

public:
	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}

	inline static int32_t get_offset_of_questionId_2() { return static_cast<int32_t>(offsetof(ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816, ___questionId_2)); }
	inline int32_t get_questionId_2() const { return ___questionId_2; }
	inline int32_t* get_address_of_questionId_2() { return &___questionId_2; }
	inline void set_questionId_2(int32_t value)
	{
		___questionId_2 = value;
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816, ___options_3)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_options_3() const { return ___options_3; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier((&___options_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSYSTEMQUESTIONRESULT_TC6F4BC54EE598DD88696118762FD4C2C54331816_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6800 = { sizeof (ReqSystemQuestion_tA84575C5A6902BB6660EA4B9106882F320EA8C47), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6800[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6801 = { sizeof (ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6801[4] = 
{
	0,
	ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816::get_offset_of_reason_1(),
	ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816::get_offset_of_questionId_2(),
	ResSystemQuestionResult_tC6F4BC54EE598DD88696118762FD4C2C54331816::get_offset_of_options_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6802 = { sizeof (ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6802[4] = 
{
	0,
	ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432::get_offset_of_title_1(),
	ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432::get_offset_of_options_2(),
	ReqPlayerSendQuestion_t756FCA3E1FE46850910D15D6737AB2C247E57432::get_offset_of_right_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6803 = { sizeof (ResPlayerSendQuestionResult_tBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6803[2] = 
{
	0,
	ResPlayerSendQuestionResult_tBF13AD2DFB043D0F41DDBDA498D502D4DD5B0919::get_offset_of_reason_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6804 = { sizeof (ResPlayerAnswerResult_t2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6804[2] = 
{
	0,
	ResPlayerAnswerResult_t2FCC907F2A3F915D2BF29C0E7A7ED626E59D7666::get_offset_of_reason_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6805 = { sizeof (ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6805[7] = 
{
	0,
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_id_1(),
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_title_2(),
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_remaining_3(),
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_answerCount_4(),
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_options_5(),
	ResPlayerQuestions_tC180E798D5559B4011C2885A4BB45418811DAC44::get_offset_of_name_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6806 = { sizeof (ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6806[5] = 
{
	0,
	ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75::get_offset_of_name_1(),
	ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75::get_offset_of_count_2(),
	ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75::get_offset_of_right_3(),
	ResAllPlayerAnswer_tEB1B24C5B8C8D5E799D1D36EC24DBAD55CA58E75::get_offset_of_appraise_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6807 = { sizeof (ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6807[4] = 
{
	0,
	ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37::get_offset_of_answerName_1(),
	ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37::get_offset_of_questionName_2(),
	ResExceptionalAllPlayer_t1BA709ACD46486D0E2D71B4508F94577B118EE37::get_offset_of_count_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6808 = { sizeof (ReqPlayerQuestionsCount_tED8ABF9337568B1B38A4BC9E214D6B5D341042F7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6808[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6809 = { sizeof (ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6809[3] = 
{
	0,
	ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82::get_offset_of_reason_1(),
	ResPlayerQuestionCount_t7259D21758452D1F78BEA0D7CE49D9247FC0EC82::get_offset_of_count_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6810 = { sizeof (ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6810[8] = 
{
	0,
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_type_1(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_qid_2(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_title_3(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_options_4(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_rightIndex_5(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_remaTime_6(),
	ResSendQuestions_t4C7A3858EDF15512137586D5605F663D897700BE::get_offset_of_currentNum_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6811 = { sizeof (ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6811[5] = 
{
	0,
	ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B::get_offset_of_id_1(),
	ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B::get_offset_of_index_2(),
	ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B::get_offset_of_appraise_3(),
	ReqPlayerAnswer_t99672C5DB5247FCF4B25C700465B4D82EC79A00B::get_offset_of_exceptional_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6812 = { sizeof (Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6812[4] = 
{
	Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4::get_offset_of_id_0(),
	Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4::get_offset_of_name_1(),
	Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4::get_offset_of_index_2(),
	Anwserresult_tC07A1675FE27C7489DD65C523F15C7C48DBEAAE4::get_offset_of_desc_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6813 = { sizeof (ResAnswerList_tBFA544C4272958B53452C0E40FDB6C6722DAF227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6813[2] = 
{
	0,
	ResAnswerList_tBFA544C4272958B53452C0E40FDB6C6722DAF227::get_offset_of_res_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6814 = { sizeof (KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6814[2] = 
{
	KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1::get_offset_of_K_0(),
	KV_t90BC3CEA8AA073D9FC28D4520FA02C20194128B1::get_offset_of_V_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6815 = { sizeof (ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6815[10] = 
{
	0,
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_rightIndex_1(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_desc_2(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_rewardDesc_3(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_isRight_4(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_reward_5(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_remaTime_6(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_isOver_7(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_type_8(),
	ResOverQuestions_t6BCCDA927BB11CB84A7B19A1657F904E413B2007::get_offset_of_titleId_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6816 = { sizeof (ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6816[3] = 
{
	0,
	ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232::get_offset_of_name_1(),
	ResAnswerPoints_tDB47FD3F2AA6CEA8A01501300DC1BAAF66C70232::get_offset_of_oneself_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6817 = { sizeof (ReqOpenPrayPanel_t2078415A3B7AE3CAEF9FCA305D8A8375725E9FD6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6817[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6818 = { sizeof (ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6818[4] = 
{
	0,
	ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF::get_offset_of_prayMoneyNum_1(),
	ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF::get_offset_of_prayExpNum_2(),
	ResSyncPrayInfo_t1A4FDA6D695E3BD5C4B117E7FC0D80667F0FD6AF::get_offset_of_freePrayMoneyTime_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6819 = { sizeof (ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6819[3] = 
{
	0,
	ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780::get_offset_of_prayType_1(),
	ReqPray_tC53717AFE4A42249EBDFACD682AF552EEDDBB780::get_offset_of_free_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6820 = { sizeof (ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6820[4] = 
{
	0,
	ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB::get_offset_of_prayType_1(),
	ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB::get_offset_of_isDouble_2(),
	ResPraySuccess_tDF2C5B2BC1F382C5ADCFF2D63A79CB8BBCB8C2DB::get_offset_of_prayNum_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6821 = { sizeof (ResPrayFailed_t5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6821[2] = 
{
	0,
	ResPrayFailed_t5E62A81A3352ACDC6F438D2482EBDC140AEDFA1F::get_offset_of_reason_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6822 = { sizeof (ResPrayTick_tDBF0B57253DF6941E0CBD33082EB8D2C88CC75DE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6822[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6823 = { sizeof (Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6823[2] = 
{
	Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F::get_offset_of_type_0(),
	Attribute_tB2AD65148D4CE258231EAAD7369A7F081A0AA45F::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6824 = { sizeof (ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6824[3] = 
{
	0,
	ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C::get_offset_of_attributeList_1(),
	ResPlayerOnLineAttribute_t637EA157F902A46D68CCFA288A9A10150D90CF4C::get_offset_of_maxHp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6825 = { sizeof (ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6825[3] = 
{
	0,
	ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52::get_offset_of_type_1(),
	ResPlayerAttributeChange_t9E5CF01B773B43D225249BCBC58AD54A154B3E52::get_offset_of_changeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6826 = { sizeof (ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6826[40] = 
{
	0,
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_roleID_1(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_accountId_2(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_name_3(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_pkMode_4(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_curTitle_5(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_vipLevel_6(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_level_7(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_exp_8(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_occupation_9(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_mountId_10(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_guild_11(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_guildName_12(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_pos_13(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_mapID_14(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_posX_15(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_posY_16(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_curHP_17(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_fightpower_18(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_languageType_19(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_stateVip_20(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_camp_21(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_fabaoId_22(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_fabaoUid_23(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_soulSpirte1_24(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_soulSpirte2_25(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_soulSpirte3_26(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_shiHaiCfgId_27(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_serverId_28(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_vipExp_29(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_xsLvl_30(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_curWakan_31(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_facade_32(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_feijianId_33(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_feijianUid_34(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_feijianMaxID_35(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_genderClass_36(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_childId_37(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_head_38(),
	ResPlayerBaseInfo_t6322EB00E70724F5E8EF6CA5EE663BF3D643F5A9::get_offset_of_childName_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6827 = { sizeof (GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6827[29] = 
{
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_userId_0(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_roleid_1(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_rolename_2(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_career_3(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_level_4(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_plat_5(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_createTime_6(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_csid_7(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_lastOffTime_8(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_horseId_9(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_wingId_10(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fightPower_11(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_guildId_12(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionHeadId_13(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionHeadFrameId_14(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionBodyId_15(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionWeaponId_16(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionHalo_17(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_fashionMatrix_18(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_sex_19(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_stateVip_20(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_shiHaiLevel_21(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_playerVip_22(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_spiritId_23(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_soulArmorId_24(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_serverId_25(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_customHeadPath_26(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_useCustomHead_27(),
	GlobalPlayerWorldInfo_t5BDAFFD2F0D59C47A18455BB8FE10920F4A82690::get_offset_of_guildName_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6828 = { sizeof (ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6828[3] = 
{
	0,
	ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6::get_offset_of_result_1(),
	ResChangeJobResult_t3C4CAFCD35EE715BC688AD64705B0748D7C89AC6::get_offset_of_grade_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6829 = { sizeof (ResAddHatred_tB39CA970D14EB1399EB8CC7EAF588447EF2E78B4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6829[2] = 
{
	0,
	ResAddHatred_tB39CA970D14EB1399EB8CC7EAF588447EF2E78B4::get_offset_of_playerId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6830 = { sizeof (ResDelHatred_tC9A443F4A058E9DD91550F778457E6AA43AB2C4E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6830[2] = 
{
	0,
	ResDelHatred_tC9A443F4A058E9DD91550F778457E6AA43AB2C4E::get_offset_of_playerId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6831 = { sizeof (ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6831[5] = 
{
	0,
	ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46::get_offset_of_level_1(),
	ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46::get_offset_of_playerId_2(),
	ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46::get_offset_of_time_3(),
	ResLevelChange_t86813C79F80DE4C72BF32638B805FF3628EA7C46::get_offset_of_grade_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6832 = { sizeof (ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6832[5] = 
{
	0,
	ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16::get_offset_of_time_1(),
	ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16::get_offset_of_getExp_2(),
	ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16::get_offset_of_getZhenQi_3(),
	ResPracticeInfo_tF2D3FCA795E0D2C9968A5E663BE158C0ED9DAC16::get_offset_of_state_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6833 = { sizeof (ResPracticeSetDo_t5C4FAE02015D9B6B2CB5F4462565FD8A418645DE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6833[2] = 
{
	0,
	ResPracticeSetDo_t5C4FAE02015D9B6B2CB5F4462565FD8A418645DE::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6834 = { sizeof (ResPracticeGetResult_t4C6CF6722A2B92AEBD5841A6845EBADD736A4B68), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6834[2] = 
{
	0,
	ResPracticeGetResult_t4C6CF6722A2B92AEBD5841A6845EBADD736A4B68::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6835 = { sizeof (ResAccunonlinetime_t3E603193A247304F472CECF571FC2E54B225230C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6835[2] = 
{
	0,
	ResAccunonlinetime_t3E603193A247304F472CECF571FC2E54B225230C::get_offset_of_time_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6836 = { sizeof (ResUpdataExpRate_tC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6836[2] = 
{
	0,
	ResUpdataExpRate_tC5D31AF7A68C5AFADE464C8E699527C2C41B8FCE::get_offset_of_expRate_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6837 = { sizeof (ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6837[3] = 
{
	0,
	ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788::get_offset_of_playerId_1(),
	ResUpdataPkValue_t79B68CADBAB488D1096F2415FFC48A38441D2788::get_offset_of_pkValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6838 = { sizeof (ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6838[4] = 
{
	0,
	ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA::get_offset_of_curPkState_1(),
	ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA::get_offset_of_reason_2(),
	ResUpdataPkStateResult_t34619CDAC44E7A9046EB42FA5C89CA03A26B05FA::get_offset_of_notice_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6839 = { sizeof (ResCleanHatred_tF12F85DB0AAB008A83EAB69A74D64C6136F05C9F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6839[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6840 = { sizeof (ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6840[3] = 
{
	0,
	ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305::get_offset_of_fightPoint_1(),
	ResPlayerFightPointChange_tF7220E2532B61A4FB6DC67C888F1A11BE5769305::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6841 = { sizeof (ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6841[14] = 
{
	0,
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_roleId_1(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_roleName_2(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_roleLv_3(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_career_4(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_vip_5(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_fightPoint_6(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_guildName_7(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_attList_8(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_equipList_9(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_stifleFabaoId_10(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_shiHaiCfgId_11(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_xsLvl_12(),
	ResLookOtherPlayerResult_t308A44BDDF35DDD43CFA3150D37D8923D3A87F63::get_offset_of_facade_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6842 = { sizeof (ResFightOrUnFight_t58C2ACD1F6057F7703125E72BCEEDAD4744D6E93), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6842[2] = 
{
	0,
	ResFightOrUnFight_t58C2ACD1F6057F7703125E72BCEEDAD4744D6E93::get_offset_of_isFight_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6843 = { sizeof (ResMainUIGuideID_t67242C699C1CD1566514F535D9FF14C6232A2875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6843[2] = 
{
	0,
	ResMainUIGuideID_t67242C699C1CD1566514F535D9FF14C6232A2875::get_offset_of_gid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6844 = { sizeof (ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6844[3] = 
{
	0,
	ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409::get_offset_of_continuousDays_1(),
	ResPlayerTodayData_t6EA9ACB9A1E8BC644E94CDBAE9765849437FD409::get_offset_of_accumOnlineDays_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6845 = { sizeof (ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6845[4] = 
{
	0,
	ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F::get_offset_of_isSuccess_1(),
	ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F::get_offset_of_newName_2(),
	ResChangeRoleNameResult_t82B68D2A78008F61D8CFAF8EC360F22F9B514D1F::get_offset_of_roleId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6846 = { sizeof (ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6846[3] = 
{
	0,
	ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A::get_offset_of_roleId_1(),
	ResMaxHpChange_tB826D014B6A5AA27EE4BF9D4154AD3F915B0A35A::get_offset_of_maxHp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6847 = { sizeof (ResClientToChoiceBirthGroup_tB41FFD87C382C9ECFB498607E568824F84D67B42), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6847[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6848 = { sizeof (ResNotUpLevel_tE7C07295E61F3569CCBD54E62FD9C70FC0D17DCB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6848[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6849 = { sizeof (ResChangeJobTips_tBB55535A2B9FF950A5630893239FA063E08D58DA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6849[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6850 = { sizeof (ResOpenServerTime_t43FA91F6F6E6CF658843AF2690CFCFC7274F9624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6850[2] = 
{
	0,
	ResOpenServerTime_t43FA91F6F6E6CF658843AF2690CFCFC7274F9624::get_offset_of_time_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6851 = { sizeof (ReqChangeJob_tC806C592562BB8D566F0638A4DF14FDBED8A53D7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6851[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6852 = { sizeof (ReqGetAccunonlinetime_t0B2A5DBF5C87CF8F557F2A264BC27AEB1F1FC4C3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6852[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6853 = { sizeof (ReqUpdataPkState_t4674B4347DB7C0EF089655C6FF263FCCC618E9AC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6853[2] = 
{
	0,
	ReqUpdataPkState_t4674B4347DB7C0EF089655C6FF263FCCC618E9AC::get_offset_of_pkState_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6854 = { sizeof (ReqLookOtherPlayer_t37772370B956D14BBC3ACD159E4CA134F4C55789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6854[2] = 
{
	0,
	ReqLookOtherPlayer_t37772370B956D14BBC3ACD159E4CA134F4C55789::get_offset_of_otherPlayerId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6855 = { sizeof (ReqUpdateMainUIGuideID_t6BBCCCC021594D94F713406C00BC36A27149EDC0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6855[2] = 
{
	0,
	ReqUpdateMainUIGuideID_t6BBCCCC021594D94F713406C00BC36A27149EDC0::get_offset_of_gid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6856 = { sizeof (ReqMainUIGuideID_t0A7AA236A49638834953673DE8AC0DE444C0B510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6856[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6857 = { sizeof (ReqChangeRoleName_t53455D5934FF99936B3DC62D5F6368F1C26AF68C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6857[2] = 
{
	0,
	ReqChangeRoleName_t53455D5934FF99936B3DC62D5F6368F1C26AF68C::get_offset_of_newName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6858 = { sizeof (ReqCourageList_tFE7B08B0D3E1080255E07F8E5E3E6A47F9FEDB04), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6858[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6859 = { sizeof (FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6859[2] = 
{
	FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E::get_offset_of_id_0(),
	FateStar_t750B6D13B3CD304D4FBB8992B48C3BB86AED587E::get_offset_of_gender_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6860 = { sizeof (ReqPeakLevelPanel_tBEABB7B4066D81B194FAB7B128AB79A8978FDB61), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6860[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6861 = { sizeof (ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6861[4] = 
{
	0,
	ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9::get_offset_of_ids_1(),
	ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9::get_offset_of_isChangeJob_2(),
	ResPeakLevelPanel_tE3C47B2D411E2D4EAEACA3B1F5D2764D8961D4C9::get_offset_of_isRed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6862 = { sizeof (ReqChangeJobPanel_tDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6862[2] = 
{
	0,
	ReqChangeJobPanel_tDAB0555C14AC0A511FD1BBEBD886F5EC24BA459B::get_offset_of_gender_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6863 = { sizeof (ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6863[5] = 
{
	0,
	ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C::get_offset_of_ids_1(),
	ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C::get_offset_of_isChangeJob_2(),
	ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C::get_offset_of_isRed_3(),
	ResChangeJobPanel_t99DB9AAE267704966219EC4DBA4682AF7DCAFB4C::get_offset_of_gender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6864 = { sizeof (ReqActiveFateStar_t01CA7733687065D0C3B44D526708872B03757426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6864[2] = 
{
	0,
	ReqActiveFateStar_t01CA7733687065D0C3B44D526708872B03757426::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6865 = { sizeof (ResActiveFateStar_t09C4A3FF72A0A94A824D313991CAFBACACF9AC00), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6865[2] = 
{
	0,
	ResActiveFateStar_t09C4A3FF72A0A94A824D313991CAFBACACF9AC00::get_offset_of_ids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6866 = { sizeof (ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6866[3] = 
{
	0,
	ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE::get_offset_of_playerId_1(),
	ResPlayerGenderNotice_t253C8E0C687B86CB289E7E41808D90B4298637DE::get_offset_of_genderLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6867 = { sizeof (ReqUpgradeBlood_t9672DF22D6737BB112E80C0C76F5C25858A4A457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6867[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6868 = { sizeof (ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6868[3] = 
{
	0,
	ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE::get_offset_of_state_1(),
	ResUpgradeBlood_t5D296B6DC95685F4C01664972F06EC41FE58BFDE::get_offset_of_nextKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6869 = { sizeof (ReqOpenBloodPannel_t92ADF16630360F2CDB3FBDA2011D300020AA23AE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6869[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6870 = { sizeof (ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6870[3] = 
{
	0,
	ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B::get_offset_of_order_1(),
	ResOpenBloodPannel_t8099696391974C9CA67FE54EA65E6D004A0F8C4B::get_offset_of_level_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6871 = { sizeof (ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6871[3] = 
{
	0,
	ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1::get_offset_of_careerNo_1(),
	ReqPlayerCareerChange_t816D7A718100433CADCFE8EBDC79D6C0B17B24A1::get_offset_of_eqiupNos_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6872 = { sizeof (ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6872[4] = 
{
	0,
	ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D::get_offset_of_careerNo_1(),
	ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D::get_offset_of_roleId_2(),
	ResPlayerCareerChange_tCE3FC70CA4D57CA2B8252D792F02B5A6580C023D::get_offset_of_state_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6873 = { sizeof (Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6873[2] = 
{
	Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C::get_offset_of_giftId_0(),
	Gift_tFD1D7E4472A944A2D7EC05E6CCB4F4BC16952E8C::get_offset_of_giftNumber_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6874 = { sizeof (ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6874[5] = 
{
	0,
	ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D::get_offset_of_type_1(),
	ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D::get_offset_of_roleId_2(),
	ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D::get_offset_of_force_3(),
	ReqSendGift_t201B5BED28526541229E0ED965DFB439B7394F6D::get_offset_of_gifts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6875 = { sizeof (ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6875[3] = 
{
	0,
	ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17::get_offset_of_result_1(),
	ResSendGift_t4B828BC10539032499958B7A4F033354BF860C17::get_offset_of_log_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6876 = { sizeof (GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6876[8] = 
{
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_id_0(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_type_1(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_sender_2(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_receiver_3(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_itemId_4(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_num_5(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_time_6(),
	GiftLog_tE80438DADC54B902A2F76BBD9BD2FE84939CE54E::get_offset_of_readStatus_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6877 = { sizeof (ReqGetGiftLog_t0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6877[2] = 
{
	0,
	ReqGetGiftLog_t0E9A2B9CBB196285B70DAEFCC18E13FD1D1710F8::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6878 = { sizeof (ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6878[3] = 
{
	0,
	ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB::get_offset_of_type_1(),
	ResGetGiftLog_t7951BDB9FAA9EAF92310175B93F538AFF430E2CB::get_offset_of_recordList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6879 = { sizeof (ReqReadGiftLog_t7A649881855BB84E10D01F70F24F8230AE7BA069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6879[2] = 
{
	0,
	ReqReadGiftLog_t7A649881855BB84E10D01F70F24F8230AE7BA069::get_offset_of_ids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6880 = { sizeof (ResReadGiftLog_t22192FB78B994D7E6D493F0D7F839D84712930C9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6880[2] = 
{
	0,
	ResReadGiftLog_t22192FB78B994D7E6D493F0D7F839D84712930C9::get_offset_of_ids_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6881 = { sizeof (ResNewGiftLog_t31D314E241C492BAB0EC525FD36BD997309AFCA1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6881[2] = 
{
	0,
	ResNewGiftLog_t31D314E241C492BAB0EC525FD36BD997309AFCA1::get_offset_of_log_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6882 = { sizeof (ReqXiSui_t2480FE9EB90BD2B41B63252F8D9CB334E1797156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6882[2] = 
{
	0,
	ReqXiSui_t2480FE9EB90BD2B41B63252F8D9CB334E1797156::get_offset_of_free_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6883 = { sizeof (SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6883[3] = 
{
	0,
	SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8::get_offset_of_roleID_1(),
	SyncXiSuiData_tD0D1D5F5423661EC4B3BB4284A1A66E7E18AEBD8::get_offset_of_xsLvl_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6884 = { sizeof (ReqPlayerSummaryInfo_tDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6884[2] = 
{
	0,
	ReqPlayerSummaryInfo_tDF75B05B9FE507BC1232C2F6F4B71418A05DAEA6::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6885 = { sizeof (ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6885[10] = 
{
	0,
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_roleId_1(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_roleName_2(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_roleLv_3(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_career_4(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_fightpower_5(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_guildName_6(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_serverId_7(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_facade_8(),
	ResPlayerSummaryInfo_t970AFA6D3E7BD760E72668A5C6121150DDEBEF39::get_offset_of_head_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6886 = { sizeof (ResGenderClassChange_t9E596886FAFDB5349EB039A2A731F2F04E13259F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6886[2] = 
{
	0,
	ResGenderClassChange_t9E596886FAFDB5349EB039A2A731F2F04E13259F::get_offset_of_genderClass_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6887 = { sizeof (G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6887[3] = 
{
	0,
	G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1::get_offset_of_globalPlayerWorldInfo_1(),
	G2SSynPlayerSocialInfo_t2583C674B5FA5DEED9BD7BC97DAAC153F175A7A1::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6888 = { sizeof (G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6888[3] = 
{
	0,
	G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05::get_offset_of_roleId_1(),
	G2SReqPlayerSummaryInfo_tA3ED3493D501975BC851EAFDAB6B70EE2DA4DF05::get_offset_of_targetRoleId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6889 = { sizeof (ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6889[3] = 
{
	0,
	ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630::get_offset_of_customHeadPath_1(),
	ReqPlayerSettingCustomHead_tE802FDDFA6D72FAA5B21F714FF4030F71BA43630::get_offset_of_useCustomHead_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6890 = { sizeof (ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6890[4] = 
{
	0,
	ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8::get_offset_of_isSuccess_1(),
	ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8::get_offset_of_roleId_2(),
	ResPlayerSettingCustomHeadResult_tCB17A9F225A22BFC1BD800CF775541B25638CCB8::get_offset_of_head_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6891 = { sizeof (ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6891[10] = 
{
	0,
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_like_1(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_share_2(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_evaluate_3(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_openLike_4(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_openShare_5(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_everyDayShare_6(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_openEveryDayShare_7(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_shopEvaluate_8(),
	ResEvaluateInfo_t13E2BD676835060F6CCE195E64B429141C513BA4::get_offset_of_openShopEvaluate_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6892 = { sizeof (ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6892[6] = 
{
	0,
	ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD::get_offset_of_like_1(),
	ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD::get_offset_of_share_2(),
	ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD::get_offset_of_evaluate_3(),
	ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD::get_offset_of_everyDayShare_4(),
	ResEvaluateResult_tF7F2912442FA12DBF347530083A7F1484D5DFAFD::get_offset_of_shopEvaluate_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6893 = { sizeof (ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6893[3] = 
{
	0,
	ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB::get_offset_of_type_1(),
	ReqEvaluate_tBF31BDB52E403F02DF8BC803F78739210E4BEBAB::get_offset_of_actType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6894 = { sizeof (PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6894[2] = 
{
	PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D::get_offset_of_modelId_0(),
	PetInfo_tCD674B41124D5CBDE77E68D41C3634DED345AE7D::get_offset_of_curStage_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6895 = { sizeof (PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6895[2] = 
{
	PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88::get_offset_of_soulId_0(),
	PetSoulInfo_tA573001DA42C0111A24B5CF668A900DFE7840A88::get_offset_of_soulLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6896 = { sizeof (PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6896[7] = 
{
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_assistantId_0(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_petId_1(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_cellList_2(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_strengthActiveId_3(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_soulActiveId_4(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_open_5(),
	PetAssistantInfo_tF165BB9AE4F27DCC335CC3BD4787196C01D150EF::get_offset_of_score_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6897 = { sizeof (PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6897[5] = 
{
	PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB::get_offset_of_cellId_0(),
	PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB::get_offset_of_equip_1(),
	PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB::get_offset_of_strengthLv_2(),
	PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB::get_offset_of_soulLv_3(),
	PetAssistantCellInfo_tC60BF683E112F3AE00B2D3CAADE26289977AC7AB::get_offset_of_open_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6898 = { sizeof (ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6898[3] = 
{
	0,
	ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7::get_offset_of_pet_1(),
	ResSyncPet_tD779D88D207A80CE8ED2BBE7FFB07005216F15F7::get_offset_of_fight_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6899 = { sizeof (ResBattlePet_tA170400FCEAB900CECFE4210A3E12509CF1F0399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable6899[2] = 
{
	0,
	ResBattlePet_tA170400FCEAB900CECFE4210A3E12509CF1F0399::get_offset_of_battlePetId_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
