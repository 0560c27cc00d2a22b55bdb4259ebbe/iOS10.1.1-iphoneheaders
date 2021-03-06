/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PUSRemotePasscodeViewControllerDelegate;
@class UILabel;

@interface PUSRemotePasscodeInstructionViewController : UIViewController {

	long long _action;
	id<PUSRemotePasscodeViewControllerDelegate> _delegate;
	UILabel* _instructionLabel;

}

@property (assign,nonatomic,__weak) id<PUSRemotePasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                               //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<PUSRemotePasscodeViewControllerDelegate>)arg1 ;
-(id<PUSRemotePasscodeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithAction:(long long)arg1 ;
-(void)_cancel;
-(UILabel *)instructionLabel;
@end

