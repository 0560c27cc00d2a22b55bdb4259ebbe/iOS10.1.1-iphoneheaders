/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class CCUIControlCenterSettingsSectionSettings, CCUIControlCenterShortcutSectionSettings;

@interface CCUIControlCenterSettings : _UISettings {

	BOOL _useNewBounce;
	double _backgroundDarkening;
	double _platterWallpaperAlpha;
	CCUIControlCenterSettingsSectionSettings* _settingsSectionSettings;
	CCUIControlCenterShortcutSectionSettings* _shortcutSectionSettings;
	double _oldBounceFriction;
	double _bounceDensityFactor;
	double _bounceResistance;
	double _minVelocity;
	double _maxVelocity;
	double _attachmentThreshold;
	double _attachmentFrequencyAbove;
	double _attachmentFrequencyBelow;
	double _attachmentVelocityDamping;
	double _attachmentMinDamping;
	double _attachmentMaxDamping;

}

@property (assign) double backgroundDarkening;                                                      //@synthesize backgroundDarkening=_backgroundDarkening - In the implementation block
@property (assign) double platterWallpaperAlpha;                                                    //@synthesize platterWallpaperAlpha=_platterWallpaperAlpha - In the implementation block
@property (retain) CCUIControlCenterSettingsSectionSettings * settingsSectionSettings;              //@synthesize settingsSectionSettings=_settingsSectionSettings - In the implementation block
@property (retain) CCUIControlCenterShortcutSectionSettings * shortcutSectionSettings;              //@synthesize shortcutSectionSettings=_shortcutSectionSettings - In the implementation block
@property (assign) BOOL useNewBounce;                                                               //@synthesize useNewBounce=_useNewBounce - In the implementation block
@property (assign) double oldBounceFriction;                                                        //@synthesize oldBounceFriction=_oldBounceFriction - In the implementation block
@property (assign) double bounceDensityFactor;                                                      //@synthesize bounceDensityFactor=_bounceDensityFactor - In the implementation block
@property (assign) double bounceResistance;                                                         //@synthesize bounceResistance=_bounceResistance - In the implementation block
@property (assign) double minVelocity;                                                              //@synthesize minVelocity=_minVelocity - In the implementation block
@property (assign) double maxVelocity;                                                              //@synthesize maxVelocity=_maxVelocity - In the implementation block
@property (assign) double attachmentThreshold;                                                      //@synthesize attachmentThreshold=_attachmentThreshold - In the implementation block
@property (assign) double attachmentFrequencyAbove;                                                 //@synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove - In the implementation block
@property (assign) double attachmentFrequencyBelow;                                                 //@synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow - In the implementation block
@property (assign) double attachmentVelocityDamping;                                                //@synthesize attachmentVelocityDamping=_attachmentVelocityDamping - In the implementation block
@property (assign) double attachmentMinDamping;                                                     //@synthesize attachmentMinDamping=_attachmentMinDamping - In the implementation block
@property (assign) double attachmentMaxDamping;                                                     //@synthesize attachmentMaxDamping=_attachmentMaxDamping - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)backgroundDarkening;
-(double)platterWallpaperAlpha;
-(void)setBackgroundDarkening:(double)arg1 ;
-(void)setPlatterWallpaperAlpha:(double)arg1 ;
-(void)setUseNewBounce:(BOOL)arg1 ;
-(void)setOldBounceFriction:(double)arg1 ;
-(void)setBounceDensityFactor:(double)arg1 ;
-(void)setBounceResistance:(double)arg1 ;
-(void)setMinVelocity:(double)arg1 ;
-(void)setMaxVelocity:(double)arg1 ;
-(void)setAttachmentThreshold:(double)arg1 ;
-(void)setAttachmentFrequencyAbove:(double)arg1 ;
-(void)setAttachmentFrequencyBelow:(double)arg1 ;
-(void)setAttachmentVelocityDamping:(double)arg1 ;
-(void)setAttachmentMinDamping:(double)arg1 ;
-(void)setAttachmentMaxDamping:(double)arg1 ;
-(CCUIControlCenterSettingsSectionSettings *)settingsSectionSettings;
-(void)setSettingsSectionSettings:(CCUIControlCenterSettingsSectionSettings *)arg1 ;
-(CCUIControlCenterShortcutSectionSettings *)shortcutSectionSettings;
-(void)setShortcutSectionSettings:(CCUIControlCenterShortcutSectionSettings *)arg1 ;
-(BOOL)useNewBounce;
-(double)oldBounceFriction;
-(double)bounceDensityFactor;
-(double)bounceResistance;
-(double)minVelocity;
-(double)maxVelocity;
-(double)attachmentThreshold;
-(double)attachmentFrequencyAbove;
-(double)attachmentFrequencyBelow;
-(double)attachmentVelocityDamping;
-(double)attachmentMinDamping;
-(double)attachmentMaxDamping;
@end

