/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventWeightedHistogram.h>
#import <libobjc.A.dylib/RTEventHistogram.h>

@class NSDate, NSString;

@interface RTEventDecayHistogram : RTEventWeightedHistogram <RTEventHistogram> {

	double _decayRate;
	double _unitDecayTimeInterval;
	NSDate* _referenceDate;

}

@property (nonatomic,readonly) double decayRate;                          //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) double unitDecayTimeInterval;              //@synthesize unitDecayTimeInterval=_unitDecayTimeInterval - In the implementation block
@property (nonatomic,retain) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(NSDate *)referenceDate;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(id)initWithDecayRate:(double)arg1 date:(id)arg2 unitDecayTimeInterval:(double)arg3 ;
-(id)initWithDecayRate:(double)arg1 date:(id)arg2 ;
-(double)unitDecayTimeInterval;
-(double)decayTimeExponent:(id)arg1 ;
-(double)decayRate;
@end

