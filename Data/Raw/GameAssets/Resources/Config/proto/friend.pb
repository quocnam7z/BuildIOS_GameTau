
≥#
friend.proto
MSG_Friendplayer.proto
chat.protoCommon.proto"”

CommonInfo
playerId (
name (	

lv (
career (
isOnline (
intimacy (
lastofftime (
viplevel (
hasMarry	 (
isGiveFriendshipPoint
 ( 
isReceiveFriendshipPoint (
isFriendshipPointAward (
serverId (
isFriend ('
head (2.MSG_Common.HeadAttribute"9
ReqGetRelationList
type ("
MsgID
eMsgIDÈã"
ReqAddRelation
targetPlayerId (
type (
targetServerId (
targetPlayerName (	"
MsgID
eMsgIDÍã"P
ReqDeleteRelation
targetPlayerId (
type ("
MsgID
eMsgIDÎã"3
ReqDimSelect
name (	"
MsgID
eMsgIDÏã"w
ResFriendList
type (*

resultList (2.MSG_Friend.CommonInfo
marryTargetId ("
MsgID
eMsgIDÖã"f
ResAddFriendSuccess
type (*

resultList (2.MSG_Friend.CommonInfo"
MsgID
eMsgIDÜã"W
ResDeleteRelationSuccess
targetPlayerId (
type ("
MsgID
eMsgIDáã"O
ResDimSelectList$
list (2.MSG_Friend.CommonInfo"
MsgID
eMsgIDàã"Q
	ReqReport
roleId (
type (
content (	"
MsgID
eMsgIDÌã"L
ResIntimacyChange
roleId (
intimacy ("
MsgID
eMsgIDâã"¶
ApprovalPlayerInfo
playerId (
name (	

lv (
career (
serverId (
isShieldAddFriend ('
head (2.MSG_Common.HeadAttribute"™
G2SReqAddRelation
targetPlayerId (
type (
targetServerId (@
sourceApprovalPlayerInfo (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID’å"™
S2GResAddRelation
targetPlayerId (
type (
targetServerId (@
sourceApprovalPlayerInfo (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDπç"k
G2SReqDeleteRelation
targetPlayerId (
type (
sourcePlayerId ("
MsgID
eMsgID÷å"k
S2GResDeleteRelation
targetPlayerId (
type (
sourcePlayerId ("
MsgID
eMsgID∫ç"k
ResAddFriendApprovalToTarget4
sourcePlayer (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDèã"ï
ReqAddFriendApproval1
	agreeList (2.MSG_Friend.ApprovalPlayerInfo3
declineList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDÙã"q
ResAddFriendApproval
type (4
approvalList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDêã"g
ResAddFriendApprovalList4
approvalList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDëã"i
ReqGiveFriendShipPoint
type (
friendPlayerId (

friendType ("
MsgID
eMsgIDˆã"Ü
ResFriendShipPointCommonInfo*

friendInfo (2.MSG_Friend.CommonInfo
dayFriendShipPoint (
residueGiveRewardCount (!
residueReceiveRewardCount (

friendType (0
npcFriendInfo (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgIDíã"|
ResFriendShipInfo
dayFriendShipPoint (4
npcFriendInfoList (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgIDìã"
NpcFriendInfo
npcId (
isGiveFriendshipPoint ( 
isReceiveFriendshipPoint (
isFriendshipPointAward ("_
ResFriendNpcList4
npcFriendInfoList (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgIDñã"ª
AddFriendApproval
targetPlayerId (
targetServerId (

targetPlat (	
approvalPlayerId (
approvalServerId (
approvalPlat (	,
leaveMessage (2.MSG_Chat.LeaveMessage(
	chatResSC (2.MSG_Chat.ChatResInfo@
globalPlayerWorldInfo	 (2!.MSG_Player.GlobalPlayerWorldInfo"j
G2SReqAddFriendApproval8
addFriendApproval (2.MSG_Friend.AddFriendApproval"
MsgID
eMsgID‹å"j
S2GResAddFriendApproval8
addFriendApproval (2.MSG_Friend.AddFriendApproval"
MsgID
eMsgID¿ç"è
AddFriendAnswer

answerType (
approvalPlayerId (
approvalServerId (
approvalTargetPlat (	,
leaveMessage (2.MSG_Chat.LeaveMessage(
	chatResSC (2.MSG_Chat.ChatResInfo@
globalPlayerWorldInfo (2!.MSG_Player.GlobalPlayerWorldInfo"d
G2SReqAddFriendAnswer4
addFriendAnswer (2.MSG_Friend.AddFriendAnswer"
MsgID
eMsgID›å"d
S2GResAddFriendAnswer4
addFriendAnswer (2.MSG_Friend.AddFriendAnswer"
MsgID
eMsgID¡ç"`
G2SReqGiveFriendShipPoint
givePlayerId (
friendPlayerId ("
MsgID
eMsgIDﬁå"`
S2GReqGiveFriendShipPoint
givePlayerId (
friendPlayerId ("
MsgID
eMsgID¬ç"A
ReqNpcFriendGiveShipPoint
npcId ("
MsgID
eMsgID˙ãB
game.messageBfriendMessage