/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class NTKZeusAnalogScene;

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView {

	BOOL _isEditing;

}

@property (nonatomic,readonly) NTKZeusAnalogScene * analogScene; 
+(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 ;
+(id)_swatchColorForColorOption:(id)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(double)_verticalPaddingForStatusBar;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(CGPoint)_timeTravelStatusModuleCenter;
-(void)_loadScene;
-(void)_configureReusableTimeView:(id)arg1 ;
-(double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2 ;
-(void)_prepareTimeViewForReuse:(id)arg1 ;
-(BOOL)_timeViewBehindContentForEditMode:(long long)arg1 ;
-(double)_handAlphaForEditing:(BOOL)arg1 ;
-(double)_numbersAlphaForEditMode:(long long)arg1 ;
@end

