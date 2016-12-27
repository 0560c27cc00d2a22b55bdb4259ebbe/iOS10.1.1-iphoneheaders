/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCLegacyNotificationActionsViewDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate;
@class NCNotificationRequest, NSString, NCNotificationAction;

@interface NCLegacyNotificationActionsViewController : UIViewController <NCLegacyNotificationActionsViewDelegate, NCNotificationCustomContent> {

	id<NCNotificationCustomContentDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;

}

@property (nonatomic,__weak,readonly) NCNotificationRequest * notificationRequest;                 //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@property (assign,nonatomic,__weak) NCNotificationAction * presentationSourceAction; 
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)loadView;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 ;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(BOOL)allowManualDismiss;
-(void)notificationActionsView:(id)arg1 performAction:(id)arg2 ;
@end

