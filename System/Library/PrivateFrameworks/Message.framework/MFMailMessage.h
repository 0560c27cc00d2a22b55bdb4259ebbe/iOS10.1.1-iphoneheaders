/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessage.h>
#import <libobjc.A.dylib/MFBaseMessage.h>
#import <libobjc.A.dylib/MFMailboxPredictionMessage.h>

@class MFMessageInfo, NSString;

@interface MFMailMessage : MFMessage <MFBaseMessage, MFMailboxPredictionMessage> {

	unsigned long long _messageFlags;
	unsigned char _subjectPrefixLength;
	unsigned long long _modSequenceNumber;
	MFMessageInfo* _info;
	BOOL _shouldUseMailDrop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) unsigned mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (assign) unsigned long long modSequenceNumber; 
@property (assign,nonatomic) BOOL shouldUseMailDrop;                                                     //@synthesize shouldUseMailDrop=_shouldUseMailDrop - In the implementation block
+(unsigned)validatePriority:(int)arg1 ;
+(id)forwardedMessagePrefixWithSpacer:(BOOL)arg1 ;
+(Class)dataMessageStoreToUse;
+(unsigned)displayablePriorityForPriority:(int)arg1 ;
-(void)dealloc;
-(id)URL;
-(int)priority;
-(id)subject;
-(void)setSubject:(id)arg1 ;
-(BOOL)deleted;
-(unsigned long long)messageFlags;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(id)messageStore;
-(id)mailbox;
-(id)firstSenderAddress;
-(id)toAddressList;
-(id)ccAddressList;
-(unsigned long long)conversationFlags;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(BOOL)flagged;
-(BOOL)isKnownToHaveAttachments;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)copyMessageInfo;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(id)originalMailboxURL;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(unsigned short)numberOfAttachments;
-(id)externalConversationID;
-(id)remoteMailboxURL;
-(unsigned long long)modSequenceNumber;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned)arg11 ;
-(id)subjectAndPrefixLength:(unsigned*)arg1 ;
-(id)bestAlternativePart:(BOOL*)arg1 ;
-(id)subjectNotIncludingReAndFwdPrefix;
-(id)loadMeetingData;
-(void)setPriorityFromHeaders:(id)arg1 ;
-(id)mailMessageStore;
-(void)setModSequenceNumber:(unsigned long long)arg1 ;
-(id)loadMeetingExternalID;
-(id)loadMeetingMetadata;
-(BOOL)shouldSetSummary;
-(id)bestAlternativePart;
-(BOOL)shouldUseMailDrop;
-(void)setShouldUseMailDrop:(BOOL)arg1 ;
-(BOOL)isVIP;
-(id)account;
-(void)setSummary:(id)arg1 ;
-(BOOL)read;
@end
