
¿9
	map.protoMSG_MapCommon.protocopymap.proto":
ReqTransport
transportId ("
MsgID
eMsgIDπû"~
	ReqMoveTo$
curPos (2.MSG_Common.Position%
posList (2.MSG_Common.Position
mapId ("
MsgID
eMsgID∫û"Å
ReqPetMoveTo$
curPos (2.MSG_Common.Position%
posList (2.MSG_Common.Position
mapId ("
MsgID
eMsgIDÓû"£
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
eMsgIDªû"V
ReqStopMove!
pos (2.MSG_Common.Position
mapId ("
MsgID
eMsgIDºû"Y
ReqPetStopMove!
pos (2.MSG_Common.Position
mapId ("
MsgID
eMsgIDÔû"{

ReqDirMove$
curPos (2.MSG_Common.Position!
dir (2.MSG_Common.Position
mapId ("
MsgID
eMsgIDΩû".
	ReqGather

id ("
MsgID
eMsgIDæû"C
	ReqRelive
type (
	isUseGold ("
MsgID
eMsgIDøû"$
ReqGetLines"
MsgID
eMsgID¿û"4
ReqSelectLine
line ("
MsgID
eMsgID¡û"@
ReqJumpDown
tarX (
tarY ("
MsgID
eMsgID¬û"K
ReqJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgID≈û"N
ReqPetJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgIDÀû"P
ReqFabaoJumpBlock$
target (2.MSG_Common.Position"
MsgID
eMsgIDÃû")
ReqGetMonsterPos"
MsgID
eMsgID«û"n
ReqTransportControl
type (
mapID (	
x (	
y (
param ("
MsgID
eMsgID»û"5
ReqCineMatic
plotId ("
MsgID
eMsgID…û"8
	ReqSynPos	
x (	
y ("
MsgID
eMsgID û"ï
ResEnterMap
result (
	mapDataID (
line (!
pos (2.MSG_Common.Position
type (
param ("
MsgID
eMsgID÷ù"ß
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
eMsgID◊ù"M
ResMapPlayer&
player (2.MSG_Common.PlayerInfo"
MsgID
eMsgIDÿù"=
ResRoundNpcDisappear
npcIds ("
MsgID
eMsgIDŸù"Y
ResStopMove
objectId (!
pos (2.MSG_Common.Position"
MsgID
eMsgID⁄ù"[
	ResMoveTo
objectId (%
posList (2.MSG_Common.Position"
MsgID
eMsgIDﬁù"≥
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
eMsgIDﬂù">
ResPlayerDisappear
	playerIds ("
MsgID
eMsgID‡ù"N
ResRoundNpcInfo$
npcInfo (2.MSG_Common.NpcInfo"
MsgID
eMsgID·ù"S
ResMapMonster+

monserInfo (2.MSG_Common.MonsterInfo"
MsgID
eMsgID‚ù"?
ResMonsterDisappear
	monsterId ("
MsgID
eMsgID„ù"~

ResDirMove
objectId ($
curPos (2.MSG_Common.Position!
dir (2.MSG_Common.Position"
MsgID
eMsgID‰ù"U
ResMapGatherInfo*

gatherInfo (2.MSG_Common.GatherInfo"
MsgID
eMsgIDÂù"7
ResGatherDisappear

id ("
MsgID
eMsgIDÊù"'
ResBreakGather"
MsgID
eMsgIDÁù"i
	ResRelive
playerId (
mapId ($
curPos (2.MSG_Common.Position"
MsgID
eMsgIDËù"L
ResMoveSpeedChange
objectId (
value ("
MsgID
eMsgIDÈù"N
ResAttackspeedChange
objectId (
value ("
MsgID
eMsgIDÍù"3
ResLineList
lines ("
MsgID
eMsgIDÏù"V
ResPlayerCloakChange
playerId (
curCloakLayer ("
MsgID
eMsgIDÌù"F
ResPetBirth 
pet (2.MSG_Common.PetInfo"
MsgID
eMsgIDÓù"4
ResPetDisappear

id ("
MsgID
eMsgIDÔù"W
ResJumpBlock

id ($
target (2.MSG_Common.Position"
MsgID
eMsgIDù"'
	BlockDoor

id (	
isopen ("I
ResBlockDoors!
doors (2.MSG_Map.BlockDoor"
MsgID
eMsgIDÒù"G
ResUpdateBlockDoor

id (	
isopen ("
MsgID
eMsgIDÚù"H
ResMagicBirth 
magic (2.MSG_Common.Magic"
MsgID
eMsgIDÛù"2
ResMagicClean

id ("
MsgID
eMsgIDÙù"@
ResUpdateCamp

id (
camp ("
MsgID
eMsgIDıù"<
ResMonsterPos	
x (	
Y ("
MsgID
eMsgIDˆù"z
ResMonsterDieGetItem

instanceId (
roleId ('
list (2.MSG_copyMap.cardItemInfo"
MsgID
eMsgID˜ù"_
ResBeginGather
roleId (
gatherId (	
x (	
Y ("
MsgID
eMsgID¯ù"5
ResEndGather
roleId ("
MsgID
eMsgID˘ù"F
ResUpdateMoveState

id (
isRun ("
MsgID
eMsgID˙ù":
ResPlayEffect

effectType ("
MsgID
eMsgID˚ù"—

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
eMsgID¸ù"X
ResCityFlag
flagId (
name (		
x (	
y ("
MsgID
eMsgID˝ù":
ResJumpTransport
transId ("
MsgID
eMsgID˛ù"P
ResJumpDown
roleID (
tarX (
tarY ("
MsgID
eMsgIDˇù"R
ResBonfireBirth(
bonfire (2.MSG_Common.BonfireInfo"
MsgID
eMsgIDÄû"4
ResBonfireClean

id ("
MsgID
eMsgIDÅû"R
ResMonsterDieGetCoin

instanceId (
coinnum ("
MsgID
eMsgIDÇû"°
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
eMsgIDÉû"S
ResMonsterDropMark
	monsterId (
dropUserIds ("
MsgID
eMsgIDÑû"\
ResTombstoneBirth0
TombstoneInfo (2.MSG_Common.TombstoneInfo"
MsgID
eMsgIDÖû"6
ResTombstoneClean

id ("
MsgID
eMsgIDÜû"_
ResGroundBuffBirth2
groundBuffInfo (2.MSG_Common.GroundBuffMess"
MsgID
eMsgIDáû"9
ResGroundBuffClean
gbid ("
MsgID
eMsgIDàû"8
ReqGroundBuffStar
gbid ("
MsgID
eMsgIDÌû"G
ResGroundBuffStar
gbid (
state ("
MsgID
eMsgIDâû"M
ResShowMonsterPop
	monsterid (
talkid ("
MsgID
eMsgIDäû">
ResPlayCinematic
cinematicID ("
MsgID
eMsgIDãû":
ResNotCanGather
gatherId ("
MsgID
eMsgIDéû"R
ResShiHaiBroadcast
playerId (
shiHaiCfgId ("
MsgID
eMsgIDèû"I
ResVipLvBroadCast
vipLv (
roleId ("
MsgID
eMsgIDêû"t
ResGuildInfoBroadCast
guildId (
roleId (
	guildName (	
guildPos ("
MsgID
eMsgIDëû"ö
ResFabaoInfoBroadCast
playerId (
cfgId (

id (
soulSpirte1 (
soulSpirte2 (
soulSpirte3 ("
MsgID
eMsgIDíû"Q
ResSpiritIdBroadCast
playerId (
spiritId ("
MsgID
eMsgIDìû"|
ResHuaxinFlySwordBroadCast
playerId (

huxinFlyID (
uid (
feijianMaxID ("
MsgID
eMsgIDîû"l
ResChildCallInfo
playerId (
childId (
opt (
	childName (	"
MsgID
eMsgIDïû"J
ResPlayerPlayVfx
playerId (
vfxId ("
MsgID
eMsgIDñû"R
ResSoulEquipChange
playerId (
soulArmorId ("
MsgID
eMsgIDóûB
game.messageB
MapMessage