/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBLoginAppContainerViewControllerObserver.h>

@class SBWindow, BKSDisplayRenderOverlay, BSTransaction, NSString;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {

	SBWindow* _transitionWindow;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;
	BSTransaction* _waitForLoginAppToFinishLaunchingTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_shouldDismissBanner;
-(id)_getTransitionWindow;
-(void)loginAppDidFinishLaunching:(id)arg1 ;
-(id)animationSettings;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

