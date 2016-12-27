/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKFocusView.h>

@class CAKeyframeAnimation;

@interface CMKFocusLockView : CMKFocusView {

	CAKeyframeAnimation* _lockBoundsAnimation;

}
-(double)fadeInDuration;
-(void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3 ;
-(id)_createBoundsAnimation;
-(id)_createLockBoundsAnimation;
-(void)animateLock;
-(void)animateScaleDownWithCompletion:(/*^block*/id)arg1 ;
@end

