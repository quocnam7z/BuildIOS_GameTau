
�)
crossserver.protoMSG_CrossServerCommon.proto
chat.proto"w
G2FReqCrossUseItem
itemId (
num (
roleId (
modelId (
cost ("
MsgID
eMsgID��"�
F2GResCrossUseItem
itemId (
num (
roleId (
modelId (
cost (
state ("
MsgID
eMsgID�"�
F2GResCrossDropCoin
coinType (
coinNum (
roleId (
actionId (
cloneModelId (
reason ("
MsgID
eMsgID�"P
dropItemInfo
itemModelId (
num (
isBind (
notice ("�
F2GResCrossDropItem/
itemList (2.MSG_CrossServer.dropItemInfo
actionId (
roleId (
isnotice (
monsterModelId (
modelId ("
MsgID
eMsgID�"k
G2FReqCrossDropItemString
roleId (
strmess (	
monsterModelId ("
MsgID
eMsgID��"9
G2PReqChatMess
chatData ("
MsgID
eMsgID��"9
P2GResChatMess
chatData ("
MsgID
eMsgID��"8
G2FSynPlayerOut
roleId ("
MsgID
eMsgID��"�
fightEndScore
roleId (
	isSuccess (
score (:0
time (:0
plat_sid (	
	sortIndex (:0
starNum (:0

rewardtime ("x
F2GFightEnd0
roleInfo (2.MSG_CrossServer.fightEndScore
modelId (
fightId ("
MsgID
eMsgID��"Y
F2GCloneClose
modelId (
fightId (
roleIds ("
MsgID
eMsgID��"�
F2PCloneRewardNotGet0
roleInfo (2.MSG_CrossServer.fightEndScore
modelId (
fightId ("
MsgID
eMsgID��"�
F2GCloneEnterAddOne
roleIds (
scriptId (
modelId (
fightId (
value ("
MsgID
eMsgID��"$
G2FReqHeart"
MsgID
eMsgID��"$
F2GResHeart"
MsgID
eMsgID��"C
G2F_UpMorale
roleId (
type ("
MsgID
eMsgID��"@
	G2FRelive
roleId (
type ("
MsgID
eMsgID��"M
	G2FGMdeal
roleId (
cmd (	
para (	"
MsgID
eMsgID��"X
P2GNoticeEvent
cloneModelId (
cmd (	
para (	"
MsgID
eMsgID��"p
F2GTaskAction
roleId (
type (
modelId (
num (
sign ("
MsgID
eMsgID��"B
F2GReliveRes
roleId (
dec ("
MsgID
eMsgID��"L
F2GResourceFindChange
roleId (
type ("
MsgID
eMsgID��"_
G2FReqCloneFightInfo
roleId (
modelId (
fightId ("
MsgID
eMsgID��"^
P2GPlayerStateChange
roleIds (
modelId (
state ("
MsgID
eMsgID��"`
F2PPlayerOutFightRoom
roleId (
fightId (
modelId ("
MsgID
eMsgID��"S
F2G_UpMoraleRes
roleId (
dec (
type ("
MsgID
eMsgID��"5
F2GTaskRresh
roleId ("
MsgID
eMsgID��"�
F2GSendReward
roleId (,
items (2.MSG_CrossServer.dropItemInfo
reason (
actionId ("
MsgID
eMsgID��"�
F2GDropData
roleId (
time (
killDropCount (:0
rankDropCount (:0
joinDropCount (:0
buyCount (:0
type ("
MsgID
eMsgID��"�
F2GSendMailReward
roleId (
sender (	
title (	
content (	,
items (2.MSG_CrossServer.dropItemInfo
reason ("
MsgID
eMsgID��"h
F2GShituTaskChange0
roleId (
functionVarible (
	changeNum ("
MsgID
eMsgID��"�
F2GCloneCDRecordAdd
roleIds (
cdkey (	
	definekey (
fightId (
cdType (
cdHour (
cdTimes (:1"
MsgID
eMsgID��"P
G2PPlayerCareerChange
careerNo (
roleId ("
MsgID
eMsgID��"G
G2PSynPlayerName
roleId (
name (	"
MsgID
eMsgID��">
G2PGMCMD
roleId (
cmd (	"
MsgID
eMsgID��"W
P2GGMCMDResult
roleId (
state (
messStr (	"
MsgID
eMsgID��"Z
G2PConnectHeart
plat (	
serverId (
roleSize ("
MsgID
eMsgID��";
P2GConnectHeartRes
reason ("
MsgID
eMsgID��"w
G2PServerNameChange
serverId (
serverIdsList (

serverName (	
plat (	"
MsgID
eMsgID��"
G2PServerOpentimeChange
serverId (
serverIdsList (
serveropentime (	
plat (	"
MsgID
eMsgID��"f
G2PServerWorldLvChange
serverId (
plat (	
serverWorldLv ("
MsgID
eMsgID��"O
	F2GAddExp
roleId (
exp (
reason ("
MsgID
eMsgID��"H
P2GBossRefreshTip
bossID (
type ("
MsgID
eMsgID��"Y
F2PBossRefreshTip
groupID (
bossID (
type ("
MsgID
eMsgID��"6
G2PDailyData
dailyId ("
MsgID
eMsgID��"D
P2GDailyData
dailyId (
data (	"
MsgID
eMsgID��"\
F2GFirstKillInfo
modelId (
roleId (
roleName (	"
MsgID
eMsgID��"G
G2PReqFirstKillBossRefreshTime
roleId ("
MsgID
eMsgID��"L
F2PMakeBossRefresh
groupID (
bossID ("
MsgID
eMsgID��"�
P2GSendMailReward
roleId (
sender (
mailType (
title (	
content (	,
items (2.MSG_CrossServer.dropItemInfo
reason ("
MsgID
eMsgID��"�
F2GSendPersonalNotice
type (
content ($
value (2.MSG_Chat.paramStruct
chatChannelList ("
MsgID
eMsgID��B"
game.messageBCrossServerMessage