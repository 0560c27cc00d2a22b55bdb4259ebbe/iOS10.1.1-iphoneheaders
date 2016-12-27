/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {

	NSMutableDictionary* _animations;
	CADisplayLink* _displayLink;

}
-(id)init;
-(void)_displayLinkFired:(id)arg1 ;
-(void)cancelAnimationsForProperty:(id)arg1 ;
-(void)applyAnimation:(id)arg1 ;
-(void)_startDisplayLinkIfNecessary;
-(void)_stopDisplayLinkIfNecessary;
-(void)_applyAnimations;
-(void)_cleanupCompletedAnimations;
@end

