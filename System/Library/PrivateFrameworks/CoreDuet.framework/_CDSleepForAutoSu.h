/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDAutoSuConfig;

@interface _CDSleepForAutoSu : NSObject {

	BOOL _enableCaching;
	_CDAutoSuConfig* _autoSuConfig;

}

@property (retain) _CDAutoSuConfig * autoSuConfig;              //@synthesize autoSuConfig=_autoSuConfig - In the implementation block
@property (assign) BOOL enableCaching;                          //@synthesize enableCaching=_enableCaching - In the implementation block
+(id)defaultTuningConfiguration;
+(id)readConfigurationFromDefaults;
+(id)sanitizeTuningConfiguration:(id)arg1 ;
+(id)tuningDictionary;
-(id)init;
-(_CDAutoSuConfig *)autoSuConfig;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2 ;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg1 ;
-(id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2 ;
-(id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2 ;
-(BOOL)enableCaching;
-(id)predictedSleepDictionaryForDate:(id)arg1 ;
-(id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1 ;
-(id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3 ;
-(id)retrieveSleepProbabilities:(id)arg1 ;
-(id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6 ;
-(id)predicitLastUnlockForDay:(id)arg1 ;
-(id)getUnlockAndSoftwareUpdateTimes;
-(id)predictForDate:(id)arg1 fromState:(id)arg2 ;
-(id)predictNextDateForLastUnlockAttemptOfTheDay;
-(void)setAutoSuConfig:(_CDAutoSuConfig *)arg1 ;
-(void)setEnableCaching:(BOOL)arg1 ;
@end

