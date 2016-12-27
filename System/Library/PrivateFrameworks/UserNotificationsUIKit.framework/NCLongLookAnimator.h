/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCLongLookAnimator <NCViewControllerAnimatedTransitioning,UIViewControllerInteractiveTransitioning>
@property (assign,nonatomic,__weak) id<NCLongLookAnimatorDelegate> transitionAnimatorDelegate; 
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@required
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1;
-(BOOL)isCancelled;
-(BOOL)isPresenting;
-(void)setTransitionAnimatorDelegate:(id)arg1;
-(void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
-(id<NCLongLookAnimatorDelegate>)transitionAnimatorDelegate;

@end

