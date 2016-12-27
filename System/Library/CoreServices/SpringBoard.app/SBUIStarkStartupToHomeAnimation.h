/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupAnimation.h>

@class UIStatusBar, SBIconAnimator;

@interface SBUIStarkStartupToHomeAnimation : SBUIStarkStartupAnimation {

	UIStatusBar* _fakeStatusBar;
	SBIconAnimator* _iconAnimator;
	BOOL _finishedCleanup;

}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)__startAnimation;
-(void)_abortAnimation;
-(void)_cleanupEverything;
-(id)animationSettings;
-(void)_didComplete;
-(void)_startAnimation;
@end
