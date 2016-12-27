/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/FBApplicationUpdateScenesTransactionObserver.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class FBUIApplicationSceneDeactivationAssertion, SBAppRepairTransaction, SBUIAnimationController, SBWorkspaceApplicationTransitionContext, NSArray, NSCountedSet, SBSceneLayoutWorkspaceTransaction, NSSet, NSString;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {

	/*^block*/id _transitionCompletion;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	/*^block*/id _layoutTransitionContinuation;
	SBAppRepairTransaction* _appRepairTransaction;
	SBUIAnimationController* _animationController;
	SBWorkspaceApplicationTransitionContext* _additionalTransitionContext;
	NSArray* _fromApplications;
	NSCountedSet* _completionDelayRequesters;
	BOOL _underLockScreenInForeground;
	BOOL _gestureInitiated;
	unsigned long long _preactivationForegroundRunningApplicationCount;
	BOOL _toAndFromApplicationsDiffer;
	BOOL _notifiedSlaves;
	BOOL _retriedAfterVoluntaryExit;
	BOOL _applicationStateNeedsCapture;
	BOOL _previousTransitionPerformedDeactivations;
	BOOL _dismissedOverlays;
	SBSceneLayoutWorkspaceTransaction* _layoutTransaction;
	NSSet* _trackedProcesses;

}

@property (nonatomic,readonly) NSArray * activatingApplications; 
@property (nonatomic,readonly) NSArray * deactivatingApplications; 
@property (nonatomic,readonly) NSArray * toApplications; 
@property (nonatomic,readonly) NSArray * fromApplications; 
@property (nonatomic,readonly) NSSet * trackedProcesses;                                           //@synthesize trackedProcesses=_trackedProcesses - In the implementation block
@property (nonatomic,readonly) SBSceneLayoutWorkspaceTransaction * layoutTransaction;              //@synthesize layoutTransaction=_layoutTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)performAdditionalTransition:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)animationControllerDidRevealApplication:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1 ;
-(void)activateApplications;
-(void)_notifySlavesIfNecessary;
-(SBSceneLayoutWorkspaceTransaction *)layoutTransaction;
-(void)_acquireResignActiveAssertion;
-(NSArray *)deactivatingApplications;
-(NSArray *)activatingApplications;
-(id)_scenesToBackground;
-(NSArray *)toApplications;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_animationDidFinish;
-(NSArray *)fromApplications;
-(void)enumerateToApplicationsWithBlock:(/*^block*/id)arg1 ;
-(void)_delayTransitionCompletionForRequester:(id)arg1 ;
-(void)_completeCurrentTransition;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg1 ;
-(BOOL)isGoingToLauncher;
-(BOOL)shouldRestoreSpringBoardContentOnCleanup;
-(void)_synchronizeWithSceneUpdates;
-(BOOL)toAndFromAppsDiffer;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)enumerateDeactivatingApplicationsWithBlock:(/*^block*/id)arg1 ;
-(void)_relinquishResignActiveAssertion;
-(void)_clearAnimation;
-(void)performToAppStateCleanup;
-(BOOL)isFromMainSwitcher;
-(BOOL)isFromSideSwitcher;
-(BOOL)isGoingToMainSwitcher;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(void)_beginTransition;
-(BOOL)_transitionWasCancelled;
-(BOOL)_willPerformAnimation;
-(BOOL)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_hasPostAnimationTasks;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)_animationDidRevealApplication;
-(void)_endTransition;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(BOOL)_shouldUpdateUnderLockStateForForegroundScenes;
-(void)_captureApplicationState;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg1 ;
-(void)enumerateNewlyActivatingApplicationsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_onlyPerformingDeactivations;
-(void)_beginAnimationIfNecessary;
-(void)_checkForAnimationCompletion;
-(void)_noteAnimationFinished;
-(void)_configureAnimation;
-(id)_applicationForScene:(id)arg1 ;
-(void)_willBegin;
-(void)dealloc;
-(id)animationController;
-(BOOL)_beginAnimation;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(id)_setupAnimation;
-(NSSet *)trackedProcesses;
-(id)_transitionContext;
@end

