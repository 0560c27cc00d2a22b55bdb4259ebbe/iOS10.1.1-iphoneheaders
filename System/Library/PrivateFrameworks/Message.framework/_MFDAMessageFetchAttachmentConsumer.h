/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageFetchAttachmentConsumer.h>

@class MFProgressFilterDataConsumer, MFActivityMonitor;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {

	MFProgressFilterDataConsumer* _progressFilter;
	unsigned long long _expectedLength;
	unsigned long long _accumulatedLength;
	MFActivityMonitor* _monitor;
	BOOL _dataWasBase64;
	BOOL _fetchSucceeded;

}

@property (nonatomic,retain) MFProgressFilterDataConsumer * progressFilter;              //@synthesize progressFilter=_progressFilter - In the implementation block
@property (assign,nonatomic) unsigned long long expectedLength;                          //@synthesize expectedLength=_expectedLength - In the implementation block
@property (readonly) BOOL dataWasBase64;                                                 //@synthesize dataWasBase64=_dataWasBase64 - In the implementation block
@property (readonly) BOOL fetchSucceeded;                                                //@synthesize fetchSucceeded=_fetchSucceeded - In the implementation block
-(void)dealloc;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(void)setProgressFilter:(MFProgressFilterDataConsumer *)arg1 ;
-(BOOL)fetchSucceeded;
-(BOOL)dataWasBase64;
-(MFProgressFilterDataConsumer *)progressFilter;
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4 ;
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6 ;
@end

