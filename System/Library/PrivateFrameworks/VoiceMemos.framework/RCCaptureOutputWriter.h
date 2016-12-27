/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <DigitalTouchBalloonProvider/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@protocol RCCaptureOutputWriterDelegate, OS_dispatch_queue;
@class NSMutableArray, AVCaptureSession, NSURL, NSObject, NSUUID, NSDate, AVAssetWriter, AVCaptureAudioDataOutput, NSString;

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate> {

	BOOL _waitingForAVCaptureSessionDidStart;
	BOOL _handledAVCaptureSessionTerminatedAbnormally;
	BOOL _handledAVCaptureSessionFailedToStart;
	BOOL _isProcessingSamples;
	long long _AVCaptureSessionStartupState;
	unsigned long long _sampleBuffersWritten;
	NSMutableArray* _delegateBlocks;
	SCD_Struct_RC14 _sampleBuffersWrittenDuration;
	BOOL _finalizedAssetEncounteredError;
	double _storeDemoTimeLimit;
	unsigned long long _maxRecordedFileSize;
	AVCaptureSession* _AVCaptureSession;
	long long _writerState;
	id<RCCaptureOutputWriterDelegate> _captureOutputDelegate;
	NSURL* _finalizedAssetURL;
	double _finalizedAssetDuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _recordingSessionID;
	NSURL* _activeOutputFileURL;
	NSDate* _recordingCreationDate;
	AVAssetWriter* _assetWriter;
	NSObject*<OS_dispatch_queue> _sampleBufferQueue;
	AVCaptureAudioDataOutput* _sampleBufferDataOutput;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSUUID * recordingSessionID;                                                   //@synthesize recordingSessionID=_recordingSessionID - In the implementation block
@property (nonatomic,retain) NSURL * activeOutputFileURL;                                                 //@synthesize activeOutputFileURL=_activeOutputFileURL - In the implementation block
@property (nonatomic,retain) NSDate * recordingCreationDate;                                              //@synthesize recordingCreationDate=_recordingCreationDate - In the implementation block
@property (nonatomic,retain) AVAssetWriter * assetWriter;                                                 //@synthesize assetWriter=_assetWriter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sampleBufferQueue;                              //@synthesize sampleBufferQueue=_sampleBufferQueue - In the implementation block
@property (nonatomic,retain) AVCaptureAudioDataOutput * sampleBufferDataOutput;                           //@synthesize sampleBufferDataOutput=_sampleBufferDataOutput - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * AVCaptureSession;                                       //@synthesize AVCaptureSession=_AVCaptureSession - In the implementation block
@property (assign,nonatomic) long long writerState;                                                       //@synthesize writerState=_writerState - In the implementation block
@property (nonatomic,readonly) double assetWritingCheckpointInterval; 
@property (assign,nonatomic) unsigned long long maxRecordedFileSize;                                      //@synthesize maxRecordedFileSize=_maxRecordedFileSize - In the implementation block
@property (assign,nonatomic) double storeDemoTimeLimit;                                                   //@synthesize storeDemoTimeLimit=_storeDemoTimeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<RCCaptureOutputWriterDelegate> captureOutputDelegate;              //@synthesize captureOutputDelegate=_captureOutputDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * finalizedAssetURL;                                                 //@synthesize finalizedAssetURL=_finalizedAssetURL - In the implementation block
@property (nonatomic,readonly) double finalizedAssetDuration;                                             //@synthesize finalizedAssetDuration=_finalizedAssetDuration - In the implementation block
@property (nonatomic,readonly) BOOL finalizedAssetEncounteredError;                                       //@synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)maxRecordedFileSize;
-(long long)writerState;
-(void)pauseWriting;
-(void)resumeWriting;
-(void)endWriting;
-(double)storeDemoTimeLimit;
-(BOOL)finalizedAssetEncounteredError;
-(double)finalizedAssetDuration;
-(BOOL)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(BOOL)arg3 captureOutputDelegate:(id)arg4 ;
-(void)setCaptureOutputDelegate:(id<RCCaptureOutputWriterDelegate>)arg1 ;
-(id)initWithAVCaptureSession:(id)arg1 ;
-(void)setStoreDemoTimeLimit:(double)arg1 ;
-(void)_registerForCatpureSessionNotifications;
-(void)_unregisterForCatpureSessionNotifications;
-(void)_clearSampleDataOutput;
-(long long)_writerState;
-(void)_prepareCaptureSessionOutputsIfNecessary;
-(void)_checkIfRecordingSessionEverStarted:(id)arg1 ;
-(void)_setWriterState:(long long)arg1 ;
-(void)_scheduleMainThreadDelegateBlock:(/*^block*/id)arg1 ;
-(void)_finalizeAssetWriting;
-(void)startMaximumRecordingDurationTimer;
-(void)enforceMaxRecordingDuration;
-(void)_sessionErrored:(id)arg1 ;
-(BOOL)_setupAssetWriter:(id*)arg1 sampleBufferRef:(opaqueCMSampleBufferRef)arg2 ;
-(double)assetWritingCheckpointInterval;
-(BOOL)_handleEncounteredFatalAssetWriterError;
-(BOOL)_handleNotificationAsSessionStartFailure;
-(void)_sessionDidStartRunning:(id)arg1 ;
-(void)_sessionDidStopRunning:(id)arg1 ;
-(void)_interruptionDidBegin:(id)arg1 ;
-(AVCaptureSession *)AVCaptureSession;
-(void)setWriterState:(long long)arg1 ;
-(id<RCCaptureOutputWriterDelegate>)captureOutputDelegate;
-(NSURL *)finalizedAssetURL;
-(NSUUID *)recordingSessionID;
-(void)setRecordingSessionID:(NSUUID *)arg1 ;
-(NSURL *)activeOutputFileURL;
-(void)setActiveOutputFileURL:(NSURL *)arg1 ;
-(NSDate *)recordingCreationDate;
-(void)setRecordingCreationDate:(NSDate *)arg1 ;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sampleBufferQueue;
-(void)setSampleBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVCaptureAudioDataOutput *)sampleBufferDataOutput;
-(void)setSampleBufferDataOutput:(AVCaptureAudioDataOutput *)arg1 ;
-(BOOL)startCaptureSession;
-(void)stopCaptureSession;
-(void)setMaxRecordedFileSize:(unsigned long long)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

