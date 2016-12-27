/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSArray, NPSDomainAccessor;

@interface AXReduceMotionController : AccessibilityBaseListController {

	BOOL _reduceMotionEnabled;
	NSArray* _autoplayMessagesEffectsSpecifiers;
	NPSDomainAccessor* _domainAccessor;

}

@property (assign,nonatomic) BOOL reduceMotionEnabled;                                 //@synthesize reduceMotionEnabled=_reduceMotionEnabled - In the implementation block
@property (nonatomic,retain) NSArray * autoplayMessagesEffectsSpecifiers;              //@synthesize autoplayMessagesEffectsSpecifiers=_autoplayMessagesEffectsSpecifiers - In the implementation block
@property (assign,nonatomic) NPSDomainAccessor * domainAccessor;                       //@synthesize domainAccessor=_domainAccessor - In the implementation block
-(id)autoplayMessagesEffects:(id)arg1 ;
-(void)setReduceMotionEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setGizmoPref:(id)arg1 forKey:(id)arg2 ;
-(id)reduceMotionEnabled:(id)arg1 ;
-(NSArray *)autoplayMessagesEffectsSpecifiers;
-(void)setAutoplayMessagesEffects:(id)arg1 specifier:(id)arg2 ;
-(void)setAutoplayMessagesEffectsSpecifiers:(NSArray *)arg1 ;
-(id)_autoplayMessagesEffectsSpecifiers;
-(void)dealloc;
-(void)setReduceMotionEnabled:(BOOL)arg1 ;
-(BOOL)reduceMotionEnabled;
-(NPSDomainAccessor *)domainAccessor;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)specifiers;
@end

