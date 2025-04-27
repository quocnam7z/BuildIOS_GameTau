
‹
fight.proto	MSG_FightCommon.proto"\
SkillBaseInfo
userID (
skillID (
serial (
dirX (
dirY ("É
ReqUseSkill&
info (2.MSG_Fight.SkillBaseInfo
curTargetId (
usePosX (
usePosY ("
MsgID
eMsgID°¶"{
ReqPlayLockTrajectory&
info (2.MSG_Fight.SkillBaseInfo
eventID (

targetList ("
MsgID
eMsgID¢¶"Ä
ReqPlaySkillObject&
info (2.MSG_Fight.SkillBaseInfo
eventID (
posX (
posY ("
MsgID
eMsgID£¶"p

ReqPlayHit&
info (2.MSG_Fight.SkillBaseInfo
eventID (

targetList ("
MsgID
eMsgID§¶"•
ReqPlaySelfMove&
info (2.MSG_Fight.SkillBaseInfo
eventID (
curPosX (
curPosY (
tarPosX (
tarPosY ("
MsgID
eMsgID•¶"L
ResUseSkill&
info (2.MSG_Fight.SkillBaseInfo"
MsgID
eMsgIDΩ•"{
ResPlayLockTrajectory&
info (2.MSG_Fight.SkillBaseInfo
eventID (

targetList ("
MsgID
eMsgIDæ•"í
ResPlaySimpleSkillObject&
info (2.MSG_Fight.SkillBaseInfo
eventID (
posX (
posY (

ID ("
MsgID
eMsgIDø•"À
ResPlaySkillObject
	visualDef (	
posX (
posY (

ID (
ownerID (
	moveSpeed (
mpveAddSpeed ()
movePosList (2.MSG_Common.Position"
MsgID
eMsgID¿•"•
ResPlaySelfMove&
info (2.MSG_Fight.SkillBaseInfo
eventID (
curPosX (
curPosY (
tarPosX (
tarPosY ("
MsgID
eMsgID¡•"á
HitEffectInfo
targetID (
posx (
posy (
effect (:0
damageHp (
isDead (
damageWaken ("x
ResPlayHitEffect
userID (

hitEventID ()
targets (2.MSG_Fight.HitEffectInfo"
MsgID
eMsgID¬•"ù

ResObjDead
	transMark (

killerName (	
deaderId (

reviveType (
reviveCount (
reviveLastTime ("
MsgID
eMsgID√•"B
ResHpChange
ownId (
curHp ("
MsgID
eMsgIDƒ•"Z
ResWakanChange
ownId (
curWakan (
maxWakan ("
MsgID
eMsgID–•"d
ReqRollMove
moveToX (
moveToY (
selfX (
selfY ("
MsgID
eMsgID©¶"t
ResRollMove
userID (
moveToX (
moveToY (
selfX (
selfY ("
MsgID
eMsgID≈•"G
ResUpdateFightState

id (
state ("
MsgID
eMsgID∆•"J
ResUseSkillError
skillId (
serial ("
MsgID
eMsgID«•"G
ReqChangeAttackDir
dirX (
dirY ("
MsgID
eMsgID¨¶"Z
ResChangeAttackDirRes
dirX (
dirY (
roleId ("
MsgID
eMsgID»•"[
ResMonsterHpChange
ownId (
curHp (
armor (:0"
MsgID
eMsgID…•"@
GuideSkillTarget
targetID (
posx (
posy ("l
ReqFlyPetCloneAttack
skillId (,
targets (2.MSG_Fight.GuideSkillTarget"
MsgID
eMsgIDÆ¶"r
ResFlyPetCloneAttack
skillId (2
infolist (2 .MSG_Fight.flyPetCloneAttackInfo"
MsgID
eMsgID •"g
flyPetCloneAttackInfo
targetID (
posx (
posy (
damageHp (
isDead (B
game.messageBFightMessage