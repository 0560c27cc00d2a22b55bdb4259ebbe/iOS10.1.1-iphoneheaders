/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUCameraStreamFullScreenAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class HMCameraSnapshot, NSString;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {

	HMCameraSnapshot* _cameraSnapshot;

}

@property (nonatomic,readonly) HMCameraSnapshot * cameraSnapshot;              //@synthesize cameraSnapshot=_cameraSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(HMCameraSnapshot *)cameraSnapshot;
-(id)initWithSourceFrameInPresentingView:(CGRect)arg1 cameraSnapshot:(id)arg2 ;
@end

