
∑
guild.proto	MSG_Guildbackpack.protoCommon.proto"ï
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
roleId ("Û
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
maxNum ("‚
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
head (2.MSG_Common.HeadAttribute"Ö
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
eMsgIDÅÅ"S
ReqCreateGuild
name (	
icon (
notice (	"
MsgID
eMsgIDÇÅ"2
ReqJoinGuild
ids ("
MsgID
eMsgIDÉÅ"H
ReqDealApplyInfo
roleId (
agree ("
MsgID
eMsgIDÖÅ"9
ReqChangeGuildName
name (	"
MsgID
eMsgIDÜÅ"A

ReqSetRank
roleId (
rank ("
MsgID
eMsgIDáÅ"Å
ReqChangeGuildSetting
isAutoApply (

lv (
icon (
notice (	

fightPoint ("
MsgID
eMsgIDàÅ"(
ReqGuildLogList"
MsgID
eMsgIDäÅ"%
ReqGuildInfo"
MsgID
eMsgIDãÅ"8
ReqKickOutGuild
roleId ("
MsgID
eMsgIDåÅ"%
ReqQuitGuild"
MsgID
eMsgIDçÅ"9
ReqUpBuildingLevel
type ("
MsgID
eMsgIDéÅ"#

ReqImpeach"
MsgID
eMsgIDèÅ"'
ReqReceiveItem"
MsgID
eMsgIDêÅ"+
ReqGuildJoinPlayer"
MsgID
eMsgIDëÅ"*
ReqGuildBaseEnter"
MsgID
eMsgIDíÅ"5
ReqGuildGiftOpen

id ("
MsgID
eMsgIDìÅ"V
ResRecommendGuild*
infoList (2.MSG_Guild.GuildBaseInfo"
MsgID
eMsgIDùÄ"W
ResCreateGuild
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgIDûÄ"b
ResJoinGuild
ids (
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgIDüÄ"U
ResGuildInfo
g (2.MSG_Guild.GuildInfo
isGet ("
MsgID
eMsgID†Ä"9
ResDealApplyInfo
roleId ("
MsgID
eMsgID°Ä"9
ResChangeGuildName
name (	"
MsgID
eMsgID¢Ä"O
ResPlayerGuildRankChange
roleId (
rank ("
MsgID
eMsgID£Ä"Å
ResChangeGuildSetting
isAutoApply (

lv (
icon (
notice (	

fightPoint ("
MsgID
eMsgID§Ä"Z
ResGuildMemeberList,
infoList (2.MSG_Guild.GuildMemberInfo"
MsgID
eMsgID•Ä"S
ResGuildLogList)
infoList (2.MSG_Guild.GuildLogInfo"
MsgID
eMsgID¶Ä"5
ResQuitGuild
roleId ("
MsgID
eMsgID®Ä"e
ResUpBuildingSucces#
b (2.MSG_Guild.GuildBuilding

guildMoney ("
MsgID
eMsgID©Ä"0

ResImpeach
res ("
MsgID
eMsgID™Ä"'
ResReceiveItem"
MsgID
eMsgID´Ä"7
ResGuildJoinPlayer

cd ("
MsgID
eMsgID¨Ä"V
ResGuildApplyPlayer(
apply (2.MSG_Guild.GuildApplyInfo"
MsgID
eMsgID≠Ä"|
ResGuildGiftList#
gifts (2.MSG_Guild.GuildGift,
history (2.MSG_Guild.GuildGiftHistory"
MsgID
eMsgIDÆÄ"O
ResGuildGiftUpdate"
gift (2.MSG_Guild.GuildGift"
MsgID
eMsgIDØÄ"8
ResGuildGiftDelete
ids ("
MsgID
eMsgID∞Ä"Z
ResGuildGiftHistory,
history (2.MSG_Guild.GuildGiftHistory"
MsgID
eMsgID±ÄB
game.messageBGuildMessage