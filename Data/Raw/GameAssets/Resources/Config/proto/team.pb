
‰

team.protoMSG_TeamCommon.proto"∆

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
head (2.MSG_Common.HeadAttribute"À
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
eMsgID¡≈"Å
ResTeamInfo
teamId (
type (:-1%
members (2.MSG_Team.TeamMember

autoAccept ("
MsgID
eMsgID›ƒ"U
ReqAlterTeam
teamId (
isNotice (
type ("
MsgID
eMsgID¬≈"V
ResUpdateTeamMemberInfo$
member (2.MSG_Team.TeamMember"
MsgID
eMsgIDﬂƒ"8
ReqGetFreedomList
type ("
MsgID
eMsgIDƒ≈"M
ResFreedomList$
members (2.MSG_Team.Freedomer"
MsgID
eMsgID‡ƒ"2
	ReqInvite
roleid ("
MsgID
eMsgID≈≈"c
ResInviteInfo
teamdId (
roleId (
name (	
type ("
MsgID
eMsgID·ƒ"T
ReqInviteRes
teamdId (
roleId (
type ("
MsgID
eMsgID∆≈"(
ReqGetApplyList"
MsgID
eMsgID«≈"K
ResApplyList$
members (2.MSG_Team.Freedomer"
MsgID
eMsgID„ƒ">
ReqApplyOpt

id (
type ("
MsgID
eMsgID»≈"K
ResAddApplyer#
member (2.MSG_Team.Freedomer"
MsgID
eMsgID‰ƒ"5
ReqGetWaitList
type ("
MsgID
eMsgID…≈"U
ResWaitList
type (!
teams (2.MSG_Team.TeamInfo"
MsgID
eMsgIDÂƒ"6
ReqApplyEnter
teamId ("
MsgID
eMsgID ≈"B

ReqTeamOpt
targetId (
opt ("
MsgID
eMsgIDÀ≈"<
ResDeleteTeamMember
roleId ("
MsgID
eMsgIDÁƒ")
ReqCallAllMember"
MsgID
eMsgIDÃ≈"`
ResCallAllMemberRes
callId (
name (		
x (	
y ("
MsgID
eMsgIDËƒ"5
ReqAgreeCall
callId ("
MsgID
eMsgIDÕ≈",
ReqTransport2Leader"
MsgID
eMsgIDŒ≈"*
ReqCleanApplyList"
MsgID
eMsgIDœ≈"A
ReqMatchAll
type (
match ("
MsgID
eMsgID–≈"5
ResMatchAll
success ("
MsgID
eMsgIDÏƒ"'
ReqGetTeamInfo"
MsgID
eMsgID—≈"\
ResUpdateHPAndMapKey
roleId (
hpPro (
mapKey (	"
MsgID
eMsgIDÌƒ"/
ReqTeamLeaderOpenState"
MsgID
eMsgID”≈"P
ResTeamLeaderOpenState
leaderId (
state ("
MsgID
eMsgIDÔƒ":
ResBecomeLeader
targetId ("
MsgID
eMsgIDƒB
game.messageBTeamMessage