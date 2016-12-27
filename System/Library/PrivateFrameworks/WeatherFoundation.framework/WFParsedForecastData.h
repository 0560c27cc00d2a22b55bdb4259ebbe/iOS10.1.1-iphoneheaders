/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, WFWeatherConditions, NSArray;

@interface WFParsedForecastData : NSObject {

	NSData* _rawData;
	WFWeatherConditions* _currentConditions;
	NSArray* _dailyForecasts;
	NSArray* _hourlyForecasts;

}

@property (nonatomic,copy) NSData * rawData;                                     //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,copy) WFWeatherConditions * currentConditions;              //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,copy) NSArray * dailyForecasts;                             //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                            //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
-(NSData *)rawData;
-(WFWeatherConditions *)currentConditions;
-(void)setCurrentConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
@end

