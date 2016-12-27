/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBSceneLayoutAnimationWrapperView, NSArray, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBMainAlertManager* _alertManager;
	SBSceneLayoutAnimationWrapperView* _appLayoutWrapperView;
	NSArray* _accessoryHostWrappers;
	UIView* _alertContextHostView;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

