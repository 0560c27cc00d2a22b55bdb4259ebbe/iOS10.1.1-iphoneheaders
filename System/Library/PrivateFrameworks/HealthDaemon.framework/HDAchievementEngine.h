/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDailyGoalDetectionDelegate, HDAchievementEngineDelegate;
@class NSCalendar, HDAchievementDataStore, HDAchievementDefinitions, NSDate;

@interface HDAchievementEngine : NSObject {

	NSCalendar* _cachedCalendar;
	id<HDDailyGoalDetectionDelegate> _dailyGoalDetectionDelegate;
	id<HDAchievementEngineDelegate> _delegate;
	HDAchievementDataStore* _dataStore;
	HDAchievementDefinitions* _achievementDefinitions;
	NSDate* _fixedNowDate;
	NSCalendar* _fixedCalendar;

}

@property (nonatomic,retain) NSDate * fixedNowDate;                                                           //@synthesize fixedNowDate=_fixedNowDate - In the implementation block
@property (nonatomic,retain) NSCalendar * fixedCalendar;                                                      //@synthesize fixedCalendar=_fixedCalendar - In the implementation block
@property (assign,nonatomic,__weak) id<HDDailyGoalDetectionDelegate> dailyGoalDetectionDelegate;              //@synthesize dailyGoalDetectionDelegate=_dailyGoalDetectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDAchievementEngineDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HDAchievementDataStore * dataStore;                                       //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) HDAchievementDefinitions * achievementDefinitions;                             //@synthesize achievementDefinitions=_achievementDefinitions - In the implementation block
+(long long)_differenceInDaysBetweenActivitySummaryIndex:(long long)arg1 andIndex:(long long)arg2 inCalendar:(id)arg3 ;
+(BOOL)_isCompleteWithNumberOfWeeks:(unsigned long long)arg1 dateToday:(id)arg2 consecutiveCompleteDays:(unsigned long long)arg3 inCalendar:(id)arg4 ;
-(void)setDelegate:(id<HDAchievementEngineDelegate>)arg1 ;
-(id<HDAchievementEngineDelegate>)delegate;
-(id)_calendar;
-(void)setFixedNowDate:(NSDate *)arg1 ;
-(unsigned long long)runForNewMoveData;
-(unsigned long long)runForNewExerciseData;
-(unsigned long long)runForNewStandData;
-(unsigned long long)runForNewCombinedActivityData;
-(void)runForTriggers:(unsigned long long)arg1 withEnvironment:(id)arg2 ;
-(unsigned long long)runForNewWorkouts;
-(void)setDataStore:(HDAchievementDataStore *)arg1 ;
-(id)_now;
-(id)_generateAchievementWithDefinition:(id)arg1 environment:(id)arg2 ;
-(void)_runForChangedDatabase;
-(void)runForStepAchievements;
-(void)systemTimeZoneDidChange;
-(BOOL)runDatabaseIdentifierCheckWithCurrentDatabaseIdentifier:(id)arg1 identifierChanged:(BOOL*)arg2 error:(id*)arg3 ;
-(void)setFixedCalendar:(NSCalendar *)arg1 ;
-(id<HDDailyGoalDetectionDelegate>)dailyGoalDetectionDelegate;
-(void)setDailyGoalDetectionDelegate:(id<HDDailyGoalDetectionDelegate>)arg1 ;
-(HDAchievementDataStore *)dataStore;
-(HDAchievementDefinitions *)achievementDefinitions;
-(NSDate *)fixedNowDate;
-(NSCalendar *)fixedCalendar;
@end

