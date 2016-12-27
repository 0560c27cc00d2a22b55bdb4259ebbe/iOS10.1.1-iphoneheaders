/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomApp.h>

@protocol SBDashBoardViewControllerProtocol, SBDashBoardWallpaperOverlay;
@class SBAlert, SBLockToAppStatusBarAnimator, SBIconAnimator, SBWindowSelfHostWrapper, UIView, SBWorkspaceTransitionRequest;

@interface SBUIAnimationZoomDownDashBoardToHome : SBUIAnimationZoomApp {

	SBAlert*<SBDashBoardViewControllerProtocol> _dashBoardViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconAnimator* _iconAnimator;
	SBWindowSelfHostWrapper* _alertWindowHostWrapper;
	UIView* _viewToAnimate;
	SBWorkspaceTransitionRequest* _transitionRequest;
	UIView*<SBDashBoardWallpaperOverlay> _wallpaperOverlay;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 zoomDirection:(unsigned long long)arg2 ;
-(id)animationSettings;
-(void)_startAnimation;
@end

