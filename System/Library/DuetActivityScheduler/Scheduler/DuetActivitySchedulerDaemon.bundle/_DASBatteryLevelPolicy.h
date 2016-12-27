/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@class NSString, _CDContextualKeyPath, NSArray;

@interface _DASBatteryLevelPolicy : NSObject <_DASActivityPolicy> {

	NSString* _policyName;
	_CDContextualKeyPath* _batteryLevelKeyPath;
	_CDContextualKeyPath* _watchBatteryLevelKeyPath;
	_CDContextualKeyPath* _watchPluginStatusKeyPath;
	NSArray* _triggers;

}

@property (nonatomic,copy) NSString * policyName;                                          //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * batteryLevelKeyPath;                   //@synthesize batteryLevelKeyPath=_batteryLevelKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * watchBatteryLevelKeyPath;              //@synthesize watchBatteryLevelKeyPath=_watchBatteryLevelKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * watchPluginStatusKeyPath;              //@synthesize watchPluginStatusKeyPath=_watchPluginStatusKeyPath - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                           //@synthesize triggers=_triggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSString *)policyName;
-(void)setPolicyName:(NSString *)arg1 ;
-(id)initializeTriggers;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(BOOL)shouldLogScoreToPowerLog;
-(double)baselineScoreForActivity:(id)arg1 ;
-(double)getScoreForActivity:(id)arg1 forBatteryLevel:(double)arg2 isPluggedIn:(BOOL)arg3 isLowPowerModeEnabled:(BOOL)arg4 ;
-(void)setWatchBatteryLevelKeyPath:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)watchPluginStatusKeyPath;
-(_CDContextualKeyPath *)watchBatteryLevelKeyPath;
-(_CDContextualKeyPath *)batteryLevelKeyPath;
-(void)setWatchPluginStatusKeyPath:(_CDContextualKeyPath *)arg1 ;
-(void)setBatteryLevelKeyPath:(_CDContextualKeyPath *)arg1 ;
-(id)init;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

