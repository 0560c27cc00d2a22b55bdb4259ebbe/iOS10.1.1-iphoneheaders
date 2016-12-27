/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@class NSString, _CDContextualKeyPath, NSArray;

@interface _DASWatchBackgroundBudgetPolicy : NSObject <_DASActivityPolicy> {

	NSString* _policyName;
	_CDContextualKeyPath* _snapshotBudgetKeyPath;
	_CDContextualKeyPath* _launchBudgetKeyPath;
	NSArray* _triggers;

}

@property (nonatomic,retain) NSString * policyName;                                     //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * snapshotBudgetKeyPath;              //@synthesize snapshotBudgetKeyPath=_snapshotBudgetKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * launchBudgetKeyPath;                //@synthesize launchBudgetKeyPath=_launchBudgetKeyPath - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                        //@synthesize triggers=_triggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(_CDContextualKeyPath *)snapshotBudgetKeyPath;
-(_CDContextualKeyPath *)launchBudgetKeyPath;
-(void)setLaunchBudgetKeyPath:(_CDContextualKeyPath *)arg1 ;
-(void)setSnapshotBudgetKeyPath:(_CDContextualKeyPath *)arg1 ;
-(NSString *)policyName;
-(void)setPolicyName:(NSString *)arg1 ;
-(id)initializeTriggers;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(id)init;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

