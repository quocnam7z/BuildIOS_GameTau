
�
guild.proto	MSG_Guildbackpack.protoCommon.proto"�
	GuildInfo
guildId (
name (	

lv (
notice (	

guildMoney (
icon (

isAutoJoin (
limitLv (
fightLv	 (+
members
 (2.MSG_Guild.GuildMemberInfo)
applys (2.MSG_Guild.GuildApplyInfo(
builds (2.MSG_Guild.GuildBuilding
	recruitCd (
rank (%
titles (2.MSG_Guild.GuildTitle
rate (
maxNum (
power ("*

GuildTitle
rank (
roleId ("�
GuildBaseInfo
guildId (
name (	

lv (
	memberNum (
isApply (
limitLv (

limitfight (
fighting (

isAutoJoin	 (*
member
 (2.MSG_Guild.GuildMemberInfo
rate (
maxNum ("�
GuildMemberInfo
roleId (
name (	
career (

lv (
vip (
allcontribute (
lastOffTime (
fighting (
position	 (
isProxy
 ('
head (2.MSG_Common.HeadAttribute"�
GuildApplyInfo
roleId (
name (	

lv (
fighting (
career ('
head (2.MSG_Common.HeadAttribute",
GuildBuilding
type (
level ("7
GuildLogInfo
type (
time (
str (	"p
	GuildGift

id (
gift (
sender (	
timeOut ((
reward (2.MSG_Common.ShowItemInfo">
GuildGiftHistory
sender (	
gift (
time ("*
ReqRecommendGuild"
MsgID
eMsgID��"S
ReqCreateGuild
name (	
icon (
notice (	"
MsgID
eMsgID��"2
ReqJoinGuild
ids ("
MsgID
eMsgID��"H
ReqDealApplyInfo
roleId (
agree ("
MsgID
eMsgID��"9
ReqChangeGuildName
name (	"
MsgID
eMsgID��"A

ReqSetRank
roleId (
rank ("
MsgID
eMsgID��"�
ReqChangeGuildSetting
isAutoApply (

lv (
icon (
notice (	

fightPoint ("
MsgID
eMsgID��"(
ReqGuildLogList"
MsgID
eMsgID��"%
ReqGuildInfo"
MsgID
eMsgID��"8
ReqKickOutGuild
roleId ("
MsgID
eMsgID��"%
ReqQuitGuild"
MsgID
eMsgID��"9
ReqUpBuildingLevel
type ("
MsgID
eMsgID��"#

ReqImpeach"
MsgID
eMsgID��"'
ReqReceiveItem"
MsgID
eMsgID��"+
ReqGuildJoinPlayer"
MsgID
eMsgID��"*
ReqGuildBaseEnter"
MsgID
eMsgID��"5
ReqGuildGiftOpen

id ("
MsgID
eMsgID��"V
ResRecommendGuild*
infoList (2.MSG_Guild.GuildBaseInfo"
MsgID
eMsgID��"W
ResCreateGuild
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgID��"b
ResJoinGuild
ids (
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgID��"U
ResGuildInfo
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgID��"9
ResDealApplyInfo
roleId ("
MsgID
eMsgID��"9
ResChangeGuildName
name (	"
MsgID
eMsgID��"O
ResPlayerGuildRankChange
roleId (
rank ("
MsgID
eMsgID��"�
ResChangeGuildSetting
isAutoApply (

lv (
icon (
notice (	

fightPoint ("
MsgID
eMsgID��"Z
ResGuildMemeberList,
infoList (2.MSG_Guild.GuildMemberInfo"
MsgID
eMsgID��"S
ResGuildLogList)
infoList (2.MSG_Guild.GuildLogInfo"
MsgID
eMsgID��"5
ResQuitGuild
roleId ("
MsgID
eMsgID��"e
ResUpBuildingSucces#
b (2.MSG_Guild.GuildBuilding

guildMoney ("
MsgID
eMsgID��"0

ResImpeach
res ("
MsgID
eMsgID��"'
ResReceiveItem"
MsgID
eMsgID��"7
ResGuildJoinPlayer

cd ("
MsgID
eMsgID��"V
ResGuildApplyPlayer(
apply (2.MSG_Guild.GuildApplyInfo"
MsgID
eMsgID��"|
ResGuildGiftList#
gifts (2.MSG_Guild.GuildGift,
history (2.MSG_Guild.GuildGiftHistory"
MsgID
eMsgID��"O
ResGuildGiftUpdate"
gift (2.MSG_Guild.GuildGift"
MsgID
eMsgID��"8
ResGuildGiftDelete
ids ("
MsgID
eMsgID��"Z
ResGuildGiftHistory,
history (2.MSG_Guild.GuildGiftHistory"
MsgID
eMsgID��B
game.messageBGuildMessage