
�

team.protoMSG_TeamCommon.proto"�

TeamMember
roleId (
name (	
level (
career (
power (
isLeader (:false
isOnline (:true
stateLv (
hpPro	 (
mapKey
 (	
inchat (:false
isOfflineHungup (:false+
facade (2.MSG_Common.FacadeAttribute'
head (2.MSG_Common.HeadAttribute"�
	Freedomer
roleId (
name (	
level (
career (
power (
honey (
	guildName (	
moonandOver (

birthGroup	 ('
head
 (2.MSG_Common.HeadAttribute"g
TeamInfo
teamId (
type (:-1%
members (2.MSG_Team.TeamMember

autoAccept ("L
ReqCreateTeam
type (:-1

autoAccept ("
MsgID
eMsgID��"�
ResTeamInfo
teamId (
type (:-1%
members (2.MSG_Team.TeamMember

autoAccept ("
MsgID
eMsgID��"U
ReqAlterTeam
teamId (
isNotice (
type ("
MsgID
eMsgID��"V
ResUpdateTeamMemberInfo$
member (2.MSG_Team.TeamMember"
MsgID
eMsgID��"8
ReqGetFreedomList
type ("
MsgID
eMsgID��"M
ResFreedomList$
members (2.MSG_Team.Freedomer"
MsgID
eMsgID��"2
	ReqInvite
roleid ("
MsgID
eMsgID��"c
ResInviteInfo
teamdId (
roleId (
name (	
type ("
MsgID
eMsgID��"T
ReqInviteRes
teamdId (
roleId (
type ("
MsgID
eMsgID��"(
ReqGetApplyList"
MsgID
eMsgID��"K
ResApplyList$
members (2.MSG_Team.Freedomer"
MsgID
eMsgID��">
ReqApplyOpt

id (
type ("
MsgID
eMsgID��"K
ResAddApplyer#
member (2.MSG_Team.Freedomer"
MsgID
eMsgID��"5
ReqGetWaitList
type ("
MsgID
eMsgID��"U
ResWaitList
type (!
teams (2.MSG_Team.TeamInfo"
MsgID
eMsgID��"6
ReqApplyEnter
teamId ("
MsgID
eMsgID��"B

ReqTeamOpt
targetId (
opt ("
MsgID
eMsgID��"<
ResDeleteTeamMember
roleId ("
MsgID
eMsgID��")
ReqCallAllMember"
MsgID
eMsgID��"`
ResCallAllMemberRes
callId (
name (		
x (	
y ("
MsgID
eMsgID��"5
ReqAgreeCall
callId ("
MsgID
eMsgID��",
ReqTransport2Leader"
MsgID
eMsgID��"*
ReqCleanApplyList"
MsgID
eMsgID��"A
ReqMatchAll
type (
match ("
MsgID
eMsgID��"5
ResMatchAll
success ("
MsgID
eMsgID��"'
ReqGetTeamInfo"
MsgID
eMsgID��"\
ResUpdateHPAndMapKey
roleId (
hpPro (
mapKey (	"
MsgID
eMsgID��"/
ReqTeamLeaderOpenState"
MsgID
eMsgID��"P
ResTeamLeaderOpenState
leaderId (
state ("
MsgID
eMsgID��":
ResBecomeLeader
targetId ("
MsgID
eMsgID��B
game.messageBTeamMessage