/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCTransitionManagerDelegate.h>
#import <libobjc.A.dylib/NCBannerPresentationTransitioningDelegateObserver.h>
#import <libobjc.A.dylib/NCLongLookPresentationControllerDelegate.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationViewController, UIView, UIViewController, UITapGestureRecognizer, NSDate, NSHashTable, NCTransitionManager, NSString;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCTransitionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, NCLongLookPresentationControllerDelegate> {

	NCBannerPresentationTransitionDelegate* _bannerPresentationTransitionDelegate;
	NCNotificationViewController* _longLookNotificationViewController;
	UIView* _contextDefiningContainerView;
	UIViewController* _contextDefiningViewController;
	UITapGestureRecognizer* _tapGesture;
	NSDate* _tapBeginTime;
	UIView* _audioAccessoryView;
	NSHashTable* _audioAccessoryViewObservers;
	NCTransitionManager* _transitionManager;

}

@property (getter=_transitionManager,nonatomic,retain) NCTransitionManager * transitionManager;                                                     //@synthesize transitionManager=_transitionManager - In the implementation block
@property (getter=_presentedLongLookViewController,nonatomic,readonly) NCNotificationViewController * presentedLongLookViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)_setDelegate:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(BOOL)_setNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(void)_updateWithProvidedStaticContent;
-(void)didReceiveNotificationRequest:(id)arg1 ;
-(void)presentLongLookAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureScrollViewIfNecessary;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(id)_presentedLongLookViewController;
-(void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2 ;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(BOOL)isShortLook;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(void)expandAndPlayAudioMessage;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(void)setInteractionEnabled:(BOOL)arg1 ;
-(BOOL)_tryDismissingShortLookInScrollView:(id)arg1 ;
-(id)_newTransitionManager;
-(void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(BOOL)arg3 ;
-(void)transitioningDelegate:(id)arg1 animatorDidCommitToTransitionWithCoordinator:(id)arg2 ;
-(id)longLookViewControllerForTransitionManager:(id)arg1 ;
-(id)presentingViewControllerForTransitionManager:(id)arg1 ;
-(void)longLookWillPresentForTransitionManager:(id)arg1 withSource:(id)arg2 ;
-(BOOL)transitionManager:(id)arg1 shouldBeginInteractionWithSource:(id)arg2 ;
-(void)transitionManagerWillBeginUserInteraction:(id)arg1 ;
-(void)longLookWillDismissForTransitionManager:(id)arg1 ;
-(void)transitionManagerDidEndUserInteraction:(id)arg1 ;
-(void)transitionManager:(id)arg1 didPresentLongLook:(BOOL)arg2 ;
-(void)transitionManager:(id)arg1 didDismissLongLook:(BOOL)arg2 ;
-(CGRect)longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2 ;
-(BOOL)longLookPresentationControllerPreviewShouldIncludeShadow:(id)arg1 ;
-(BOOL)longLookPresentationControllerShouldRestoreSourceView:(id)arg1 ;
-(void)addAudioAccessoryViewObserver:(id)arg1 ;
-(void)_setAudioAccessoryView:(id)arg1 ;
-(id)_transitionManager;
-(void)_loadExtensionIfNecessary;
-(id)_notificationShortLookViewIfLoaded;
-(void)_handleTapOnView:(id)arg1 ;
-(BOOL)_shouldAddHintTextToLookView;
-(id)_customContentProvidingViewControllerCreateIfNecessary;
-(void)_resizeViewToFitContainerView;
-(CGRect)_frameForTransitionViewInScrollView;
-(void)removeAudioAccesoryViewObserver:(id)arg1 ;
-(void)setTransitionManager:(NCTransitionManager *)arg1 ;
@end

