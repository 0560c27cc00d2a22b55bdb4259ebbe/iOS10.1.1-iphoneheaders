/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class SBLockScreenViewController, CADisplayLink, NSObject;

@interface SBUILockScreenNotificationAnimationHandler : NSObject {

	SBLockScreenViewController* _lockScreenViewController;
	CADisplayLink* _displayLink;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)performAnimationWithAdditionalAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)dealloc;
@end

