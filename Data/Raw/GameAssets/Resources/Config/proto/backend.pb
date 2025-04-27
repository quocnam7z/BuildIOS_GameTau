
ô&
backend.protoMSG_Backend")
FuncOpenInfo

id (
state ("Y
ResFuncOpenList/
funcOpenList (2.MSG_Backend.FuncOpenInfo"
MsgID
eMsgIDÉÆ"l
ResSwitchFunction1
switchFuncList (2.MSG_Backend.FuncOpenInfo
isnew ("
MsgID
eMsgIDÊÆ",
ReqFuncOpenRoleInfo"
MsgID
eMsgID±Ç"Y
ResFuncOpenRoleInfo+
infolist (2.MSG_Backend.FuncOpenInfo"
MsgID
eMsgIDÍÆ"6
ReqFuncOpenReward

id ("
MsgID
eMsgID³Ç"6
ResFuncOpenReward

id ("
MsgID
eMsgIDØÆ"ß
ActivityInfo

id (
type (
tag (
name (	
bigLabel (

smallLabel (
numLimit (
	beginTime (
endTime	 (
panelImageId
 (
	panelText (	
help (	
actionBegin (	
	actionEnd (	
conditionList (	

rewardList (	
	otherList (	
isDelete (
rowText (	"Å
ActivityClientInfo

id (
type (
name (	
	beginTime (
endTime (

rewardList (	
numLimit (
panelImageId (
bigPanel	 (

smallPanel
 (
getNum (
	panelText (	
needNum (
haveNum (7
needItemList (2!.MSG_Backend.ActivetyExchangeNeed
canGet (
sendItemModelId (/
rankList (2.MSG_Backend.ActivetyRankInfo
	condition (	'
bossList (2.MSG_Backend.BossInfo-
DayRewardList (2.MSG_Backend.DayReward
rewardAgain (
rewardAgainState (
rowText (	"+
ReqGetActivityList"
MsgID
eMsgID©Ç"e
ResActivityClientInfo5
itemInfoList (2.MSG_Backend.ActivityClientInfo"
MsgID
eMsgIDÅÆ"f
ResCrossActivityClientInfo1
activity (2.MSG_Backend.ActivityClientInfo"
MsgID
eMsgIDÎÆ"<
ResIsActivityCanGet
canGet ("
MsgID
eMsgIDÆÆ"T
ReqGetActivityReward

id (
type (
num ("
MsgID
eMsgIDªÇ"P
ResGetActivityRewardSuccess

id (
getNum ("
MsgID
eMsgIDÇÆ"=
ResRewardAgainResult
result ("
MsgID
eMsgIDÐÆ"8
ActivetyExchangeNeed
itemModelId (
num ("p
ActivetyRankInfo
top (
name (	
limit (

rewardList (	
roleId (
userId ("C
BossInfo
bossId (
needKillNum (

hasKillNum (":
	DayReward
day (
reward (	
getState ("d
ReqActivitySendToFriend
playerid (
itemModelId (
num ("
MsgID
eMsgID«Ç"
ResActivitySendToFriendSuccess
sendName (	
receivedName (	
itemModelId (
num ("
MsgID
eMsgIDÈÆ"´
G2PReqCrossRank

id (
roleId (
type (
funtionV (
rankDate (
serverId (
name (	
plat (	
serial	 ("
MsgID
eMsgIDÈ"H
CrossRankData

id (
name (	
top (
serverId ("
G2PReqCrossRankDataIsReceive

id (
roleId (
type (
serverId (
plat (	"
MsgID
eMsgIDŽÈ"o
P2GResCrossRankIsReceive
roleId (
isR (
top (

activityId ("
MsgID
eMsgIDñÈ"v
G2PReqCrossRankData
roleId (

id (
type (
serverId (
plat (	"
MsgID
eMsgIDÈ"‚
P2GResCrossRankData
roleId ((
data (2.MSG_Backend.CrossRankData
rank (
type ("
MsgID
eMsgIDòÈ"¨
PaySendItemClientInfo
key (	
	startTime (
endTime (

totalTimes (
buyTimes (
canBuy (
panelImageId (

panelOrder ("0
ResOpenPaySendItemPanel"
MsgID
eMsgIDËÆ"k
ResPaySendItemClientInfo8
itemInfoList (2".MSG_Backend.PaySendItemClientInfo"
MsgID
eMsgIDÌÆ"*
ReqClosePopWindow"
MsgID
eMsgID¬Ç"_
ReqGetDailyRechargeReward

id (
getType (
getDay ("
MsgID
eMsgID­Ç"_
ResGetDailyRechargeReward

id (
getType (
getNum ("
MsgID
eMsgIDÏÆ"b
ResFirstKillOpenState
isOpen (
	beginTime (
endTime ("
MsgID
eMsgIDÑÆ"l
ResActivityRemainTime
type (

remainTime (
iconId (

id ("
MsgID
eMsgIDÒÆ"H
ReqRemainTimeActivity
type (

id ("
MsgID
eMsgID®Ç"D
ReqBuyTimeLimitGift

lv (

id ("
MsgID
eMsgID¯Ç"8
	LevelGift

lv (
itemList (	
isBuy ("g
ResTimeLimitGift(
giftList (2.MSG_Backend.LevelGift

remainTime ("
MsgID
eMsgIDÓÆ"Ò
ResCloudBuyInfo

rewardList (	
luckyReward (	
	remainNum (
buyNum (

remainTime (
needGold (
nameList (	
	luckyName (	
	roleLimit	 ("
MsgID
eMsgIDÔÆ"0
ReqCloudBuy

id ("
MsgID
eMsgID°Ç"4
ResCloudBuy
buyNum ("
MsgID
eMsgIDÕÆ"O
ResSyncCloudBuy

playerName (	
	remainNum ("
MsgID
eMsgIDÖÆ")
ReqCloseCloudBuy"
MsgID
eMsgID²Ç":
ResLuckyReward
	luckyName (	"
MsgID
eMsgID×Æ"E
P2GNoticeSynData
type (
data (	"
MsgID
eMsgIDóÈB
game.messageBBackendMessage