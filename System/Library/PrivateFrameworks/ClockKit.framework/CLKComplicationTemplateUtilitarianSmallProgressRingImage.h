/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateUtilitarianSmallProgressRingImage : CLKComplicationTemplate {

	CLKImageProvider* _imageProvider;
	CLKProgressProvider* _progressProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) CLKProgressProvider * progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic) long long ringStyle;                               //@synthesize ringStyle=_ringStyle - In the implementation block
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setProgressProvider:(CLKProgressProvider *)arg1 ;
-(CLKProgressProvider *)progressProvider;
-(long long)ringStyle;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setRingStyle:(long long)arg1 ;
-(void)_enumerateProgressProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
@end

