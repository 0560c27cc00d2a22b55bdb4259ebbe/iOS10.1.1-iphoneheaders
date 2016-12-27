/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSeriesSample.h>

@class HDCodableLocationSeries;

@interface HKLocationSeriesSample : HKSeriesSample {

	HDCodableLocationSeries* __codableLocationSeries;

}

@property (setter=_setCodableLocationSeries:,nonatomic,retain) HDCodableLocationSeries * _codableLocationSeries;              //@synthesize _codableLocationSeries=__codableLocationSeries - In the implementation block
+(id)_locationSeriesWithDevice:(id)arg1 metadata:(id)arg2 ;
-(id)_valueDescription;
-(id)_validateSample;
-(id)_validateConfiguration;
-(HDCodableLocationSeries *)_codableLocationSeries;
-(void)_setCodableLocationSeries:(id)arg1 ;
@end

