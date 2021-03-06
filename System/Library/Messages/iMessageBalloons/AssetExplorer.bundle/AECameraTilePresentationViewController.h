/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController, AECameraTilePresentationContentView;

@interface AECameraTilePresentationViewController : UIViewController {

	UIViewController* _contentViewController;
	AECameraTilePresentationContentView* __contentView;

}

@property (nonatomic,readonly) AECameraTilePresentationContentView * _contentView;              //@synthesize _contentView=__contentView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                          //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)_adoptContentFromViewController:(id)arg1 ;
-(void)_abandonContentFromViewController:(id)arg1 ;
-(AECameraTilePresentationContentView *)_contentView;
-(long long)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(UIViewController *)contentViewController;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end

