/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class HKActivitySummary;

@interface _HKAchievementPredicateActivitySummaryEnvironment : _HKBaseAchievementPredicateEnvironment {

	HKActivitySummary* _activitySummary;
	double _previousMovePercent;

}

@property (nonatomic,retain) HKActivitySummary * activitySummary;                      //@synthesize activitySummary=_activitySummary - In the implementation block
@property (nonatomic,readonly) double movePercent; 
@property (nonatomic,readonly) double previousMovePercent;                             //@synthesize previousMovePercent=_previousMovePercent - In the implementation block
@property (nonatomic,readonly) double moveGoalCalories; 
@property (nonatomic,readonly) double moveCalories; 
@property (nonatomic,readonly) double briskMinutes; 
@property (nonatomic,readonly) double standHours; 
@property (nonatomic,readonly) long long stepCount; 
@property (nonatomic,readonly) double walkingRunningDistanceInKilometers; 
-(long long)stepCount;
-(id)initWithActivitySummary:(id)arg1 ;
-(double)moveGoalCalories;
-(double)movePercent;
-(double)moveCalories;
-(double)standHours;
-(double)walkingRunningDistanceInKilometers;
-(double)previousMovePercent;
-(double)briskMinutes;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(HKActivitySummary *)activitySummary;
@end

