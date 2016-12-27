/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _activityType;
	long long _locationType;
	long long _swimmingLocationType;
	HKQuantity* _lapLength;

}

@property (assign) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (assign) long long locationType;                       //@synthesize locationType=_locationType - In the implementation block
@property (assign) long long swimmingLocationType;               //@synthesize swimmingLocationType=_swimmingLocationType - In the implementation block
@property (copy) HKQuantity * lapLength;                         //@synthesize lapLength=_lapLength - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_workoutConfigurationFromDictionary:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)activityType;
-(id)_dictionaryRepresentation;
-(long long)locationType;
-(void)setLocationType:(long long)arg1 ;
-(void)setActivityType:(unsigned long long)arg1 ;
-(void)setSwimmingLocationType:(long long)arg1 ;
-(void)setLapLength:(HKQuantity *)arg1 ;
-(long long)swimmingLocationType;
-(HKQuantity *)lapLength;
@end

