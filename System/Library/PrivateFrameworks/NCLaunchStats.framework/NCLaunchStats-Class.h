/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, CDSession, CDAttribute, NSMutableDictionary, NSDate, PCPersistentTimer;

@interface NCLaunchStats : NSObject {

	NSObject*<OS_dispatch_queue> ncLaunchStatsQueue;
	CDSession* sessionDuet;
	CDAttribute* bundleAttr;
	CDAttribute* userEventAttr;
	NSMutableDictionary* seqTracker;
	NSMutableDictionary* slotToWidgetMap;
	NSMutableDictionary* prewarmTimeTracker;
	NSMutableDictionary* prewarmDurationTracker;
	NSMutableDictionary* launchTracker;
	/*^block*/id recommendHandler;
	/*^block*/id asyncRecommendHandler;
	NSDate* lastTriggerTime;
	NSDate* forecastStartDate;
	long long numRepeatedPrewarms;
	long long numPrewarmedLaunches;
	int classCLockedToken;
	BOOL isClassCLocked;
	BOOL backgroundAppRefreshSwitchedOn;
	double kTimeGuardBand;
	NSMutableDictionary* appsRequestingRefresh;
	NSMutableDictionary* appUpdateTimes;
	NSObject*<OS_os_log> ncLog;
	NSDate* earliestRequestedRefresh;
	PCPersistentTimer* refreshTimer;
	int predictedWidgetsToken;
	int generatePredictionToken;

}
+(id)wg_sharedInstance;
+(void)wg_configureSharedInstanceWithRecommendationHandler:(/*^block*/id)arg1 ;
+(id)sharedInstance;
+(double)minTimeBetweenRefreshes;
-(void)endEvent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)initAfterClassCUnlocked;
-(void)getPredictedSlots;
-(void)setNCLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)addWidget:(id)arg1 forSlot:(unsigned long long)arg2 ;
-(id)predictedWidgetsForSlot:(unsigned long long)arg1 ;
-(void)ncTriggerObserver:(id)arg1 ;
-(id)predictedWidgetsForDate:(id)arg1 ;
-(BOOL)canUpdateWidgetsUnsafe;
-(id)widgetsToRefreshAtDate:(id)arg1 ;
-(void)unprotectedRemoveRequestsForWidget:(id)arg1 beforeDate:(id)arg2 ;
-(id)unprotectedFindNextDateForTimer;
-(void)scheduleTimerAtDate:(id)arg1 ;
-(void)recordPrewarmStatisticsRaw:(id)arg1 ;
-(void)refreshTimerFired:(id)arg1 ;
-(BOOL)immediateUpdatesAllowedForWidgetUnsafe:(id)arg1 ;
-(void)updateBARSwitch;
-(void)cancelRequestedRefreshForWidget:(id)arg1 ;
-(void)setNCLaunchRecommendationHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(void)startEvent:(id)arg1 ;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
@end

