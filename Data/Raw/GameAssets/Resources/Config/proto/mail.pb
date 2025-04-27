
â	

mail.protoMSG_Mailbackpack.proto"0
paramStruct
mark (
paramsValue (	"ù
MailSummaryInfo
mailId (
receiveTime (
	mailTitle (	
isRead (
hasAttachment (
isAttachReceived (
	readTable ("Ò
MailDetailInfo
mailId (
sender (	
	mailTitle (	
mailContent (	
hasAttachment ((
itemList (2.MSG_backpack.ItemInfo
isAttachReceived (
	readTable ()

paramlists	 (2.MSG_Mail.paramStruct"4
ReqReadMail
mailId ("
MsgID
eMsgID°£"C
ReqReceiveSingleMailAttach
mailId ("
MsgID
eMsgID¢£"I
ReqOneClickReceiveMailAttach

mailIdList ("
MsgID
eMsgID££"B
ReqOneClickDeleteMail

mailIdList ("
MsgID
eMsgID§£"V
ResReadMail0
mailDetailInfo (2.MSG_Mail.MailDetailInfo"
MsgID
eMsgIDΩ¢"]
ResReceiveSingleMailAttach
mailId (
isAttachReceived ("
MsgID
eMsgIDæ¢"l
ResMailInfoList+
mailList (2.MSG_Mail.MailSummaryInfo
remainMailNum ("
MsgID
eMsgIDø¢"O

ResNewMail*
newMail (2.MSG_Mail.MailSummaryInfo"
MsgID
eMsgID¿¢B
game.messageBmailMessage