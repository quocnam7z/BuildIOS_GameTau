
�9
	map.protoMSG_MapCommon.protocopymap.proto":
ReqTransport
transportId ("
MsgID
eMsgID��"~
	ReqMoveTo$
curPos (2.MSG_Common.Position%
posList (2.MSG_Common.Position
mapId ("
MsgID
eMsgID��"�
ReqPetMoveTo$
curPos (2.MSG_Common.Position%
posList (2.MSG_Common.Position
mapId ("
MsgID
eMsgID�"�
ReqJump
curX (
curY (
height (
	startTarX (
	startTarY (
endTarX (
endTarY (
stage ("
MsgID
eMsgID��"V
ReqStopMove!
pos (2.MSG_Common.Position
mapId ("
MsgID
eMsgID��"Y
ReqPetStopMove!
pos (2.MSG_Common.Position
mapId ("
MsgID
eMsgID�"{

ReqDirMove$
curPos (2.MSG_Common.Position!
dir (2.MSG_Common.Position
mapId ("
MsgID
eMsgID��".
	ReqGather

id ("
MsgID
eMsgID��"C
	ReqRelive
type (
	isUseGold ("
MsgID
eMsgID��"$
ReqGetLines"
MsgID
eMsgID��"4
ReqSelectLine
line ("
MsgID
eMsgID��"@
ReqJumpDown
tarX (
tarY ("
MsgID
eMsgID"K
ReqJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgIDŞ"N
ReqPetJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgID˞"P
ReqFabaoJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgID̞")
ReqGetMonsterPos"
MsgID
eMsgIDǞ"n
ReqTransportControl
type (
mapID (	
x (	
y (
param ("
MsgID
eMsgIDȞ"5
ReqCineMatic
plotId ("
MsgID
eMsgIDɞ"8
	ReqSynPos	
x (	
y ("
MsgID
eMsgIDʞ"�
ResEnterMap
result (
	mapDataID (
line (!
pos (2.MSG_Common.Position
type (
param ("
MsgID
eMsgID֝"�
ResRoundObjs'
players (2.MSG_Common.PlayerInfo)
monsters (2.MSG_Common.MonsterInfo'
gathers (2.MSG_Common.GatherInfo!
pets (2.MSG_Common.PetInfo!
npcs (2.MSG_Common.NpcInfo
	removeIds (!
magics (2.MSG_Common.Magic)
bonfires (2.MSG_Common.BonfireInfo,
	tombstone	 (2.MSG_Common.TombstoneInfo.

groundBuff
 (2.MSG_Common.GroundBuffMess"
MsgID
eMsgIDם"M
ResMapPlayer&
player (2.MSG_Common.PlayerInfo"
MsgID
eMsgID؝"=
ResRoundNpcDisappear
npcIds ("
MsgID
eMsgIDٝ"Y
ResStopMove
objectId (!
pos (2.MSG_Common.Position"
MsgID
eMsgIDڝ"[
	ResMoveTo
objectId (%
posList (2.MSG_Common.Position"
MsgID
eMsgIDޝ"�
ResJump
roleID (
curX (
curY (
height (
	startTarX (
	startTarY (
endTarX (
endTarY (
stage	 ("
MsgID
eMsgIDߝ">
ResPlayerDisappear
	playerIds ("
MsgID
eMsgID��"N
ResRoundNpcInfo$
npcInfo (2.MSG_Common.NpcInfo"
MsgID
eMsgID�"S
ResMapMonster+

monserInfo (2.MSG_Common.MonsterInfo"
MsgID
eMsgID�"?
ResMonsterDisappear
	monsterId ("
MsgID
eMsgID�"~

ResDirMove
objectId ($
curPos (2.MSG_Common.Position!
dir (2.MSG_Common.Position"
MsgID
eMsgID�"U
ResMapGatherInfo*

gatherInfo (2.MSG_Common.GatherInfo"
MsgID
eMsgID�"7
ResGatherDisappear

id ("
MsgID
eMsgID�"'
ResBreakGather"
MsgID
eMsgID�"i
	ResRelive
playerId (
mapId ($
curPos (2.MSG_Common.Position"
MsgID
eMsgID�"L
ResMoveSpeedChange
objectId (
value ("
MsgID
eMsgID�"N
ResAttackspeedChange
objectId (
value ("
MsgID
eMsgID�"3
ResLineList
lines ("
MsgID
eMsgID�"V
ResPlayerCloakChange
playerId (
curCloakLayer ("
MsgID
eMsgID�"F
ResPetBirth 
pet (2.MSG_Common.PetInfo"
MsgID
eMsgID�"4
ResPetDisappear

id ("
MsgID
eMsgID�"W
ResJumpBlock

id ($
target (2.MSG_Common.Position"
MsgID
eMsgID�"'
	BlockDoor

id (	
isopen ("I
ResBlockDoors!
doors (2.MSG_Map.BlockDoor"
MsgID
eMsgID�"G
ResUpdateBlockDoor

id (	
isopen ("
MsgID
eMsgID�"H
ResMagicBirth 
magic (2.MSG_Common.Magic"
MsgID
eMsgID�"2
ResMagicClean

id ("
MsgID
eMsgID��"@
ResUpdateCamp

id (
camp ("
MsgID
eMsgID��"<
ResMonsterPos	
x (	
Y ("
MsgID
eMsgID��"z
ResMonsterDieGetItem

instanceId (
roleId ('
list (2.MSG_copyMap.cardItemInfo"
MsgID
eMsgID��"_
ResBeginGather
roleId (
gatherId (	
x (	
Y ("
MsgID
eMsgID��"5
ResEndGather
roleId ("
MsgID
eMsgID��"F
ResUpdateMoveState

id (
isRun ("
MsgID
eMsgID��":
ResPlayEffect

effectType ("
MsgID
eMsgID��"�

RoleStatue

id (
isUseDef (
name (	
career (
degree (
wingId (
clothesEquipId (
weaponsEquipId (
clothesStar	 (

weaponStar
 (
roleId ("L
ResRoleStatue$
statues (2.MSG_Map.RoleStatue"
MsgID
eMsgID��"X
ResCityFlag
flagId (
name (		
x (	
y ("
MsgID
eMsgID��":
ResJumpTransport
transId ("
MsgID
eMsgID��"P
ResJumpDown
roleID (
tarX (
tarY ("
MsgID
eMsgID��"R
ResBonfireBirth(
bonfire (2.MSG_Common.BonfireInfo"
MsgID
eMsgID��"4
ResBonfireClean

id ("
MsgID
eMsgID��"R
ResMonsterDieGetCoin

instanceId (
coinnum ("
MsgID
eMsgID��"�
ResPetHpChange

id (
dataID (
ownerID (
speed (
level (:0
camp (
curHp (
maxHp ("
MsgID
eMsgID��"S
ResMonsterDropMark
	monsterId (
dropUserIds ("
MsgID
eMsgID��"\
ResTombstoneBirth0
TombstoneInfo (2.MSG_Common.TombstoneInfo"
MsgID
eMsgID��"6
ResTombstoneClean

id ("
MsgID
eMsgID��"_
ResGroundBuffBirth2
groundBuffInfo (2.MSG_Common.GroundBuffMess"
MsgID
eMsgID��"9
ResGroundBuffClean
gbid ("
MsgID
eMsgID��"8
ReqGroundBuffStar
gbid ("
MsgID
eMsgID�"G
ResGroundBuffStar
gbid (
state ("
MsgID
eMsgID��"M
ResShowMonsterPop
	monsterid (
talkid ("
MsgID
eMsgID��">
ResPlayCinematic
cinematicID ("
MsgID
eMsgID��":
ResNotCanGather
gatherId ("
MsgID
eMsgID��"R
ResShiHaiBroadcast
playerId (
shiHaiCfgId ("
MsgID
eMsgID��"I
ResVipLvBroadCast
vipLv (
roleId ("
MsgID
eMsgID��"t
ResGuildInfoBroadCast
guildId (
roleId (
	guildName (	
guildPos ("
MsgID
eMsgID��"�
ResFabaoInfoBroadCast
playerId (
cfgId (

id (
soulSpirte1 (
soulSpirte2 (
soulSpirte3 ("
MsgID
eMsgID��"Q
ResSpiritIdBroadCast
playerId (
spiritId ("
MsgID
eMsgID��"|
ResHuaxinFlySwordBroadCast
playerId (

huxinFlyID (
uid (
feijianMaxID ("
MsgID
eMsgID��"l
ResChildCallInfo
playerId (
childId (
opt (
	childName (	"
MsgID
eMsgID��"J
ResPlayerPlayVfx
playerId (
vfxId ("
MsgID
eMsgID��"R
ResSoulEquipChange
playerId (
soulArmorId ("
MsgID
eMsgID��B
game.messageB
MapMessage