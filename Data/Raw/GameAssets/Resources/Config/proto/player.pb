
�4
player.proto
MSG_Playerbackpack.protoCommon.proto"(
	Attribute
type (
value ("n
ResPlayerOnLineAttribute,
attributeList (2.MSG_Player.Attribute
maxHp ("
MsgID
eMsgID��"j
ResPlayerAttributeChange
type ()

changeList (2.MSG_Player.Attribute"
MsgID
eMsgID��"�
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
eMsgID��"�
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
eMsgID��"7
ResAddHatred
playerId ("
MsgID
eMsgID��"7
ResDelHatred
playerId ("
MsgID
eMsgID��"e
ResLevelChange
level (
playerId (
time (
grade ("
MsgID
eMsgID��"h
ResPracticeInfo
time (
getExp (
	getZhenQi (
state ("
MsgID
eMsgID��"9
ResPracticeSetDo
result ("
MsgID
eMsgID��"=
ResPracticeGetResult
result ("
MsgID
eMsgID��"9
ResAccunonlinetime
time ("
MsgID
eMsgID��":
ResUpdataExpRate
expRate ("
MsgID
eMsgID��"L
ResUpdataPkValue
playerId (
pkValue ("
MsgID
eMsgID��"c
ResUpdataPkStateResult

curPkState (
reason (
notice ("
MsgID
eMsgID��"'
ResCleanHatred"
MsgID
eMsgID��"W
ResPlayerFightPointChange

fightPoint (
type (:0"
MsgID
eMsgID��"�
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
eMsgID��";
ResFightOrUnFight
isFight ("
MsgID
eMsgID��"6
ResMainUIGuideID
gid ("
MsgID
eMsgID��"\
ResPlayerTodayData
continuousDays (
accumOnlineDays ("
MsgID
eMsgID��"d
ResChangeRoleNameResult
	isSuccess (
newName (	
roleId ("
MsgID
eMsgID��"F
ResMaxHpChange
roleId (
maxHp ("
MsgID
eMsgID��"4
ResClientToChoiceBirthGroup"
MsgID
eMsgID��"&
ResNotUpLevel"
MsgID
eMsgID��")
ResChangeJobTips"
MsgID
eMsgID��"8
ResOpenServerTime
time ("
MsgID
eMsgID��"%
ReqChangeJob"
MsgID
eMsgID�".
ReqGetAccunonlinetime"
MsgID
eMsgID��":
ReqUpdataPkState
pkState ("
MsgID
eMsgID��"B
ReqLookOtherPlayer
otherPlayerId ("
MsgID
eMsgID��"<
ReqUpdateMainUIGuideID
gid ("
MsgID
eMsgID��")
ReqMainUIGuideID"
MsgID
eMsgID��";
ReqChangeRoleName
newName (	"
MsgID
eMsgID��"'
ReqCourageList"
MsgID
eMsgID��"&
FateStar

id (
gender ("*
ReqPeakLevelPanel"
MsgID
eMsgID��"[
ResPeakLevelPanel
ids (
isChangeJob (
isRed ("
MsgID
eMsgID��":
ReqChangeJobPanel
gender ("
MsgID
eMsgID��"k
ResChangeJobPanel
ids (
isChangeJob (
isRed (
gender ("
MsgID
eMsgID��"6
ReqActiveFateStar

id ("
MsgID
eMsgID��"M
ResActiveFateStar!
ids (2.MSG_Player.FateStar"
MsgID
eMsgID��"U
ResPlayerGenderNotice
playerId (
genderLevel ("
MsgID
eMsgID��"(
ReqUpgradeBlood"
MsgID
eMsgID��"H
ResUpgradeBlood
state (
nextKey (	"
MsgID
eMsgID��"+
ReqOpenBloodPannel"
MsgID
eMsgID��"I
ResOpenBloodPannel
order (
level ("
MsgID
eMsgID��"R
ReqPlayerCareerChange
careerNo (
eqiupNos ("
MsgID
eMsgID��"_
ResPlayerCareerChange
careerNo (
roleId (
state ("
MsgID
eMsgID��"*
Gift
giftId (

giftNumber ("r
ReqSendGift
type (
roleId (
force (
gifts (2.MSG_Player.Gift"
MsgID
eMsgID��"V
ResSendGift
result ( 
log (2.MSG_Player.GiftLog"
MsgID
eMsgID��"�
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
eMsgID��"]
ResGetGiftLog
type ('

recordList (2.MSG_Player.GiftLog"
MsgID
eMsgID��"4
ReqReadGiftLog
ids ("
MsgID
eMsgID��"4
ResReadGiftLog
ids ("
MsgID
eMsgID��"H
ResNewGiftLog 
log (2.MSG_Player.GiftLog"
MsgID
eMsgID��"/
ReqXiSui
free ("
MsgID
eMsgID��"E
SyncXiSuiData
roleID (
xsLvl ("
MsgID
eMsgID��"=
ReqPlayerSummaryInfo
roleId ("
MsgID
eMsgID��"�
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
eMsgID��"B
ResGenderClassChange
genderClass ("
MsgID
eMsgID��"
G2SSynPlayerSocialInfo@
globalPlayerWorldInfo (2!.MSG_Player.GlobalPlayerWorldInfo
type ("
MsgID
eMsgIDն"V
G2SReqPlayerSummaryInfo
roleId (
targetRoleId ("
MsgID
eMsgID��"b
ReqPlayerSettingCustomHead
customHeadPath (	
useCustomHead ("
MsgID
eMsgID��"�
 ResPlayerSettingCustomHeadResult
	isSuccess (
roleId ('
head (2.MSG_Common.HeadAttribute"
MsgID
eMsgID��B
game.messageBPlayerMessage