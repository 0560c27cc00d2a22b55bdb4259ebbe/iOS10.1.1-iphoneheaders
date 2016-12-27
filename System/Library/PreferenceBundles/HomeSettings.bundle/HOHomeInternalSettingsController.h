/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface HOHomeInternalSettingsController : PSListController {

	NSArray* _forceOnboardingTopicSpecifiers;

}

@property (nonatomic,retain) NSArray * forceOnboardingTopicSpecifiers;              //@synthesize forceOnboardingTopicSpecifiers=_forceOnboardingTopicSpecifiers - In the implementation block
-(id)_globalSwitchSpecifierWithName:(id)arg1 key:(id)arg2 ;
-(void)setForceOnboarding:(id)arg1 specifier:(id)arg2 ;
-(NSArray *)forceOnboardingTopicSpecifiers;
-(void)setKillableSpecifier:(id)arg1 specifier:(id)arg2 ;
-(void)setForceOnboardingTopicSpecifiers:(NSArray *)arg1 ;
-(void)_killHome;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

