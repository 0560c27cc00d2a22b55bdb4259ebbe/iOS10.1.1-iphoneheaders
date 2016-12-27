/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject {

	SBLockOverlayContext* _from;
	SBLockOverlayContext* _to;
	SBLockScreenViewController* _lockScreenVC;

}
+(id)underlayRequesterNameForContext:(id)arg1 ;
-(id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3 ;
-(void)performTransitionWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockContent;
@end

