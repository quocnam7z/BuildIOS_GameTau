
�#
friend.proto
MSG_Friendplayer.proto
chat.protoCommon.proto"�

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
eMsgID�"
ReqAddRelation
targetPlayerId (
type (
targetServerId (
targetPlayerName (	"
MsgID
eMsgID�"P
ReqDeleteRelation
targetPlayerId (
type ("
MsgID
eMsgID�"3
ReqDimSelect
name (	"
MsgID
eMsgID�"w
ResFriendList
type (*

resultList (2.MSG_Friend.CommonInfo
marryTargetId ("
MsgID
eMsgID��"f
ResAddFriendSuccess
type (*

resultList (2.MSG_Friend.CommonInfo"
MsgID
eMsgID��"W
ResDeleteRelationSuccess
targetPlayerId (
type ("
MsgID
eMsgID��"O
ResDimSelectList$
list (2.MSG_Friend.CommonInfo"
MsgID
eMsgID��"Q
	ReqReport
roleId (
type (
content (	"
MsgID
eMsgID�"L
ResIntimacyChange
roleId (
intimacy ("
MsgID
eMsgID��"�
ApprovalPlayerInfo
playerId (
name (	

lv (
career (
serverId (
isShieldAddFriend ('
head (2.MSG_Common.HeadAttribute"�
G2SReqAddRelation
targetPlayerId (
type (
targetServerId (@
sourceApprovalPlayerInfo (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgIDՌ"�
S2GResAddRelation
targetPlayerId (
type (
targetServerId (@
sourceApprovalPlayerInfo (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID��"k
G2SReqDeleteRelation
targetPlayerId (
type (
sourcePlayerId ("
MsgID
eMsgID֌"k
S2GResDeleteRelation
targetPlayerId (
type (
sourcePlayerId ("
MsgID
eMsgID��"k
ResAddFriendApprovalToTarget4
sourcePlayer (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID��"�
ReqAddFriendApproval1
	agreeList (2.MSG_Friend.ApprovalPlayerInfo3
declineList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID�"q
ResAddFriendApproval
type (4
approvalList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID��"g
ResAddFriendApprovalList4
approvalList (2.MSG_Friend.ApprovalPlayerInfo"
MsgID
eMsgID��"i
ReqGiveFriendShipPoint
type (
friendPlayerId (

friendType ("
MsgID
eMsgID��"�
ResFriendShipPointCommonInfo*

friendInfo (2.MSG_Friend.CommonInfo
dayFriendShipPoint (
residueGiveRewardCount (!
residueReceiveRewardCount (

friendType (0
npcFriendInfo (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgID��"|
ResFriendShipInfo
dayFriendShipPoint (4
npcFriendInfoList (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgID��"
NpcFriendInfo
npcId (
isGiveFriendshipPoint ( 
isReceiveFriendshipPoint (
isFriendshipPointAward ("_
ResFriendNpcList4
npcFriendInfoList (2.MSG_Friend.NpcFriendInfo"
MsgID
eMsgID��"�
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
eMsgID܌"j
S2GResAddFriendApproval8
addFriendApproval (2.MSG_Friend.AddFriendApproval"
MsgID
eMsgID��"�
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
eMsgID݌"d
S2GResAddFriendAnswer4
addFriendAnswer (2.MSG_Friend.AddFriendAnswer"
MsgID
eMsgID��"`
G2SReqGiveFriendShipPoint
givePlayerId (
friendPlayerId ("
MsgID
eMsgIDތ"`
S2GReqGiveFriendShipPoint
givePlayerId (
friendPlayerId ("
MsgID
eMsgID"A
ReqNpcFriendGiveShipPoint
npcId ("
MsgID
eMsgID��B
game.messageBfriendMessage