/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {

	unsigned long long _workoutActivityType;
	double _duration;
	NSArray* _workoutEvents;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalBasalEnergyBurned;
	HKQuantity* _totalDistance;
	HKQuantity* _totalSwimmingStrokeCount;
	unsigned long long _goalType;
	HKQuantity* _goal;
	BOOL _isWatchWorkout;

}

@property (assign,setter=_setGoalType:,getter=_goalType,nonatomic) unsigned long long goalType;                                                  //@synthesize goalType=_goalType - In the implementation block
@property (setter=_setGoal:,getter=_goal,nonatomic,retain) HKQuantity * goal;                                                                    //@synthesize goal=_goal - In the implementation block
@property (setter=_setTotalBasalEnergyBurned:,getter=_totalBasalEnergyBurned,nonatomic,retain) HKQuantity * totalBasalEnergyBurned; 
@property (assign,setter=_setIsWatchWorkout:,getter=_isWatchWorkout,nonatomic) BOOL isWatchWorkout;                                              //@synthesize isWatchWorkout=_isWatchWorkout - In the implementation block
@property (readonly) unsigned long long workoutActivityType; 
@property (copy,readonly) NSArray * workoutEvents; 
@property (readonly) double duration; 
@property (readonly) HKQuantity * totalEnergyBurned; 
@property (readonly) HKQuantity * totalDistance; 
@property (readonly) HKQuantity * totalSwimmingStrokeCount; 
+(double)fiui_weightedAverageHeartRateWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)FU_isHeartRateSupportedForActivityType:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(id)FU_supportedMetricsForActivityType:(id)arg1 ;
+(unsigned long long)FU_associatedMetricForGoalType:(unsigned long long)arg1 ;
+(BOOL)_isHeartRateSupportedInPowerSettingsForActivityType:(unsigned long long)arg1 ;
+(BOOL)_isHeartRateSupportedInPrivacySettings;
+(id)FU_supportedGoalTypesForActivityType:(id)arg1 ;
+(BOOL)FU_shouldTrackPaceWithOdometerForActivityType:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 totalSwimmingStrokeCount:(id)arg9 goalType:(unsigned long long)arg10 goal:(id)arg11 device:(id)arg12 metadata:(id)arg13 config:(/*^block*/id)arg14 ;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 ;
+(BOOL)_isConcreteObjectClass;
+(id)_stringFromWorkoutActivityType:(unsigned long long)arg1 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)_activityTypeMappings;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(unsigned long long)_workoutActivityTypeFromString:(id)arg1 ;
+(id)_allWorkoutTypeNames;
+(id)_allWorkoutActivityTypes;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalSwimmingStrokeCount:(id)arg7 device:(id)arg8 metadata:(id)arg9 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
-(id)hkui_localizedActivityTypeName;
-(id)fiui_splitsFromDistanceSamples:(id)arg1 definedDistanceInMetersForOneSplit:(double)arg2 ;
-(id)_localizedGoalDescriptionWithActivity:(id)arg1 formattedValue:(id*)arg2 ;
-(BOOL)_FU_supportsDistanceMetricForGoalDisplay;
-(unsigned long long)_FU_effectiveGoalType;
-(id)FU_localizedKeyMetricDistanceStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricEnergyBurnedStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricCyclingStringWithUnitStyle:(long long)arg1 ;
-(id)FU_localizedKeyMetricDurationString;
-(id)FU_localizedOpenGoalKeyMetricStringWithUnitStyle:(long long)arg1 ;
-(id)_FU_eventsOfType:(long long)arg1 ;
-(long long)FU_numberOfEventsOfType:(long long)arg1 ;
-(id)FU_localizedShareTextWithShareValue:(id)arg1 ;
-(id)FU_fitnessLocalizedGoalDescriptionWithValue:(id*)arg1 ;
-(id)FU_fitnessLocalizedGoalWithUnit:(id*)arg1 ;
-(id)FU_fitnessLocalizedGoalWithValue:(id*)arg1 ;
-(id)FU_workoutLocalizedGoalValueWithUnitsWithFormattedValue:(id*)arg1 ;
-(double)FU_completionFactor;
-(double)FU_averageTimePerLap;
-(long long)FU_strokeStyle;
-(id)FU_localizedKeyMetricStringWithUnitStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(HKQuantity *)totalDistance;
-(void)_setDuration:(double)arg1 ;
-(void)_enumerateTimePeriodsWithBlock:(/*^block*/id)arg1 ;
-(long long)hk_integerValue;
-(void)_enumerateActiveTimePeriods:(/*^block*/id)arg1 ;
-(BOOL)_isWatchWorkout;
-(void)_setIsWatchWorkout:(BOOL)arg1 ;
-(id)_validateWorkoutEvents:(id)arg1 ;
-(id)_deepCopy;
-(unsigned long long)workoutActivityType;
-(id)_goal;
-(unsigned long long)_goalType;
-(double)_totalBasalEnergyBurnedInCanonicalUnit;
-(double)_totalDistanceInCanonicalUnit;
-(double)_totalEnergyBurnedInCanonicalUnit;
-(NSArray *)workoutEvents;
-(HKQuantity *)totalEnergyBurned;
-(id)_validateConfiguration;
-(double)_totalSwimmingStrokeCountInCanonicalUnit;
-(double)_goalInCanonicalUnit;
-(void)_setGoal:(id)arg1 ;
-(void)_setGoalType:(unsigned long long)arg1 ;
-(id)_totalBasalEnergyBurned;
-(HKQuantity *)totalSwimmingStrokeCount;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalBasalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(void)_setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_setTotalSwimmingStrokeCount:(id)arg1 ;
-(void)_setWorkoutEvents:(id)arg1 ;
@end

