/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSDate, NSUUID, HKQuantity;

@interface _HKActiveWorkoutServerConfiguration : NSObject <NSSecureCoding> {

	BOOL _shouldUseDeviceData;
	BOOL _indoor;
	NSDictionary* _resumeDataByType;
	long long _workoutState;
	NSArray* _workoutEvents;
	unsigned long long _workoutActivityType;
	NSDate* _startDate;
	NSUUID* _UUID;
	HKQuantity* _lapLength;
	long long _swimmingLocation;

}

@property (nonatomic,retain) NSDictionary * resumeDataByType;                     //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (assign,nonatomic) long long workoutState;                              //@synthesize workoutState=_workoutState - In the implementation block
@property (nonatomic,retain) NSArray * workoutEvents;                             //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDeviceData;                            //@synthesize shouldUseDeviceData=_shouldUseDeviceData - In the implementation block
@property (assign,getter=isIndoor,nonatomic) BOOL indoor;                         //@synthesize indoor=_indoor - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) HKQuantity * lapLength;                              //@synthesize lapLength=_lapLength - In the implementation block
@property (assign,nonatomic) long long swimmingLocation;                          //@synthesize swimmingLocation=_swimmingLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setShouldUseDeviceData:(BOOL)arg1 ;
-(void)setSwimmingLocation:(long long)arg1 ;
-(unsigned long long)workoutActivityType;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSArray *)workoutEvents;
-(long long)workoutState;
-(void)setLapLength:(HKQuantity *)arg1 ;
-(HKQuantity *)lapLength;
-(void)setWorkoutState:(long long)arg1 ;
-(void)setWorkoutEvents:(NSArray *)arg1 ;
-(void)setIndoor:(BOOL)arg1 ;
-(NSDictionary *)resumeDataByType;
-(BOOL)isIndoor;
-(long long)swimmingLocation;
-(BOOL)shouldUseDeviceData;
-(void)setResumeDataByType:(NSDictionary *)arg1 ;
@end

