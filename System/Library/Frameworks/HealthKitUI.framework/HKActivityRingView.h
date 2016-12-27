/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class HKRingsView, _HKShapeView, HKActivitySummary;

@interface HKActivityRingView : UIView {

	HKRingsView* _ringsView;
	_HKShapeView* _maskView;
	HKActivitySummary* _activitySummary;
	double _ringInsetPercentage;

}

@property (assign,setter=_setRingInsetPercentage:,getter=_ringInsetPercentage,nonatomic) double ringInsetPercentage;              //@synthesize ringInsetPercentage=_ringInsetPercentage - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;                                                                 //@synthesize activitySummary=_activitySummary - In the implementation block
+(id)_iconSpriteImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_snapshotImage;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(HKActivitySummary *)activitySummary;
-(double)_ringDiameter;
-(void)_setUpAfterInit;
-(void)_setUpRingsView;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateMaskPath;
-(void)_updateRingsViewDiameter;
-(void)_updateRingsViewDiameterLegacy;
-(void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3 ;
-(void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3 ;
-(void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1 ;
-(void)_setActivityRingViewBackgroundColor:(id)arg1 ;
-(void)_displayIcons;
-(void)_setActivitySummary:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_ringInsetPercentage;
-(void)_setRingInsetPercentage:(double)arg1 ;
@end

