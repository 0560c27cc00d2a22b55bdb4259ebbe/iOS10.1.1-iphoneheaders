/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertApplication.h>

@interface RTPredictionExpertApplicationMicroLocation : RTPredictionExpertApplication {

	double _maxMicroLocationEventAge;

}

@property (assign,nonatomic) double maxMicroLocationEventAge;              //@synthesize maxMicroLocationEventAge=_maxMicroLocationEventAge - In the implementation block
-(id)supportedEventClasses;
-(void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 featureAddons:(id)arg5 ;
-(id)dateIntervalForAppLaunchEvent:(id)arg1 ;
-(double)maxMicroLocationEventAge;
-(void)setMaxMicroLocationEventAge:(double)arg1 ;
@end

