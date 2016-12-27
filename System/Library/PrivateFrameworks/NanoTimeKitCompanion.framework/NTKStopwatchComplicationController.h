/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@interface NTKStopwatchComplicationController : NTKComplicationController

@property (nonatomic,__weak,readonly) id<NTKStopwatchComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 ;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_handleLocaleChange;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleTimeFormatChange;
-(void)_stopStopwatchTimerUpdates;
-(void)_startStopwatchTimerUpdates;
-(void)_handleReloadNotification;
@end

