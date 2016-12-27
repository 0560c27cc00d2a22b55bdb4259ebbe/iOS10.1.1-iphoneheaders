/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter {

	int _inputUnit;
	int _outputUnit;
	UAMeasureFormatRef _measureFormatter;
	NSLocale* _locale;
	NSString* _fallbackTemperatureString;
	unsigned long long _roundingMode;
	unsigned long long _maximumFractionDigits;

}

@property (assign,nonatomic) UAMeasureFormatRef measureFormatter;                   //@synthesize measureFormatter=_measureFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;                    //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (assign,nonatomic) int inputUnit;                                         //@synthesize inputUnit=_inputUnit - In the implementation block
@property (assign,nonatomic) int outputUnit;                                        //@synthesize outputUnit=_outputUnit - In the implementation block
@property (assign,nonatomic) unsigned long long roundingMode;                       //@synthesize roundingMode=_roundingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
+(id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2 ;
-(unsigned long long)roundingMode;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMeasureFormatter:(UAMeasureFormatRef)arg1 ;
-(id)formattedTemperatureFromString:(id)arg1 ;
-(id)formattedStringFromTemperature:(id)arg1 ;
-(id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2 ;
-(UAMeasureFormatRef)measureFormatter;
-(void)setOutputUnit:(int)arg1 ;
-(int)outputUnit;
-(int)inputUnit;
-(void)setInputUnit:(int)arg1 ;
-(NSString *)fallbackTemperatureString;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
@end

