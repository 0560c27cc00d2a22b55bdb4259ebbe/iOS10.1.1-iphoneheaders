/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DASActivityRecorder : NSObject
+(id)predicateForPendingActivities;
+(id)predicateForLaunchActivities;
+(id)predicateForStartedActivities;
+(id)predicateForActivityWithName:(id)arg1 ;
+(id)predicateForActivityWithSubmitDate:(id)arg1 ;
+(id)predicateForUniqueRecord:(id)arg1 ;
-(id)createOrUpdateActivity:(id)arg1 context:(id)arg2 ;
-(id)fetchAllActivities:(id)arg1 ;
-(id)getActivityFromManagedObject:(id)arg1 ;
-(id)fetchActivitiesUsingPredicate:(id)arg1 context:(id)arg2 ;
-(void)updateActivityStarted:(id)arg1 context:(id)arg2 ;
-(void)updateActivityCompleted:(id)arg1 context:(id)arg2 ;
-(void)updateActivityCanceled:(id)arg1 context:(id)arg2 ;
-(void)deleteActivity:(id)arg1 context:(id)arg2 ;
-(void)deleteOldActivities:(id)arg1 ;
-(void)deleteActivitiesIfRequired:(id)arg1 ;
-(id)createNewActivity:(id)arg1 ;
-(void)copyActivity:(id)arg1 toManagedObject:(id)arg2 ;
-(id)fetchActivity:(id)arg1 context:(id)arg2 ;
-(void)updateActivity:(id)arg1 value:(int)arg2 context:(id)arg3 ;
-(void)deleteActivites:(id)arg1 moc:(id)arg2 ;
-(id)entityName;
@end

