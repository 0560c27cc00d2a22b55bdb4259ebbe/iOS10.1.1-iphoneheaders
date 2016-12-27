/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol FBSceneHostView;
@class SBWindow, SBAlert, UIView, SBDisableAppStatusBarAlphaChangesAssertion, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeAlertToHostedApp : SBUIMainScreenAnimationController {

	SBWindow* _transitionWindow;
	SBAlert* _deactivatingAlert;
	UIView*<FBSceneHostView> _viewToAnimate;
	BOOL _reallyFinishedAnimating;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	long long _launchingOrientation;
	UIView* _fakeStatusBarViewContainer;
	BOOL _appIsTranslucent;

}

@property (setter=_setViewToAnimate:,getter=_viewToAnimate,nonatomic,retain) UIView * viewToAnimate;              //@synthesize viewToAnimate=_viewToAnimate - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_noteAnimationDidFinish;
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(id)_viewToAnimate;
-(void)_applicationDependencyStateChanged;
-(void)_maybeReportAnimationFinished;
-(id)_deactivatingAlert;
-(BOOL)_areApplicationLaunchesFinished;
-(id)_animationTimingFunction;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_reallyFinishedAnimating;
-(void)_showFakeStatusBarIfNecessary;
-(void)_removeFakeStatusBarIfNecessary;
-(BOOL)_shouldAnimateWallpaper;
-(void)_setViewToAnimate:(id)arg1 ;
-(void)dealloc;
-(id)animationSettings;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

