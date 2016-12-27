/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSSet;

@interface _HKAchievementPredicateActivitySummaryHistoryEnvironment : _HKBaseAchievementPredicateEnvironment {

	_HKAchievementPredicateActivitySummaryHistoryEnvironment* _previous;
	double _bestAchievedMoveGoal;
	double _bestAchievedMoveCalories;
	double _bestAchievedBriskMinutes;
	long long _bestConsecutiveMoveGoalsMet;
	long long _consecutiveMoveGoalsMet;
	long long _consecutiveExerciseGoalsMet;
	long long _consecutiveStandGoalsMet;
	long long _totalMoveGoalsMet;
	long long _totalDaysOfMoveHistory;
	long long _totalDaysOfExerciseHistory;
	NSSet* _earnedAchievementDefinitionIdentifiers;

}

@property (nonatomic,retain) _HKAchievementPredicateActivitySummaryHistoryEnvironment * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,readonly) double bestAchievedMoveGoal;                                                    //@synthesize bestAchievedMoveGoal=_bestAchievedMoveGoal - In the implementation block
@property (nonatomic,readonly) double bestAchievedMoveCalories;                                                //@synthesize bestAchievedMoveCalories=_bestAchievedMoveCalories - In the implementation block
@property (nonatomic,readonly) double bestAchievedBriskMinutes;                                                //@synthesize bestAchievedBriskMinutes=_bestAchievedBriskMinutes - In the implementation block
@property (nonatomic,readonly) long long bestConsecutiveMoveGoalsMet;                                          //@synthesize bestConsecutiveMoveGoalsMet=_bestConsecutiveMoveGoalsMet - In the implementation block
@property (nonatomic,readonly) long long consecutiveMoveGoalsMet;                                              //@synthesize consecutiveMoveGoalsMet=_consecutiveMoveGoalsMet - In the implementation block
@property (nonatomic,readonly) long long consecutiveExerciseGoalsMet;                                          //@synthesize consecutiveExerciseGoalsMet=_consecutiveExerciseGoalsMet - In the implementation block
@property (nonatomic,readonly) long long consecutiveStandGoalsMet;                                             //@synthesize consecutiveStandGoalsMet=_consecutiveStandGoalsMet - In the implementation block
@property (nonatomic,readonly) long long totalMoveGoalsMet;                                                    //@synthesize totalMoveGoalsMet=_totalMoveGoalsMet - In the implementation block
@property (nonatomic,readonly) long long totalDaysOfMoveHistory;                                               //@synthesize totalDaysOfMoveHistory=_totalDaysOfMoveHistory - In the implementation block
@property (nonatomic,readonly) long long totalDaysOfExerciseHistory;                                           //@synthesize totalDaysOfExerciseHistory=_totalDaysOfExerciseHistory - In the implementation block
@property (nonatomic,readonly) NSSet * earnedAchievementDefinitionIdentifiers;                                 //@synthesize earnedAchievementDefinitionIdentifiers=_earnedAchievementDefinitionIdentifiers - In the implementation block
-(_HKAchievementPredicateActivitySummaryHistoryEnvironment *)previous;
-(double)bestAchievedMoveGoal;
-(double)bestAchievedMoveCalories;
-(double)bestAchievedBriskMinutes;
-(long long)bestConsecutiveMoveGoalsMet;
-(long long)consecutiveMoveGoalsMet;
-(long long)consecutiveExerciseGoalsMet;
-(long long)consecutiveStandGoalsMet;
-(long long)totalMoveGoalsMet;
-(long long)totalDaysOfMoveHistory;
-(long long)totalDaysOfExerciseHistory;
-(NSSet *)earnedAchievementDefinitionIdentifiers;
-(void)setPrevious:(_HKAchievementPredicateActivitySummaryHistoryEnvironment *)arg1 ;
@end

