/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UIViewControllerAnimatedTransitioning;
@class NSString;

@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {

	id<UIViewControllerAnimatedTransitioning> _animator;
	BOOL __suppressCrossFadeNavigationBarAnimation;

}

@property (assign,setter=_setSuppressCrossFadeNavigationBarAnimation:,nonatomic) BOOL _suppressCrossFadeNavigationBarAnimation;              //@synthesize _suppressCrossFadeNavigationBarAnimation=__suppressCrossFadeNavigationBarAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnimator:(id)arg1 ;
-(void)_setSuppressCrossFadeNavigationBarAnimation:(BOOL)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1 ;
-(BOOL)_suppressCrossFadeNavigationBarAnimation;
@end

