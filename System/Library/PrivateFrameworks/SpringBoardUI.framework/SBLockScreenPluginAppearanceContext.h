/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/SBLockScreenPluginMutableAppearance.h>
#import <libobjc.A.dylib/SBLockScreenPluginAppearance.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, SBLockScreenLegibilitySettings, NSString;

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying> {

	BOOL hidden;
	unsigned long long restrictedCapabilities;
	long long backgroundStyle;
	long long presentationStyle;
	long long notificationBehavior;
	SBLockScreenLegibilitySettings* legibilitySettings;
	NSArray* elementOverrides;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,copy,readonly) NSArray * elementOverrides; 
@property (nonatomic,retain,readonly) SBLockScreenLegibilitySettings * legibilitySettings; 
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)description;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)presentationStyle;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLegibilitySettings:(SBLockScreenLegibilitySettings *)arg1 ;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(unsigned long long)restrictedCapabilities;
-(void)setRestrictedCapabilities:(unsigned long long)arg1 ;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1 ;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(NSArray *)arg1 ;
-(id)initWithAppearance:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

