/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSynchronizedTransactionGroup.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUpdateSceneTransactionObserver.h>

@class FBApplicationProcessLaunchTransaction, NSString, NSMutableArray, FBApplicationProcess;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {

	FBApplicationProcessLaunchTransaction* _processLaunchTransaction;
	BOOL _processLaunched;
	BOOL _waitsForSceneCommits;
	NSString* _bundleID;
	NSMutableArray* _updateSceneTransactions;
	NSMutableArray* _pendingUpdateSceneBlocks;

}

@property (nonatomic,retain,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain,readonly) FBApplicationProcess * process; 
@property (assign,nonatomic) BOOL waitsForSceneCommits;                            //@synthesize waitsForSceneCommits=_waitsForSceneCommits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)_noteWillCommitUpdateForScene:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg1 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg1 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg1 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg1 ;
-(void)setWaitsForSceneCommits:(BOOL)arg1 ;
-(void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)updateSceneWithIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 initialClientSettingsProvider:(/*^block*/id)arg5 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(BOOL)waitsForSceneCommits;
-(NSString *)bundleID;
-(FBApplicationProcess *)process;
@end

