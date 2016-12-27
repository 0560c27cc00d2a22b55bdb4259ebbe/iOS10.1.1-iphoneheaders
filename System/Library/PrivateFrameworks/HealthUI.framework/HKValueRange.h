/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface HKValueRange : NSObject <NSCopying> {

	id _minValue;
	id _maxValue;

}

@property (nonatomic,copy) id minValue;                         //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id maxValue;                         //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minValue;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)maxValue;
-(void)setMaxValue:(id)arg1 ;
-(void)setMinValue:(id)arg1 ;
-(void)unionRange:(id)arg1 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(BOOL)containsValue:(id)arg1 ;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
@end

