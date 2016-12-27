/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKValueRange, NSNumber;

@interface HKActivityStatisticsChartPointNode : NSObject {

	HKValueRange* _dateRange;
	long long _type;
	NSNumber* _value;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                      //@synthesize value=_value - In the implementation block
-(long long)type;
-(NSNumber *)value;
-(HKValueRange *)dateRange;
-(id)initWithRange:(id)arg1 type:(long long)arg2 value:(id)arg3 ;
@end

