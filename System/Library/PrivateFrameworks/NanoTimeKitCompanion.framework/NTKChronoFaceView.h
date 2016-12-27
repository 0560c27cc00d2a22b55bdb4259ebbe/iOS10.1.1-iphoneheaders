/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>
#import <libobjc.A.dylib/NTKUtilityComplicationFactoryDelegate.h>

@class NTKStopwatchButton, NTKChronoButton, NTKUtilityComplicationFactory, NTKChronoPalette, UIColor, UILabel, NTKTimeIntervalLabel, _LapLabel, NTKChronoScene, NTKChronoHandsView, NSString;

@interface NTKChronoFaceView : NTKSpriteKitAnalogFaceView <NTKUtilityComplicationFactoryDelegate> {

	NTKStopwatchButton* _startSessionButton;
	NTKChronoButton* _pauseButton;
	NTKChronoButton* _lapResetButton;
	NTKUtilityComplicationFactory* _complicationFactory;
	NTKChronoPalette* _palette;
	UIColor* _labelColor;
	UILabel* _totalLabel;
	NTKTimeIntervalLabel* _totalTimeLabel;
	NTKTimeIntervalLabel* _lapTimeLabel;
	_LapLabel* _lapLabel;
	unsigned long long _currentMode;
	double _lastStartTime;

}

@property (nonatomic,readonly) NTKChronoScene * chronoScene; 
@property (nonatomic,readonly) NTKChronoHandsView * timeView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 ;
+(Class)_timeViewClass;
+(id)_swatchColorForColorOption:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reload;
-(BOOL)inSession;
-(void)stateChanged;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_layoutForegroundContainerView;
-(void)_loadLayoutRules;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(BOOL)_usesCustomZoom;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_needsForegroundContainerView;
-(double)_verticalPaddingForStatusBar;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(double)_handsAlphaForEditMode:(long long)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1 ;
-(void)_stopStopwatchUpdates;
-(void)setUserInteractionForButtonsEnabled:(BOOL)arg1 ;
-(void)fadeStartSessionButtonToAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)_pauseButtonPressed;
-(void)_lapResetButtonPressed;
-(void)_startSessionButtonPressed;
-(void)_showAppropriateModeAnimated:(BOOL)arg1 ;
-(void)_updateComplicationFactoryWithDateComplicationView:(id)arg1 ;
-(void)_configureComplicationAlphasForFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)_buttonAlphaForEditMode:(long long)arg1 ;
-(id)_dateForegroundColorForEditMode:(long long)arg1 ;
-(id)_dateAccentColorForEditMode:(long long)arg1 ;
-(void)_applyPaletteToTimeView:(id)arg1 ;
-(NTKChronoScene *)chronoScene;
-(void)updateStartSessionButtonGlyph;
-(void)_reconsiderStopwatchUpdates;
-(void)_applyTransformToForegroundViews:(CGAffineTransform)arg1 ;
-(void)_enumerateChronoModeViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTimeModeViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_dateComplicationFontForStyle:(unsigned long long)arg1 ;
-(BOOL)startStop;
-(void)_showTimeModeAnimated:(BOOL)arg1 ;
-(void)_loadTimeModeViews;
-(void)_loadChronoModeViews;
-(void)fadeInLowerSubdialAnimated:(BOOL)arg1 ;
-(void)_setDateComplicationAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)fadeOutLowerSubdialAnimated:(BOOL)arg1 ;
-(void)_updateStopwatchLabels;
-(void)_startStopwatchUpdates;
-(CGPoint)_dateComplicationCenterOffset;
-(CGPoint)_dateComplicationRightAlignment;
-(void)_loadScene;
-(BOOL)_supportsUnadornedSnapshot;
-(BOOL)_handsAreInForegroundForEditMode:(long long)arg1 ;
-(BOOL)_wantsStatusBarHidden;
-(void)_considerUpdatingLabels;
-(void)_reloadStopwatchState;
-(void)_showChronographModeAnimated:(BOOL)arg1 ;
-(void)_updateStopwatchButtons;
-(BOOL)lapReset;
-(void)lapAdded;
-(void)_updateDateComplicationPositionIfNecessary;
@end

