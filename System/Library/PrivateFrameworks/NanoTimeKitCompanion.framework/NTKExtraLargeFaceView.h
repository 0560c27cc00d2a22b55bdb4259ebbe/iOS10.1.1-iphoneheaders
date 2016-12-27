/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>

@class UIView, NTKFaceColorScheme, NTKExtraLargeTimeView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, UILabel, UITapGestureRecognizer;

@interface NTKExtraLargeFaceView : NTKFaceView {

	UIView* _zoomingIconCircleView;
	UIView* _zoomingIconTimeView;
	NTKFaceColorScheme* _colorScheme;
	unsigned long long _faceColor;
	double _currentFaceViewScale;
	double _currentFaceOffsetY;
	NTKExtraLargeTimeView* _largeTimeLabel;
	NTKDigitalTimeLabel* _smallTimeLabel;
	NTKDigitalTimeLabelStyle* _smallTimeLabelStyle;
	UILabel* _timeTravelLabel;
	NTKDigitalTimeLabelStyle* _timeTravelStyle;
	UIView* _timeTravelExitView;
	UITapGestureRecognizer* _timeTravelExitRecognizer;
	BOOL _statusBarIsVisible;
	BOOL _viewsOffsetForStatusBar;
	BOOL _isEditing;
	BOOL _complicationIsVisible;
	BOOL _snapshotContentViewsLoaded;
	UIView* _complicationEditingTimeOverlayView;

}
+(id)_swatchImageForColorOption:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_layoutForegroundContainerView;
-(void)_loadLayoutRules;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_updateComplicationVisibility;
-(void)_initSmallTimeLabelIfNecessary;
-(void)_initLargeTimeLabelIfNecessary;
-(double)_statusBarOffsetForComplicationBackground;
-(void)_handleTimeTravelTapGesture:(id)arg1 ;
-(void)_configureSmallTimeLabelColors;
-(id)_timeTravelStyle;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(double)_statusBarOffsetForSmallTime;
-(id)_complicationView;
-(double)_statusBarOffsetForComplication;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(double)_smallTimeAlphaForEditMode:(long long)arg1 ;
-(void)_configureLargeTimeLabelColors;
-(void)_noteComplicationVisibilityChanged;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_wantsTimeTravelStatusModule;
-(BOOL)_needsForegroundContainerView;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(double)_verticalPaddingForStatusBar;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyShowContentForUnadornedSnapshot;
@end

