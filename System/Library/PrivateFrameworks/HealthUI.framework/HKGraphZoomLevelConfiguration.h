/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject {

	NSDateComponents* _axisLabelIntervalComponents;
	NSDateComponents* _seriesPointIntervalComponents;
	double _seriesBlockSize;
	double _zoomLevelThreshold;
	double _canonicalSize;
	double _approximateSeriesPointInterval;

}

@property (nonatomic,readonly) NSDateComponents * axisLabelIntervalComponents;                //@synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * seriesPointIntervalComponents;              //@synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents - In the implementation block
@property (nonatomic,readonly) double seriesBlockSize;                                        //@synthesize seriesBlockSize=_seriesBlockSize - In the implementation block
@property (nonatomic,readonly) double zoomLevelThreshold;                                     //@synthesize zoomLevelThreshold=_zoomLevelThreshold - In the implementation block
@property (nonatomic,readonly) double canonicalSize;                                          //@synthesize canonicalSize=_canonicalSize - In the implementation block
@property (nonatomic,readonly) double approximateSeriesPointInterval;                         //@synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval - In the implementation block
+(id)configurationForZoomLevel:(long long)arg1 ;
+(id)defaultCalendar;
+(id)_generateConfigurationForZoomLevel:(long long)arg1 ;
-(double)seriesBlockSize;
-(double)zoomLevelThreshold;
-(NSDateComponents *)axisLabelIntervalComponents;
-(NSDateComponents *)seriesPointIntervalComponents;
-(double)canonicalSize;
-(double)approximateSeriesPointInterval;
@end

