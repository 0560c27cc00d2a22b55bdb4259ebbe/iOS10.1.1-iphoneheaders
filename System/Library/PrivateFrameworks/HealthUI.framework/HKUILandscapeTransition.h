/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol HKUILandscapeTransitioningViewController, UIViewControllerAnimatedTransitioning;
@class UIViewController, NSString;

@interface HKUILandscapeTransition : NSObject <UIViewControllerTransitioningDelegate> {

	BOOL _isVisible;
	UIViewController* _presentedViewController;
	BOOL _shouldRetainViewHierarchy;
	UIViewController*<HKUILandscapeTransitioningViewController> _transitioningViewController;
	id<UIViewControllerAnimatedTransitioning> _transitionAnimator;

}

@property (nonatomic,__weak,readonly) UIViewController*<HKUILandscapeTransitioningViewController> transitioningViewController;              //@synthesize transitioningViewController=_transitioningViewController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> transitionAnimator;                                                  //@synthesize transitionAnimator=_transitionAnimator - In the implementation block
@property (assign,nonatomic) BOOL shouldRetainViewHierarchy;                                                                                //@synthesize shouldRetainViewHierarchy=_shouldRetainViewHierarchy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)orientationChanged:(id)arg1 ;
-(BOOL)_isPresentingViewController;
-(id)initWithTransitioningViewController:(id)arg1 ;
-(UIViewController*<HKUILandscapeTransitioningViewController>)transitioningViewController;
-(id<UIViewControllerAnimatedTransitioning>)transitionAnimator;
-(void)setTransitionAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(BOOL)shouldRetainViewHierarchy;
-(void)setShouldRetainViewHierarchy:(BOOL)arg1 ;
@end

