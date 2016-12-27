/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCLongLookAnimatorDelegate.h>
#import <libobjc.A.dylib/NCViewControllerTransitioningDelegate.h>

@protocol NCLongLookTransitionDelegateObserver;
@class NCNotificationViewController, NCLongLookPresentationController, NSString;

@interface NCLongLookTransitionDelegate : NSObject <NCLongLookAnimatorDelegate, NCViewControllerTransitioningDelegate> {

	NCNotificationViewController* _sourceShortLookVC;
	NCLongLookPresentationController* _longLookPresentationController;
	BOOL _interactive;
	id<NCLongLookTransitionDelegateObserver> _transitioningDelegateObserver;
	long long _transitionInitiator;

}

@property (assign,nonatomic,__weak) id<NCLongLookTransitionDelegateObserver> transitioningDelegateObserver;              //@synthesize transitioningDelegateObserver=_transitioningDelegateObserver - In the implementation block
@property (nonatomic,readonly) id<NCLongLookAnimator> longLookAnimator; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;                                                    //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,readonly) long long transitionInitiator;                                                            //@synthesize transitionInitiator=_transitionInitiator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInteractive;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<NCLongLookTransitionDelegateObserver>)transitioningDelegateObserver;
-(void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2 ;
-(void)setTransitioningDelegateObserver:(id<NCLongLookTransitionDelegateObserver>)arg1 ;
-(id<NCLongLookAnimator>)longLookAnimator;
-(id)initForInteractiveTransition:(BOOL)arg1 withInitiator:(long long)arg2 andSourceShortLookViewController:(id)arg3 ;
-(void)longLookAnimatorAnimationBegan:(id)arg1 ;
-(void)longLookAnimator:(id)arg1 animationEnded:(BOOL)arg2 ;
-(id)_longLookPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)_notifyObserverOfTransitionBegin:(BOOL)arg1 withAnimator:(id)arg2 completed:(BOOL)arg3 ;
-(long long)transitionInitiator;
@end

