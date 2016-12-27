/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBSwitchAppSwipeTransactionDelegate.h>

@class FBUIApplicationSceneDeactivationAssertion, SBWorkspaceApplicationTransitionContext, SBSwitchAppSwipeTransaction, SBSwitchAppList, NSString;

@interface SBSwitchAppSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBSwitchAppSwipeTransactionDelegate> {

	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBWorkspaceApplicationTransitionContext* _currentTransitionContext;
	BOOL _newGesturePending;
	SBSwitchAppSwipeTransaction* _trackingSwipeTransaction;
	SBSwitchAppList* _switchAppList;

}

@property (nonatomic,copy) SBSwitchAppList * switchAppList;              //@synthesize switchAppList=_switchAppList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)setSwitchAppList:(SBSwitchAppList *)arg1 ;
-(void)swipeTransactionFinishedAnimating:(id)arg1 ;
-(void)_lockOrientation:(long long)arg1 ;
-(void)_unlockOrientation;
-(void)_beginNextSwipeTransaction;
-(void)_interruptGestureIfAppropriate;
-(SBSwitchAppList *)switchAppList;
-(void)dealloc;
-(void)_didComplete;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
@end
