/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ContextAwareObject.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class BrightnessSystemClient, NSObject;

@interface SolarDetectorSemantic : ContextAwareObject <tGraphDataSource> {

	BrightnessSystemClient* _brightnessSystemClient;
	int _thermalSunlightStateToken;
	int _currentSemanticAmbientLightLevel;
	NSObject*<OS_dispatch_queue> _update_queue;
	int _currentSemanticLux;
	int _sunlightState;
	int _sunlightStatePrevious;
	int _sunlightOverrideState;
	int _sunlightOverrideStatePrevious;

}
-(BOOL)isContextTriggered;
-(BOOL)synchContext;
-(int)getContextState;
-(void)setInfoOnlySensorsActive:(BOOL)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(void)updateCurrentSemanticAmbientLightLevel:(int)arg1 ;
-(void)initializeSemanticBrightnessHandling;
-(void)handleBrightnessClientNotification:(id)arg1 value:(id)arg2 ;
-(void)processPotentialSolarStateChange:(BOOL)arg1 ;
-(id)init;
@end

