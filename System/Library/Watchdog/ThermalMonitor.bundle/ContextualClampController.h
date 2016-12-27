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
@class CommonProduct, BackLightCC, TableDrivenLowTempController, NSObject;

@interface ContextualClampController : NSObject <tGraphDataSource> {

	CommonProduct* _product;
	BackLightCC* _backlightController;
	unsigned _pmuService;
	unsigned _strobeService;
	int _lowTempPerfCapCPU;
	int _lowTempPerfCapGPU;
	int _lowTempPerfCapBL;
	int _lowTempIndexPreUVLO;
	int _lowTempGainSpeaker;
	int _lowTempMaxStrobe;
	BOOL _rearCameraPowered;
	int _cameraFloorCPU;
	int _cameraFloorGPU;
	int _mitigationControllerListID;
	int _coldPressureNotificationToken;
	unsigned long long _coldPressureState;
	int _coldThresholdHeavy;
	int _coldThresholdModerate;
	int _coldThresholdHysteresis;
	TableDrivenLowTempController* _lowTempClampCPU;
	TableDrivenLowTempController* _lowTempClampGPU;
	TableDrivenLowTempController* _lowTempClampBL;
	TableDrivenLowTempController* _lowTempClampPreUVLO;
	TableDrivenLowTempController* _lowTempClampSpeaker;
	TableDrivenLowTempController* _lowTempClampStrobe;
	int _rearCameraPowerStateToken;
	NSObject*<OS_dispatch_queue> _clampQueue;

}

@property (assign,nonatomic) int rearCameraPowerStateToken;                        //@synthesize rearCameraPowerStateToken=_rearCameraPowerStateToken - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> clampQueue;              //@synthesize clampQueue=_clampQueue - In the implementation block
-(int)rearCameraPowerStateToken;
-(void)updateMaxLIFloorsAndCeilings;
-(NSObject*<OS_dispatch_queue>)clampQueue;
-(void)updateInternal;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)initWithParams:(id)arg1 backlightController:(id)arg2 product:(id)arg3 ;
-(void)handleRearCameraPowerStateNotification:(unsigned long long)arg1 ;
-(void)setRearCameraPowerStateToken:(int)arg1 ;
-(void)setClampQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)update;
@end

