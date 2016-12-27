/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface _HKFirstPartyWorkoutSnapshot : NSObject <NSSecureCoding> {

	long long _state;
	unsigned long long _activityType;
	NSDate* _startDate;
	NSArray* _workoutEvents;

}

@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSArray * workoutEvents;                      //@synthesize workoutEvents=_workoutEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)workoutSnapshotWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(unsigned long long)activityType;
-(NSDate *)startDate;
-(id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4 ;
-(NSArray *)workoutEvents;
-(double)durationForDate:(id)arg1 ;
@end

