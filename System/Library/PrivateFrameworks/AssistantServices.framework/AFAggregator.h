/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAggregator : NSObject {

	unsigned long long _type;
	double _startTime;
	BOOL _hasActiveRequest;
	BOOL _sessionIsRetrying;
	BOOL _retryPrefersWWAN;

}

@property (assign,nonatomic) unsigned long long connectionType;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasActiveRequest;                          //@synthesize hasActiveRequest=_hasActiveRequest - In the implementation block
+(void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1 ;
+(void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1 ;
+(void)logSiriSpeechRequestStarted;
+(void)logSiriOtherRequestStarted;
+(void)logSiriRequestCancelled;
+(void)logSiriRequestFailedWithError:(id)arg1 ;
+(void)logSiriRequestSucceeded;
+(void)logDictationStarted;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg1 ;
+(void)logDictationSucceeded;
+(id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2 ;
+(void)logRequestCompletedWithDuration:(double)arg1 ;
+(void)missedAppContextForRequest;
+(void)missedAlertContextForRequest;
+(void)logRequestCancelAfterSeconds:(double)arg1 ;
+(void)logRequestLaunchedApp;
+(void)logUILockCanceledVTActivation;
+(void)logCreateAssistant;
+(void)logLoadAssistant;
+(void)logPingTimeout;
+(void)logEnabledState:(unsigned long long)arg1 ;
+(void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1 ;
+(void)logLocalSpeechStartedWithDuration:(double)arg1 ;
+(void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1 ;
+(void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2 ;
+(void)logLocalRecognitionWonForLanguage:(id)arg1 ;
+(void)logLocalRecognitionLostForLanguage:(id)arg1 ;
+(void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2 ;
+(void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2 ;
+(id)_stringForGatekeeperType:(unsigned long long)arg1 ;
+(void)logTimeToBeepWithDuration:(double)arg1 ;
+(void)logHomeButtonPressToActivationDuration:(double)arg1 ;
+(void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1 ;
+(void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1 ;
-(unsigned long long)connectionType;
-(void)setConnectionType:(unsigned long long)arg1 ;
-(BOOL)hasActiveRequest;
-(void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2 ;
-(void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3 ;
-(void)recordSessionRetrySuccess;
-(void)connectionDidFail;
-(void)connectionDidDrop;
-(void)beginSessionRetryPreferringWWAN:(BOOL)arg1 ;
-(void)startWaitingForSpeechResponse;
-(void)speechResponseReceived;
-(void)speechResponseFailure;
-(void)setHasActiveRequest:(BOOL)arg1 ;
@end

