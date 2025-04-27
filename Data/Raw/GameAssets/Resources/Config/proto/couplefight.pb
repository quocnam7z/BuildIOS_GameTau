
‰6
couplefight.protoMSG_CouplefightCommon.proto"y
ResFightResult
type (
win (
score (&
item (2.MSG_Common.ShowItemInfo"
MsgID
eMsgID•‹ "P
TeamInfo

id (
name (	*
roles (2.MSG_Couplefight.PlayerInfo"Æ

PlayerInfo

id (
name (	
power (+
facade (2.MSG_Common.FacadeAttribute

occupation ('
head (2.MSG_Common.HeadAttribute
level ("'
FightPlayer

id (
camp ("{
ResEnterFightMap,
player (2.MSG_Couplefight.FightPlayer
	startTime (
endTime ("
MsgID
eMsgID¶‹ "7
ResPromotionInfo
type ("
MsgID
eMsgIDß‹ "X
G2PReqCouplefightInfo
type (
rid (
param ("
MsgID
eMsgID—ﬁ "`
F2PResFightResult
win (
lose (
fid (
type ("
MsgID
eMsgID“ﬁ "a
P2GResFightResult
rid (
win (
type (
score ("
MsgID
eMsgID”ﬁ "b
P2GResRankAward
type (*
awards (2.MSG_Couplefight.RankAward"
MsgID
eMsgID‘ﬁ "&
	RankAward
rid (
rank ("ö
P2FReqGoToFight
prefid (
fid (

r1 (

r2 (
cloneId (
type (
round (
param (	"
MsgID
eMsgID’ﬁ "W
G2PSendPlayerInfo+
player (2.MSG_Couplefight.PlayerInfo"
MsgID
eMsgID÷ﬁ "8
P2GChangeStatus
status ("
MsgID
eMsgID◊ﬁ "?
P2GPromotion
type (

id ("
MsgID
eMsgIDÿﬁ "T
P2GTrialsAward+
award (2.MSG_Couplefight.TrialsAward"
MsgID
eMsgIDŸﬁ "*
TrialsAward

id (
awardId ("$
ResRedPoint"
MsgID
eMsgID®‹ "&
ReqTrialsInfo"
MsgID
eMsgIDì› "/
ReqApply
name (	"
MsgID
eMsgIDî› "9
ReqApplyConfirm
confirm ("
MsgID
eMsgIDï› "&
ReqMatchStart"
MsgID
eMsgIDñ› "%
ReqMatchStop"
MsgID
eMsgIDó› "9
ReqMatchConfirm
confirm ("
MsgID
eMsgIDò› "0
ReqGetAward

id ("
MsgID
eMsgIDô› "&
ReqTrialsRank"
MsgID
eMsgIDö› "Y

TrialsInfo
count (
rate (
rank (
score (
	getAwards ("ç
ResTrialsInfo
isApply ('
team (2.MSG_Couplefight.TeamInfo+
trials (2.MSG_Couplefight.TrialsInfo"
MsgID
eMsgIDØ‹ "à
ResApply
success ('
team (2.MSG_Couplefight.TeamInfo+
trials (2.MSG_Couplefight.TrialsInfo"
MsgID
eMsgID≤‹ "6
ResApplyConfirm
name (	"
MsgID
eMsgID∞‹ "G
ResMatchStart
success (
reason ("
MsgID
eMsgIDµ‹ "(
ResMatchSuccess"
MsgID
eMsgID∑‹ "%
ResMatchStop"
MsgID
eMsgID∂‹ "L
ResMatchConfirmNotice
uid (
confirm ("
MsgID
eMsgID¥‹ "y
ResTrialsInfoUpdate+
trials (2.MSG_Couplefight.TrialsInfo
success (
score ("
MsgID
eMsgID≥‹ "f
TrialsRankInfo'
team (2.MSG_Couplefight.TeamInfo+
trials (2.MSG_Couplefight.TrialsInfo"h
ResTrialsRank.
ranks (2.MSG_Couplefight.TrialsRankInfo
selfRank ("
MsgID
eMsgID∏‹ "0
ResGetAward

id ("
MsgID
eMsgIDπ‹ "à
G2PReqApply(
man (2.MSG_Couplefight.PlayerInfo*
woman (2.MSG_Couplefight.PlayerInfo
name (	"
MsgID
eMsgID˜› "v
G2PReqMatchStart
mId (
wId (
mpower (
wpower (
	captainId ("
MsgID
eMsgID¯› "5
G2PReqMatchStop
uid ("
MsgID
eMsgID˘› "I
G2PReqMatchConfirm
uid (
confirm ("
MsgID
eMsgID˙› "E
P2GResMatchSuccess
mId (
wId ("
MsgID
eMsgID˚› "ù
P2GResTrialsInfo
isApply ('
team (2.MSG_Couplefight.TeamInfo+
trials (2.MSG_Couplefight.TrialsInfo
rid ("
MsgID
eMsgID¸› "H
P2GGetTrialsAward
rid (
awardId ("
MsgID
eMsgID˝› "&
ReqGroupsInfo"
MsgID
eMsgIDß› "7
ReqGroupsRank
groupId ("
MsgID
eMsgID®› "0
ReqGroupPrepareMapEnter"
MsgID
eMsgID©› "k
ResGroupInfo
join (
mygroup (%
group (2.MSG_Couplefight.Group"
MsgID
eMsgID√‹ "<
Group

id ('
team (2.MSG_Couplefight.TeamInfo"F
	GroupTeam
teamId (
rank (
score (
rate ("`
ResGroupRank
groupId ((
team (2.MSG_Couplefight.GroupTeam"
MsgID
eMsgIDƒ‹ "@
G2PReqGroupPrepareMapEnter
rid ("
MsgID
eMsgIDãﬁ ">
F2PReqGroupPrepareMapOut
rid ("
MsgID
eMsgIDåﬁ "6
ReqChampionInfo
type ("
MsgID
eMsgIDª› "L
ReqChampionGuessInfo
type (
fightId ("
MsgID
eMsgIDº› "X
ReqChampionGuess
type (
fightId (
teamId ("
MsgID
eMsgIDΩ› "N
ReqChampionGuessUpdate
type (
fightId ("
MsgID
eMsgIDæ› "P
ReqChampionGuessWatching
type (
fightId ("
MsgID
eMsgIDø› ":
ReqChampionTeamList
type ("
MsgID
eMsgID¿› "0
ReqChampionFansRankList"
MsgID
eMsgID¡› ")
ReqChampionEnter"
MsgID
eMsgID¬› "u
ResChampionInfo.
rounds (2.MSG_Couplefight.ChampionRound
type (
round ("
MsgID
eMsgID◊‹ "?
ChampionRound.
groups (2.MSG_Couplefight.ChampionGroup"q
ChampionGroup)
t1 (2.MSG_Couplefight.ChampionTeam)
t2 (2.MSG_Couplefight.ChampionTeam

id ("U
ChampionTeam'
team (2.MSG_Couplefight.TeamInfo
number (
type ("u
ResChampionGuessInfo
type (
round ()
guess (2.MSG_Couplefight.GuessInfo"
MsgID
eMsgIDÿ‹ "t
	GuessInfo*
g1 (2.MSG_Couplefight.GuessTeamInfo*
g2 (2.MSG_Couplefight.GuessTeamInfo
fightId ("m
GuessTeamInfo
rate (
gold (
winGold (
loseGold (
guess (
teamId ("Y
ResChampionFansRankList'
fans (2.MSG_Couplefight.FansInfo"
MsgID
eMsgID⁄‹ "S
FansInfo
rank (
name (	
level (
power (
money ("t
ResChampionTeamList
type (
round ()
guess (2.MSG_Couplefight.GuessInfo"
MsgID
eMsgID€‹ "£
G2PReqChampionGuess
type (
round (
fightId (
teamId (
rid (
name (	
level (
power ("
MsgID
eMsgIDüﬁ "9
P2GResChampionGuess
rid ("
MsgID
eMsgID†ﬁ "W
P2GResGuessResult+
guess (2.MSG_Couplefight.GuessResult"
MsgID
eMsgID°ﬁ "J
GuessResult
rid (
win (
itemType (
itemNum (";
ReqEnterCoupleEscort
type ("
MsgID
eMsgIDœ› "Q
ResEnterCoupleEscortResult
result (
type ("
MsgID
eMsgIDÎ‹ ",
ReqCoupleEscortOver"
MsgID
eMsgID–› "'
EscortReward

id (
num ("^
ResCoupleEscortReward.
rewards (2.MSG_Couplefight.EscortReward"
MsgID
eMsgIDÏ‹ "+
CoupleShopData

id (
count ("f
ResOnlieInitCoupleShop5
shopDataList (2.MSG_Couplefight.CoupleShopData"
MsgID
eMsgID˛‹ "5
ReqBuyCoupleItem

id ("
MsgID
eMsgID‚› "Z
ResBuyCoupleItemResult

id (
result (
count ("
MsgID
eMsgIDˇ‹ "*
ReqOpenCoupleShop"
MsgID
eMsgID„› B"
game.messageBCouplefightMessage