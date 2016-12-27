/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardViewBase.h>

@class _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : SBDashBoardViewBase {

	_UILegibilitySettings* _legibilitySettings;
	double _alignmentPercent;

}

@property (assign,nonatomic) BOOL batteryVisible; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double desiredVisibilityDuration; 
@property (assign,nonatomic) double alignmentPercent;                                 //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
+(id)batteryChargingViewWithSingleBattery;
+(id)batteryChargingViewWithDoubleBattery;
+(id)maskImageNameForChargingBattery;
+(id)maskImageNameForInternalChargingBattery;
+(id)maskImageNameForExternalChargingBattery;
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(id)_chargePercentFont;
-(id)_updateChargeString:(id)arg1 oldLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setAlignmentPercent:(double)arg1 ;
-(double)alignmentPercent;
@end

