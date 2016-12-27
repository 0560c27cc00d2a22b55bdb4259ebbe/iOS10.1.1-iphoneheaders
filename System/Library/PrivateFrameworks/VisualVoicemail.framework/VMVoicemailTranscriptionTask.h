/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VMVoicemailTranscriptionTask : NSObject {

	BOOL _taskRunning;
	BOOL _hasInsomniaAssertion;
	NSObject*<OS_dispatch_queue> _taskQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> taskQueue;              //@synthesize taskQueue=_taskQueue - In the implementation block
@property (assign,getter=isTaskRunning,nonatomic) BOOL taskRunning;               //@synthesize taskRunning=_taskRunning - In the implementation block
@property (assign,nonatomic) BOOL hasInsomniaAssertion;                           //@synthesize hasInsomniaAssertion=_hasInsomniaAssertion - In the implementation block
+(void)resetRetranscriptionTaskState;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)taskQueue;
-(void)setTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startRetranscribingVoicemailsIfNecessary;
-(void)retranscribeAllVoicemails;
-(id)allVoicemails;
-(void)_endRetranscribingTask;
-(BOOL)confidenceModelExistsOnDevice;
-(id)speechAssetsOnDevice;
-(BOOL)speechAssetHasConfidenceModel:(id)arg1 ;
-(id)speechAssetsWithConfidenceModelsOnDevice;
-(id)voicemailsMatchingFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 ;
-(id)allVoicemailsWithTranscription;
-(BOOL)voicemailWasTranscribedWithoutConfidence:(id)arg1 ;
-(void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1 ;
-(BOOL)isTaskRunning;
-(void)setTaskRunning:(BOOL)arg1 ;
-(BOOL)deviceHasSpeechAssets;
-(BOOL)shouldRunTranscriptionTask;
-(void)processTranscriptForVoicemail:(id)arg1 ;
-(id)allVoicemailsTranscribedWithoutConfidence;
-(id)allVoicemailsWithoutTranscription;
-(BOOL)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1 ;
-(void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1 ;
-(void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(BOOL)arg1 ;
-(id)lastTaskExecutionDate;
-(void)endRetranscribingTask;
-(BOOL)hasInsomniaAssertion;
-(void)setHasInsomniaAssertion:(BOOL)arg1 ;
-(void)setLastExecutionDate:(id)arg1 ;
@end

