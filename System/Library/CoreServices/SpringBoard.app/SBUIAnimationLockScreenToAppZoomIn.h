/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBSceneLayoutAnimationWrapperView, SBWindowSelfHostWrapper, UIView, NSMutableArray, SBAppStatusBarSettingsAssertion, SBUILockScreenNotificationAnimationHandler;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;
	SBWindowSelfHostWrapper* _pipWindowWrapper;
	UIView* _viewToAnimate;
	NSMutableArray* _appsRequiringHostView;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _finishedNotificationAnimations;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBUILockScreenNotificationAnimationHandler* _notificationAnimationHandler;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_finishedZooming;
-(id)_lockScreenViewController;
-(void)_applicationDependencyStateChanged;
-(double)initialAppViewScale;
-(void)_doAnimation:(/*^block*/id)arg1 ;
-(void)_noteNotificationAnimationsDidFinish;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(void)_willSetupStartDependencies;
-(BOOL)isReasonableMomentToInterrupt;
-(void)dealloc;
-(id)animationSettings;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

