
õ4
player.proto
MSG_Playerbackpack.protoCommon.proto"(
	Attribute
type (
value ("n
ResPlayerOnLineAttribute,
attributeList (2.MSG_Player.Attribute
maxHp ("
MsgID
eMsgIDçµ"j
ResPlayerAttributeChange
type ()

changeList (2.MSG_Player.Attribute"
MsgID
eMsgIDéµ"å
ResPlayerBaseInfo
roleID (
	accountId (
name (	
pkMode (
curTitle (
vipLevel (
level (
exp (

occupation	 (
mountId
 (
guild (
	guildName (	
pos (
mapID (
posX (
posY (
curHP (

fightpower (
languageType (:0
stateVip (
camp (
fabaoId (
fabaoUid (
soulSpirte1 (
soulSpirte2 (
soulSpirte3 (
shiHaiCfgId (
serverId (
vipExp (
xsLvl (
curWakan (+
facade  (2.MSG_Common.FacadeAttribute
	feijianId! (

feijianUid" (
feijianMaxID# (
genderClass$ (
childId% ('
head& (2.MSG_Common.HeadAttribute
	childName' (	"
MsgID
eMsgIDèµ"ƒ
GlobalPlayerWorldInfo
userId (
roleid (
rolename (	
career (
level (
plat (	

createTime (
csid (
lastOffTime	 (
horseId
 (
wingId (

fightPower (
guildId (
fashionHeadId (
fashionHeadFrameId (
fashionBodyId (
fashionWeaponId (
fashionHalo (
fashionMatrix (
sex (
stateVip (
shiHaiLevel (
	playerVip (
spiritId (
soulArmorId (
serverId (
customHeadPath (	
useCustomHead (
	guildName (	"J
ResChangeJobResult
result (
grade ("
MsgID
eMsgIDêµ"7
ResAddHatred
playerId ("
MsgID
eMsgIDëµ"7
ResDelHatred
playerId ("
MsgID
eMsgIDíµ"e
ResLevelChange
level (
playerId (
time (
grade ("
MsgID
eMsgIDìµ"h
ResPracticeInfo
time (
getExp (
	getZhenQi (
state ("
MsgID
eMsgIDîµ"9
ResPracticeSetDo
result ("
MsgID
eMsgIDïµ"=
ResPracticeGetResult
result ("
MsgID
eMsgIDñµ"9
ResAccunonlinetime
time ("
MsgID
eMsgIDôµ":
ResUpdataExpRate
expRate ("
MsgID
eMsgIDöµ"L
ResUpdataPkValue
playerId (
pkValue ("
MsgID
eMsgIDõµ"c
ResUpdataPkStateResult

curPkState (
reason (
notice ("
MsgID
eMsgIDúµ"'
ResCleanHatred"
MsgID
eMsgIDùµ"W
ResPlayerFightPointChange

fightPoint (
type (:0"
MsgID
eMsgIDûµ"‚
ResLookOtherPlayerResult
roleId (
roleName (	
roleLv (
career (
vip (

fightPoint (
	guildName (	&
attList (2.MSG_Player.Attribute)
	equipList
 (2.MSG_backpack.ItemInfo
stifleFabaoId (
shiHaiCfgId (
xsLvl (+
facade (2.MSG_Common.FacadeAttribute"
MsgID
eMsgIDüµ";
ResFightOrUnFight
isFight ("
MsgID
eMsgID†µ"6
ResMainUIGuideID
gid ("
MsgID
eMsgID°µ"\
ResPlayerTodayData
continuousDays (
accumOnlineDays ("
MsgID
eMsgID¢µ"d
ResChangeRoleNameResult
	isSuccess (
newName (	
roleId ("
MsgID
eMsgID•µ"F
ResMaxHpChange
roleId (
maxHp ("
MsgID
eMsgID¶µ"4
ResClientToChoiceBirthGroup"
MsgID
eMsgIDßµ"&
ResNotUpLevel"
MsgID
eMsgID®µ")
ResChangeJobTips"
MsgID
eMsgID©µ"8
ResOpenServerTime
time ("
MsgID
eMsgID´µ"%
ReqChangeJob"
MsgID
eMsgIDÚµ".
ReqGetAccunonlinetime"
MsgID
eMsgIDˆµ":
ReqUpdataPkState
pkState ("
MsgID
eMsgID˜µ"B
ReqLookOtherPlayer
otherPlayerId ("
MsgID
eMsgID˘µ"<
ReqUpdateMainUIGuideID
gid ("
MsgID
eMsgID˙µ")
ReqMainUIGuideID"
MsgID
eMsgID˚µ";
ReqChangeRoleName
newName (	"
MsgID
eMsgID¸µ"'
ReqCourageList"
MsgID
eMsgID˛µ"&
FateStar

id (
gender ("*
ReqPeakLevelPanel"
MsgID
eMsgIDê∂"[
ResPeakLevelPanel
ids (
isChangeJob (
isRed ("
MsgID
eMsgIDØµ":
ReqChangeJobPanel
gender ("
MsgID
eMsgIDí∂"k
ResChangeJobPanel
ids (
isChangeJob (
isRed (
gender ("
MsgID
eMsgID±µ"6
ReqActiveFateStar

id ("
MsgID
eMsgIDë∂"M
ResActiveFateStar!
ids (2.MSG_Player.FateStar"
MsgID
eMsgIDÆµ"U
ResPlayerGenderNotice
playerId (
genderLevel ("
MsgID
eMsgID∞µ"(
ReqUpgradeBlood"
MsgID
eMsgIDì∂"H
ResUpgradeBlood
state (
nextKey (	"
MsgID
eMsgID≤µ"+
ReqOpenBloodPannel"
MsgID
eMsgIDò∂"I
ResOpenBloodPannel
order (
level ("
MsgID
eMsgID¥µ"R
ReqPlayerCareerChange
careerNo (
eqiupNos ("
MsgID
eMsgIDó∂"_
ResPlayerCareerChange
careerNo (
roleId (
state ("
MsgID
eMsgID≥µ"*
Gift
giftId (

giftNumber ("r
ReqSendGift
type (
roleId (
force (
gifts (2.MSG_Player.Gift"
MsgID
eMsgIDô∂"V
ResSendGift
result ( 
log (2.MSG_Player.GiftLog"
MsgID
eMsgIDµµ"Ñ
GiftLog

id (
type (
sender (	
receiver (	
itemId (
num (
time (

readStatus ("4
ReqGetGiftLog
type ("
MsgID
eMsgIDö∂"]
ResGetGiftLog
type ('

recordList (2.MSG_Player.GiftLog"
MsgID
eMsgID∂µ"4
ReqReadGiftLog
ids ("
MsgID
eMsgIDù∂"4
ResReadGiftLog
ids ("
MsgID
eMsgIDªµ"H
ResNewGiftLog 
log (2.MSG_Player.GiftLog"
MsgID
eMsgID∫µ"/
ReqXiSui
free ("
MsgID
eMsgIDõ∂"E
SyncXiSuiData
roleID (
xsLvl ("
MsgID
eMsgID∑µ"=
ReqPlayerSummaryInfo
roleId ("
MsgID
eMsgIDú∂"˛
ResPlayerSummaryInfo
roleId (
roleName (	
roleLv (
career (

fightpower (
	guildName (	
serverId (+
facade (2.MSG_Common.FacadeAttribute'
head	 (2.MSG_Common.HeadAttribute"
MsgID
eMsgID∏µ"B
ResGenderClassChange
genderClass ("
MsgID
eMsgIDπµ"
G2SSynPlayerSocialInfo@
globalPlayerWorldInfo (2!.MSG_Player.GlobalPlayerWorldInfo
type ("
MsgID
eMsgID’∂"V
G2SReqPlayerSummaryInfo
roleId (
targetRoleId ("
MsgID
eMsgIDÄ∑"b
ReqPlayerSettingCustomHead
customHeadPath (	
useCustomHead ("
MsgID
eMsgID†∂"Ö
 ResPlayerSettingCustomHeadResult
	isSuccess (
roleId ('
head (2.MSG_Common.HeadAttribute"
MsgID
eMsgIDºµB
game.messageBPlayerMessage