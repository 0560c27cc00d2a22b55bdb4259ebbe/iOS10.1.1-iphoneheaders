/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>
#import <SpringBoard/SBIconAnimatorDelegate.h>

@class UIView, SBIconAnimator, SBAlert, NSString;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {

	UIView* _viewToAnimate;
	SBIconAnimator* _iconAnimator;
	SBAlert* _alertImpersonator;
	BOOL _animationFinished;
	BOOL _fromAssistant;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(id)_viewToAnimate;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)_applicationDependencyStateChanged;
-(void)_cleanupHosting;
-(void)_prepareZoom;
-(void)_noteZoomDidFinish;
-(void)_noteDependencyDidInvalidate;
-(void)_animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_setReferenceIconViewIsInTransitionIfAppropriate:(BOOL)arg1 ;
-(void)dealloc;
-(id)animationSettings;
-(double)_animationDelay;
-(void)_startAnimation;
@end

