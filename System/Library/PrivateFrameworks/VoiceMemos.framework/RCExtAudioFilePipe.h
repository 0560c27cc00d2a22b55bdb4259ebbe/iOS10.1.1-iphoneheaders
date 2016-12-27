/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject, NSURL;

@interface RCExtAudioFilePipe : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _accessQueueID;
	OpaqueExtAudioFileRef _audioFileRef;
	AudioStreamBasicDescription _outputFormatDescriptionStruct;
	AudioStreamBasicDescription _sourceFormatDescriptionStruct;
	NSURL* _sourceURL;
	unsigned long long _sourceFileSize;

}

@property (nonatomic,readonly) NSURL * sourceURL;                                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription* outputFormatDescription; 
@property (nonatomic,readonly) AudioStreamBasicDescription* sourceFormatDescription; 
@property (nonatomic,readonly) unsigned long long sourceFileSize;                                 //@synthesize sourceFileSize=_sourceFileSize - In the implementation block
-(void)dealloc;
-(AudioStreamBasicDescription*)sourceFormatDescription;
-(NSURL *)sourceURL;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_accessExtAudioFileWithBlock:(/*^block*/id)arg1 ;
-(AudioStreamBasicDescription*)outputFormatDescription;
-(id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned)arg3 ;
-(long long)sourceFrameIndexForTime:(double)arg1 ;
-(BOOL)seekToSourceFrameIndex:(long long)arg1 ;
-(long long)sourceCurrentFrameIndex;
-(int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2 ;
-(unsigned long long)sourceFileSize;
@end

