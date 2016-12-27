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

@interface AmbientLightSensorComponent : ContextAwareObject <tGraphDataSource> {

	int previousSunlightLoadingIndexValue;
	int sunlightLoadingIndexValue;
	int thermalSunlightStateToken;
	int temperature;
	int ALS_FS;
	int ALS_IR;
	int IR_PRED;
	IOHIDEventSystemClientRef _hidEventSystem;
	IOHIDServiceClientRef _service;

}

@property (nonatomic,readonly) int temperature; 
@property (nonatomic,readonly) int ALS_FS; 
@property (nonatomic,readonly) int ALS_IR; 
@property (nonatomic,readonly) int IR_PRED; 
-(BOOL)isContextTriggered;
-(int)IR_PRED;
-(BOOL)synchContext;
-(int)getContextState;
-(CFArrayRef)copySensorArray;
-(void)initHIDServices;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(int)ALS_FS;
-(int)ALS_IR;
-(id)init;
-(int)temperature;
@end

