/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@class BrightnessSystemClient;

@interface BackLightCC : ComponentControl <tGraphDataSource> {

	BOOL isSunlightMode;
	unsigned gPowerServiceBL;
	unsigned char brightnessLevelElem;
	unsigned char brightnessLevelPointer;
	unsigned char brightnessLevelUp[8];
	unsigned char brightnessLevels[8];
	unsigned char brightnessLevelDown[8];
	unsigned char currentBrightnessLevel;
	unsigned char previousBrightnessLevel;
	int _maxLICeiling;
	int _brightnessMilliNitsCurrent;
	int _brightnessMilliNitsMaximum;
	BrightnessSystemClient* _brightnessSystemClient;
	BOOL _solarBehaviorSuppressed;

}

@property (assign,nonatomic) BOOL solarBehaviorSuppressed;              //@synthesize solarBehaviorSuppressed=_solarBehaviorSuppressed - In the implementation block
-(void)setMaxLICeiling:(int)arg1 ;
-(void)filteredMaxLoadingIndex;
-(BOOL)shouldSuppressMitigations;
-(BOOL)solarBehaviorSuppressed;
-(void)refreshCurrentLoadingIndex;
-(void)setSolarBehaviorSuppressed:(BOOL)arg1 ;
-(void)initBrightnessTable:(CFArrayRef)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(void)defaultAction;
-(id)initWithParams:(CFDictionaryRef)arg1 ;
@end

