/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface VoiceOverController : PSListController {

	NPSDomainAccessor* _domainAccessor;
	NPSDomainAccessor* _globalDomainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                    //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
-(void)setHintsEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(BOOL)_gizmoHasTapticTime;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_gizmoLocaleIsRTL;
-(id)hintsEnabled:(id)arg1 ;
-(id)voiceOverGestureDirectionSummary:(id)arg1 ;
-(void)setVoiceOverTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)speakingRate:(id)arg1 ;
-(id)screenCurtain:(id)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(void)setSpeakTimeOnWake:(id)arg1 specifier:(id)arg2 ;
-(void)setScreenCurtain:(id)arg1 specifier:(id)arg2 ;
-(id)voiceOverTapticTimeSummary:(id)arg1 ;
-(id)speakTimeOnWake:(id)arg1 ;
-(void)setSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)reload;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)volume;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end

