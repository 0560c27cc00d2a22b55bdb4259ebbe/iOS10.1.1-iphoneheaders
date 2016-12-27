/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCLongLookPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NCLongLookTransitionDelegateObserver.h>

@class NCNotificationShortLookViewController, NCLongLookTransitionDelegate, NSString;

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCLongLookPresentationControllerDelegate, NCLongLookTransitionDelegateObserver> {

	NCNotificationShortLookViewController* _presentingNotificationViewController;
	NCLongLookTransitionDelegate* _longLookTransitionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canResignFirstResponder;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(void)_updateWithProvidedStaticContent;
-(void)_updateWithProvidedCustomContent;
-(void)_configureScrollViewIfNecessary;
-(void)_loadLookView;
-(CGSize)_preferredCustomContentSizeForSize:(CGSize)arg1 parentContentContainerBounds:(CGRect)arg2 ;
-(void)_setPreferredCustomContentSize:(CGSize)arg1 ;
-(void)_notificationViewControllerViewDidLoad;
-(BOOL)_shouldPadScrollViewContentSizeHeight;
-(void)setNotificationRequest:(id)arg1 ;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(BOOL)isLookStyleLongLook;
-(void)longLookTransitionDelegate:(id)arg1 didBeginTransitionWithAnimator:(id)arg2 ;
-(void)longLookTransitionDelegate:(id)arg1 didEndTransitionWithAnimator:(id)arg2 completed:(BOOL)arg3 ;
-(CGRect)longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2 ;
-(BOOL)longLookPresentationControllerPreviewShouldIncludeShadow:(id)arg1 ;
-(BOOL)longLookPresentationControllerShouldRestoreSourceView:(id)arg1 ;
-(BOOL)longLookPresentationControllerShouldIncludePreview:(id)arg1 ;
-(unsigned long long)longLookPresentationControllerDismissalEdge:(id)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(BOOL)arg3 ;
-(id)_extensionIdentifier;
-(void)_handleBackgroundTap:(id)arg1 ;
-(void)_handleNotificationTap:(id)arg1 ;
-(void)_handleIconButton:(id)arg1 ;
-(void)_handleCloseButton:(id)arg1 ;
-(id)_presentingNotificationViewController;
-(double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2 ;
-(void)contentProviderDismissCustomContent:(id)arg1 animated:(BOOL)arg2 ;
@end

