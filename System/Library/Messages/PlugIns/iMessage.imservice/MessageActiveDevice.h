/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MessageActiveDevice : NSObject {

	BOOL _hasReceivedReadReceipt;
	NSString* _idsDestination;
	NSDate* _latestActiveDate;
	NSDate* _latestReadReceipt;

}

@property (nonatomic,retain) NSString * idsDestination;                //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,retain) NSDate * latestActiveDate;                //@synthesize latestActiveDate=_latestActiveDate - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedReadReceipt;              //@synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt - In the implementation block
@property (nonatomic,retain) NSDate * latestReadReceipt;               //@synthesize latestReadReceipt=_latestReadReceipt - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)idsDestination;
-(BOOL)shouldDisplayRemoteDecryptionFailure;
-(BOOL)shouldDisplayAttachmentDownloadFailure;
-(id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(BOOL)arg4 ;
-(void)setLatestActiveDate:(NSDate *)arg1 ;
-(void)setHasReceivedReadReceipt:(BOOL)arg1 ;
-(void)setLatestReadReceipt:(NSDate *)arg1 ;
-(BOOL)shouldSendTypingIndicator;
-(BOOL)_hasReceivedReadReceiptRecently;
-(void)setIdsDestination:(NSString *)arg1 ;
-(NSDate *)latestActiveDate;
-(BOOL)hasReceivedReadReceipt;
-(NSDate *)latestReadReceipt;
@end

