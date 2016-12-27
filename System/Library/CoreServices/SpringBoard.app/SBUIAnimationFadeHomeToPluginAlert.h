/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeHomeToPluginAlert : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _alert;
	BOOL _alertIsTransparent;
	BOOL _alertViewIsAnimatingItself;
	BOOL _finishedPrimaryFadeAnimation;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_startAnimation;
@end

