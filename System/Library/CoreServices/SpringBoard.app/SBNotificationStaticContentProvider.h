/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NCNotificationViewController;

@interface SBNotificationStaticContentProvider : NCNotificationRequestContentProvider {

	NCNotificationViewController* _viewController;

}

@property (nonatomic,__weak,readonly) NCNotificationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2 ;
-(id)init;
-(NCNotificationViewController *)viewController;
-(id)initWithNotificationRequest:(id)arg1 ;
@end

