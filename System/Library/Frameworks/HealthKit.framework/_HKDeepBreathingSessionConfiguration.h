/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface _HKDeepBreathingSessionConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	double _sessionDuration;
	double _inhaleExhaleRatio;
	double _respirationsPerMinute;

}

@property (readonly) NSUUID * UUID;                                     //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double sessionDuration;                    //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) double inhaleExhaleRatio;                  //@synthesize inhaleExhaleRatio=_inhaleExhaleRatio - In the implementation block
@property (assign,nonatomic) double respirationsPerMinute;              //@synthesize respirationsPerMinute=_respirationsPerMinute - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)UUID;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(double)sessionDuration;
-(void)setSessionDuration:(double)arg1 ;
-(double)inhaleExhaleRatio;
-(void)setInhaleExhaleRatio:(double)arg1 ;
-(double)respirationsPerMinute;
-(void)setRespirationsPerMinute:(double)arg1 ;
@end

