/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessage, MailAccount, DeliveryAccount, MFDeliveryResult, MFMutableMessageHeaders, NSDictionary, NSArray, NSString, MFPlainTextDocument;

@interface MFMailDelivery : NSObject {

	id _delegate;
	MFMessage* _message;
	MailAccount* _archiveAccount;
	DeliveryAccount* _account;
	MFDeliveryResult* _result;
	MFMutableMessageHeaders* _headers;
	NSDictionary* _compositionSpecification;
	NSArray* _mixedContent;
	BOOL _textPartsAreHTML;
	NSString* _htmlString;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherStringsAndAttachments;
	NSArray* _charsets;
	unsigned _threaded : 1;
	unsigned _useCellDataOnly : 1;
	BOOL _isUserRequested;
	unsigned long long _conversationFlags;

}

@property (nonatomic,retain) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                 //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                                 //@synthesize isUserRequested=_isUserRequested - In the implementation block
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
+(BOOL)deliverMessage:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)message;
-(NSDictionary *)compositionSpecification;
-(id)deliverSynchronously;
-(id)newMessageWriter;
-(id)originalHeaders;
-(id)headersForDelivery;
-(id)deliverMessageData:(id)arg1 toRecipients:(id)arg2 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)archiveAccount;
-(void)setArchiveAccount:(id)arg1 ;
-(long long)deliveryStatus;
-(id)deliveryResult;
-(BOOL)shouldSignMessage;
-(BOOL)shouldEncryptMessage;
-(void)deliverAsynchronously;
-(void)setCellDataOnly:(BOOL)arg1 ;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(unsigned long long)conversationFlags;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(BOOL)isUserRequested;
-(void)setIsUserRequested:(BOOL)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)archive;
-(id)initWithMessage:(id)arg1 ;
@end

