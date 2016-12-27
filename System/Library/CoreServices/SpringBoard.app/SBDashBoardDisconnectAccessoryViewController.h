/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>
#import <SpringBoard/SBDisconnectAccessoryViewDelegate.h>

@class NSString;

@interface SBDashBoardDisconnectAccessoryViewController : SBDashBoardViewControllerBase <SBDisconnectAccessoryViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(long long)presentationPriority;
-(void)_updateViewMode;
-(void)didInteractWithDisconnectAccessoryView:(id)arg1 ;
-(void)didPerformActionForDisconnectAccessoryView:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationStyle;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_resetIdleTimer;
-(long long)presentationType;
@end

