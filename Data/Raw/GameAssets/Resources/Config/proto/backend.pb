
�&
backend.protoMSG_Backend")
FuncOpenInfo

id (
state ("Y
ResFuncOpenList/
funcOpenList (2.MSG_Backend.FuncOpenInfo"
MsgID
eMsgID��"l
ResSwitchFunction1
switchFuncList (2.MSG_Backend.FuncOpenInfo
isnew ("
MsgID
eMsgID��",
ReqFuncOpenRoleInfo"
MsgID
eMsgID��"Y
ResFuncOpenRoleInfo+
infolist (2.MSG_Backend.FuncOpenInfo"
MsgID
eMsgID��"6
ReqFuncOpenReward

id ("
MsgID
eMsgID��"6
ResFuncOpenReward

id ("
MsgID
eMsgID��"�
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
rowText (	"�
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
eMsgID��"e
ResActivityClientInfo5
itemInfoList (2.MSG_Backend.ActivityClientInfo"
MsgID
eMsgID��"f
ResCrossActivityClientInfo1
activity (2.MSG_Backend.ActivityClientInfo"
MsgID
eMsgID��"<
ResIsActivityCanGet
canGet ("
MsgID
eMsgID��"T
ReqGetActivityReward

id (
type (
num ("
MsgID
eMsgID��"P
ResGetActivityRewardSuccess

id (
getNum ("
MsgID
eMsgID��"=
ResRewardAgainResult
result ("
MsgID
eMsgID��"8
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
eMsgID��"�
ResActivitySendToFriendSuccess
sendName (	
receivedName (	
itemModelId (
num ("
MsgID
eMsgID��"�
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
eMsgID��"H
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
eMsgID��"o
P2GResCrossRankIsReceive
roleId (
isR (
top (

activityId ("
MsgID
eMsgID��"v
G2PReqCrossRankData
roleId (

id (
type (
serverId (
plat (	"
MsgID
eMsgID��"�
P2GResCrossRankData
roleId ((
data (2.MSG_Backend.CrossRankData
rank (
type ("
MsgID
eMsgID��"�
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
eMsgID��"k
ResPaySendItemClientInfo8
itemInfoList (2".MSG_Backend.PaySendItemClientInfo"
MsgID
eMsgID��"*
ReqClosePopWindow"
MsgID
eMsgID��"_
ReqGetDailyRechargeReward

id (
getType (
getDay ("
MsgID
eMsgID��"_
ResGetDailyRechargeReward

id (
getType (
getNum ("
MsgID
eMsgID��"b
ResFirstKillOpenState
isOpen (
	beginTime (
endTime ("
MsgID
eMsgID��"l
ResActivityRemainTime
type (

remainTime (
iconId (

id ("
MsgID
eMsgID��"H
ReqRemainTimeActivity
type (

id ("
MsgID
eMsgID��"D
ReqBuyTimeLimitGift

lv (

id ("
MsgID
eMsgID��"8
	LevelGift

lv (
itemList (	
isBuy ("g
ResTimeLimitGift(
giftList (2.MSG_Backend.LevelGift

remainTime ("
MsgID
eMsgID��"�
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
eMsgID��"0
ReqCloudBuy

id ("
MsgID
eMsgID��"4
ResCloudBuy
buyNum ("
MsgID
eMsgID��"O
ResSyncCloudBuy

playerName (	
	remainNum ("
MsgID
eMsgID��")
ReqCloseCloudBuy"
MsgID
eMsgID��":
ResLuckyReward
	luckyName (	"
MsgID
eMsgID��"E
P2GNoticeSynData
type (
data (	"
MsgID
eMsgID��B
game.messageBBackendMessage