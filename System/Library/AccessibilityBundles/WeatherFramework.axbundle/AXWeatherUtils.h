/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/WeatherFramework.axbundle/WeatherFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXWeatherUtils : NSObject
+(id)sharedInstance;
-(id)descriptionForWeatherConditionImageName:(id)arg1 ;
-(id)descriptionForWeatherConditionCode:(long long)arg1 ;
-(id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(long long)arg2 ;
-(id)_weatherFrameworkBundle;
-(id)_localizedStringForWeatherDescription:(id)arg1 ;
-(id)_weatherDescriptionKeyForGenericIconName:(id)arg1 ;
-(void)_debugAssertWeatherDescriptionKeyIsValid:(id)arg1 ;
@end

