/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIView;

@interface RPPictureInPictureViewController : UIViewController {

	UIView* _contentView;
	long long _currentAlignment;
	CGPoint _lastTouchPoint;

}

@property (assign,nonatomic) CGPoint lastTouchPoint;                  //@synthesize lastTouchPoint=_lastTouchPoint - In the implementation block
@property (assign,nonatomic) long long currentAlignment;              //@synthesize currentAlignment=_currentAlignment - In the implementation block
@property (assign,nonatomic) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLastTouchPoint:(CGPoint)arg1 ;
-(CGPoint)lastTouchPoint;
-(void)viewDidPan:(id)arg1 ;
-(void)updateContentViewWithAlignment:(long long)arg1 size:(CGSize)arg2 ;
-(long long)currentAlignment;
-(void)setCurrentAlignment:(long long)arg1 ;
@end

