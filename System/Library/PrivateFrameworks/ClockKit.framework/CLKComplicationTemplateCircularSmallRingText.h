/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallRingText : CLKComplicationTemplate {

	float _fillFraction;
	CLKTextProvider* _textProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                        //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                       //@synthesize ringStyle=_ringStyle - In the implementation block
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(long long)ringStyle;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setRingStyle:(long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
@end

