/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardModalViewControllerBase.h>
#import <SpringBoard/SBDashBoardModalViewDelegate.h>

@class SBFDeviceBlockTimer, NSString;

@interface SBDashBoardDeviceBlockViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate> {

	SBFDeviceBlockTimer* _blockTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateBehavior:(id)arg1 ;
-(long long)presentationPriority;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateText;
@end

