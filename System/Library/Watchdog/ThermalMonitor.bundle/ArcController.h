/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class CommonProduct, NSObject;

@interface ArcController : NSObject <tGraphDataSource> {

	CommonProduct* _product;
	NSObject*<OS_dispatch_queue> _arcQueue;
	int _mitigationsActive;
	int _thresholdModuleTemperature;
	int _thresholdModuleTemperatureHysteresis;
	int _thresholdVirtualTemperature;
	int _thresholdVirtualTemperatureHysteresis;
	float _gainMitigated;
	float _gainUnmitigated;
	int _latestModuleTemperature;
	int _latestVirtualTemperature;
	int _originalThresholdModuleTemperature;
	int _originalThresholdVirtualTemperature;

}
-(id)initWithParams:(id)arg1 product:(id)arg2 ;
-(void)overrideParam:(id)arg1 value:(int)arg2 ;
-(void)updateInternal;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)init;
-(void)update;
@end
