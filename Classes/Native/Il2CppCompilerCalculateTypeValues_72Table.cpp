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


// MSG_Common.BonfireInfo
struct BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F;
// MSG_Common.GatherInfo
struct GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3;
// MSG_Common.GroundBuffMess
struct GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9;
// MSG_Common.Magic
struct Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98;
// MSG_Common.MonsterInfo
struct MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE;
// MSG_Common.NpcInfo
struct NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6;
// MSG_Common.PetInfo
struct PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB;
// MSG_Common.PlayerInfo
struct PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B;
// MSG_Common.Position
struct Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94;
// MSG_Common.TombstoneInfo
struct TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273;
// MSG_Market.marketItemInfo
struct marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8;
// MSG_Marriage.MarryRole
struct MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0;
// MSG_backpack.ItemInfo
struct ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C;
// System.Collections.Generic.List`1<MSG_Common.BonfireInfo>
struct List_1_t8A0665034236C89736A79A3294838E9278D7FC1A;
// System.Collections.Generic.List`1<MSG_Common.GatherInfo>
struct List_1_tBBC189BA6B43AA35065AAF403BC3D3C6230339CF;
// System.Collections.Generic.List`1<MSG_Common.GroundBuffMess>
struct List_1_t0A804CCAEDD72B842F34FD607CC9789D0365C6B0;
// System.Collections.Generic.List`1<MSG_Common.Magic>
struct List_1_tE8D3B89628283B835D75361F4F6BD7DF710D335A;
// System.Collections.Generic.List`1<MSG_Common.MonsterInfo>
struct List_1_t5F036E28D2BA78A5566EA1FE7F8B506161068CEA;
// System.Collections.Generic.List`1<MSG_Common.NpcInfo>
struct List_1_tFEF19218F9E9977F0527EFB83281F36B2F1B664B;
// System.Collections.Generic.List`1<MSG_Common.PetInfo>
struct List_1_t20A6914CEA4C51C4582EB8112B391440C3E87CB6;
// System.Collections.Generic.List`1<MSG_Common.PlayerInfo>
struct List_1_t82142BEC7576942A9D9D96536F5D4DAEE08DBB35;
// System.Collections.Generic.List`1<MSG_Common.Position>
struct List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C;
// System.Collections.Generic.List`1<MSG_Common.TombstoneInfo>
struct List_1_t26A0C921BBED7D989CE903C5DCB4EA909CDD53D1;
// System.Collections.Generic.List`1<MSG_Map.BlockDoor>
struct List_1_t06209B14D567D9A70EECD78F5CBE59B97D61777B;
// System.Collections.Generic.List`1<MSG_Map.RoleStatue>
struct List_1_t0BD21CC57DD8AF25160D9A598DAFF0ABB56EE393;
// System.Collections.Generic.List`1<MSG_Market.marketItemInfo>
struct List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8;
// System.Collections.Generic.List`1<MSG_Market.marketLogInfo>
struct List_1_t3B484662660BD3FB8A05A96AC78B8294805024DE;
// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo>
struct List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D;
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
#ifndef BLOCKDOOR_TFCA338119603E30FF48E1A8A809C388A026E5361_H
#define BLOCKDOOR_TFCA338119603E30FF48E1A8A809C388A026E5361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.BlockDoor
struct  BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361  : public RuntimeObject
{
public:
	// System.String MSG_Map.BlockDoor::id
	String_t* ___id_0;
	// System.Boolean MSG_Map.BlockDoor::isopen
	bool ___isopen_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_isopen_1() { return static_cast<int32_t>(offsetof(BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361, ___isopen_1)); }
	inline bool get_isopen_1() const { return ___isopen_1; }
	inline bool* get_address_of_isopen_1() { return &___isopen_1; }
	inline void set_isopen_1(bool value)
	{
		___isopen_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKDOOR_TFCA338119603E30FF48E1A8A809C388A026E5361_H
#ifndef REQCINEMATIC_T248A1581AA654A27FFD4E7BB31555000F030B369_H
#define REQCINEMATIC_T248A1581AA654A27FFD4E7BB31555000F030B369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqCineMatic
struct  ReqCineMatic_t248A1581AA654A27FFD4E7BB31555000F030B369  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ReqCineMatic::plotId
	int32_t ___plotId_1;

public:
	inline static int32_t get_offset_of_plotId_1() { return static_cast<int32_t>(offsetof(ReqCineMatic_t248A1581AA654A27FFD4E7BB31555000F030B369, ___plotId_1)); }
	inline int32_t get_plotId_1() const { return ___plotId_1; }
	inline int32_t* get_address_of_plotId_1() { return &___plotId_1; }
	inline void set_plotId_1(int32_t value)
	{
		___plotId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCINEMATIC_T248A1581AA654A27FFD4E7BB31555000F030B369_H
#ifndef REQDIRMOVE_T917F59D0157E946A54799E8BF03390E5CE89D93F_H
#define REQDIRMOVE_T917F59D0157E946A54799E8BF03390E5CE89D93F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqDirMove
struct  ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqDirMove::curPos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___curPos_1;
	// MSG_Common.Position MSG_Map.ReqDirMove::dir
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___dir_2;
	// System.Int32 MSG_Map.ReqDirMove::mapId
	int32_t ___mapId_3;

public:
	inline static int32_t get_offset_of_curPos_1() { return static_cast<int32_t>(offsetof(ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F, ___curPos_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_curPos_1() const { return ___curPos_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_curPos_1() { return &___curPos_1; }
	inline void set_curPos_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___curPos_1 = value;
		Il2CppCodeGenWriteBarrier((&___curPos_1), value);
	}

	inline static int32_t get_offset_of_dir_2() { return static_cast<int32_t>(offsetof(ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F, ___dir_2)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_dir_2() const { return ___dir_2; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_dir_2() { return &___dir_2; }
	inline void set_dir_2(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___dir_2), value);
	}

	inline static int32_t get_offset_of_mapId_3() { return static_cast<int32_t>(offsetof(ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F, ___mapId_3)); }
	inline int32_t get_mapId_3() const { return ___mapId_3; }
	inline int32_t* get_address_of_mapId_3() { return &___mapId_3; }
	inline void set_mapId_3(int32_t value)
	{
		___mapId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDIRMOVE_T917F59D0157E946A54799E8BF03390E5CE89D93F_H
#ifndef REQFABAOJUMPBLOCK_TC2648DBEEE631C3529450930BA8D2A60268CA142_H
#define REQFABAOJUMPBLOCK_TC2648DBEEE631C3529450930BA8D2A60268CA142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqFabaoJumpBlock
struct  ReqFabaoJumpBlock_tC2648DBEEE631C3529450930BA8D2A60268CA142  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqFabaoJumpBlock::target
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___target_1;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(ReqFabaoJumpBlock_tC2648DBEEE631C3529450930BA8D2A60268CA142, ___target_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_target_1() const { return ___target_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQFABAOJUMPBLOCK_TC2648DBEEE631C3529450930BA8D2A60268CA142_H
#ifndef REQGATHER_T1CB522DB2F2258235AE15BA1C077332A23BF8879_H
#define REQGATHER_T1CB522DB2F2258235AE15BA1C077332A23BF8879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqGather
struct  ReqGather_t1CB522DB2F2258235AE15BA1C077332A23BF8879  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ReqGather::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ReqGather_t1CB522DB2F2258235AE15BA1C077332A23BF8879, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGATHER_T1CB522DB2F2258235AE15BA1C077332A23BF8879_H
#ifndef REQGETLINES_TE8DC4AE0443B7741A7122D3EF9529D2D18AD8239_H
#define REQGETLINES_TE8DC4AE0443B7741A7122D3EF9529D2D18AD8239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqGetLines
struct  ReqGetLines_tE8DC4AE0443B7741A7122D3EF9529D2D18AD8239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETLINES_TE8DC4AE0443B7741A7122D3EF9529D2D18AD8239_H
#ifndef REQGETMONSTERPOS_T564A3D32C76EADCE38DE684115317439CCA11044_H
#define REQGETMONSTERPOS_T564A3D32C76EADCE38DE684115317439CCA11044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqGetMonsterPos
struct  ReqGetMonsterPos_t564A3D32C76EADCE38DE684115317439CCA11044  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETMONSTERPOS_T564A3D32C76EADCE38DE684115317439CCA11044_H
#ifndef REQGROUNDBUFFSTAR_T50DC364549DE9233C8F00EFD3E5EE7BF11433040_H
#define REQGROUNDBUFFSTAR_T50DC364549DE9233C8F00EFD3E5EE7BF11433040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqGroundBuffStar
struct  ReqGroundBuffStar_t50DC364549DE9233C8F00EFD3E5EE7BF11433040  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ReqGroundBuffStar::gbid
	uint64_t ___gbid_1;

public:
	inline static int32_t get_offset_of_gbid_1() { return static_cast<int32_t>(offsetof(ReqGroundBuffStar_t50DC364549DE9233C8F00EFD3E5EE7BF11433040, ___gbid_1)); }
	inline uint64_t get_gbid_1() const { return ___gbid_1; }
	inline uint64_t* get_address_of_gbid_1() { return &___gbid_1; }
	inline void set_gbid_1(uint64_t value)
	{
		___gbid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGROUNDBUFFSTAR_T50DC364549DE9233C8F00EFD3E5EE7BF11433040_H
#ifndef REQJUMP_TBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2_H
#define REQJUMP_TBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqJump
struct  ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2  : public RuntimeObject
{
public:
	// System.Single MSG_Map.ReqJump::curX
	float ___curX_1;
	// System.Single MSG_Map.ReqJump::curY
	float ___curY_2;
	// System.Single MSG_Map.ReqJump::height
	float ___height_3;
	// System.Single MSG_Map.ReqJump::startTarX
	float ___startTarX_4;
	// System.Single MSG_Map.ReqJump::startTarY
	float ___startTarY_5;
	// System.Single MSG_Map.ReqJump::endTarX
	float ___endTarX_6;
	// System.Single MSG_Map.ReqJump::endTarY
	float ___endTarY_7;
	// System.Int32 MSG_Map.ReqJump::stage
	int32_t ___stage_8;

public:
	inline static int32_t get_offset_of_curX_1() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___curX_1)); }
	inline float get_curX_1() const { return ___curX_1; }
	inline float* get_address_of_curX_1() { return &___curX_1; }
	inline void set_curX_1(float value)
	{
		___curX_1 = value;
	}

	inline static int32_t get_offset_of_curY_2() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___curY_2)); }
	inline float get_curY_2() const { return ___curY_2; }
	inline float* get_address_of_curY_2() { return &___curY_2; }
	inline void set_curY_2(float value)
	{
		___curY_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_startTarX_4() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___startTarX_4)); }
	inline float get_startTarX_4() const { return ___startTarX_4; }
	inline float* get_address_of_startTarX_4() { return &___startTarX_4; }
	inline void set_startTarX_4(float value)
	{
		___startTarX_4 = value;
	}

	inline static int32_t get_offset_of_startTarY_5() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___startTarY_5)); }
	inline float get_startTarY_5() const { return ___startTarY_5; }
	inline float* get_address_of_startTarY_5() { return &___startTarY_5; }
	inline void set_startTarY_5(float value)
	{
		___startTarY_5 = value;
	}

	inline static int32_t get_offset_of_endTarX_6() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___endTarX_6)); }
	inline float get_endTarX_6() const { return ___endTarX_6; }
	inline float* get_address_of_endTarX_6() { return &___endTarX_6; }
	inline void set_endTarX_6(float value)
	{
		___endTarX_6 = value;
	}

	inline static int32_t get_offset_of_endTarY_7() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___endTarY_7)); }
	inline float get_endTarY_7() const { return ___endTarY_7; }
	inline float* get_address_of_endTarY_7() { return &___endTarY_7; }
	inline void set_endTarY_7(float value)
	{
		___endTarY_7 = value;
	}

	inline static int32_t get_offset_of_stage_8() { return static_cast<int32_t>(offsetof(ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2, ___stage_8)); }
	inline int32_t get_stage_8() const { return ___stage_8; }
	inline int32_t* get_address_of_stage_8() { return &___stage_8; }
	inline void set_stage_8(int32_t value)
	{
		___stage_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQJUMP_TBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2_H
#ifndef REQJUMPBLOCK_TC8EB410361DF417B5682720F70B79DEDBDDF26E0_H
#define REQJUMPBLOCK_TC8EB410361DF417B5682720F70B79DEDBDDF26E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqJumpBlock
struct  ReqJumpBlock_tC8EB410361DF417B5682720F70B79DEDBDDF26E0  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqJumpBlock::target
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___target_1;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(ReqJumpBlock_tC8EB410361DF417B5682720F70B79DEDBDDF26E0, ___target_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_target_1() const { return ___target_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQJUMPBLOCK_TC8EB410361DF417B5682720F70B79DEDBDDF26E0_H
#ifndef REQJUMPDOWN_T5B1F9036325587C8EA57A8257DC139FB905083B8_H
#define REQJUMPDOWN_T5B1F9036325587C8EA57A8257DC139FB905083B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqJumpDown
struct  ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8  : public RuntimeObject
{
public:
	// System.Single MSG_Map.ReqJumpDown::tarX
	float ___tarX_1;
	// System.Single MSG_Map.ReqJumpDown::tarY
	float ___tarY_2;

public:
	inline static int32_t get_offset_of_tarX_1() { return static_cast<int32_t>(offsetof(ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8, ___tarX_1)); }
	inline float get_tarX_1() const { return ___tarX_1; }
	inline float* get_address_of_tarX_1() { return &___tarX_1; }
	inline void set_tarX_1(float value)
	{
		___tarX_1 = value;
	}

	inline static int32_t get_offset_of_tarY_2() { return static_cast<int32_t>(offsetof(ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8, ___tarY_2)); }
	inline float get_tarY_2() const { return ___tarY_2; }
	inline float* get_address_of_tarY_2() { return &___tarY_2; }
	inline void set_tarY_2(float value)
	{
		___tarY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQJUMPDOWN_T5B1F9036325587C8EA57A8257DC139FB905083B8_H
#ifndef REQMOVETO_TB3F830AF3821F5F374752364CAC047D10755D5CD_H
#define REQMOVETO_TB3F830AF3821F5F374752364CAC047D10755D5CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqMoveTo
struct  ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqMoveTo::curPos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___curPos_1;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Map.ReqMoveTo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_2;
	// System.Int32 MSG_Map.ReqMoveTo::mapId
	int32_t ___mapId_3;

public:
	inline static int32_t get_offset_of_curPos_1() { return static_cast<int32_t>(offsetof(ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD, ___curPos_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_curPos_1() const { return ___curPos_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_curPos_1() { return &___curPos_1; }
	inline void set_curPos_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___curPos_1 = value;
		Il2CppCodeGenWriteBarrier((&___curPos_1), value);
	}

	inline static int32_t get_offset_of_posList_2() { return static_cast<int32_t>(offsetof(ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD, ___posList_2)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_2() const { return ___posList_2; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_2() { return &___posList_2; }
	inline void set_posList_2(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_2 = value;
		Il2CppCodeGenWriteBarrier((&___posList_2), value);
	}

	inline static int32_t get_offset_of_mapId_3() { return static_cast<int32_t>(offsetof(ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD, ___mapId_3)); }
	inline int32_t get_mapId_3() const { return ___mapId_3; }
	inline int32_t* get_address_of_mapId_3() { return &___mapId_3; }
	inline void set_mapId_3(int32_t value)
	{
		___mapId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMOVETO_TB3F830AF3821F5F374752364CAC047D10755D5CD_H
#ifndef REQPETJUMPBLOCK_T6966F435729CE78736AE8F98B72C07257887BA0C_H
#define REQPETJUMPBLOCK_T6966F435729CE78736AE8F98B72C07257887BA0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqPetJumpBlock
struct  ReqPetJumpBlock_t6966F435729CE78736AE8F98B72C07257887BA0C  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqPetJumpBlock::target
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___target_1;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(ReqPetJumpBlock_t6966F435729CE78736AE8F98B72C07257887BA0C, ___target_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_target_1() const { return ___target_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPETJUMPBLOCK_T6966F435729CE78736AE8F98B72C07257887BA0C_H
#ifndef REQPETMOVETO_T287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9_H
#define REQPETMOVETO_T287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqPetMoveTo
struct  ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqPetMoveTo::curPos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___curPos_1;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Map.ReqPetMoveTo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_2;
	// System.Int32 MSG_Map.ReqPetMoveTo::mapId
	int32_t ___mapId_3;

public:
	inline static int32_t get_offset_of_curPos_1() { return static_cast<int32_t>(offsetof(ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9, ___curPos_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_curPos_1() const { return ___curPos_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_curPos_1() { return &___curPos_1; }
	inline void set_curPos_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___curPos_1 = value;
		Il2CppCodeGenWriteBarrier((&___curPos_1), value);
	}

	inline static int32_t get_offset_of_posList_2() { return static_cast<int32_t>(offsetof(ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9, ___posList_2)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_2() const { return ___posList_2; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_2() { return &___posList_2; }
	inline void set_posList_2(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_2 = value;
		Il2CppCodeGenWriteBarrier((&___posList_2), value);
	}

	inline static int32_t get_offset_of_mapId_3() { return static_cast<int32_t>(offsetof(ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9, ___mapId_3)); }
	inline int32_t get_mapId_3() const { return ___mapId_3; }
	inline int32_t* get_address_of_mapId_3() { return &___mapId_3; }
	inline void set_mapId_3(int32_t value)
	{
		___mapId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPETMOVETO_T287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9_H
#ifndef REQPETSTOPMOVE_TDC91F7D3698421E4C9432B4D4931D40AB206A967_H
#define REQPETSTOPMOVE_TDC91F7D3698421E4C9432B4D4931D40AB206A967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqPetStopMove
struct  ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqPetStopMove::pos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___pos_1;
	// System.Int32 MSG_Map.ReqPetStopMove::mapId
	int32_t ___mapId_2;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967, ___pos_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_pos_1() const { return ___pos_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___pos_1 = value;
		Il2CppCodeGenWriteBarrier((&___pos_1), value);
	}

	inline static int32_t get_offset_of_mapId_2() { return static_cast<int32_t>(offsetof(ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967, ___mapId_2)); }
	inline int32_t get_mapId_2() const { return ___mapId_2; }
	inline int32_t* get_address_of_mapId_2() { return &___mapId_2; }
	inline void set_mapId_2(int32_t value)
	{
		___mapId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQPETSTOPMOVE_TDC91F7D3698421E4C9432B4D4931D40AB206A967_H
#ifndef REQRELIVE_T0B7C8BFF66D1483C835767D11E92BC1C0B7F4679_H
#define REQRELIVE_T0B7C8BFF66D1483C835767D11E92BC1C0B7F4679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqRelive
struct  ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ReqRelive::type
	int32_t ___type_1;
	// System.Boolean MSG_Map.ReqRelive::isUseGold
	bool ___isUseGold_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_isUseGold_2() { return static_cast<int32_t>(offsetof(ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679, ___isUseGold_2)); }
	inline bool get_isUseGold_2() const { return ___isUseGold_2; }
	inline bool* get_address_of_isUseGold_2() { return &___isUseGold_2; }
	inline void set_isUseGold_2(bool value)
	{
		___isUseGold_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQRELIVE_T0B7C8BFF66D1483C835767D11E92BC1C0B7F4679_H
#ifndef REQSELECTLINE_T10A323724F03BBF9555290FC6B1D06D66C9F5280_H
#define REQSELECTLINE_T10A323724F03BBF9555290FC6B1D06D66C9F5280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqSelectLine
struct  ReqSelectLine_t10A323724F03BBF9555290FC6B1D06D66C9F5280  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ReqSelectLine::line
	int32_t ___line_1;

public:
	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(ReqSelectLine_t10A323724F03BBF9555290FC6B1D06D66C9F5280, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSELECTLINE_T10A323724F03BBF9555290FC6B1D06D66C9F5280_H
#ifndef REQSTOPMOVE_T91AD9628726756CC4966AC9947B55AE3B6D5A209_H
#define REQSTOPMOVE_T91AD9628726756CC4966AC9947B55AE3B6D5A209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqStopMove
struct  ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209  : public RuntimeObject
{
public:
	// MSG_Common.Position MSG_Map.ReqStopMove::pos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___pos_1;
	// System.Int32 MSG_Map.ReqStopMove::mapId
	int32_t ___mapId_2;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209, ___pos_1)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_pos_1() const { return ___pos_1; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___pos_1 = value;
		Il2CppCodeGenWriteBarrier((&___pos_1), value);
	}

	inline static int32_t get_offset_of_mapId_2() { return static_cast<int32_t>(offsetof(ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209, ___mapId_2)); }
	inline int32_t get_mapId_2() const { return ___mapId_2; }
	inline int32_t* get_address_of_mapId_2() { return &___mapId_2; }
	inline void set_mapId_2(int32_t value)
	{
		___mapId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSTOPMOVE_T91AD9628726756CC4966AC9947B55AE3B6D5A209_H
#ifndef REQSYNPOS_T16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE_H
#define REQSYNPOS_T16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqSynPos
struct  ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE  : public RuntimeObject
{
public:
	// System.Single MSG_Map.ReqSynPos::x
	float ___x_1;
	// System.Single MSG_Map.ReqSynPos::y
	float ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSYNPOS_T16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE_H
#ifndef REQTRANSPORT_T2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71_H
#define REQTRANSPORT_T2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqTransport
struct  ReqTransport_t2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ReqTransport::transportId
	int32_t ___transportId_1;

public:
	inline static int32_t get_offset_of_transportId_1() { return static_cast<int32_t>(offsetof(ReqTransport_t2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71, ___transportId_1)); }
	inline int32_t get_transportId_1() const { return ___transportId_1; }
	inline int32_t* get_address_of_transportId_1() { return &___transportId_1; }
	inline void set_transportId_1(int32_t value)
	{
		___transportId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQTRANSPORT_T2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71_H
#ifndef REQTRANSPORTCONTROL_T2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA_H
#define REQTRANSPORTCONTROL_T2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ReqTransportControl
struct  ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ReqTransportControl::type
	int32_t ___type_1;
	// System.Int32 MSG_Map.ReqTransportControl::mapID
	int32_t ___mapID_2;
	// System.Single MSG_Map.ReqTransportControl::x
	float ___x_3;
	// System.Single MSG_Map.ReqTransportControl::y
	float ___y_4;
	// System.Int64 MSG_Map.ReqTransportControl::param
	int64_t ___param_5;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_mapID_2() { return static_cast<int32_t>(offsetof(ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA, ___mapID_2)); }
	inline int32_t get_mapID_2() const { return ___mapID_2; }
	inline int32_t* get_address_of_mapID_2() { return &___mapID_2; }
	inline void set_mapID_2(int32_t value)
	{
		___mapID_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_param_5() { return static_cast<int32_t>(offsetof(ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA, ___param_5)); }
	inline int64_t get_param_5() const { return ___param_5; }
	inline int64_t* get_address_of_param_5() { return &___param_5; }
	inline void set_param_5(int64_t value)
	{
		___param_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQTRANSPORTCONTROL_T2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA_H
#ifndef RESATTACKSPEEDCHANGE_T7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD_H
#define RESATTACKSPEEDCHANGE_T7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResAttackspeedChange
struct  ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResAttackspeedChange::objectId
	uint64_t ___objectId_1;
	// System.Int32 MSG_Map.ResAttackspeedChange::value
	int32_t ___value_2;

public:
	inline static int32_t get_offset_of_objectId_1() { return static_cast<int32_t>(offsetof(ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD, ___objectId_1)); }
	inline uint64_t get_objectId_1() const { return ___objectId_1; }
	inline uint64_t* get_address_of_objectId_1() { return &___objectId_1; }
	inline void set_objectId_1(uint64_t value)
	{
		___objectId_1 = value;
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESATTACKSPEEDCHANGE_T7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD_H
#ifndef RESBEGINGATHER_T481540EB0F4D783750F941232ADEFB99CE11B082_H
#define RESBEGINGATHER_T481540EB0F4D783750F941232ADEFB99CE11B082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResBeginGather
struct  ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResBeginGather::roleId
	uint64_t ___roleId_1;
	// System.UInt64 MSG_Map.ResBeginGather::gatherId
	uint64_t ___gatherId_2;
	// System.Single MSG_Map.ResBeginGather::x
	float ___x_3;
	// System.Single MSG_Map.ResBeginGather::Y
	float ___Y_4;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082, ___roleId_1)); }
	inline uint64_t get_roleId_1() const { return ___roleId_1; }
	inline uint64_t* get_address_of_roleId_1() { return &___roleId_1; }
	inline void set_roleId_1(uint64_t value)
	{
		___roleId_1 = value;
	}

	inline static int32_t get_offset_of_gatherId_2() { return static_cast<int32_t>(offsetof(ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082, ___gatherId_2)); }
	inline uint64_t get_gatherId_2() const { return ___gatherId_2; }
	inline uint64_t* get_address_of_gatherId_2() { return &___gatherId_2; }
	inline void set_gatherId_2(uint64_t value)
	{
		___gatherId_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_Y_4() { return static_cast<int32_t>(offsetof(ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082, ___Y_4)); }
	inline float get_Y_4() const { return ___Y_4; }
	inline float* get_address_of_Y_4() { return &___Y_4; }
	inline void set_Y_4(float value)
	{
		___Y_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBEGINGATHER_T481540EB0F4D783750F941232ADEFB99CE11B082_H
#ifndef RESBLOCKDOORS_T0538142BEC06F5682B6256895D0F08111559E3E1_H
#define RESBLOCKDOORS_T0538142BEC06F5682B6256895D0F08111559E3E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResBlockDoors
struct  ResBlockDoors_t0538142BEC06F5682B6256895D0F08111559E3E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Map.BlockDoor> MSG_Map.ResBlockDoors::doors
	List_1_t06209B14D567D9A70EECD78F5CBE59B97D61777B * ___doors_1;

public:
	inline static int32_t get_offset_of_doors_1() { return static_cast<int32_t>(offsetof(ResBlockDoors_t0538142BEC06F5682B6256895D0F08111559E3E1, ___doors_1)); }
	inline List_1_t06209B14D567D9A70EECD78F5CBE59B97D61777B * get_doors_1() const { return ___doors_1; }
	inline List_1_t06209B14D567D9A70EECD78F5CBE59B97D61777B ** get_address_of_doors_1() { return &___doors_1; }
	inline void set_doors_1(List_1_t06209B14D567D9A70EECD78F5CBE59B97D61777B * value)
	{
		___doors_1 = value;
		Il2CppCodeGenWriteBarrier((&___doors_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBLOCKDOORS_T0538142BEC06F5682B6256895D0F08111559E3E1_H
#ifndef RESBONFIREBIRTH_TAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2_H
#define RESBONFIREBIRTH_TAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResBonfireBirth
struct  ResBonfireBirth_tAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2  : public RuntimeObject
{
public:
	// MSG_Common.BonfireInfo MSG_Map.ResBonfireBirth::bonfire
	BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F * ___bonfire_1;

public:
	inline static int32_t get_offset_of_bonfire_1() { return static_cast<int32_t>(offsetof(ResBonfireBirth_tAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2, ___bonfire_1)); }
	inline BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F * get_bonfire_1() const { return ___bonfire_1; }
	inline BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F ** get_address_of_bonfire_1() { return &___bonfire_1; }
	inline void set_bonfire_1(BonfireInfo_t61BA20AFBDE3462494E3794924C321C88080448F * value)
	{
		___bonfire_1 = value;
		Il2CppCodeGenWriteBarrier((&___bonfire_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBONFIREBIRTH_TAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2_H
#ifndef RESBONFIRECLEAN_T5D8A5C3786793593B86B1F64EE17B302D3412F6C_H
#define RESBONFIRECLEAN_T5D8A5C3786793593B86B1F64EE17B302D3412F6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResBonfireClean
struct  ResBonfireClean_t5D8A5C3786793593B86B1F64EE17B302D3412F6C  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResBonfireClean::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResBonfireClean_t5D8A5C3786793593B86B1F64EE17B302D3412F6C, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBONFIRECLEAN_T5D8A5C3786793593B86B1F64EE17B302D3412F6C_H
#ifndef RESBREAKGATHER_TE0641819ACB93646EB3BDA07647F605C49F6E005_H
#define RESBREAKGATHER_TE0641819ACB93646EB3BDA07647F605C49F6E005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResBreakGather
struct  ResBreakGather_tE0641819ACB93646EB3BDA07647F605C49F6E005  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBREAKGATHER_TE0641819ACB93646EB3BDA07647F605C49F6E005_H
#ifndef RESCITYFLAG_TC651D79E89E74C252D31B010AF86A3708EBF8E81_H
#define RESCITYFLAG_TC651D79E89E74C252D31B010AF86A3708EBF8E81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResCityFlag
struct  ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResCityFlag::flagId
	int32_t ___flagId_1;
	// System.String MSG_Map.ResCityFlag::name
	String_t* ___name_2;
	// System.Single MSG_Map.ResCityFlag::x
	float ___x_3;
	// System.Single MSG_Map.ResCityFlag::y
	float ___y_4;

public:
	inline static int32_t get_offset_of_flagId_1() { return static_cast<int32_t>(offsetof(ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81, ___flagId_1)); }
	inline int32_t get_flagId_1() const { return ___flagId_1; }
	inline int32_t* get_address_of_flagId_1() { return &___flagId_1; }
	inline void set_flagId_1(int32_t value)
	{
		___flagId_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81, ___y_4)); }
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
#endif // RESCITYFLAG_TC651D79E89E74C252D31B010AF86A3708EBF8E81_H
#ifndef RESDIRMOVE_TDC9D619AC734E083178F1E2B09F0B541ABF3934E_H
#define RESDIRMOVE_TDC9D619AC734E083178F1E2B09F0B541ABF3934E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResDirMove
struct  ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResDirMove::objectId
	uint64_t ___objectId_1;
	// MSG_Common.Position MSG_Map.ResDirMove::curPos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___curPos_2;
	// MSG_Common.Position MSG_Map.ResDirMove::dir
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___dir_3;

public:
	inline static int32_t get_offset_of_objectId_1() { return static_cast<int32_t>(offsetof(ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E, ___objectId_1)); }
	inline uint64_t get_objectId_1() const { return ___objectId_1; }
	inline uint64_t* get_address_of_objectId_1() { return &___objectId_1; }
	inline void set_objectId_1(uint64_t value)
	{
		___objectId_1 = value;
	}

	inline static int32_t get_offset_of_curPos_2() { return static_cast<int32_t>(offsetof(ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E, ___curPos_2)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_curPos_2() const { return ___curPos_2; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_curPos_2() { return &___curPos_2; }
	inline void set_curPos_2(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___curPos_2 = value;
		Il2CppCodeGenWriteBarrier((&___curPos_2), value);
	}

	inline static int32_t get_offset_of_dir_3() { return static_cast<int32_t>(offsetof(ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E, ___dir_3)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_dir_3() const { return ___dir_3; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_dir_3() { return &___dir_3; }
	inline void set_dir_3(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___dir_3 = value;
		Il2CppCodeGenWriteBarrier((&___dir_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDIRMOVE_TDC9D619AC734E083178F1E2B09F0B541ABF3934E_H
#ifndef RESENDGATHER_T3D975685D4B69A150A1319427E43C4E292306713_H
#define RESENDGATHER_T3D975685D4B69A150A1319427E43C4E292306713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResEndGather
struct  ResEndGather_t3D975685D4B69A150A1319427E43C4E292306713  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResEndGather::roleId
	uint64_t ___roleId_1;

public:
	inline static int32_t get_offset_of_roleId_1() { return static_cast<int32_t>(offsetof(ResEndGather_t3D975685D4B69A150A1319427E43C4E292306713, ___roleId_1)); }
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
#endif // RESENDGATHER_T3D975685D4B69A150A1319427E43C4E292306713_H
#ifndef RESENTERMAP_T3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E_H
#define RESENTERMAP_T3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResEnterMap
struct  ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResEnterMap::result
	int32_t ___result_1;
	// System.Int32 MSG_Map.ResEnterMap::mapDataID
	int32_t ___mapDataID_2;
	// System.Int32 MSG_Map.ResEnterMap::line
	int32_t ___line_3;
	// MSG_Common.Position MSG_Map.ResEnterMap::pos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___pos_4;
	// System.Int32 MSG_Map.ResEnterMap::type
	int32_t ___type_5;
	// System.Int32 MSG_Map.ResEnterMap::param
	int32_t ___param_6;

public:
	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}

	inline static int32_t get_offset_of_mapDataID_2() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___mapDataID_2)); }
	inline int32_t get_mapDataID_2() const { return ___mapDataID_2; }
	inline int32_t* get_address_of_mapDataID_2() { return &___mapDataID_2; }
	inline void set_mapDataID_2(int32_t value)
	{
		___mapDataID_2 = value;
	}

	inline static int32_t get_offset_of_line_3() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___line_3)); }
	inline int32_t get_line_3() const { return ___line_3; }
	inline int32_t* get_address_of_line_3() { return &___line_3; }
	inline void set_line_3(int32_t value)
	{
		___line_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___pos_4)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_pos_4() const { return ___pos_4; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___pos_4 = value;
		Il2CppCodeGenWriteBarrier((&___pos_4), value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_param_6() { return static_cast<int32_t>(offsetof(ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E, ___param_6)); }
	inline int32_t get_param_6() const { return ___param_6; }
	inline int32_t* get_address_of_param_6() { return &___param_6; }
	inline void set_param_6(int32_t value)
	{
		___param_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESENTERMAP_T3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E_H
#ifndef RESGATHERDISAPPEAR_TAFC76F34783FDD41F1012305112843E628640B73_H
#define RESGATHERDISAPPEAR_TAFC76F34783FDD41F1012305112843E628640B73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResGatherDisappear
struct  ResGatherDisappear_tAFC76F34783FDD41F1012305112843E628640B73  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResGatherDisappear::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResGatherDisappear_tAFC76F34783FDD41F1012305112843E628640B73, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGATHERDISAPPEAR_TAFC76F34783FDD41F1012305112843E628640B73_H
#ifndef RESGROUNDBUFFBIRTH_TB11E46E691289CA970EA96120AAB78D51E7D6572_H
#define RESGROUNDBUFFBIRTH_TB11E46E691289CA970EA96120AAB78D51E7D6572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResGroundBuffBirth
struct  ResGroundBuffBirth_tB11E46E691289CA970EA96120AAB78D51E7D6572  : public RuntimeObject
{
public:
	// MSG_Common.GroundBuffMess MSG_Map.ResGroundBuffBirth::groundBuffInfo
	GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9 * ___groundBuffInfo_1;

public:
	inline static int32_t get_offset_of_groundBuffInfo_1() { return static_cast<int32_t>(offsetof(ResGroundBuffBirth_tB11E46E691289CA970EA96120AAB78D51E7D6572, ___groundBuffInfo_1)); }
	inline GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9 * get_groundBuffInfo_1() const { return ___groundBuffInfo_1; }
	inline GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9 ** get_address_of_groundBuffInfo_1() { return &___groundBuffInfo_1; }
	inline void set_groundBuffInfo_1(GroundBuffMess_t54D29B9FF8F7CC25852D78471E0C4A664C5943A9 * value)
	{
		___groundBuffInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___groundBuffInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGROUNDBUFFBIRTH_TB11E46E691289CA970EA96120AAB78D51E7D6572_H
#ifndef RESGROUNDBUFFCLEAN_T1A014A978C79C545C09D969FBF429F2C1CCEC06C_H
#define RESGROUNDBUFFCLEAN_T1A014A978C79C545C09D969FBF429F2C1CCEC06C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResGroundBuffClean
struct  ResGroundBuffClean_t1A014A978C79C545C09D969FBF429F2C1CCEC06C  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResGroundBuffClean::gbid
	uint64_t ___gbid_1;

public:
	inline static int32_t get_offset_of_gbid_1() { return static_cast<int32_t>(offsetof(ResGroundBuffClean_t1A014A978C79C545C09D969FBF429F2C1CCEC06C, ___gbid_1)); }
	inline uint64_t get_gbid_1() const { return ___gbid_1; }
	inline uint64_t* get_address_of_gbid_1() { return &___gbid_1; }
	inline void set_gbid_1(uint64_t value)
	{
		___gbid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGROUNDBUFFCLEAN_T1A014A978C79C545C09D969FBF429F2C1CCEC06C_H
#ifndef RESGROUNDBUFFSTAR_TB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D_H
#define RESGROUNDBUFFSTAR_TB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResGroundBuffStar
struct  ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResGroundBuffStar::gbid
	uint64_t ___gbid_1;
	// System.Int32 MSG_Map.ResGroundBuffStar::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_gbid_1() { return static_cast<int32_t>(offsetof(ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D, ___gbid_1)); }
	inline uint64_t get_gbid_1() const { return ___gbid_1; }
	inline uint64_t* get_address_of_gbid_1() { return &___gbid_1; }
	inline void set_gbid_1(uint64_t value)
	{
		___gbid_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESGROUNDBUFFSTAR_TB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D_H
#ifndef RESJUMP_T39F522A097374203BC99542B0ACD09A3EA3AC416_H
#define RESJUMP_T39F522A097374203BC99542B0ACD09A3EA3AC416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResJump
struct  ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResJump::roleID
	uint64_t ___roleID_1;
	// System.Single MSG_Map.ResJump::curX
	float ___curX_2;
	// System.Single MSG_Map.ResJump::curY
	float ___curY_3;
	// System.Single MSG_Map.ResJump::height
	float ___height_4;
	// System.Single MSG_Map.ResJump::startTarX
	float ___startTarX_5;
	// System.Single MSG_Map.ResJump::startTarY
	float ___startTarY_6;
	// System.Single MSG_Map.ResJump::endTarX
	float ___endTarX_7;
	// System.Single MSG_Map.ResJump::endTarY
	float ___endTarY_8;
	// System.Int32 MSG_Map.ResJump::stage
	int32_t ___stage_9;

public:
	inline static int32_t get_offset_of_roleID_1() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___roleID_1)); }
	inline uint64_t get_roleID_1() const { return ___roleID_1; }
	inline uint64_t* get_address_of_roleID_1() { return &___roleID_1; }
	inline void set_roleID_1(uint64_t value)
	{
		___roleID_1 = value;
	}

	inline static int32_t get_offset_of_curX_2() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___curX_2)); }
	inline float get_curX_2() const { return ___curX_2; }
	inline float* get_address_of_curX_2() { return &___curX_2; }
	inline void set_curX_2(float value)
	{
		___curX_2 = value;
	}

	inline static int32_t get_offset_of_curY_3() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___curY_3)); }
	inline float get_curY_3() const { return ___curY_3; }
	inline float* get_address_of_curY_3() { return &___curY_3; }
	inline void set_curY_3(float value)
	{
		___curY_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_startTarX_5() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___startTarX_5)); }
	inline float get_startTarX_5() const { return ___startTarX_5; }
	inline float* get_address_of_startTarX_5() { return &___startTarX_5; }
	inline void set_startTarX_5(float value)
	{
		___startTarX_5 = value;
	}

	inline static int32_t get_offset_of_startTarY_6() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___startTarY_6)); }
	inline float get_startTarY_6() const { return ___startTarY_6; }
	inline float* get_address_of_startTarY_6() { return &___startTarY_6; }
	inline void set_startTarY_6(float value)
	{
		___startTarY_6 = value;
	}

	inline static int32_t get_offset_of_endTarX_7() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___endTarX_7)); }
	inline float get_endTarX_7() const { return ___endTarX_7; }
	inline float* get_address_of_endTarX_7() { return &___endTarX_7; }
	inline void set_endTarX_7(float value)
	{
		___endTarX_7 = value;
	}

	inline static int32_t get_offset_of_endTarY_8() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___endTarY_8)); }
	inline float get_endTarY_8() const { return ___endTarY_8; }
	inline float* get_address_of_endTarY_8() { return &___endTarY_8; }
	inline void set_endTarY_8(float value)
	{
		___endTarY_8 = value;
	}

	inline static int32_t get_offset_of_stage_9() { return static_cast<int32_t>(offsetof(ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416, ___stage_9)); }
	inline int32_t get_stage_9() const { return ___stage_9; }
	inline int32_t* get_address_of_stage_9() { return &___stage_9; }
	inline void set_stage_9(int32_t value)
	{
		___stage_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESJUMP_T39F522A097374203BC99542B0ACD09A3EA3AC416_H
#ifndef RESJUMPBLOCK_TB04C41B523C919B79DAF7206CB0FFDE7D84CC532_H
#define RESJUMPBLOCK_TB04C41B523C919B79DAF7206CB0FFDE7D84CC532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResJumpBlock
struct  ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResJumpBlock::id
	uint64_t ___id_1;
	// MSG_Common.Position MSG_Map.ResJumpBlock::target
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___target_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532, ___target_2)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_target_2() const { return ___target_2; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESJUMPBLOCK_TB04C41B523C919B79DAF7206CB0FFDE7D84CC532_H
#ifndef RESJUMPDOWN_TEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5_H
#define RESJUMPDOWN_TEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResJumpDown
struct  ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResJumpDown::roleID
	uint64_t ___roleID_1;
	// System.Single MSG_Map.ResJumpDown::tarX
	float ___tarX_2;
	// System.Single MSG_Map.ResJumpDown::tarY
	float ___tarY_3;

public:
	inline static int32_t get_offset_of_roleID_1() { return static_cast<int32_t>(offsetof(ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5, ___roleID_1)); }
	inline uint64_t get_roleID_1() const { return ___roleID_1; }
	inline uint64_t* get_address_of_roleID_1() { return &___roleID_1; }
	inline void set_roleID_1(uint64_t value)
	{
		___roleID_1 = value;
	}

	inline static int32_t get_offset_of_tarX_2() { return static_cast<int32_t>(offsetof(ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5, ___tarX_2)); }
	inline float get_tarX_2() const { return ___tarX_2; }
	inline float* get_address_of_tarX_2() { return &___tarX_2; }
	inline void set_tarX_2(float value)
	{
		___tarX_2 = value;
	}

	inline static int32_t get_offset_of_tarY_3() { return static_cast<int32_t>(offsetof(ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5, ___tarY_3)); }
	inline float get_tarY_3() const { return ___tarY_3; }
	inline float* get_address_of_tarY_3() { return &___tarY_3; }
	inline void set_tarY_3(float value)
	{
		___tarY_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESJUMPDOWN_TEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5_H
#ifndef RESJUMPTRANSPORT_TC077D5BF29B868D918997FFD1D0F24AD7B2C4114_H
#define RESJUMPTRANSPORT_TC077D5BF29B868D918997FFD1D0F24AD7B2C4114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResJumpTransport
struct  ResJumpTransport_tC077D5BF29B868D918997FFD1D0F24AD7B2C4114  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResJumpTransport::transId
	int32_t ___transId_1;

public:
	inline static int32_t get_offset_of_transId_1() { return static_cast<int32_t>(offsetof(ResJumpTransport_tC077D5BF29B868D918997FFD1D0F24AD7B2C4114, ___transId_1)); }
	inline int32_t get_transId_1() const { return ___transId_1; }
	inline int32_t* get_address_of_transId_1() { return &___transId_1; }
	inline void set_transId_1(int32_t value)
	{
		___transId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESJUMPTRANSPORT_TC077D5BF29B868D918997FFD1D0F24AD7B2C4114_H
#ifndef RESLINELIST_T6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067_H
#define RESLINELIST_T6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResLineList
struct  ResLineList_t6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> MSG_Map.ResLineList::lines
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___lines_1;

public:
	inline static int32_t get_offset_of_lines_1() { return static_cast<int32_t>(offsetof(ResLineList_t6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067, ___lines_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_lines_1() const { return ___lines_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_lines_1() { return &___lines_1; }
	inline void set_lines_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___lines_1 = value;
		Il2CppCodeGenWriteBarrier((&___lines_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESLINELIST_T6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067_H
#ifndef RESMAGICBIRTH_TAA30D305DC823B20A96065F4E8B49F2CF5698E39_H
#define RESMAGICBIRTH_TAA30D305DC823B20A96065F4E8B49F2CF5698E39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMagicBirth
struct  ResMagicBirth_tAA30D305DC823B20A96065F4E8B49F2CF5698E39  : public RuntimeObject
{
public:
	// MSG_Common.Magic MSG_Map.ResMagicBirth::magic
	Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98 * ___magic_1;

public:
	inline static int32_t get_offset_of_magic_1() { return static_cast<int32_t>(offsetof(ResMagicBirth_tAA30D305DC823B20A96065F4E8B49F2CF5698E39, ___magic_1)); }
	inline Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98 * get_magic_1() const { return ___magic_1; }
	inline Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98 ** get_address_of_magic_1() { return &___magic_1; }
	inline void set_magic_1(Magic_tBB58F0E8FD8278CADCBD137AE574CC76B0FB7F98 * value)
	{
		___magic_1 = value;
		Il2CppCodeGenWriteBarrier((&___magic_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAGICBIRTH_TAA30D305DC823B20A96065F4E8B49F2CF5698E39_H
#ifndef RESMAGICCLEAN_T0865A1BD697D0DB08307C3F3FF5F507BEAE18730_H
#define RESMAGICCLEAN_T0865A1BD697D0DB08307C3F3FF5F507BEAE18730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMagicClean
struct  ResMagicClean_t0865A1BD697D0DB08307C3F3FF5F507BEAE18730  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMagicClean::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResMagicClean_t0865A1BD697D0DB08307C3F3FF5F507BEAE18730, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAGICCLEAN_T0865A1BD697D0DB08307C3F3FF5F507BEAE18730_H
#ifndef RESMAPGATHERINFO_TFA6645687C35F7CF9C0693D891AB7B4A45A6E551_H
#define RESMAPGATHERINFO_TFA6645687C35F7CF9C0693D891AB7B4A45A6E551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMapGatherInfo
struct  ResMapGatherInfo_tFA6645687C35F7CF9C0693D891AB7B4A45A6E551  : public RuntimeObject
{
public:
	// MSG_Common.GatherInfo MSG_Map.ResMapGatherInfo::gatherInfo
	GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3 * ___gatherInfo_1;

public:
	inline static int32_t get_offset_of_gatherInfo_1() { return static_cast<int32_t>(offsetof(ResMapGatherInfo_tFA6645687C35F7CF9C0693D891AB7B4A45A6E551, ___gatherInfo_1)); }
	inline GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3 * get_gatherInfo_1() const { return ___gatherInfo_1; }
	inline GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3 ** get_address_of_gatherInfo_1() { return &___gatherInfo_1; }
	inline void set_gatherInfo_1(GatherInfo_t5412D49073EE3D567CB554166172161C601BBBC3 * value)
	{
		___gatherInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___gatherInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAPGATHERINFO_TFA6645687C35F7CF9C0693D891AB7B4A45A6E551_H
#ifndef RESMAPMONSTER_T1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735_H
#define RESMAPMONSTER_T1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMapMonster
struct  ResMapMonster_t1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735  : public RuntimeObject
{
public:
	// MSG_Common.MonsterInfo MSG_Map.ResMapMonster::monserInfo
	MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE * ___monserInfo_1;

public:
	inline static int32_t get_offset_of_monserInfo_1() { return static_cast<int32_t>(offsetof(ResMapMonster_t1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735, ___monserInfo_1)); }
	inline MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE * get_monserInfo_1() const { return ___monserInfo_1; }
	inline MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE ** get_address_of_monserInfo_1() { return &___monserInfo_1; }
	inline void set_monserInfo_1(MonsterInfo_t1A2BB530915CBD51D04D91B784479CEF8EDBA8DE * value)
	{
		___monserInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___monserInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAPMONSTER_T1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735_H
#ifndef RESMAPPLAYER_TED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C_H
#define RESMAPPLAYER_TED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMapPlayer
struct  ResMapPlayer_tED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C  : public RuntimeObject
{
public:
	// MSG_Common.PlayerInfo MSG_Map.ResMapPlayer::player
	PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B * ___player_1;

public:
	inline static int32_t get_offset_of_player_1() { return static_cast<int32_t>(offsetof(ResMapPlayer_tED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C, ___player_1)); }
	inline PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B * get_player_1() const { return ___player_1; }
	inline PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B ** get_address_of_player_1() { return &___player_1; }
	inline void set_player_1(PlayerInfo_tB88B560FE8DE909A88896FAC5ABFDD47F3750A8B * value)
	{
		___player_1 = value;
		Il2CppCodeGenWriteBarrier((&___player_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMAPPLAYER_TED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C_H
#ifndef RESMONSTERDIEGETCOIN_TE2F5801AA683317D89FD9794D239240A7876C1D5_H
#define RESMONSTERDIEGETCOIN_TE2F5801AA683317D89FD9794D239240A7876C1D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMonsterDieGetCoin
struct  ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMonsterDieGetCoin::instanceId
	uint64_t ___instanceId_1;
	// System.Int32 MSG_Map.ResMonsterDieGetCoin::coinnum
	int32_t ___coinnum_2;

public:
	inline static int32_t get_offset_of_instanceId_1() { return static_cast<int32_t>(offsetof(ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5, ___instanceId_1)); }
	inline uint64_t get_instanceId_1() const { return ___instanceId_1; }
	inline uint64_t* get_address_of_instanceId_1() { return &___instanceId_1; }
	inline void set_instanceId_1(uint64_t value)
	{
		___instanceId_1 = value;
	}

	inline static int32_t get_offset_of_coinnum_2() { return static_cast<int32_t>(offsetof(ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5, ___coinnum_2)); }
	inline int32_t get_coinnum_2() const { return ___coinnum_2; }
	inline int32_t* get_address_of_coinnum_2() { return &___coinnum_2; }
	inline void set_coinnum_2(int32_t value)
	{
		___coinnum_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMONSTERDIEGETCOIN_TE2F5801AA683317D89FD9794D239240A7876C1D5_H
#ifndef RESMONSTERDIEGETITEM_T74884337AA5722A2EFF4436C4E42832955235672_H
#define RESMONSTERDIEGETITEM_T74884337AA5722A2EFF4436C4E42832955235672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMonsterDieGetItem
struct  ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMonsterDieGetItem::instanceId
	uint64_t ___instanceId_1;
	// System.UInt64 MSG_Map.ResMonsterDieGetItem::roleId
	uint64_t ___roleId_2;
	// System.Collections.Generic.List`1<MSG_copyMap.cardItemInfo> MSG_Map.ResMonsterDieGetItem::list
	List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * ___list_3;

public:
	inline static int32_t get_offset_of_instanceId_1() { return static_cast<int32_t>(offsetof(ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672, ___instanceId_1)); }
	inline uint64_t get_instanceId_1() const { return ___instanceId_1; }
	inline uint64_t* get_address_of_instanceId_1() { return &___instanceId_1; }
	inline void set_instanceId_1(uint64_t value)
	{
		___instanceId_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672, ___roleId_2)); }
	inline uint64_t get_roleId_2() const { return ___roleId_2; }
	inline uint64_t* get_address_of_roleId_2() { return &___roleId_2; }
	inline void set_roleId_2(uint64_t value)
	{
		___roleId_2 = value;
	}

	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672, ___list_3)); }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * get_list_3() const { return ___list_3; }
	inline List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(List_1_t75624CAE49F7F44EBC97F9FAE547B85BF4FD56B0 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((&___list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMONSTERDIEGETITEM_T74884337AA5722A2EFF4436C4E42832955235672_H
#ifndef RESMONSTERDISAPPEAR_T02C9FA34B66F5030C829B5442081B7A446B59955_H
#define RESMONSTERDISAPPEAR_T02C9FA34B66F5030C829B5442081B7A446B59955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMonsterDisappear
struct  ResMonsterDisappear_t02C9FA34B66F5030C829B5442081B7A446B59955  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMonsterDisappear::monsterId
	uint64_t ___monsterId_1;

public:
	inline static int32_t get_offset_of_monsterId_1() { return static_cast<int32_t>(offsetof(ResMonsterDisappear_t02C9FA34B66F5030C829B5442081B7A446B59955, ___monsterId_1)); }
	inline uint64_t get_monsterId_1() const { return ___monsterId_1; }
	inline uint64_t* get_address_of_monsterId_1() { return &___monsterId_1; }
	inline void set_monsterId_1(uint64_t value)
	{
		___monsterId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMONSTERDISAPPEAR_T02C9FA34B66F5030C829B5442081B7A446B59955_H
#ifndef RESMONSTERDROPMARK_T23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D_H
#define RESMONSTERDROPMARK_T23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMonsterDropMark
struct  ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMonsterDropMark::monsterId
	uint64_t ___monsterId_1;
	// System.Collections.Generic.List`1<System.Int64> MSG_Map.ResMonsterDropMark::dropUserIds
	List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * ___dropUserIds_2;

public:
	inline static int32_t get_offset_of_monsterId_1() { return static_cast<int32_t>(offsetof(ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D, ___monsterId_1)); }
	inline uint64_t get_monsterId_1() const { return ___monsterId_1; }
	inline uint64_t* get_address_of_monsterId_1() { return &___monsterId_1; }
	inline void set_monsterId_1(uint64_t value)
	{
		___monsterId_1 = value;
	}

	inline static int32_t get_offset_of_dropUserIds_2() { return static_cast<int32_t>(offsetof(ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D, ___dropUserIds_2)); }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * get_dropUserIds_2() const { return ___dropUserIds_2; }
	inline List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D ** get_address_of_dropUserIds_2() { return &___dropUserIds_2; }
	inline void set_dropUserIds_2(List_1_t8F75C289D978FECFC1EA5C5FD9F736B2F9F72B0D * value)
	{
		___dropUserIds_2 = value;
		Il2CppCodeGenWriteBarrier((&___dropUserIds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMONSTERDROPMARK_T23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D_H
#ifndef RESMONSTERPOS_TE20BD59959617ACFE47C038414E7D02DAB4AE628_H
#define RESMONSTERPOS_TE20BD59959617ACFE47C038414E7D02DAB4AE628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMonsterPos
struct  ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628  : public RuntimeObject
{
public:
	// System.Single MSG_Map.ResMonsterPos::x
	float ___x_1;
	// System.Single MSG_Map.ResMonsterPos::Y
	float ___Y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMONSTERPOS_TE20BD59959617ACFE47C038414E7D02DAB4AE628_H
#ifndef RESMOVESPEEDCHANGE_TC0379C730500D3170D7A580B27F21CF6EB59BE4B_H
#define RESMOVESPEEDCHANGE_TC0379C730500D3170D7A580B27F21CF6EB59BE4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMoveSpeedChange
struct  ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMoveSpeedChange::objectId
	uint64_t ___objectId_1;
	// System.Int32 MSG_Map.ResMoveSpeedChange::value
	int32_t ___value_2;

public:
	inline static int32_t get_offset_of_objectId_1() { return static_cast<int32_t>(offsetof(ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B, ___objectId_1)); }
	inline uint64_t get_objectId_1() const { return ___objectId_1; }
	inline uint64_t* get_address_of_objectId_1() { return &___objectId_1; }
	inline void set_objectId_1(uint64_t value)
	{
		___objectId_1 = value;
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMOVESPEEDCHANGE_TC0379C730500D3170D7A580B27F21CF6EB59BE4B_H
#ifndef RESMOVETO_T28F9D113BD70B357628D2D7840E586845D4FDEFB_H
#define RESMOVETO_T28F9D113BD70B357628D2D7840E586845D4FDEFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResMoveTo
struct  ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResMoveTo::objectId
	uint64_t ___objectId_1;
	// System.Collections.Generic.List`1<MSG_Common.Position> MSG_Map.ResMoveTo::posList
	List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * ___posList_2;

public:
	inline static int32_t get_offset_of_objectId_1() { return static_cast<int32_t>(offsetof(ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB, ___objectId_1)); }
	inline uint64_t get_objectId_1() const { return ___objectId_1; }
	inline uint64_t* get_address_of_objectId_1() { return &___objectId_1; }
	inline void set_objectId_1(uint64_t value)
	{
		___objectId_1 = value;
	}

	inline static int32_t get_offset_of_posList_2() { return static_cast<int32_t>(offsetof(ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB, ___posList_2)); }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * get_posList_2() const { return ___posList_2; }
	inline List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C ** get_address_of_posList_2() { return &___posList_2; }
	inline void set_posList_2(List_1_t025DF581AC9FDE17F2B2DA3550B5D2B1FD9AD58C * value)
	{
		___posList_2 = value;
		Il2CppCodeGenWriteBarrier((&___posList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMOVETO_T28F9D113BD70B357628D2D7840E586845D4FDEFB_H
#ifndef RESNOTCANGATHER_T853A37F0BE018B3904D2E15E4B8CC369F90AF829_H
#define RESNOTCANGATHER_T853A37F0BE018B3904D2E15E4B8CC369F90AF829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResNotCanGather
struct  ResNotCanGather_t853A37F0BE018B3904D2E15E4B8CC369F90AF829  : public RuntimeObject
{
public:
	// System.Int64 MSG_Map.ResNotCanGather::gatherId
	int64_t ___gatherId_1;

public:
	inline static int32_t get_offset_of_gatherId_1() { return static_cast<int32_t>(offsetof(ResNotCanGather_t853A37F0BE018B3904D2E15E4B8CC369F90AF829, ___gatherId_1)); }
	inline int64_t get_gatherId_1() const { return ___gatherId_1; }
	inline int64_t* get_address_of_gatherId_1() { return &___gatherId_1; }
	inline void set_gatherId_1(int64_t value)
	{
		___gatherId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESNOTCANGATHER_T853A37F0BE018B3904D2E15E4B8CC369F90AF829_H
#ifndef RESPETBIRTH_T6DD5626692F8D76D717CD71F4E1DDFED18960113_H
#define RESPETBIRTH_T6DD5626692F8D76D717CD71F4E1DDFED18960113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPetBirth
struct  ResPetBirth_t6DD5626692F8D76D717CD71F4E1DDFED18960113  : public RuntimeObject
{
public:
	// MSG_Common.PetInfo MSG_Map.ResPetBirth::pet
	PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB * ___pet_1;

public:
	inline static int32_t get_offset_of_pet_1() { return static_cast<int32_t>(offsetof(ResPetBirth_t6DD5626692F8D76D717CD71F4E1DDFED18960113, ___pet_1)); }
	inline PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB * get_pet_1() const { return ___pet_1; }
	inline PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB ** get_address_of_pet_1() { return &___pet_1; }
	inline void set_pet_1(PetInfo_tADD6023120A0E9B2F274EFA006B555B434835FAB * value)
	{
		___pet_1 = value;
		Il2CppCodeGenWriteBarrier((&___pet_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETBIRTH_T6DD5626692F8D76D717CD71F4E1DDFED18960113_H
#ifndef RESPETDISAPPEAR_TA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE_H
#define RESPETDISAPPEAR_TA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPetDisappear
struct  ResPetDisappear_tA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResPetDisappear::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResPetDisappear_tA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETDISAPPEAR_TA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE_H
#ifndef RESPETHPCHANGE_TF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712_H
#define RESPETHPCHANGE_TF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPetHpChange
struct  ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResPetHpChange::id
	uint64_t ___id_1;
	// System.Int32 MSG_Map.ResPetHpChange::dataID
	int32_t ___dataID_2;
	// System.UInt64 MSG_Map.ResPetHpChange::ownerID
	uint64_t ___ownerID_3;
	// System.Int32 MSG_Map.ResPetHpChange::speed
	int32_t ___speed_4;
	// System.Int32 MSG_Map.ResPetHpChange::level
	int32_t ___level_5;
	// System.Int32 MSG_Map.ResPetHpChange::camp
	int32_t ___camp_6;
	// System.UInt64 MSG_Map.ResPetHpChange::curHp
	uint64_t ___curHp_7;
	// System.UInt64 MSG_Map.ResPetHpChange::maxHp
	uint64_t ___maxHp_8;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_dataID_2() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___dataID_2)); }
	inline int32_t get_dataID_2() const { return ___dataID_2; }
	inline int32_t* get_address_of_dataID_2() { return &___dataID_2; }
	inline void set_dataID_2(int32_t value)
	{
		___dataID_2 = value;
	}

	inline static int32_t get_offset_of_ownerID_3() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___ownerID_3)); }
	inline uint64_t get_ownerID_3() const { return ___ownerID_3; }
	inline uint64_t* get_address_of_ownerID_3() { return &___ownerID_3; }
	inline void set_ownerID_3(uint64_t value)
	{
		___ownerID_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___speed_4)); }
	inline int32_t get_speed_4() const { return ___speed_4; }
	inline int32_t* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(int32_t value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_level_5() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___level_5)); }
	inline int32_t get_level_5() const { return ___level_5; }
	inline int32_t* get_address_of_level_5() { return &___level_5; }
	inline void set_level_5(int32_t value)
	{
		___level_5 = value;
	}

	inline static int32_t get_offset_of_camp_6() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___camp_6)); }
	inline int32_t get_camp_6() const { return ___camp_6; }
	inline int32_t* get_address_of_camp_6() { return &___camp_6; }
	inline void set_camp_6(int32_t value)
	{
		___camp_6 = value;
	}

	inline static int32_t get_offset_of_curHp_7() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___curHp_7)); }
	inline uint64_t get_curHp_7() const { return ___curHp_7; }
	inline uint64_t* get_address_of_curHp_7() { return &___curHp_7; }
	inline void set_curHp_7(uint64_t value)
	{
		___curHp_7 = value;
	}

	inline static int32_t get_offset_of_maxHp_8() { return static_cast<int32_t>(offsetof(ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712, ___maxHp_8)); }
	inline uint64_t get_maxHp_8() const { return ___maxHp_8; }
	inline uint64_t* get_address_of_maxHp_8() { return &___maxHp_8; }
	inline void set_maxHp_8(uint64_t value)
	{
		___maxHp_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPETHPCHANGE_TF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712_H
#ifndef RESPLAYCINEMATIC_T7057F3DE854BC4B9CB03D93D41E936DB54C8084F_H
#define RESPLAYCINEMATIC_T7057F3DE854BC4B9CB03D93D41E936DB54C8084F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPlayCinematic
struct  ResPlayCinematic_t7057F3DE854BC4B9CB03D93D41E936DB54C8084F  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResPlayCinematic::cinematicID
	int32_t ___cinematicID_1;

public:
	inline static int32_t get_offset_of_cinematicID_1() { return static_cast<int32_t>(offsetof(ResPlayCinematic_t7057F3DE854BC4B9CB03D93D41E936DB54C8084F, ___cinematicID_1)); }
	inline int32_t get_cinematicID_1() const { return ___cinematicID_1; }
	inline int32_t* get_address_of_cinematicID_1() { return &___cinematicID_1; }
	inline void set_cinematicID_1(int32_t value)
	{
		___cinematicID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYCINEMATIC_T7057F3DE854BC4B9CB03D93D41E936DB54C8084F_H
#ifndef RESPLAYEFFECT_T1652E459F69D81EC20BD9837E5B83959F28D11AD_H
#define RESPLAYEFFECT_T1652E459F69D81EC20BD9837E5B83959F28D11AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPlayEffect
struct  ResPlayEffect_t1652E459F69D81EC20BD9837E5B83959F28D11AD  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResPlayEffect::effectType
	int32_t ___effectType_1;

public:
	inline static int32_t get_offset_of_effectType_1() { return static_cast<int32_t>(offsetof(ResPlayEffect_t1652E459F69D81EC20BD9837E5B83959F28D11AD, ___effectType_1)); }
	inline int32_t get_effectType_1() const { return ___effectType_1; }
	inline int32_t* get_address_of_effectType_1() { return &___effectType_1; }
	inline void set_effectType_1(int32_t value)
	{
		___effectType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYEFFECT_T1652E459F69D81EC20BD9837E5B83959F28D11AD_H
#ifndef RESPLAYERCLOAKCHANGE_T23F494F41B8F2D385BDA65D12A3A2CBE628669CA_H
#define RESPLAYERCLOAKCHANGE_T23F494F41B8F2D385BDA65D12A3A2CBE628669CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPlayerCloakChange
struct  ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResPlayerCloakChange::playerId
	uint64_t ___playerId_1;
	// System.Int32 MSG_Map.ResPlayerCloakChange::curCloakLayer
	int32_t ___curCloakLayer_2;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_curCloakLayer_2() { return static_cast<int32_t>(offsetof(ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA, ___curCloakLayer_2)); }
	inline int32_t get_curCloakLayer_2() const { return ___curCloakLayer_2; }
	inline int32_t* get_address_of_curCloakLayer_2() { return &___curCloakLayer_2; }
	inline void set_curCloakLayer_2(int32_t value)
	{
		___curCloakLayer_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERCLOAKCHANGE_T23F494F41B8F2D385BDA65D12A3A2CBE628669CA_H
#ifndef RESPLAYERDISAPPEAR_TB1C2C774061C948F562BA5E1303A04F6B3F7D530_H
#define RESPLAYERDISAPPEAR_TB1C2C774061C948F562BA5E1303A04F6B3F7D530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResPlayerDisappear
struct  ResPlayerDisappear_tB1C2C774061C948F562BA5E1303A04F6B3F7D530  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.UInt64> MSG_Map.ResPlayerDisappear::playerIds
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___playerIds_1;

public:
	inline static int32_t get_offset_of_playerIds_1() { return static_cast<int32_t>(offsetof(ResPlayerDisappear_tB1C2C774061C948F562BA5E1303A04F6B3F7D530, ___playerIds_1)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_playerIds_1() const { return ___playerIds_1; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_playerIds_1() { return &___playerIds_1; }
	inline void set_playerIds_1(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___playerIds_1 = value;
		Il2CppCodeGenWriteBarrier((&___playerIds_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPLAYERDISAPPEAR_TB1C2C774061C948F562BA5E1303A04F6B3F7D530_H
#ifndef RESRELIVE_T533DFF5A446287AB1BBB6369DF4F4FA172A488D7_H
#define RESRELIVE_T533DFF5A446287AB1BBB6369DF4F4FA172A488D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResRelive
struct  ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResRelive::playerId
	uint64_t ___playerId_1;
	// System.Int32 MSG_Map.ResRelive::mapId
	int32_t ___mapId_2;
	// MSG_Common.Position MSG_Map.ResRelive::curPos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___curPos_3;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_mapId_2() { return static_cast<int32_t>(offsetof(ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7, ___mapId_2)); }
	inline int32_t get_mapId_2() const { return ___mapId_2; }
	inline int32_t* get_address_of_mapId_2() { return &___mapId_2; }
	inline void set_mapId_2(int32_t value)
	{
		___mapId_2 = value;
	}

	inline static int32_t get_offset_of_curPos_3() { return static_cast<int32_t>(offsetof(ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7, ___curPos_3)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_curPos_3() const { return ___curPos_3; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_curPos_3() { return &___curPos_3; }
	inline void set_curPos_3(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___curPos_3 = value;
		Il2CppCodeGenWriteBarrier((&___curPos_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESRELIVE_T533DFF5A446287AB1BBB6369DF4F4FA172A488D7_H
#ifndef RESROLESTATUE_T9AC31478048A1100D73F59BC978761681F819F42_H
#define RESROLESTATUE_T9AC31478048A1100D73F59BC978761681F819F42_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResRoleStatue
struct  ResRoleStatue_t9AC31478048A1100D73F59BC978761681F819F42  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Map.RoleStatue> MSG_Map.ResRoleStatue::statues
	List_1_t0BD21CC57DD8AF25160D9A598DAFF0ABB56EE393 * ___statues_1;

public:
	inline static int32_t get_offset_of_statues_1() { return static_cast<int32_t>(offsetof(ResRoleStatue_t9AC31478048A1100D73F59BC978761681F819F42, ___statues_1)); }
	inline List_1_t0BD21CC57DD8AF25160D9A598DAFF0ABB56EE393 * get_statues_1() const { return ___statues_1; }
	inline List_1_t0BD21CC57DD8AF25160D9A598DAFF0ABB56EE393 ** get_address_of_statues_1() { return &___statues_1; }
	inline void set_statues_1(List_1_t0BD21CC57DD8AF25160D9A598DAFF0ABB56EE393 * value)
	{
		___statues_1 = value;
		Il2CppCodeGenWriteBarrier((&___statues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESROLESTATUE_T9AC31478048A1100D73F59BC978761681F819F42_H
#ifndef RESROUNDNPCDISAPPEAR_T712272852C02EFE9DEDFD85C5A41054CBD2BC697_H
#define RESROUNDNPCDISAPPEAR_T712272852C02EFE9DEDFD85C5A41054CBD2BC697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResRoundNpcDisappear
struct  ResRoundNpcDisappear_t712272852C02EFE9DEDFD85C5A41054CBD2BC697  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.UInt64> MSG_Map.ResRoundNpcDisappear::npcIds
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___npcIds_1;

public:
	inline static int32_t get_offset_of_npcIds_1() { return static_cast<int32_t>(offsetof(ResRoundNpcDisappear_t712272852C02EFE9DEDFD85C5A41054CBD2BC697, ___npcIds_1)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_npcIds_1() const { return ___npcIds_1; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_npcIds_1() { return &___npcIds_1; }
	inline void set_npcIds_1(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___npcIds_1 = value;
		Il2CppCodeGenWriteBarrier((&___npcIds_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESROUNDNPCDISAPPEAR_T712272852C02EFE9DEDFD85C5A41054CBD2BC697_H
#ifndef RESROUNDNPCINFO_T253E8C7905E6F48379DF1AC72EF6A705E7A92234_H
#define RESROUNDNPCINFO_T253E8C7905E6F48379DF1AC72EF6A705E7A92234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResRoundNpcInfo
struct  ResRoundNpcInfo_t253E8C7905E6F48379DF1AC72EF6A705E7A92234  : public RuntimeObject
{
public:
	// MSG_Common.NpcInfo MSG_Map.ResRoundNpcInfo::npcInfo
	NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6 * ___npcInfo_1;

public:
	inline static int32_t get_offset_of_npcInfo_1() { return static_cast<int32_t>(offsetof(ResRoundNpcInfo_t253E8C7905E6F48379DF1AC72EF6A705E7A92234, ___npcInfo_1)); }
	inline NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6 * get_npcInfo_1() const { return ___npcInfo_1; }
	inline NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6 ** get_address_of_npcInfo_1() { return &___npcInfo_1; }
	inline void set_npcInfo_1(NpcInfo_tE0095145999FD2285BA2A248A23561CE52687AD6 * value)
	{
		___npcInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___npcInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESROUNDNPCINFO_T253E8C7905E6F48379DF1AC72EF6A705E7A92234_H
#ifndef RESROUNDOBJS_T7F207600CAD5DB1EAFF2046D20235B4ADE82E921_H
#define RESROUNDOBJS_T7F207600CAD5DB1EAFF2046D20235B4ADE82E921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResRoundObjs
struct  ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Common.PlayerInfo> MSG_Map.ResRoundObjs::players
	List_1_t82142BEC7576942A9D9D96536F5D4DAEE08DBB35 * ___players_1;
	// System.Collections.Generic.List`1<MSG_Common.MonsterInfo> MSG_Map.ResRoundObjs::monsters
	List_1_t5F036E28D2BA78A5566EA1FE7F8B506161068CEA * ___monsters_2;
	// System.Collections.Generic.List`1<MSG_Common.GatherInfo> MSG_Map.ResRoundObjs::gathers
	List_1_tBBC189BA6B43AA35065AAF403BC3D3C6230339CF * ___gathers_3;
	// System.Collections.Generic.List`1<MSG_Common.PetInfo> MSG_Map.ResRoundObjs::pets
	List_1_t20A6914CEA4C51C4582EB8112B391440C3E87CB6 * ___pets_4;
	// System.Collections.Generic.List`1<MSG_Common.NpcInfo> MSG_Map.ResRoundObjs::npcs
	List_1_tFEF19218F9E9977F0527EFB83281F36B2F1B664B * ___npcs_5;
	// System.Collections.Generic.List`1<System.UInt64> MSG_Map.ResRoundObjs::removeIds
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___removeIds_6;
	// System.Collections.Generic.List`1<MSG_Common.Magic> MSG_Map.ResRoundObjs::magics
	List_1_tE8D3B89628283B835D75361F4F6BD7DF710D335A * ___magics_7;
	// System.Collections.Generic.List`1<MSG_Common.BonfireInfo> MSG_Map.ResRoundObjs::bonfires
	List_1_t8A0665034236C89736A79A3294838E9278D7FC1A * ___bonfires_8;
	// System.Collections.Generic.List`1<MSG_Common.TombstoneInfo> MSG_Map.ResRoundObjs::tombstone
	List_1_t26A0C921BBED7D989CE903C5DCB4EA909CDD53D1 * ___tombstone_9;
	// System.Collections.Generic.List`1<MSG_Common.GroundBuffMess> MSG_Map.ResRoundObjs::groundBuff
	List_1_t0A804CCAEDD72B842F34FD607CC9789D0365C6B0 * ___groundBuff_10;

public:
	inline static int32_t get_offset_of_players_1() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___players_1)); }
	inline List_1_t82142BEC7576942A9D9D96536F5D4DAEE08DBB35 * get_players_1() const { return ___players_1; }
	inline List_1_t82142BEC7576942A9D9D96536F5D4DAEE08DBB35 ** get_address_of_players_1() { return &___players_1; }
	inline void set_players_1(List_1_t82142BEC7576942A9D9D96536F5D4DAEE08DBB35 * value)
	{
		___players_1 = value;
		Il2CppCodeGenWriteBarrier((&___players_1), value);
	}

	inline static int32_t get_offset_of_monsters_2() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___monsters_2)); }
	inline List_1_t5F036E28D2BA78A5566EA1FE7F8B506161068CEA * get_monsters_2() const { return ___monsters_2; }
	inline List_1_t5F036E28D2BA78A5566EA1FE7F8B506161068CEA ** get_address_of_monsters_2() { return &___monsters_2; }
	inline void set_monsters_2(List_1_t5F036E28D2BA78A5566EA1FE7F8B506161068CEA * value)
	{
		___monsters_2 = value;
		Il2CppCodeGenWriteBarrier((&___monsters_2), value);
	}

	inline static int32_t get_offset_of_gathers_3() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___gathers_3)); }
	inline List_1_tBBC189BA6B43AA35065AAF403BC3D3C6230339CF * get_gathers_3() const { return ___gathers_3; }
	inline List_1_tBBC189BA6B43AA35065AAF403BC3D3C6230339CF ** get_address_of_gathers_3() { return &___gathers_3; }
	inline void set_gathers_3(List_1_tBBC189BA6B43AA35065AAF403BC3D3C6230339CF * value)
	{
		___gathers_3 = value;
		Il2CppCodeGenWriteBarrier((&___gathers_3), value);
	}

	inline static int32_t get_offset_of_pets_4() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___pets_4)); }
	inline List_1_t20A6914CEA4C51C4582EB8112B391440C3E87CB6 * get_pets_4() const { return ___pets_4; }
	inline List_1_t20A6914CEA4C51C4582EB8112B391440C3E87CB6 ** get_address_of_pets_4() { return &___pets_4; }
	inline void set_pets_4(List_1_t20A6914CEA4C51C4582EB8112B391440C3E87CB6 * value)
	{
		___pets_4 = value;
		Il2CppCodeGenWriteBarrier((&___pets_4), value);
	}

	inline static int32_t get_offset_of_npcs_5() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___npcs_5)); }
	inline List_1_tFEF19218F9E9977F0527EFB83281F36B2F1B664B * get_npcs_5() const { return ___npcs_5; }
	inline List_1_tFEF19218F9E9977F0527EFB83281F36B2F1B664B ** get_address_of_npcs_5() { return &___npcs_5; }
	inline void set_npcs_5(List_1_tFEF19218F9E9977F0527EFB83281F36B2F1B664B * value)
	{
		___npcs_5 = value;
		Il2CppCodeGenWriteBarrier((&___npcs_5), value);
	}

	inline static int32_t get_offset_of_removeIds_6() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___removeIds_6)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_removeIds_6() const { return ___removeIds_6; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_removeIds_6() { return &___removeIds_6; }
	inline void set_removeIds_6(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___removeIds_6 = value;
		Il2CppCodeGenWriteBarrier((&___removeIds_6), value);
	}

	inline static int32_t get_offset_of_magics_7() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___magics_7)); }
	inline List_1_tE8D3B89628283B835D75361F4F6BD7DF710D335A * get_magics_7() const { return ___magics_7; }
	inline List_1_tE8D3B89628283B835D75361F4F6BD7DF710D335A ** get_address_of_magics_7() { return &___magics_7; }
	inline void set_magics_7(List_1_tE8D3B89628283B835D75361F4F6BD7DF710D335A * value)
	{
		___magics_7 = value;
		Il2CppCodeGenWriteBarrier((&___magics_7), value);
	}

	inline static int32_t get_offset_of_bonfires_8() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___bonfires_8)); }
	inline List_1_t8A0665034236C89736A79A3294838E9278D7FC1A * get_bonfires_8() const { return ___bonfires_8; }
	inline List_1_t8A0665034236C89736A79A3294838E9278D7FC1A ** get_address_of_bonfires_8() { return &___bonfires_8; }
	inline void set_bonfires_8(List_1_t8A0665034236C89736A79A3294838E9278D7FC1A * value)
	{
		___bonfires_8 = value;
		Il2CppCodeGenWriteBarrier((&___bonfires_8), value);
	}

	inline static int32_t get_offset_of_tombstone_9() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___tombstone_9)); }
	inline List_1_t26A0C921BBED7D989CE903C5DCB4EA909CDD53D1 * get_tombstone_9() const { return ___tombstone_9; }
	inline List_1_t26A0C921BBED7D989CE903C5DCB4EA909CDD53D1 ** get_address_of_tombstone_9() { return &___tombstone_9; }
	inline void set_tombstone_9(List_1_t26A0C921BBED7D989CE903C5DCB4EA909CDD53D1 * value)
	{
		___tombstone_9 = value;
		Il2CppCodeGenWriteBarrier((&___tombstone_9), value);
	}

	inline static int32_t get_offset_of_groundBuff_10() { return static_cast<int32_t>(offsetof(ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921, ___groundBuff_10)); }
	inline List_1_t0A804CCAEDD72B842F34FD607CC9789D0365C6B0 * get_groundBuff_10() const { return ___groundBuff_10; }
	inline List_1_t0A804CCAEDD72B842F34FD607CC9789D0365C6B0 ** get_address_of_groundBuff_10() { return &___groundBuff_10; }
	inline void set_groundBuff_10(List_1_t0A804CCAEDD72B842F34FD607CC9789D0365C6B0 * value)
	{
		___groundBuff_10 = value;
		Il2CppCodeGenWriteBarrier((&___groundBuff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESROUNDOBJS_T7F207600CAD5DB1EAFF2046D20235B4ADE82E921_H
#ifndef RESSHIHAIBROADCAST_T9CDB3CFBED3F931221466A3F9DD0FCCC838A0581_H
#define RESSHIHAIBROADCAST_T9CDB3CFBED3F931221466A3F9DD0FCCC838A0581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResShiHaiBroadcast
struct  ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResShiHaiBroadcast::playerId
	uint64_t ___playerId_1;
	// System.Int32 MSG_Map.ResShiHaiBroadcast::shiHaiCfgId
	int32_t ___shiHaiCfgId_2;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581, ___playerId_1)); }
	inline uint64_t get_playerId_1() const { return ___playerId_1; }
	inline uint64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(uint64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_shiHaiCfgId_2() { return static_cast<int32_t>(offsetof(ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581, ___shiHaiCfgId_2)); }
	inline int32_t get_shiHaiCfgId_2() const { return ___shiHaiCfgId_2; }
	inline int32_t* get_address_of_shiHaiCfgId_2() { return &___shiHaiCfgId_2; }
	inline void set_shiHaiCfgId_2(int32_t value)
	{
		___shiHaiCfgId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSHIHAIBROADCAST_T9CDB3CFBED3F931221466A3F9DD0FCCC838A0581_H
#ifndef RESSHOWMONSTERPOP_T03DC07D7F4178A9E30B1F8391F9D66E9B0D24480_H
#define RESSHOWMONSTERPOP_T03DC07D7F4178A9E30B1F8391F9D66E9B0D24480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResShowMonsterPop
struct  ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResShowMonsterPop::monsterid
	uint64_t ___monsterid_1;
	// System.Int32 MSG_Map.ResShowMonsterPop::talkid
	int32_t ___talkid_2;

public:
	inline static int32_t get_offset_of_monsterid_1() { return static_cast<int32_t>(offsetof(ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480, ___monsterid_1)); }
	inline uint64_t get_monsterid_1() const { return ___monsterid_1; }
	inline uint64_t* get_address_of_monsterid_1() { return &___monsterid_1; }
	inline void set_monsterid_1(uint64_t value)
	{
		___monsterid_1 = value;
	}

	inline static int32_t get_offset_of_talkid_2() { return static_cast<int32_t>(offsetof(ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480, ___talkid_2)); }
	inline int32_t get_talkid_2() const { return ___talkid_2; }
	inline int32_t* get_address_of_talkid_2() { return &___talkid_2; }
	inline void set_talkid_2(int32_t value)
	{
		___talkid_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSHOWMONSTERPOP_T03DC07D7F4178A9E30B1F8391F9D66E9B0D24480_H
#ifndef RESSTOPMOVE_T8C7048393502C1DAD8A7D57FFC52C20D23226D60_H
#define RESSTOPMOVE_T8C7048393502C1DAD8A7D57FFC52C20D23226D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResStopMove
struct  ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResStopMove::objectId
	uint64_t ___objectId_1;
	// MSG_Common.Position MSG_Map.ResStopMove::pos
	Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * ___pos_2;

public:
	inline static int32_t get_offset_of_objectId_1() { return static_cast<int32_t>(offsetof(ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60, ___objectId_1)); }
	inline uint64_t get_objectId_1() const { return ___objectId_1; }
	inline uint64_t* get_address_of_objectId_1() { return &___objectId_1; }
	inline void set_objectId_1(uint64_t value)
	{
		___objectId_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60, ___pos_2)); }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * get_pos_2() const { return ___pos_2; }
	inline Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 ** get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Position_t3C2420C6B6624D28E0D01517E9F6D5EBD8D84D94 * value)
	{
		___pos_2 = value;
		Il2CppCodeGenWriteBarrier((&___pos_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSTOPMOVE_T8C7048393502C1DAD8A7D57FFC52C20D23226D60_H
#ifndef RESTOMBSTONEBIRTH_TF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52_H
#define RESTOMBSTONEBIRTH_TF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResTombstoneBirth
struct  ResTombstoneBirth_tF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52  : public RuntimeObject
{
public:
	// MSG_Common.TombstoneInfo MSG_Map.ResTombstoneBirth::TombstoneInfo
	TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273 * ___TombstoneInfo_1;

public:
	inline static int32_t get_offset_of_TombstoneInfo_1() { return static_cast<int32_t>(offsetof(ResTombstoneBirth_tF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52, ___TombstoneInfo_1)); }
	inline TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273 * get_TombstoneInfo_1() const { return ___TombstoneInfo_1; }
	inline TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273 ** get_address_of_TombstoneInfo_1() { return &___TombstoneInfo_1; }
	inline void set_TombstoneInfo_1(TombstoneInfo_t715B71EFB7CB4A5C32AD5DFB5C125BA0D080D273 * value)
	{
		___TombstoneInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___TombstoneInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTOMBSTONEBIRTH_TF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52_H
#ifndef RESTOMBSTONECLEAN_T976E3AFB5436879AD75DF377D06E4D99E0EEA0EE_H
#define RESTOMBSTONECLEAN_T976E3AFB5436879AD75DF377D06E4D99E0EEA0EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResTombstoneClean
struct  ResTombstoneClean_t976E3AFB5436879AD75DF377D06E4D99E0EEA0EE  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResTombstoneClean::id
	uint64_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResTombstoneClean_t976E3AFB5436879AD75DF377D06E4D99E0EEA0EE, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESTOMBSTONECLEAN_T976E3AFB5436879AD75DF377D06E4D99E0EEA0EE_H
#ifndef RESUPDATEBLOCKDOOR_TB802643A9AE43C85D6877B83752AADD5467A3A93_H
#define RESUPDATEBLOCKDOOR_TB802643A9AE43C85D6877B83752AADD5467A3A93_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResUpdateBlockDoor
struct  ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93  : public RuntimeObject
{
public:
	// System.String MSG_Map.ResUpdateBlockDoor::id
	String_t* ___id_1;
	// System.Boolean MSG_Map.ResUpdateBlockDoor::isopen
	bool ___isopen_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((&___id_1), value);
	}

	inline static int32_t get_offset_of_isopen_2() { return static_cast<int32_t>(offsetof(ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93, ___isopen_2)); }
	inline bool get_isopen_2() const { return ___isopen_2; }
	inline bool* get_address_of_isopen_2() { return &___isopen_2; }
	inline void set_isopen_2(bool value)
	{
		___isopen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEBLOCKDOOR_TB802643A9AE43C85D6877B83752AADD5467A3A93_H
#ifndef RESUPDATECAMP_T02F208927B5717D3A777EA3686FFCC4F2A296EA4_H
#define RESUPDATECAMP_T02F208927B5717D3A777EA3686FFCC4F2A296EA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResUpdateCamp
struct  ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResUpdateCamp::id
	uint64_t ___id_1;
	// System.Int32 MSG_Map.ResUpdateCamp::camp
	int32_t ___camp_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_camp_2() { return static_cast<int32_t>(offsetof(ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4, ___camp_2)); }
	inline int32_t get_camp_2() const { return ___camp_2; }
	inline int32_t* get_address_of_camp_2() { return &___camp_2; }
	inline void set_camp_2(int32_t value)
	{
		___camp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATECAMP_T02F208927B5717D3A777EA3686FFCC4F2A296EA4_H
#ifndef RESUPDATEMOVESTATE_T8B1F4FC70F463EAC9F19F388D1F6156D41AA331B_H
#define RESUPDATEMOVESTATE_T8B1F4FC70F463EAC9F19F388D1F6156D41AA331B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResUpdateMoveState
struct  ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Map.ResUpdateMoveState::id
	uint64_t ___id_1;
	// System.Boolean MSG_Map.ResUpdateMoveState::isRun
	bool ___isRun_2;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B, ___id_1)); }
	inline uint64_t get_id_1() const { return ___id_1; }
	inline uint64_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint64_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_isRun_2() { return static_cast<int32_t>(offsetof(ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B, ___isRun_2)); }
	inline bool get_isRun_2() const { return ___isRun_2; }
	inline bool* get_address_of_isRun_2() { return &___isRun_2; }
	inline void set_isRun_2(bool value)
	{
		___isRun_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESUPDATEMOVESTATE_T8B1F4FC70F463EAC9F19F388D1F6156D41AA331B_H
#ifndef RESVIPLVBROADCAST_TA582F815C3CA6E8C298446473E2AE1431A24742E_H
#define RESVIPLVBROADCAST_TA582F815C3CA6E8C298446473E2AE1431A24742E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.ResVipLvBroadCast
struct  ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.ResVipLvBroadCast::vipLv
	int32_t ___vipLv_1;
	// System.Int64 MSG_Map.ResVipLvBroadCast::roleId
	int64_t ___roleId_2;

public:
	inline static int32_t get_offset_of_vipLv_1() { return static_cast<int32_t>(offsetof(ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E, ___vipLv_1)); }
	inline int32_t get_vipLv_1() const { return ___vipLv_1; }
	inline int32_t* get_address_of_vipLv_1() { return &___vipLv_1; }
	inline void set_vipLv_1(int32_t value)
	{
		___vipLv_1 = value;
	}

	inline static int32_t get_offset_of_roleId_2() { return static_cast<int32_t>(offsetof(ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E, ___roleId_2)); }
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
#endif // RESVIPLVBROADCAST_TA582F815C3CA6E8C298446473E2AE1431A24742E_H
#ifndef ROLESTATUE_TBD9CB09B6B68845C34526F58358ABC5430D38FD0_H
#define ROLESTATUE_TBD9CB09B6B68845C34526F58358ABC5430D38FD0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Map.RoleStatue
struct  RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0  : public RuntimeObject
{
public:
	// System.Int32 MSG_Map.RoleStatue::id
	int32_t ___id_0;
	// System.Boolean MSG_Map.RoleStatue::isUseDef
	bool ___isUseDef_1;
	// System.String MSG_Map.RoleStatue::name
	String_t* ___name_2;
	// System.Int32 MSG_Map.RoleStatue::career
	int32_t ___career_3;
	// System.Int32 MSG_Map.RoleStatue::degree
	int32_t ___degree_4;
	// System.Int32 MSG_Map.RoleStatue::wingId
	int32_t ___wingId_5;
	// System.Int32 MSG_Map.RoleStatue::clothesEquipId
	int32_t ___clothesEquipId_6;
	// System.Int32 MSG_Map.RoleStatue::weaponsEquipId
	int32_t ___weaponsEquipId_7;
	// System.Int32 MSG_Map.RoleStatue::clothesStar
	int32_t ___clothesStar_8;
	// System.Int32 MSG_Map.RoleStatue::weaponStar
	int32_t ___weaponStar_9;
	// System.Int64 MSG_Map.RoleStatue::roleId
	int64_t ___roleId_10;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isUseDef_1() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___isUseDef_1)); }
	inline bool get_isUseDef_1() const { return ___isUseDef_1; }
	inline bool* get_address_of_isUseDef_1() { return &___isUseDef_1; }
	inline void set_isUseDef_1(bool value)
	{
		___isUseDef_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_career_3() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___career_3)); }
	inline int32_t get_career_3() const { return ___career_3; }
	inline int32_t* get_address_of_career_3() { return &___career_3; }
	inline void set_career_3(int32_t value)
	{
		___career_3 = value;
	}

	inline static int32_t get_offset_of_degree_4() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___degree_4)); }
	inline int32_t get_degree_4() const { return ___degree_4; }
	inline int32_t* get_address_of_degree_4() { return &___degree_4; }
	inline void set_degree_4(int32_t value)
	{
		___degree_4 = value;
	}

	inline static int32_t get_offset_of_wingId_5() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___wingId_5)); }
	inline int32_t get_wingId_5() const { return ___wingId_5; }
	inline int32_t* get_address_of_wingId_5() { return &___wingId_5; }
	inline void set_wingId_5(int32_t value)
	{
		___wingId_5 = value;
	}

	inline static int32_t get_offset_of_clothesEquipId_6() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___clothesEquipId_6)); }
	inline int32_t get_clothesEquipId_6() const { return ___clothesEquipId_6; }
	inline int32_t* get_address_of_clothesEquipId_6() { return &___clothesEquipId_6; }
	inline void set_clothesEquipId_6(int32_t value)
	{
		___clothesEquipId_6 = value;
	}

	inline static int32_t get_offset_of_weaponsEquipId_7() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___weaponsEquipId_7)); }
	inline int32_t get_weaponsEquipId_7() const { return ___weaponsEquipId_7; }
	inline int32_t* get_address_of_weaponsEquipId_7() { return &___weaponsEquipId_7; }
	inline void set_weaponsEquipId_7(int32_t value)
	{
		___weaponsEquipId_7 = value;
	}

	inline static int32_t get_offset_of_clothesStar_8() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___clothesStar_8)); }
	inline int32_t get_clothesStar_8() const { return ___clothesStar_8; }
	inline int32_t* get_address_of_clothesStar_8() { return &___clothesStar_8; }
	inline void set_clothesStar_8(int32_t value)
	{
		___clothesStar_8 = value;
	}

	inline static int32_t get_offset_of_weaponStar_9() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___weaponStar_9)); }
	inline int32_t get_weaponStar_9() const { return ___weaponStar_9; }
	inline int32_t* get_address_of_weaponStar_9() { return &___weaponStar_9; }
	inline void set_weaponStar_9(int32_t value)
	{
		___weaponStar_9 = value;
	}

	inline static int32_t get_offset_of_roleId_10() { return static_cast<int32_t>(offsetof(RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0, ___roleId_10)); }
	inline int64_t get_roleId_10() const { return ___roleId_10; }
	inline int64_t* get_address_of_roleId_10() { return &___roleId_10; }
	inline void set_roleId_10(int64_t value)
	{
		___roleId_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROLESTATUE_TBD9CB09B6B68845C34526F58358ABC5430D38FD0_H
#ifndef REQBUYMARKETITEM_TFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B_H
#define REQBUYMARKETITEM_TFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqBuyMarketItem
struct  ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Market.ReqBuyMarketItem::marketId
	uint64_t ___marketId_1;
	// System.Int32 MSG_Market.ReqBuyMarketItem::itemNum
	int32_t ___itemNum_2;
	// System.String MSG_Market.ReqBuyMarketItem::secretKey
	String_t* ___secretKey_3;
	// System.Int32 MSG_Market.ReqBuyMarketItem::panelType
	int32_t ___panelType_4;

public:
	inline static int32_t get_offset_of_marketId_1() { return static_cast<int32_t>(offsetof(ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B, ___marketId_1)); }
	inline uint64_t get_marketId_1() const { return ___marketId_1; }
	inline uint64_t* get_address_of_marketId_1() { return &___marketId_1; }
	inline void set_marketId_1(uint64_t value)
	{
		___marketId_1 = value;
	}

	inline static int32_t get_offset_of_itemNum_2() { return static_cast<int32_t>(offsetof(ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B, ___itemNum_2)); }
	inline int32_t get_itemNum_2() const { return ___itemNum_2; }
	inline int32_t* get_address_of_itemNum_2() { return &___itemNum_2; }
	inline void set_itemNum_2(int32_t value)
	{
		___itemNum_2 = value;
	}

	inline static int32_t get_offset_of_secretKey_3() { return static_cast<int32_t>(offsetof(ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B, ___secretKey_3)); }
	inline String_t* get_secretKey_3() const { return ___secretKey_3; }
	inline String_t** get_address_of_secretKey_3() { return &___secretKey_3; }
	inline void set_secretKey_3(String_t* value)
	{
		___secretKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___secretKey_3), value);
	}

	inline static int32_t get_offset_of_panelType_4() { return static_cast<int32_t>(offsetof(ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B, ___panelType_4)); }
	inline int32_t get_panelType_4() const { return ___panelType_4; }
	inline int32_t* get_address_of_panelType_4() { return &___panelType_4; }
	inline void set_panelType_4(int32_t value)
	{
		___panelType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQBUYMARKETITEM_TFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B_H
#ifndef REQCOINLIST_TF593891DC26D99871472D28EE54E5100A81AACBE_H
#define REQCOINLIST_TF593891DC26D99871472D28EE54E5100A81AACBE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqCoinList
struct  ReqCoinList_tF593891DC26D99871472D28EE54E5100A81AACBE  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQCOINLIST_TF593891DC26D99871472D28EE54E5100A81AACBE_H
#ifndef REQDOWNITEM_T1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B_H
#define REQDOWNITEM_T1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqDownItem
struct  ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Market.ReqDownItem::marketId
	uint64_t ___marketId_1;
	// System.Int32 MSG_Market.ReqDownItem::panelType
	int32_t ___panelType_2;

public:
	inline static int32_t get_offset_of_marketId_1() { return static_cast<int32_t>(offsetof(ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B, ___marketId_1)); }
	inline uint64_t get_marketId_1() const { return ___marketId_1; }
	inline uint64_t* get_address_of_marketId_1() { return &___marketId_1; }
	inline void set_marketId_1(uint64_t value)
	{
		___marketId_1 = value;
	}

	inline static int32_t get_offset_of_panelType_2() { return static_cast<int32_t>(offsetof(ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B, ___panelType_2)); }
	inline int32_t get_panelType_2() const { return ___panelType_2; }
	inline int32_t* get_address_of_panelType_2() { return &___panelType_2; }
	inline void set_panelType_2(int32_t value)
	{
		___panelType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQDOWNITEM_T1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B_H
#ifndef REQGETMARKETCOIN_T9F152B5CAC96287AD65FD66125BC6769CF9975B4_H
#define REQGETMARKETCOIN_T9F152B5CAC96287AD65FD66125BC6769CF9975B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqGetMarketCoin
struct  ReqGetMarketCoin_t9F152B5CAC96287AD65FD66125BC6769CF9975B4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQGETMARKETCOIN_T9F152B5CAC96287AD65FD66125BC6769CF9975B4_H
#ifndef REQMARKETSORT_TC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2_H
#define REQMARKETSORT_TC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqMarketSort
struct  ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ReqMarketSort::sortType
	int32_t ___sortType_1;
	// System.Int32 MSG_Market.ReqMarketSort::desc
	int32_t ___desc_2;
	// System.Int32 MSG_Market.ReqMarketSort::indexBegin
	int32_t ___indexBegin_3;
	// System.Int32 MSG_Market.ReqMarketSort::indexEnd
	int32_t ___indexEnd_4;
	// System.Int32 MSG_Market.ReqMarketSort::panelType
	int32_t ___panelType_5;
	// System.Int32 MSG_Market.ReqMarketSort::dirType
	int32_t ___dirType_6;
	// System.Int32 MSG_Market.ReqMarketSort::pingJiType
	int32_t ___pingJiType_7;
	// System.Int32 MSG_Market.ReqMarketSort::color
	int32_t ___color_8;
	// System.Int32 MSG_Market.ReqMarketSort::sex
	int32_t ___sex_9;
	// System.String MSG_Market.ReqMarketSort::searchName
	String_t* ___searchName_10;
	// System.Int32 MSG_Market.ReqMarketSort::zhuan
	int32_t ___zhuan_11;
	// System.String MSG_Market.ReqMarketSort::lang
	String_t* ___lang_12;

public:
	inline static int32_t get_offset_of_sortType_1() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___sortType_1)); }
	inline int32_t get_sortType_1() const { return ___sortType_1; }
	inline int32_t* get_address_of_sortType_1() { return &___sortType_1; }
	inline void set_sortType_1(int32_t value)
	{
		___sortType_1 = value;
	}

	inline static int32_t get_offset_of_desc_2() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___desc_2)); }
	inline int32_t get_desc_2() const { return ___desc_2; }
	inline int32_t* get_address_of_desc_2() { return &___desc_2; }
	inline void set_desc_2(int32_t value)
	{
		___desc_2 = value;
	}

	inline static int32_t get_offset_of_indexBegin_3() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___indexBegin_3)); }
	inline int32_t get_indexBegin_3() const { return ___indexBegin_3; }
	inline int32_t* get_address_of_indexBegin_3() { return &___indexBegin_3; }
	inline void set_indexBegin_3(int32_t value)
	{
		___indexBegin_3 = value;
	}

	inline static int32_t get_offset_of_indexEnd_4() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___indexEnd_4)); }
	inline int32_t get_indexEnd_4() const { return ___indexEnd_4; }
	inline int32_t* get_address_of_indexEnd_4() { return &___indexEnd_4; }
	inline void set_indexEnd_4(int32_t value)
	{
		___indexEnd_4 = value;
	}

	inline static int32_t get_offset_of_panelType_5() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___panelType_5)); }
	inline int32_t get_panelType_5() const { return ___panelType_5; }
	inline int32_t* get_address_of_panelType_5() { return &___panelType_5; }
	inline void set_panelType_5(int32_t value)
	{
		___panelType_5 = value;
	}

	inline static int32_t get_offset_of_dirType_6() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___dirType_6)); }
	inline int32_t get_dirType_6() const { return ___dirType_6; }
	inline int32_t* get_address_of_dirType_6() { return &___dirType_6; }
	inline void set_dirType_6(int32_t value)
	{
		___dirType_6 = value;
	}

	inline static int32_t get_offset_of_pingJiType_7() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___pingJiType_7)); }
	inline int32_t get_pingJiType_7() const { return ___pingJiType_7; }
	inline int32_t* get_address_of_pingJiType_7() { return &___pingJiType_7; }
	inline void set_pingJiType_7(int32_t value)
	{
		___pingJiType_7 = value;
	}

	inline static int32_t get_offset_of_color_8() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___color_8)); }
	inline int32_t get_color_8() const { return ___color_8; }
	inline int32_t* get_address_of_color_8() { return &___color_8; }
	inline void set_color_8(int32_t value)
	{
		___color_8 = value;
	}

	inline static int32_t get_offset_of_sex_9() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___sex_9)); }
	inline int32_t get_sex_9() const { return ___sex_9; }
	inline int32_t* get_address_of_sex_9() { return &___sex_9; }
	inline void set_sex_9(int32_t value)
	{
		___sex_9 = value;
	}

	inline static int32_t get_offset_of_searchName_10() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___searchName_10)); }
	inline String_t* get_searchName_10() const { return ___searchName_10; }
	inline String_t** get_address_of_searchName_10() { return &___searchName_10; }
	inline void set_searchName_10(String_t* value)
	{
		___searchName_10 = value;
		Il2CppCodeGenWriteBarrier((&___searchName_10), value);
	}

	inline static int32_t get_offset_of_zhuan_11() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___zhuan_11)); }
	inline int32_t get_zhuan_11() const { return ___zhuan_11; }
	inline int32_t* get_address_of_zhuan_11() { return &___zhuan_11; }
	inline void set_zhuan_11(int32_t value)
	{
		___zhuan_11 = value;
	}

	inline static int32_t get_offset_of_lang_12() { return static_cast<int32_t>(offsetof(ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2, ___lang_12)); }
	inline String_t* get_lang_12() const { return ___lang_12; }
	inline String_t** get_address_of_lang_12() { return &___lang_12; }
	inline void set_lang_12(String_t* value)
	{
		___lang_12 = value;
		Il2CppCodeGenWriteBarrier((&___lang_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARKETSORT_TC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2_H
#ifndef REQMYMARKETLIST_TB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78_H
#define REQMYMARKETLIST_TB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqMyMarketList
struct  ReqMyMarketList_tB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ReqMyMarketList::panelType
	int32_t ___panelType_1;

public:
	inline static int32_t get_offset_of_panelType_1() { return static_cast<int32_t>(offsetof(ReqMyMarketList_tB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78, ___panelType_1)); }
	inline int32_t get_panelType_1() const { return ___panelType_1; }
	inline int32_t* get_address_of_panelType_1() { return &___panelType_1; }
	inline void set_panelType_1(int32_t value)
	{
		___panelType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMYMARKETLIST_TB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78_H
#ifndef REQMYMARKETLOGLIST_T4A4244EA1F1C0DAAEB11B721EFE20AD24298F1A9_H
#define REQMYMARKETLOGLIST_T4A4244EA1F1C0DAAEB11B721EFE20AD24298F1A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqMyMarketLogList
struct  ReqMyMarketLogList_t4A4244EA1F1C0DAAEB11B721EFE20AD24298F1A9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMYMARKETLOGLIST_T4A4244EA1F1C0DAAEB11B721EFE20AD24298F1A9_H
#ifndef REQSELLITEMLIST_T0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A_H
#define REQSELLITEMLIST_T0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqSellItemList
struct  ReqSellItemList_t0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ReqSellItemList::modelId
	int32_t ___modelId_1;

public:
	inline static int32_t get_offset_of_modelId_1() { return static_cast<int32_t>(offsetof(ReqSellItemList_t0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A, ___modelId_1)); }
	inline int32_t get_modelId_1() const { return ___modelId_1; }
	inline int32_t* get_address_of_modelId_1() { return &___modelId_1; }
	inline void set_modelId_1(int32_t value)
	{
		___modelId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQSELLITEMLIST_T0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A_H
#ifndef REQUPITEM_T196F7A7D3D657D2639696D12481AD483B7847C7F_H
#define REQUPITEM_T196F7A7D3D657D2639696D12481AD483B7847C7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ReqUpItem
struct  ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Market.ReqUpItem::marketId
	uint64_t ___marketId_1;
	// System.UInt64 MSG_Market.ReqUpItem::itemId
	uint64_t ___itemId_2;
	// System.Int32 MSG_Market.ReqUpItem::coinType
	int32_t ___coinType_3;
	// System.Int32 MSG_Market.ReqUpItem::coinNum
	int32_t ___coinNum_4;
	// System.Int32 MSG_Market.ReqUpItem::num
	int32_t ___num_5;
	// System.String MSG_Market.ReqUpItem::secretKey
	String_t* ___secretKey_6;
	// System.Int32 MSG_Market.ReqUpItem::panelType
	int32_t ___panelType_7;

public:
	inline static int32_t get_offset_of_marketId_1() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___marketId_1)); }
	inline uint64_t get_marketId_1() const { return ___marketId_1; }
	inline uint64_t* get_address_of_marketId_1() { return &___marketId_1; }
	inline void set_marketId_1(uint64_t value)
	{
		___marketId_1 = value;
	}

	inline static int32_t get_offset_of_itemId_2() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___itemId_2)); }
	inline uint64_t get_itemId_2() const { return ___itemId_2; }
	inline uint64_t* get_address_of_itemId_2() { return &___itemId_2; }
	inline void set_itemId_2(uint64_t value)
	{
		___itemId_2 = value;
	}

	inline static int32_t get_offset_of_coinType_3() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___coinType_3)); }
	inline int32_t get_coinType_3() const { return ___coinType_3; }
	inline int32_t* get_address_of_coinType_3() { return &___coinType_3; }
	inline void set_coinType_3(int32_t value)
	{
		___coinType_3 = value;
	}

	inline static int32_t get_offset_of_coinNum_4() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___coinNum_4)); }
	inline int32_t get_coinNum_4() const { return ___coinNum_4; }
	inline int32_t* get_address_of_coinNum_4() { return &___coinNum_4; }
	inline void set_coinNum_4(int32_t value)
	{
		___coinNum_4 = value;
	}

	inline static int32_t get_offset_of_num_5() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___num_5)); }
	inline int32_t get_num_5() const { return ___num_5; }
	inline int32_t* get_address_of_num_5() { return &___num_5; }
	inline void set_num_5(int32_t value)
	{
		___num_5 = value;
	}

	inline static int32_t get_offset_of_secretKey_6() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___secretKey_6)); }
	inline String_t* get_secretKey_6() const { return ___secretKey_6; }
	inline String_t** get_address_of_secretKey_6() { return &___secretKey_6; }
	inline void set_secretKey_6(String_t* value)
	{
		___secretKey_6 = value;
		Il2CppCodeGenWriteBarrier((&___secretKey_6), value);
	}

	inline static int32_t get_offset_of_panelType_7() { return static_cast<int32_t>(offsetof(ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F, ___panelType_7)); }
	inline int32_t get_panelType_7() const { return ___panelType_7; }
	inline int32_t* get_address_of_panelType_7() { return &___panelType_7; }
	inline void set_panelType_7(int32_t value)
	{
		___panelType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUPITEM_T196F7A7D3D657D2639696D12481AD483B7847C7F_H
#ifndef RESBUYITEMFAILURE_T5584BC97B26EF6432625D2A74DC6E290F6A5F17A_H
#define RESBUYITEMFAILURE_T5584BC97B26EF6432625D2A74DC6E290F6A5F17A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResBuyItemFailure
struct  ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Market.ResBuyItemFailure::marketId
	uint64_t ___marketId_1;
	// System.Int32 MSG_Market.ResBuyItemFailure::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_marketId_1() { return static_cast<int32_t>(offsetof(ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A, ___marketId_1)); }
	inline uint64_t get_marketId_1() const { return ___marketId_1; }
	inline uint64_t* get_address_of_marketId_1() { return &___marketId_1; }
	inline void set_marketId_1(uint64_t value)
	{
		___marketId_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESBUYITEMFAILURE_T5584BC97B26EF6432625D2A74DC6E290F6A5F17A_H
#ifndef RESCOINLIST_T241806FFE698F4219D814C0298436C0F2BB1F435_H
#define RESCOINLIST_T241806FFE698F4219D814C0298436C0F2BB1F435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResCoinList
struct  ResCoinList_t241806FFE698F4219D814C0298436C0F2BB1F435  : public RuntimeObject
{
public:
	// System.Int64 MSG_Market.ResCoinList::gold
	int64_t ___gold_1;

public:
	inline static int32_t get_offset_of_gold_1() { return static_cast<int32_t>(offsetof(ResCoinList_t241806FFE698F4219D814C0298436C0F2BB1F435, ___gold_1)); }
	inline int64_t get_gold_1() const { return ___gold_1; }
	inline int64_t* get_address_of_gold_1() { return &___gold_1; }
	inline void set_gold_1(int64_t value)
	{
		___gold_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESCOINLIST_T241806FFE698F4219D814C0298436C0F2BB1F435_H
#ifndef RESGETMARKETCOIN_T3CF05E3A074E667B3857D0522CD23EFABDC4FEED_H
#define RESGETMARKETCOIN_T3CF05E3A074E667B3857D0522CD23EFABDC4FEED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResGetMarketCoin
struct  ResGetMarketCoin_t3CF05E3A074E667B3857D0522CD23EFABDC4FEED  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ResGetMarketCoin::state
	int32_t ___state_1;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(ResGetMarketCoin_t3CF05E3A074E667B3857D0522CD23EFABDC4FEED, ___state_1)); }
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
#endif // RESGETMARKETCOIN_T3CF05E3A074E667B3857D0522CD23EFABDC4FEED_H
#ifndef RESMARKETLOGLIST_T7DAAE58077096AD308DF78D4A66927069C8D836C_H
#define RESMARKETLOGLIST_T7DAAE58077096AD308DF78D4A66927069C8D836C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResMarketLogList
struct  ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Market.marketLogInfo> MSG_Market.ResMarketLogList::infoList
	List_1_t3B484662660BD3FB8A05A96AC78B8294805024DE * ___infoList_1;
	// System.Int64 MSG_Market.ResMarketLogList::gold
	int64_t ___gold_2;

public:
	inline static int32_t get_offset_of_infoList_1() { return static_cast<int32_t>(offsetof(ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C, ___infoList_1)); }
	inline List_1_t3B484662660BD3FB8A05A96AC78B8294805024DE * get_infoList_1() const { return ___infoList_1; }
	inline List_1_t3B484662660BD3FB8A05A96AC78B8294805024DE ** get_address_of_infoList_1() { return &___infoList_1; }
	inline void set_infoList_1(List_1_t3B484662660BD3FB8A05A96AC78B8294805024DE * value)
	{
		___infoList_1 = value;
		Il2CppCodeGenWriteBarrier((&___infoList_1), value);
	}

	inline static int32_t get_offset_of_gold_2() { return static_cast<int32_t>(offsetof(ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C, ___gold_2)); }
	inline int64_t get_gold_2() const { return ___gold_2; }
	inline int64_t* get_address_of_gold_2() { return &___gold_2; }
	inline void set_gold_2(int64_t value)
	{
		___gold_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARKETLOGLIST_T7DAAE58077096AD308DF78D4A66927069C8D836C_H
#ifndef RESMARKETSORTLIST_TEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6_H
#define RESMARKETSORTLIST_TEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResMarketSortList
struct  ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ResMarketSortList::sortType
	int32_t ___sortType_1;
	// System.Int32 MSG_Market.ResMarketSortList::desc
	int32_t ___desc_2;
	// System.Int32 MSG_Market.ResMarketSortList::indexBegin
	int32_t ___indexBegin_3;
	// System.Int32 MSG_Market.ResMarketSortList::indexEnd
	int32_t ___indexEnd_4;
	// System.Int32 MSG_Market.ResMarketSortList::panelType
	int32_t ___panelType_5;
	// System.Int32 MSG_Market.ResMarketSortList::dirType
	int32_t ___dirType_6;
	// System.Int32 MSG_Market.ResMarketSortList::pingJiType
	int32_t ___pingJiType_7;
	// System.Int32 MSG_Market.ResMarketSortList::color
	int32_t ___color_8;
	// System.Int32 MSG_Market.ResMarketSortList::sex
	int32_t ___sex_9;
	// System.String MSG_Market.ResMarketSortList::searchName
	String_t* ___searchName_10;
	// System.Collections.Generic.List`1<MSG_Market.marketItemInfo> MSG_Market.ResMarketSortList::marketList
	List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * ___marketList_11;
	// System.Int32 MSG_Market.ResMarketSortList::sortCount
	int32_t ___sortCount_12;
	// System.Int32 MSG_Market.ResMarketSortList::zhuan
	int32_t ___zhuan_13;

public:
	inline static int32_t get_offset_of_sortType_1() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___sortType_1)); }
	inline int32_t get_sortType_1() const { return ___sortType_1; }
	inline int32_t* get_address_of_sortType_1() { return &___sortType_1; }
	inline void set_sortType_1(int32_t value)
	{
		___sortType_1 = value;
	}

	inline static int32_t get_offset_of_desc_2() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___desc_2)); }
	inline int32_t get_desc_2() const { return ___desc_2; }
	inline int32_t* get_address_of_desc_2() { return &___desc_2; }
	inline void set_desc_2(int32_t value)
	{
		___desc_2 = value;
	}

	inline static int32_t get_offset_of_indexBegin_3() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___indexBegin_3)); }
	inline int32_t get_indexBegin_3() const { return ___indexBegin_3; }
	inline int32_t* get_address_of_indexBegin_3() { return &___indexBegin_3; }
	inline void set_indexBegin_3(int32_t value)
	{
		___indexBegin_3 = value;
	}

	inline static int32_t get_offset_of_indexEnd_4() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___indexEnd_4)); }
	inline int32_t get_indexEnd_4() const { return ___indexEnd_4; }
	inline int32_t* get_address_of_indexEnd_4() { return &___indexEnd_4; }
	inline void set_indexEnd_4(int32_t value)
	{
		___indexEnd_4 = value;
	}

	inline static int32_t get_offset_of_panelType_5() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___panelType_5)); }
	inline int32_t get_panelType_5() const { return ___panelType_5; }
	inline int32_t* get_address_of_panelType_5() { return &___panelType_5; }
	inline void set_panelType_5(int32_t value)
	{
		___panelType_5 = value;
	}

	inline static int32_t get_offset_of_dirType_6() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___dirType_6)); }
	inline int32_t get_dirType_6() const { return ___dirType_6; }
	inline int32_t* get_address_of_dirType_6() { return &___dirType_6; }
	inline void set_dirType_6(int32_t value)
	{
		___dirType_6 = value;
	}

	inline static int32_t get_offset_of_pingJiType_7() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___pingJiType_7)); }
	inline int32_t get_pingJiType_7() const { return ___pingJiType_7; }
	inline int32_t* get_address_of_pingJiType_7() { return &___pingJiType_7; }
	inline void set_pingJiType_7(int32_t value)
	{
		___pingJiType_7 = value;
	}

	inline static int32_t get_offset_of_color_8() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___color_8)); }
	inline int32_t get_color_8() const { return ___color_8; }
	inline int32_t* get_address_of_color_8() { return &___color_8; }
	inline void set_color_8(int32_t value)
	{
		___color_8 = value;
	}

	inline static int32_t get_offset_of_sex_9() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___sex_9)); }
	inline int32_t get_sex_9() const { return ___sex_9; }
	inline int32_t* get_address_of_sex_9() { return &___sex_9; }
	inline void set_sex_9(int32_t value)
	{
		___sex_9 = value;
	}

	inline static int32_t get_offset_of_searchName_10() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___searchName_10)); }
	inline String_t* get_searchName_10() const { return ___searchName_10; }
	inline String_t** get_address_of_searchName_10() { return &___searchName_10; }
	inline void set_searchName_10(String_t* value)
	{
		___searchName_10 = value;
		Il2CppCodeGenWriteBarrier((&___searchName_10), value);
	}

	inline static int32_t get_offset_of_marketList_11() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___marketList_11)); }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * get_marketList_11() const { return ___marketList_11; }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 ** get_address_of_marketList_11() { return &___marketList_11; }
	inline void set_marketList_11(List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * value)
	{
		___marketList_11 = value;
		Il2CppCodeGenWriteBarrier((&___marketList_11), value);
	}

	inline static int32_t get_offset_of_sortCount_12() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___sortCount_12)); }
	inline int32_t get_sortCount_12() const { return ___sortCount_12; }
	inline int32_t* get_address_of_sortCount_12() { return &___sortCount_12; }
	inline void set_sortCount_12(int32_t value)
	{
		___sortCount_12 = value;
	}

	inline static int32_t get_offset_of_zhuan_13() { return static_cast<int32_t>(offsetof(ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6, ___zhuan_13)); }
	inline int32_t get_zhuan_13() const { return ___zhuan_13; }
	inline int32_t* get_address_of_zhuan_13() { return &___zhuan_13; }
	inline void set_zhuan_13(int32_t value)
	{
		___zhuan_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARKETSORTLIST_TEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6_H
#ifndef RESMARKETUPFAILURE_T1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0_H
#define RESMARKETUPFAILURE_T1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResMarketUpFailure
struct  ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0  : public RuntimeObject
{
public:
	// System.UInt64 MSG_Market.ResMarketUpFailure::marketId
	uint64_t ___marketId_1;
	// System.Int32 MSG_Market.ResMarketUpFailure::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_marketId_1() { return static_cast<int32_t>(offsetof(ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0, ___marketId_1)); }
	inline uint64_t get_marketId_1() const { return ___marketId_1; }
	inline uint64_t* get_address_of_marketId_1() { return &___marketId_1; }
	inline void set_marketId_1(uint64_t value)
	{
		___marketId_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARKETUPFAILURE_T1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0_H
#ifndef RESMARKETUPITEM_T27B53E00728134EAC25606D56421A005F1ADC291_H
#define RESMARKETUPITEM_T27B53E00728134EAC25606D56421A005F1ADC291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResMarketUpItem
struct  ResMarketUpItem_t27B53E00728134EAC25606D56421A005F1ADC291  : public RuntimeObject
{
public:
	// MSG_Market.marketItemInfo MSG_Market.ResMarketUpItem::marketItemInfo
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8 * ___marketItemInfo_1;

public:
	inline static int32_t get_offset_of_marketItemInfo_1() { return static_cast<int32_t>(offsetof(ResMarketUpItem_t27B53E00728134EAC25606D56421A005F1ADC291, ___marketItemInfo_1)); }
	inline marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8 * get_marketItemInfo_1() const { return ___marketItemInfo_1; }
	inline marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8 ** get_address_of_marketItemInfo_1() { return &___marketItemInfo_1; }
	inline void set_marketItemInfo_1(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8 * value)
	{
		___marketItemInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___marketItemInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARKETUPITEM_T27B53E00728134EAC25606D56421A005F1ADC291_H
#ifndef RESMYMARKETLIST_T14129D720339D42477A0043372815F3A641F6528_H
#define RESMYMARKETLIST_T14129D720339D42477A0043372815F3A641F6528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResMyMarketList
struct  ResMyMarketList_t14129D720339D42477A0043372815F3A641F6528  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MSG_Market.marketItemInfo> MSG_Market.ResMyMarketList::marketList
	List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * ___marketList_1;

public:
	inline static int32_t get_offset_of_marketList_1() { return static_cast<int32_t>(offsetof(ResMyMarketList_t14129D720339D42477A0043372815F3A641F6528, ___marketList_1)); }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * get_marketList_1() const { return ___marketList_1; }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 ** get_address_of_marketList_1() { return &___marketList_1; }
	inline void set_marketList_1(List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * value)
	{
		___marketList_1 = value;
		Il2CppCodeGenWriteBarrier((&___marketList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMYMARKETLIST_T14129D720339D42477A0043372815F3A641F6528_H
#ifndef RESSELLITEMLIST_T74EC745DB485602FD8655F8D8E0645C3E3191162_H
#define RESSELLITEMLIST_T74EC745DB485602FD8655F8D8E0645C3E3191162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.ResSellItemList
struct  ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.ResSellItemList::modelId
	int32_t ___modelId_1;
	// System.Collections.Generic.List`1<MSG_Market.marketItemInfo> MSG_Market.ResSellItemList::marketList
	List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * ___marketList_2;

public:
	inline static int32_t get_offset_of_modelId_1() { return static_cast<int32_t>(offsetof(ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162, ___modelId_1)); }
	inline int32_t get_modelId_1() const { return ___modelId_1; }
	inline int32_t* get_address_of_modelId_1() { return &___modelId_1; }
	inline void set_modelId_1(int32_t value)
	{
		___modelId_1 = value;
	}

	inline static int32_t get_offset_of_marketList_2() { return static_cast<int32_t>(offsetof(ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162, ___marketList_2)); }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * get_marketList_2() const { return ___marketList_2; }
	inline List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 ** get_address_of_marketList_2() { return &___marketList_2; }
	inline void set_marketList_2(List_1_tCCADEFDE99E79C1B2ADE158F01A125E645556BD8 * value)
	{
		___marketList_2 = value;
		Il2CppCodeGenWriteBarrier((&___marketList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESSELLITEMLIST_T74EC745DB485602FD8655F8D8E0645C3E3191162_H
#ifndef MARKETITEMINFO_T9D10625BE413977DD2F0A880ABC5B35165DBCBA8_H
#define MARKETITEMINFO_T9D10625BE413977DD2F0A880ABC5B35165DBCBA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.marketItemInfo
struct  marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8  : public RuntimeObject
{
public:
	// System.Int64 MSG_Market.marketItemInfo::marketId
	int64_t ___marketId_0;
	// MSG_backpack.ItemInfo MSG_Market.marketItemInfo::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_1;
	// System.UInt64 MSG_Market.marketItemInfo::lostTime
	uint64_t ___lostTime_2;
	// System.Int32 MSG_Market.marketItemInfo::coinType
	int32_t ___coinType_3;
	// System.Int32 MSG_Market.marketItemInfo::coinNum
	int32_t ___coinNum_4;
	// System.String MSG_Market.marketItemInfo::tranAuthor
	String_t* ___tranAuthor_5;
	// System.String MSG_Market.marketItemInfo::secret
	String_t* ___secret_6;
	// System.Int32 MSG_Market.marketItemInfo::panelType
	int32_t ___panelType_7;

public:
	inline static int32_t get_offset_of_marketId_0() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___marketId_0)); }
	inline int64_t get_marketId_0() const { return ___marketId_0; }
	inline int64_t* get_address_of_marketId_0() { return &___marketId_0; }
	inline void set_marketId_0(int64_t value)
	{
		___marketId_0 = value;
	}

	inline static int32_t get_offset_of_itemInfo_1() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___itemInfo_1)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_1() const { return ___itemInfo_1; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_1() { return &___itemInfo_1; }
	inline void set_itemInfo_1(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_1), value);
	}

	inline static int32_t get_offset_of_lostTime_2() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___lostTime_2)); }
	inline uint64_t get_lostTime_2() const { return ___lostTime_2; }
	inline uint64_t* get_address_of_lostTime_2() { return &___lostTime_2; }
	inline void set_lostTime_2(uint64_t value)
	{
		___lostTime_2 = value;
	}

	inline static int32_t get_offset_of_coinType_3() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___coinType_3)); }
	inline int32_t get_coinType_3() const { return ___coinType_3; }
	inline int32_t* get_address_of_coinType_3() { return &___coinType_3; }
	inline void set_coinType_3(int32_t value)
	{
		___coinType_3 = value;
	}

	inline static int32_t get_offset_of_coinNum_4() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___coinNum_4)); }
	inline int32_t get_coinNum_4() const { return ___coinNum_4; }
	inline int32_t* get_address_of_coinNum_4() { return &___coinNum_4; }
	inline void set_coinNum_4(int32_t value)
	{
		___coinNum_4 = value;
	}

	inline static int32_t get_offset_of_tranAuthor_5() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___tranAuthor_5)); }
	inline String_t* get_tranAuthor_5() const { return ___tranAuthor_5; }
	inline String_t** get_address_of_tranAuthor_5() { return &___tranAuthor_5; }
	inline void set_tranAuthor_5(String_t* value)
	{
		___tranAuthor_5 = value;
		Il2CppCodeGenWriteBarrier((&___tranAuthor_5), value);
	}

	inline static int32_t get_offset_of_secret_6() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___secret_6)); }
	inline String_t* get_secret_6() const { return ___secret_6; }
	inline String_t** get_address_of_secret_6() { return &___secret_6; }
	inline void set_secret_6(String_t* value)
	{
		___secret_6 = value;
		Il2CppCodeGenWriteBarrier((&___secret_6), value);
	}

	inline static int32_t get_offset_of_panelType_7() { return static_cast<int32_t>(offsetof(marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8, ___panelType_7)); }
	inline int32_t get_panelType_7() const { return ___panelType_7; }
	inline int32_t* get_address_of_panelType_7() { return &___panelType_7; }
	inline void set_panelType_7(int32_t value)
	{
		___panelType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARKETITEMINFO_T9D10625BE413977DD2F0A880ABC5B35165DBCBA8_H
#ifndef MARKETLOGINFO_T41FEB417F3AF4EAE99465C87A23061C002210385_H
#define MARKETLOGINFO_T41FEB417F3AF4EAE99465C87A23061C002210385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Market.marketLogInfo
struct  marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385  : public RuntimeObject
{
public:
	// System.Int32 MSG_Market.marketLogInfo::tranTime
	int32_t ___tranTime_0;
	// System.Int32 MSG_Market.marketLogInfo::tranType
	int32_t ___tranType_1;
	// System.String MSG_Market.marketLogInfo::tranAuthor
	String_t* ___tranAuthor_2;
	// System.UInt64 MSG_Market.marketLogInfo::tranRoleId
	uint64_t ___tranRoleId_3;
	// System.Int32 MSG_Market.marketLogInfo::coinType
	int32_t ___coinType_4;
	// System.Int32 MSG_Market.marketLogInfo::coinNum
	int32_t ___coinNum_5;
	// MSG_backpack.ItemInfo MSG_Market.marketLogInfo::itemInfo
	ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * ___itemInfo_6;
	// System.Int32 MSG_Market.marketLogInfo::panelType
	int32_t ___panelType_7;

public:
	inline static int32_t get_offset_of_tranTime_0() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___tranTime_0)); }
	inline int32_t get_tranTime_0() const { return ___tranTime_0; }
	inline int32_t* get_address_of_tranTime_0() { return &___tranTime_0; }
	inline void set_tranTime_0(int32_t value)
	{
		___tranTime_0 = value;
	}

	inline static int32_t get_offset_of_tranType_1() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___tranType_1)); }
	inline int32_t get_tranType_1() const { return ___tranType_1; }
	inline int32_t* get_address_of_tranType_1() { return &___tranType_1; }
	inline void set_tranType_1(int32_t value)
	{
		___tranType_1 = value;
	}

	inline static int32_t get_offset_of_tranAuthor_2() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___tranAuthor_2)); }
	inline String_t* get_tranAuthor_2() const { return ___tranAuthor_2; }
	inline String_t** get_address_of_tranAuthor_2() { return &___tranAuthor_2; }
	inline void set_tranAuthor_2(String_t* value)
	{
		___tranAuthor_2 = value;
		Il2CppCodeGenWriteBarrier((&___tranAuthor_2), value);
	}

	inline static int32_t get_offset_of_tranRoleId_3() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___tranRoleId_3)); }
	inline uint64_t get_tranRoleId_3() const { return ___tranRoleId_3; }
	inline uint64_t* get_address_of_tranRoleId_3() { return &___tranRoleId_3; }
	inline void set_tranRoleId_3(uint64_t value)
	{
		___tranRoleId_3 = value;
	}

	inline static int32_t get_offset_of_coinType_4() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___coinType_4)); }
	inline int32_t get_coinType_4() const { return ___coinType_4; }
	inline int32_t* get_address_of_coinType_4() { return &___coinType_4; }
	inline void set_coinType_4(int32_t value)
	{
		___coinType_4 = value;
	}

	inline static int32_t get_offset_of_coinNum_5() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___coinNum_5)); }
	inline int32_t get_coinNum_5() const { return ___coinNum_5; }
	inline int32_t* get_address_of_coinNum_5() { return &___coinNum_5; }
	inline void set_coinNum_5(int32_t value)
	{
		___coinNum_5 = value;
	}

	inline static int32_t get_offset_of_itemInfo_6() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___itemInfo_6)); }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * get_itemInfo_6() const { return ___itemInfo_6; }
	inline ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C ** get_address_of_itemInfo_6() { return &___itemInfo_6; }
	inline void set_itemInfo_6(ItemInfo_t7FA84DA15A47FE21EB4FF289E11F6DD9183DE00C * value)
	{
		___itemInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___itemInfo_6), value);
	}

	inline static int32_t get_offset_of_panelType_7() { return static_cast<int32_t>(offsetof(marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385, ___panelType_7)); }
	inline int32_t get_panelType_7() const { return ___panelType_7; }
	inline int32_t* get_address_of_panelType_7() { return &___panelType_7; }
	inline void set_panelType_7(int32_t value)
	{
		___panelType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARKETLOGINFO_T41FEB417F3AF4EAE99465C87A23061C002210385_H
#ifndef REQMARRYBLESS_TDC766818CBA92DAE9B6D13B93D614D093D31C2B6_H
#define REQMARRYBLESS_TDC766818CBA92DAE9B6D13B93D614D093D31C2B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryBless
struct  ReqMarryBless_tDC766818CBA92DAE9B6D13B93D614D093D31C2B6  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ReqMarryBless::marryId
	int64_t ___marryId_1;

public:
	inline static int32_t get_offset_of_marryId_1() { return static_cast<int32_t>(offsetof(ReqMarryBless_tDC766818CBA92DAE9B6D13B93D614D093D31C2B6, ___marryId_1)); }
	inline int64_t get_marryId_1() const { return ___marryId_1; }
	inline int64_t* get_address_of_marryId_1() { return &___marryId_1; }
	inline void set_marryId_1(int64_t value)
	{
		___marryId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYBLESS_TDC766818CBA92DAE9B6D13B93D614D093D31C2B6_H
#ifndef REQMARRYCOPYSIGN_T5A2E15AE54973C5BF3DD6A6DAE092684FDF583BC_H
#define REQMARRYCOPYSIGN_T5A2E15AE54973C5BF3DD6A6DAE092684FDF583BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ReqMarryCopySign
struct  ReqMarryCopySign_t5A2E15AE54973C5BF3DD6A6DAE092684FDF583BC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQMARRYCOPYSIGN_T5A2E15AE54973C5BF3DD6A6DAE092684FDF583BC_H
#ifndef RESMARRYBROADCASTNAME_TC926947F6DD1426BDEF833FCC0E30552D4BACBA3_H
#define RESMARRYBROADCASTNAME_TC926947F6DD1426BDEF833FCC0E30552D4BACBA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryBroadcastName
struct  ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3  : public RuntimeObject
{
public:
	// System.Int64 MSG_Marriage.ResMarryBroadcastName::playerId
	int64_t ___playerId_1;
	// System.String MSG_Marriage.ResMarryBroadcastName::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_playerId_1() { return static_cast<int32_t>(offsetof(ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3, ___playerId_1)); }
	inline int64_t get_playerId_1() const { return ___playerId_1; }
	inline int64_t* get_address_of_playerId_1() { return &___playerId_1; }
	inline void set_playerId_1(int64_t value)
	{
		___playerId_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3, ___name_2)); }
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
#endif // RESMARRYBROADCASTNAME_TC926947F6DD1426BDEF833FCC0E30552D4BACBA3_H
#ifndef RESMARRYCOPYBUYHOT_TEEBC15BE228874570E435FC45B0794EEE537B3E6_H
#define RESMARRYCOPYBUYHOT_TEEBC15BE228874570E435FC45B0794EEE537B3E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryCopyBuyHot
struct  ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6  : public RuntimeObject
{
public:
	// System.Boolean MSG_Marriage.ResMarryCopyBuyHot::marryCopyHotIsBuy1
	bool ___marryCopyHotIsBuy1_1;
	// System.Boolean MSG_Marriage.ResMarryCopyBuyHot::marryCopyHotIsBuy2
	bool ___marryCopyHotIsBuy2_2;
	// System.Int32 MSG_Marriage.ResMarryCopyBuyHot::hotValue
	int32_t ___hotValue_3;

public:
	inline static int32_t get_offset_of_marryCopyHotIsBuy1_1() { return static_cast<int32_t>(offsetof(ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6, ___marryCopyHotIsBuy1_1)); }
	inline bool get_marryCopyHotIsBuy1_1() const { return ___marryCopyHotIsBuy1_1; }
	inline bool* get_address_of_marryCopyHotIsBuy1_1() { return &___marryCopyHotIsBuy1_1; }
	inline void set_marryCopyHotIsBuy1_1(bool value)
	{
		___marryCopyHotIsBuy1_1 = value;
	}

	inline static int32_t get_offset_of_marryCopyHotIsBuy2_2() { return static_cast<int32_t>(offsetof(ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6, ___marryCopyHotIsBuy2_2)); }
	inline bool get_marryCopyHotIsBuy2_2() const { return ___marryCopyHotIsBuy2_2; }
	inline bool* get_address_of_marryCopyHotIsBuy2_2() { return &___marryCopyHotIsBuy2_2; }
	inline void set_marryCopyHotIsBuy2_2(bool value)
	{
		___marryCopyHotIsBuy2_2 = value;
	}

	inline static int32_t get_offset_of_hotValue_3() { return static_cast<int32_t>(offsetof(ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6, ___hotValue_3)); }
	inline int32_t get_hotValue_3() const { return ___hotValue_3; }
	inline int32_t* get_address_of_hotValue_3() { return &___hotValue_3; }
	inline void set_hotValue_3(int32_t value)
	{
		___hotValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYCOPYBUYHOT_TEEBC15BE228874570E435FC45B0794EEE537B3E6_H
#ifndef RESMARRYPOSTERSHOW_T82737C21AF82412087BD9BED7059AF09A3630ADD_H
#define RESMARRYPOSTERSHOW_T82737C21AF82412087BD9BED7059AF09A3630ADD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSG_Marriage.ResMarryPosterShow
struct  ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD  : public RuntimeObject
{
public:
	// MSG_Marriage.MarryRole MSG_Marriage.ResMarryPosterShow::man
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * ___man_1;
	// MSG_Marriage.MarryRole MSG_Marriage.ResMarryPosterShow::woman
	MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * ___woman_2;
	// System.Int64 MSG_Marriage.ResMarryPosterShow::marryId
	int64_t ___marryId_3;
	// System.Int32 MSG_Marriage.ResMarryPosterShow::order
	int32_t ___order_4;

public:
	inline static int32_t get_offset_of_man_1() { return static_cast<int32_t>(offsetof(ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD, ___man_1)); }
	inline MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * get_man_1() const { return ___man_1; }
	inline MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 ** get_address_of_man_1() { return &___man_1; }
	inline void set_man_1(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * value)
	{
		___man_1 = value;
		Il2CppCodeGenWriteBarrier((&___man_1), value);
	}

	inline static int32_t get_offset_of_woman_2() { return static_cast<int32_t>(offsetof(ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD, ___woman_2)); }
	inline MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * get_woman_2() const { return ___woman_2; }
	inline MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 ** get_address_of_woman_2() { return &___woman_2; }
	inline void set_woman_2(MarryRole_t3F4A484E5F5796EB79FA99B0D9EED09ED7E635D0 * value)
	{
		___woman_2 = value;
		Il2CppCodeGenWriteBarrier((&___woman_2), value);
	}

	inline static int32_t get_offset_of_marryId_3() { return static_cast<int32_t>(offsetof(ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD, ___marryId_3)); }
	inline int64_t get_marryId_3() const { return ___marryId_3; }
	inline int64_t* get_address_of_marryId_3() { return &___marryId_3; }
	inline void set_marryId_3(int64_t value)
	{
		___marryId_3 = value;
	}

	inline static int32_t get_offset_of_order_4() { return static_cast<int32_t>(offsetof(ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD, ___order_4)); }
	inline int32_t get_order_4() const { return ___order_4; }
	inline int32_t* get_address_of_order_4() { return &___order_4; }
	inline void set_order_4(int32_t value)
	{
		___order_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESMARRYPOSTERSHOW_T82737C21AF82412087BD9BED7059AF09A3630ADD_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7200 = { sizeof (ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7200[4] = 
{
	0,
	ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6::get_offset_of_marryCopyHotIsBuy1_1(),
	ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6::get_offset_of_marryCopyHotIsBuy2_2(),
	ResMarryCopyBuyHot_tEEBC15BE228874570E435FC45B0794EEE537B3E6::get_offset_of_hotValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7201 = { sizeof (ReqMarryCopySign_t5A2E15AE54973C5BF3DD6A6DAE092684FDF583BC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7201[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7202 = { sizeof (ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7202[3] = 
{
	0,
	ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3::get_offset_of_playerId_1(),
	ResMarryBroadcastName_tC926947F6DD1426BDEF833FCC0E30552D4BACBA3::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7203 = { sizeof (ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7203[5] = 
{
	0,
	ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD::get_offset_of_man_1(),
	ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD::get_offset_of_woman_2(),
	ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD::get_offset_of_marryId_3(),
	ResMarryPosterShow_t82737C21AF82412087BD9BED7059AF09A3630ADD::get_offset_of_order_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7204 = { sizeof (ReqMarryBless_tDC766818CBA92DAE9B6D13B93D614D093D31C2B6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7204[2] = 
{
	0,
	ReqMarryBless_tDC766818CBA92DAE9B6D13B93D614D093D31C2B6::get_offset_of_marryId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7205 = { sizeof (marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7205[8] = 
{
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_marketId_0(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_itemInfo_1(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_lostTime_2(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_coinType_3(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_coinNum_4(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_tranAuthor_5(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_secret_6(),
	marketItemInfo_t9D10625BE413977DD2F0A880ABC5B35165DBCBA8::get_offset_of_panelType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7206 = { sizeof (marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7206[8] = 
{
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_tranTime_0(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_tranType_1(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_tranAuthor_2(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_tranRoleId_3(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_coinType_4(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_coinNum_5(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_itemInfo_6(),
	marketLogInfo_t41FEB417F3AF4EAE99465C87A23061C002210385::get_offset_of_panelType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7207 = { sizeof (ResMarketUpItem_t27B53E00728134EAC25606D56421A005F1ADC291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7207[2] = 
{
	0,
	ResMarketUpItem_t27B53E00728134EAC25606D56421A005F1ADC291::get_offset_of_marketItemInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7208 = { sizeof (ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7208[3] = 
{
	0,
	ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0::get_offset_of_marketId_1(),
	ResMarketUpFailure_t1D6CF286CEF2F19EBB8F8DDA8AF98F1A6F2E5AC0::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7209 = { sizeof (ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7209[3] = 
{
	0,
	ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C::get_offset_of_infoList_1(),
	ResMarketLogList_t7DAAE58077096AD308DF78D4A66927069C8D836C::get_offset_of_gold_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7210 = { sizeof (ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7210[14] = 
{
	0,
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_sortType_1(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_desc_2(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_indexBegin_3(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_indexEnd_4(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_panelType_5(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_dirType_6(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_pingJiType_7(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_color_8(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_sex_9(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_searchName_10(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_marketList_11(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_sortCount_12(),
	ResMarketSortList_tEFE877B17AF2E5AB1E1CB555210946CBD8BD8AF6::get_offset_of_zhuan_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7211 = { sizeof (ResMyMarketList_t14129D720339D42477A0043372815F3A641F6528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7211[2] = 
{
	0,
	ResMyMarketList_t14129D720339D42477A0043372815F3A641F6528::get_offset_of_marketList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7212 = { sizeof (ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7212[3] = 
{
	0,
	ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A::get_offset_of_marketId_1(),
	ResBuyItemFailure_t5584BC97B26EF6432625D2A74DC6E290F6A5F17A::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7213 = { sizeof (ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7213[8] = 
{
	0,
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_marketId_1(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_itemId_2(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_coinType_3(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_coinNum_4(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_num_5(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_secretKey_6(),
	ReqUpItem_t196F7A7D3D657D2639696D12481AD483B7847C7F::get_offset_of_panelType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7214 = { sizeof (ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7214[3] = 
{
	0,
	ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B::get_offset_of_marketId_1(),
	ReqDownItem_t1BF67F3F0D5B1B9B8EAD8CAC3E0C670D95DDB69B::get_offset_of_panelType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7215 = { sizeof (ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7215[13] = 
{
	0,
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_sortType_1(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_desc_2(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_indexBegin_3(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_indexEnd_4(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_panelType_5(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_dirType_6(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_pingJiType_7(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_color_8(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_sex_9(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_searchName_10(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_zhuan_11(),
	ReqMarketSort_tC35A7CBFEF7C96C05BFC8225DBC7C1727EC55AE2::get_offset_of_lang_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7216 = { sizeof (ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7216[5] = 
{
	0,
	ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B::get_offset_of_marketId_1(),
	ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B::get_offset_of_itemNum_2(),
	ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B::get_offset_of_secretKey_3(),
	ReqBuyMarketItem_tFF150DB94F27ADDC8CFCB081FC9B98E5E0CD265B::get_offset_of_panelType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7217 = { sizeof (ReqMyMarketList_tB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7217[2] = 
{
	0,
	ReqMyMarketList_tB3AA56BA0560142BC6B86A73A7DC1F4949DF8C78::get_offset_of_panelType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7218 = { sizeof (ReqMyMarketLogList_t4A4244EA1F1C0DAAEB11B721EFE20AD24298F1A9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7218[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7219 = { sizeof (ReqCoinList_tF593891DC26D99871472D28EE54E5100A81AACBE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7219[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7220 = { sizeof (ResCoinList_t241806FFE698F4219D814C0298436C0F2BB1F435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7220[2] = 
{
	0,
	ResCoinList_t241806FFE698F4219D814C0298436C0F2BB1F435::get_offset_of_gold_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7221 = { sizeof (ReqGetMarketCoin_t9F152B5CAC96287AD65FD66125BC6769CF9975B4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7221[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7222 = { sizeof (ResGetMarketCoin_t3CF05E3A074E667B3857D0522CD23EFABDC4FEED), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7222[2] = 
{
	0,
	ResGetMarketCoin_t3CF05E3A074E667B3857D0522CD23EFABDC4FEED::get_offset_of_state_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7223 = { sizeof (ReqSellItemList_t0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7223[2] = 
{
	0,
	ReqSellItemList_t0669EBE9AE7F10D5B6930B858A5C0C6CB49BB20A::get_offset_of_modelId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7224 = { sizeof (ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7224[3] = 
{
	0,
	ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162::get_offset_of_modelId_1(),
	ResSellItemList_t74EC745DB485602FD8655F8D8E0645C3E3191162::get_offset_of_marketList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7225 = { sizeof (ReqTransport_t2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7225[2] = 
{
	0,
	ReqTransport_t2F3BEC0C7394F9B57DEFE38E9116AE32C843BB71::get_offset_of_transportId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7226 = { sizeof (ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7226[4] = 
{
	0,
	ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD::get_offset_of_curPos_1(),
	ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD::get_offset_of_posList_2(),
	ReqMoveTo_tB3F830AF3821F5F374752364CAC047D10755D5CD::get_offset_of_mapId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7227 = { sizeof (ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7227[4] = 
{
	0,
	ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9::get_offset_of_curPos_1(),
	ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9::get_offset_of_posList_2(),
	ReqPetMoveTo_t287F31B7A4AA78F64E96ACCBC09AACC0C17CBDC9::get_offset_of_mapId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7228 = { sizeof (ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7228[9] = 
{
	0,
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_curX_1(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_curY_2(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_height_3(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_startTarX_4(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_startTarY_5(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_endTarX_6(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_endTarY_7(),
	ReqJump_tBCA4FB5D6F997541FCA81E6CD21AE903D1F6FCA2::get_offset_of_stage_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7229 = { sizeof (ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7229[3] = 
{
	0,
	ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209::get_offset_of_pos_1(),
	ReqStopMove_t91AD9628726756CC4966AC9947B55AE3B6D5A209::get_offset_of_mapId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7230 = { sizeof (ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7230[3] = 
{
	0,
	ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967::get_offset_of_pos_1(),
	ReqPetStopMove_tDC91F7D3698421E4C9432B4D4931D40AB206A967::get_offset_of_mapId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7231 = { sizeof (ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7231[4] = 
{
	0,
	ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F::get_offset_of_curPos_1(),
	ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F::get_offset_of_dir_2(),
	ReqDirMove_t917F59D0157E946A54799E8BF03390E5CE89D93F::get_offset_of_mapId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7232 = { sizeof (ReqGather_t1CB522DB2F2258235AE15BA1C077332A23BF8879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7232[2] = 
{
	0,
	ReqGather_t1CB522DB2F2258235AE15BA1C077332A23BF8879::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7233 = { sizeof (ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7233[3] = 
{
	0,
	ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679::get_offset_of_type_1(),
	ReqRelive_t0B7C8BFF66D1483C835767D11E92BC1C0B7F4679::get_offset_of_isUseGold_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7234 = { sizeof (ReqGetLines_tE8DC4AE0443B7741A7122D3EF9529D2D18AD8239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7234[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7235 = { sizeof (ReqSelectLine_t10A323724F03BBF9555290FC6B1D06D66C9F5280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7235[2] = 
{
	0,
	ReqSelectLine_t10A323724F03BBF9555290FC6B1D06D66C9F5280::get_offset_of_line_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7236 = { sizeof (ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7236[3] = 
{
	0,
	ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8::get_offset_of_tarX_1(),
	ReqJumpDown_t5B1F9036325587C8EA57A8257DC139FB905083B8::get_offset_of_tarY_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7237 = { sizeof (ReqJumpBlock_tC8EB410361DF417B5682720F70B79DEDBDDF26E0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7237[2] = 
{
	0,
	ReqJumpBlock_tC8EB410361DF417B5682720F70B79DEDBDDF26E0::get_offset_of_target_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7238 = { sizeof (ReqPetJumpBlock_t6966F435729CE78736AE8F98B72C07257887BA0C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7238[2] = 
{
	0,
	ReqPetJumpBlock_t6966F435729CE78736AE8F98B72C07257887BA0C::get_offset_of_target_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7239 = { sizeof (ReqFabaoJumpBlock_tC2648DBEEE631C3529450930BA8D2A60268CA142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7239[2] = 
{
	0,
	ReqFabaoJumpBlock_tC2648DBEEE631C3529450930BA8D2A60268CA142::get_offset_of_target_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7240 = { sizeof (ReqGetMonsterPos_t564A3D32C76EADCE38DE684115317439CCA11044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7240[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7241 = { sizeof (ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7241[6] = 
{
	0,
	ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA::get_offset_of_type_1(),
	ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA::get_offset_of_mapID_2(),
	ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA::get_offset_of_x_3(),
	ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA::get_offset_of_y_4(),
	ReqTransportControl_t2FCC38C1A81443ECA21F98DE1D6CDCF45519E3EA::get_offset_of_param_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7242 = { sizeof (ReqCineMatic_t248A1581AA654A27FFD4E7BB31555000F030B369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7242[2] = 
{
	0,
	ReqCineMatic_t248A1581AA654A27FFD4E7BB31555000F030B369::get_offset_of_plotId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7243 = { sizeof (ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7243[3] = 
{
	0,
	ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE::get_offset_of_x_1(),
	ReqSynPos_t16C7E9F1A573DE9AFA7B5853D55BB289AC1C7EBE::get_offset_of_y_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7244 = { sizeof (ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7244[7] = 
{
	0,
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_result_1(),
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_mapDataID_2(),
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_line_3(),
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_pos_4(),
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_type_5(),
	ResEnterMap_t3D8D7EE050CA924BD652F2211AEBE7FD939F5D2E::get_offset_of_param_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7245 = { sizeof (ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7245[11] = 
{
	0,
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_players_1(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_monsters_2(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_gathers_3(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_pets_4(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_npcs_5(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_removeIds_6(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_magics_7(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_bonfires_8(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_tombstone_9(),
	ResRoundObjs_t7F207600CAD5DB1EAFF2046D20235B4ADE82E921::get_offset_of_groundBuff_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7246 = { sizeof (ResMapPlayer_tED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7246[2] = 
{
	0,
	ResMapPlayer_tED2CEB19EA2C2001CD7C9A03538F4EED61C9D87C::get_offset_of_player_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7247 = { sizeof (ResRoundNpcDisappear_t712272852C02EFE9DEDFD85C5A41054CBD2BC697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7247[2] = 
{
	0,
	ResRoundNpcDisappear_t712272852C02EFE9DEDFD85C5A41054CBD2BC697::get_offset_of_npcIds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7248 = { sizeof (ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7248[3] = 
{
	0,
	ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60::get_offset_of_objectId_1(),
	ResStopMove_t8C7048393502C1DAD8A7D57FFC52C20D23226D60::get_offset_of_pos_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7249 = { sizeof (ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7249[3] = 
{
	0,
	ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB::get_offset_of_objectId_1(),
	ResMoveTo_t28F9D113BD70B357628D2D7840E586845D4FDEFB::get_offset_of_posList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7250 = { sizeof (ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7250[10] = 
{
	0,
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_roleID_1(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_curX_2(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_curY_3(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_height_4(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_startTarX_5(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_startTarY_6(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_endTarX_7(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_endTarY_8(),
	ResJump_t39F522A097374203BC99542B0ACD09A3EA3AC416::get_offset_of_stage_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7251 = { sizeof (ResPlayerDisappear_tB1C2C774061C948F562BA5E1303A04F6B3F7D530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7251[2] = 
{
	0,
	ResPlayerDisappear_tB1C2C774061C948F562BA5E1303A04F6B3F7D530::get_offset_of_playerIds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7252 = { sizeof (ResRoundNpcInfo_t253E8C7905E6F48379DF1AC72EF6A705E7A92234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7252[2] = 
{
	0,
	ResRoundNpcInfo_t253E8C7905E6F48379DF1AC72EF6A705E7A92234::get_offset_of_npcInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7253 = { sizeof (ResMapMonster_t1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7253[2] = 
{
	0,
	ResMapMonster_t1C44C41D1BA46AA73E9E3A53AB1724DE0E70E735::get_offset_of_monserInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7254 = { sizeof (ResMonsterDisappear_t02C9FA34B66F5030C829B5442081B7A446B59955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7254[2] = 
{
	0,
	ResMonsterDisappear_t02C9FA34B66F5030C829B5442081B7A446B59955::get_offset_of_monsterId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7255 = { sizeof (ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7255[4] = 
{
	0,
	ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E::get_offset_of_objectId_1(),
	ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E::get_offset_of_curPos_2(),
	ResDirMove_tDC9D619AC734E083178F1E2B09F0B541ABF3934E::get_offset_of_dir_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7256 = { sizeof (ResMapGatherInfo_tFA6645687C35F7CF9C0693D891AB7B4A45A6E551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7256[2] = 
{
	0,
	ResMapGatherInfo_tFA6645687C35F7CF9C0693D891AB7B4A45A6E551::get_offset_of_gatherInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7257 = { sizeof (ResGatherDisappear_tAFC76F34783FDD41F1012305112843E628640B73), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7257[2] = 
{
	0,
	ResGatherDisappear_tAFC76F34783FDD41F1012305112843E628640B73::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7258 = { sizeof (ResBreakGather_tE0641819ACB93646EB3BDA07647F605C49F6E005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7258[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7259 = { sizeof (ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7259[4] = 
{
	0,
	ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7::get_offset_of_playerId_1(),
	ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7::get_offset_of_mapId_2(),
	ResRelive_t533DFF5A446287AB1BBB6369DF4F4FA172A488D7::get_offset_of_curPos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7260 = { sizeof (ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7260[3] = 
{
	0,
	ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B::get_offset_of_objectId_1(),
	ResMoveSpeedChange_tC0379C730500D3170D7A580B27F21CF6EB59BE4B::get_offset_of_value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7261 = { sizeof (ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7261[3] = 
{
	0,
	ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD::get_offset_of_objectId_1(),
	ResAttackspeedChange_t7B243B7B8FF280147C9C8C777A0DDB8BF99D7AAD::get_offset_of_value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7262 = { sizeof (ResLineList_t6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7262[2] = 
{
	0,
	ResLineList_t6E511AF1EE901CD4AE606A9A0DAB6C08CF1FC067::get_offset_of_lines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7263 = { sizeof (ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7263[3] = 
{
	0,
	ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA::get_offset_of_playerId_1(),
	ResPlayerCloakChange_t23F494F41B8F2D385BDA65D12A3A2CBE628669CA::get_offset_of_curCloakLayer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7264 = { sizeof (ResPetBirth_t6DD5626692F8D76D717CD71F4E1DDFED18960113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7264[2] = 
{
	0,
	ResPetBirth_t6DD5626692F8D76D717CD71F4E1DDFED18960113::get_offset_of_pet_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7265 = { sizeof (ResPetDisappear_tA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7265[2] = 
{
	0,
	ResPetDisappear_tA5B6F9C034CAABAC1B02F560F2DFED77E9BDB4CE::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7266 = { sizeof (ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7266[3] = 
{
	0,
	ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532::get_offset_of_id_1(),
	ResJumpBlock_tB04C41B523C919B79DAF7206CB0FFDE7D84CC532::get_offset_of_target_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7267 = { sizeof (BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7267[2] = 
{
	BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361::get_offset_of_id_0(),
	BlockDoor_tFCA338119603E30FF48E1A8A809C388A026E5361::get_offset_of_isopen_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7268 = { sizeof (ResBlockDoors_t0538142BEC06F5682B6256895D0F08111559E3E1), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7268[2] = 
{
	0,
	ResBlockDoors_t0538142BEC06F5682B6256895D0F08111559E3E1::get_offset_of_doors_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7269 = { sizeof (ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7269[3] = 
{
	0,
	ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93::get_offset_of_id_1(),
	ResUpdateBlockDoor_tB802643A9AE43C85D6877B83752AADD5467A3A93::get_offset_of_isopen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7270 = { sizeof (ResMagicBirth_tAA30D305DC823B20A96065F4E8B49F2CF5698E39), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7270[2] = 
{
	0,
	ResMagicBirth_tAA30D305DC823B20A96065F4E8B49F2CF5698E39::get_offset_of_magic_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7271 = { sizeof (ResMagicClean_t0865A1BD697D0DB08307C3F3FF5F507BEAE18730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7271[2] = 
{
	0,
	ResMagicClean_t0865A1BD697D0DB08307C3F3FF5F507BEAE18730::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7272 = { sizeof (ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7272[3] = 
{
	0,
	ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4::get_offset_of_id_1(),
	ResUpdateCamp_t02F208927B5717D3A777EA3686FFCC4F2A296EA4::get_offset_of_camp_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7273 = { sizeof (ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7273[3] = 
{
	0,
	ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628::get_offset_of_x_1(),
	ResMonsterPos_tE20BD59959617ACFE47C038414E7D02DAB4AE628::get_offset_of_Y_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7274 = { sizeof (ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7274[4] = 
{
	0,
	ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672::get_offset_of_instanceId_1(),
	ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672::get_offset_of_roleId_2(),
	ResMonsterDieGetItem_t74884337AA5722A2EFF4436C4E42832955235672::get_offset_of_list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7275 = { sizeof (ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7275[5] = 
{
	0,
	ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082::get_offset_of_roleId_1(),
	ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082::get_offset_of_gatherId_2(),
	ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082::get_offset_of_x_3(),
	ResBeginGather_t481540EB0F4D783750F941232ADEFB99CE11B082::get_offset_of_Y_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7276 = { sizeof (ResEndGather_t3D975685D4B69A150A1319427E43C4E292306713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7276[2] = 
{
	0,
	ResEndGather_t3D975685D4B69A150A1319427E43C4E292306713::get_offset_of_roleId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7277 = { sizeof (ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7277[3] = 
{
	0,
	ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B::get_offset_of_id_1(),
	ResUpdateMoveState_t8B1F4FC70F463EAC9F19F388D1F6156D41AA331B::get_offset_of_isRun_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7278 = { sizeof (ResPlayEffect_t1652E459F69D81EC20BD9837E5B83959F28D11AD), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7278[2] = 
{
	0,
	ResPlayEffect_t1652E459F69D81EC20BD9837E5B83959F28D11AD::get_offset_of_effectType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7279 = { sizeof (RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7279[11] = 
{
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_id_0(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_isUseDef_1(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_name_2(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_career_3(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_degree_4(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_wingId_5(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_clothesEquipId_6(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_weaponsEquipId_7(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_clothesStar_8(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_weaponStar_9(),
	RoleStatue_tBD9CB09B6B68845C34526F58358ABC5430D38FD0::get_offset_of_roleId_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7280 = { sizeof (ResRoleStatue_t9AC31478048A1100D73F59BC978761681F819F42), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7280[2] = 
{
	0,
	ResRoleStatue_t9AC31478048A1100D73F59BC978761681F819F42::get_offset_of_statues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7281 = { sizeof (ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7281[5] = 
{
	0,
	ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81::get_offset_of_flagId_1(),
	ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81::get_offset_of_name_2(),
	ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81::get_offset_of_x_3(),
	ResCityFlag_tC651D79E89E74C252D31B010AF86A3708EBF8E81::get_offset_of_y_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7282 = { sizeof (ResJumpTransport_tC077D5BF29B868D918997FFD1D0F24AD7B2C4114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7282[2] = 
{
	0,
	ResJumpTransport_tC077D5BF29B868D918997FFD1D0F24AD7B2C4114::get_offset_of_transId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7283 = { sizeof (ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7283[4] = 
{
	0,
	ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5::get_offset_of_roleID_1(),
	ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5::get_offset_of_tarX_2(),
	ResJumpDown_tEF031AF18243EEFCCF6D8F3C4B405CA2996F20B5::get_offset_of_tarY_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7284 = { sizeof (ResBonfireBirth_tAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7284[2] = 
{
	0,
	ResBonfireBirth_tAED720A13D667C3404B267DB5FFBBE4BEB0A1BF2::get_offset_of_bonfire_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7285 = { sizeof (ResBonfireClean_t5D8A5C3786793593B86B1F64EE17B302D3412F6C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7285[2] = 
{
	0,
	ResBonfireClean_t5D8A5C3786793593B86B1F64EE17B302D3412F6C::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7286 = { sizeof (ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7286[3] = 
{
	0,
	ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5::get_offset_of_instanceId_1(),
	ResMonsterDieGetCoin_tE2F5801AA683317D89FD9794D239240A7876C1D5::get_offset_of_coinnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7287 = { sizeof (ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7287[9] = 
{
	0,
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_id_1(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_dataID_2(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_ownerID_3(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_speed_4(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_level_5(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_camp_6(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_curHp_7(),
	ResPetHpChange_tF0C8FBCA1A7B5DD6FE3A7D0F4F31CB35C5D83712::get_offset_of_maxHp_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7288 = { sizeof (ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7288[3] = 
{
	0,
	ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D::get_offset_of_monsterId_1(),
	ResMonsterDropMark_t23C048B01A8A9E3520AF646D38B9A0BDAB01DE4D::get_offset_of_dropUserIds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7289 = { sizeof (ResTombstoneBirth_tF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7289[2] = 
{
	0,
	ResTombstoneBirth_tF3B90B5AE9F4391347DDA0A81BBEBEC0450C1E52::get_offset_of_TombstoneInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7290 = { sizeof (ResTombstoneClean_t976E3AFB5436879AD75DF377D06E4D99E0EEA0EE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7290[2] = 
{
	0,
	ResTombstoneClean_t976E3AFB5436879AD75DF377D06E4D99E0EEA0EE::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7291 = { sizeof (ResGroundBuffBirth_tB11E46E691289CA970EA96120AAB78D51E7D6572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7291[2] = 
{
	0,
	ResGroundBuffBirth_tB11E46E691289CA970EA96120AAB78D51E7D6572::get_offset_of_groundBuffInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7292 = { sizeof (ResGroundBuffClean_t1A014A978C79C545C09D969FBF429F2C1CCEC06C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7292[2] = 
{
	0,
	ResGroundBuffClean_t1A014A978C79C545C09D969FBF429F2C1CCEC06C::get_offset_of_gbid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7293 = { sizeof (ReqGroundBuffStar_t50DC364549DE9233C8F00EFD3E5EE7BF11433040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7293[2] = 
{
	0,
	ReqGroundBuffStar_t50DC364549DE9233C8F00EFD3E5EE7BF11433040::get_offset_of_gbid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7294 = { sizeof (ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7294[3] = 
{
	0,
	ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D::get_offset_of_gbid_1(),
	ResGroundBuffStar_tB8B3D0B76CDDBFAB26994B7C28EA1E88776E068D::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7295 = { sizeof (ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7295[3] = 
{
	0,
	ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480::get_offset_of_monsterid_1(),
	ResShowMonsterPop_t03DC07D7F4178A9E30B1F8391F9D66E9B0D24480::get_offset_of_talkid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7296 = { sizeof (ResPlayCinematic_t7057F3DE854BC4B9CB03D93D41E936DB54C8084F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7296[2] = 
{
	0,
	ResPlayCinematic_t7057F3DE854BC4B9CB03D93D41E936DB54C8084F::get_offset_of_cinematicID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7297 = { sizeof (ResNotCanGather_t853A37F0BE018B3904D2E15E4B8CC369F90AF829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7297[2] = 
{
	0,
	ResNotCanGather_t853A37F0BE018B3904D2E15E4B8CC369F90AF829::get_offset_of_gatherId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7298 = { sizeof (ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7298[3] = 
{
	0,
	ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581::get_offset_of_playerId_1(),
	ResShiHaiBroadcast_t9CDB3CFBED3F931221466A3F9DD0FCCC838A0581::get_offset_of_shiHaiCfgId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7299 = { sizeof (ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable7299[3] = 
{
	0,
	ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E::get_offset_of_vipLv_1(),
	ResVipLvBroadCast_tA582F815C3CA6E8C298446473E2AE1431A24742E::get_offset_of_roleId_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
