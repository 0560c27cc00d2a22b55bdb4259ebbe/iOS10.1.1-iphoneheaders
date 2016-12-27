/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_DASActivitySchedulerClient.h>
#import <libobjc.A.dylib/_DASActivityGroupSchedulingAndIntrospecting.h>

@protocol _CDLocalContext, OS_dispatch_queue, _DASDataStore, OS_dispatch_source;
@class NSMutableArray, NSMutableDictionary, NSDictionary, NSXPCListener, NSObject, PCPersistentTimer, NSDate, _DASNetworkEvaluationMonitor, _DASSleepWakeMonitor, _DASBatchingQueue, NSString;

@interface _DASDaemon : NSObject <NSXPCListenerDelegate, _DASActivitySchedulerClient, _DASActivityGroupSchedulingAndIntrospecting> {

	NSMutableArray* _clients;
	NSMutableDictionary* _startedTasksToStartTime;
	NSDictionary* _triggerToPolicyMap;
	NSMutableDictionary* _activityToTriggersMap;
	NSMutableDictionary* _triggerToActivitiesMap;
	NSMutableDictionary* _activityToIncompatibleActivitiesMap;
	NSMutableDictionary* _groups;
	NSMutableDictionary* _groupToPendingTasks;
	NSMutableDictionary* _groupToRunningTasks;
	NSMutableDictionary* _applicationLaunchRequests;
	id<_CDLocalContext> _context;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _timerSchedulingQueue;
	PCPersistentTimer* _wakeTimer;
	NSDate* _timerEarliestFireDate;
	NSDate* _timerLatestFireDate;
	_DASNetworkEvaluationMonitor* _networkEvaluationMonitor;
	_DASSleepWakeMonitor* _sleepWakeMonitor;
	id<_DASDataStore> _store;
	NSObject*<OS_dispatch_source> _optimalScoringTimer;
	NSObject*<OS_dispatch_source> _databaseMaintenanceTimer;
	NSObject*<OS_dispatch_queue> _evaluationQueue;
	_DASBatchingQueue* _triggerBatchingQueue;
	_DASBatchingQueue* _activityCompletedBatchingQueue;
	NSMutableDictionary* _recentlyLaunchedApps;

}

@property (nonatomic,retain) NSMutableArray * clients;                                               //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * startedTasksToStartTime;                          //@synthesize startedTasksToStartTime=_startedTasksToStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * triggerToPolicyMap;                                      //@synthesize triggerToPolicyMap=_triggerToPolicyMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityToTriggersMap;                            //@synthesize activityToTriggersMap=_activityToTriggersMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * triggerToActivitiesMap;                           //@synthesize triggerToActivitiesMap=_triggerToActivitiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityToIncompatibleActivitiesMap;              //@synthesize activityToIncompatibleActivitiesMap=_activityToIncompatibleActivitiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groups;                                           //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupToPendingTasks;                              //@synthesize groupToPendingTasks=_groupToPendingTasks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupToRunningTasks;                              //@synthesize groupToRunningTasks=_groupToRunningTasks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationLaunchRequests;                        //@synthesize applicationLaunchRequests=_applicationLaunchRequests - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerSchedulingQueue;                      //@synthesize timerSchedulingQueue=_timerSchedulingQueue - In the implementation block
@property (nonatomic,retain) PCPersistentTimer * wakeTimer;                                          //@synthesize wakeTimer=_wakeTimer - In the implementation block
@property (nonatomic,retain) NSDate * timerEarliestFireDate;                                         //@synthesize timerEarliestFireDate=_timerEarliestFireDate - In the implementation block
@property (nonatomic,retain) NSDate * timerLatestFireDate;                                           //@synthesize timerLatestFireDate=_timerLatestFireDate - In the implementation block
@property (nonatomic,retain) _DASNetworkEvaluationMonitor * networkEvaluationMonitor;                //@synthesize networkEvaluationMonitor=_networkEvaluationMonitor - In the implementation block
@property (nonatomic,retain) _DASSleepWakeMonitor * sleepWakeMonitor;                                //@synthesize sleepWakeMonitor=_sleepWakeMonitor - In the implementation block
@property (nonatomic,retain) id<_DASDataStore> store;                                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> optimalScoringTimer;                      //@synthesize optimalScoringTimer=_optimalScoringTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> databaseMaintenanceTimer;                 //@synthesize databaseMaintenanceTimer=_databaseMaintenanceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> evaluationQueue;                           //@synthesize evaluationQueue=_evaluationQueue - In the implementation block
@property (nonatomic,retain) _DASBatchingQueue * triggerBatchingQueue;                               //@synthesize triggerBatchingQueue=_triggerBatchingQueue - In the implementation block
@property (nonatomic,retain) _DASBatchingQueue * activityCompletedBatchingQueue;                     //@synthesize activityCompletedBatchingQueue=_activityCompletedBatchingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentlyLaunchedApps;                             //@synthesize recentlyLaunchedApps=_recentlyLaunchedApps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableDictionary *)recentlyLaunchedApps;
-(void)allClientsDo:(/*^block*/id)arg1 ;
-(void)wakeTimerFired:(id)arg1 ;
-(id)initAsAnonymous:(BOOL)arg1 withContext:(id)arg2 ;
-(void)setupTimers;
-(void)handleTriggers:(id)arg1 ;
-(void)handleCompletedActivities:(id)arg1 ;
-(void)registerForNetworkPathEvaluation;
-(void)registerTriggersWithContextStoreForPolicies:(id)arg1 ;
-(void)loadLastSavedState;
-(void)solicitActivityResubmission;
-(void)periodicCalculationForOptimal;
-(void)scheduleTimerBetween:(double)arg1 and:(double)arg2 waking:(BOOL)arg3 ;
-(void)setupDatabaseMaintenance;
-(id)candidateGroupActivityForPreemption:(id)arg1 ;
-(void)removeActivityFromTriggerMapWithName:(id)arg1 ;
-(void)handleNoLongerRunningActivity:(id)arg1 ;
-(void)runActivityArray:(id)arg1 ;
-(BOOL)shouldPreemptTask:(id)arg1 withStartDate:(id)arg2 atDate:(id)arg3 ;
-(BOOL)shouldRunActivityNow:(id)arg1 withOtherActivites:(id)arg2 ;
-(void)addRunningActivity:(id)arg1 toGroupWithName:(id)arg2 ;
-(BOOL)requiresNetworkPathMonitoring:(id)arg1 ;
-(void)runApplicationLaunchActivities:(id)arg1 ;
-(void)addTriggersToActivity:(id)arg1 ;
-(void)addLaunchRequest:(id)arg1 ;
-(BOOL)shouldEvaluateTask:(id)arg1 atDate:(id)arg2 ;
-(void)addPendingActivity:(id)arg1 toGroupWithName:(id)arg2 ;
-(BOOL)shouldRunActivityNow:(id)arg1 ;
-(void)beginWorkForActivity:(id)arg1 ;
-(id)tasksNoLongerEligible;
-(void)addPendingActivitiesToGroups:(id)arg1 ;
-(void)evaluateScoreAndRunActivities:(id)arg1 ;
-(void)removeActivityFromTriggerMap:(id)arg1 ;
-(void)removeLaunchRequest:(id)arg1 ;
-(id)getActivityWithName:(id)arg1 ;
-(void)determineNextTimerFireDateAndSchedule;
-(void)registerWithContextStoreForId:(id)arg1 contextualPredicate:(id)arg2 dismissalCondition:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 ;
-(void)associateActivity:(id)arg1 withTriggerKeys:(id)arg2 ;
-(void)evaluateScoreAndRunAllActivitiesForReason:(id)arg1 ;
-(void)chooseActivitiesToRunFromCandidateActivities:(id)arg1 toBeRunActivities:(id)arg2 toLaunchApplications:(id)arg3 ;
-(unsigned long long)submittedTaskCount;
-(unsigned long long)requestCountForApplication:(id)arg1 ;
-(void)handleRunningActivities:(id)arg1 ;
-(long long)additionalCapacityForActivity:(id)arg1 inGroupWithName:(id)arg2 shouldTryToSuspend:(BOOL)arg3 ;
-(void)evaluateScoreAndRunActivitesForTrigger:(id)arg1 ;
-(void)setStartedTasksToStartTime:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)triggerToPolicyMap;
-(PCPersistentTimer *)wakeTimer;
-(NSObject*<OS_dispatch_queue>)evaluationQueue;
-(void)clearRecentlyLaunchedApps;
-(void)setGroupToPendingTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)groupToRunningTasks;
-(void)setGroupToRunningTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)applicationLaunchRequests;
-(void)setApplicationLaunchRequests:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)timerSchedulingQueue;
-(void)setTimerSchedulingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)timerEarliestFireDate;
-(void)setTimerEarliestFireDate:(NSDate *)arg1 ;
-(NSDate *)timerLatestFireDate;
-(void)setTimerLatestFireDate:(NSDate *)arg1 ;
-(_DASNetworkEvaluationMonitor *)networkEvaluationMonitor;
-(void)setNetworkEvaluationMonitor:(_DASNetworkEvaluationMonitor *)arg1 ;
-(NSObject*<OS_dispatch_source>)optimalScoringTimer;
-(void)setOptimalScoringTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)databaseMaintenanceTimer;
-(void)setDatabaseMaintenanceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setEvaluationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_DASBatchingQueue *)triggerBatchingQueue;
-(void)setTriggerBatchingQueue:(_DASBatchingQueue *)arg1 ;
-(_DASBatchingQueue *)activityCompletedBatchingQueue;
-(void)setActivityCompletedBatchingQueue:(_DASBatchingQueue *)arg1 ;
-(void)setRecentlyLaunchedApps:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)startedTasksToStartTime;
-(void)setTriggerToPolicyMap:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)activityToTriggersMap;
-(void)setActivityToTriggersMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)triggerToActivitiesMap;
-(void)setTriggerToActivitiesMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityToIncompatibleActivitiesMap;
-(void)setActivityToIncompatibleActivitiesMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)groupToPendingTasks;
-(void)setWakeTimer:(PCPersistentTimer *)arg1 ;
-(void)submitActivity:(id)arg1 inGroupWithName:(id)arg2 ;
-(void)submitActivity:(id)arg1 ;
-(void)activityCanceled:(id)arg1 ;
-(void)activityCompleted:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id<_CDLocalContext>)context;
-(void)start;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(void)removeClient:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)scheduleSystemWakeAt:(id)arg1 forActivity:(id)arg2 withLeeway:(long long)arg3 ;
-(NSMutableDictionary *)groups;
-(void)setGroups:(NSMutableDictionary *)arg1 ;
-(void)createActivityGroup:(id)arg1 ;
-(NSMutableArray *)clients;
-(void)submitActivity:(id)arg1 inGroup:(id)arg2 ;
-(void)handleEligibleActivities:(/*^block*/id)arg1 ;
-(void)submitActivities:(id)arg1 ;
-(void)submittedActivitiesWithHandler:(/*^block*/id)arg1 ;
-(void)runningActivitiesWithHandler:(/*^block*/id)arg1 ;
-(void)runningGroupActivitiesWithHandler:(/*^block*/id)arg1 ;
-(void)scoresForActivityWithName:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)activityRunStatisticsWithHandler:(/*^block*/id)arg1 ;
-(void)forceRunActivities:(id)arg1 ;
-(void)startedActivities:(id)arg1 ;
-(void)currentPredictionsWithHandler:(/*^block*/id)arg1 ;
-(void)runActivities:(id)arg1 ;
-(void)suspendActivities:(id)arg1 ;
-(void)handleRescindedActivity:(id)arg1 ;
-(id)activityRunStatistics;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)setStore:(id<_DASDataStore>)arg1 ;
-(void)setSleepWakeMonitor:(_DASSleepWakeMonitor *)arg1 ;
-(_DASSleepWakeMonitor *)sleepWakeMonitor;
-(id<_DASDataStore>)store;
@end

