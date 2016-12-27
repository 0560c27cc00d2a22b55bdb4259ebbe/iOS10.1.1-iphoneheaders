/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSTimeRangeCellDelegate.h>

@class CBClient, NSDateFormatter, NSTimer, PSSpecifier;

@interface PSUIColorTemperatureController : PSListController <PSTimeRangeCellDelegate> {

	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;
	BOOL _temperatureSliderWasTracking;
	NSTimer* _blueLightReductionLabelRefreshTimer;
	BOOL _showColorTemperature;
	BOOL _showingScheduleRange;
	PSSpecifier* _scheduleRangeSpecifier;
	PSSpecifier* _scheduleSwitchSpecifier;
	PSSpecifier* _manualSwitchSpecifier;
	PSSpecifier* _temperatureSlider;

}
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)fromDetailForCell:(id)arg1 ;
-(id)toDetailForCell:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_PS4*)arg1 ;
-(id)blueLightReductionFooter;
-(void)showScheduleRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_printBlueLightStatus:(SCD_Struct_PS4*)arg1 ;
-(void)showAlertToDisableAccessibilityFiltersForBlueLightReduction:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)colorTemperatureSliderDidChange;
-(id)localizedTimeForTime:(SCD_Struct_PS2)arg1 ;
-(id)getBlueLightReductionEnabled:(id)arg1 ;
-(void)setBlueLightReductionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getBlueLightReductionScheduleEnabled:(id)arg1 ;
-(void)setBlueLightReductionSchedule:(id)arg1 forSpecifier:(id)arg2 ;
-(id)temperatureStrength:(id)arg1 ;
-(void)setTemperatureStrength:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
@end
