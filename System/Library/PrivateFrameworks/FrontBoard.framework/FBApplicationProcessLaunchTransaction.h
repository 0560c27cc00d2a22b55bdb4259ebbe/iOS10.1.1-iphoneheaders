/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class FBProcessManager, NSString, FBApplicationProcess, FBWaitForProcessDeathTransaction, FBProcessExecutionContext;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {

	FBProcessManager* _processManager;
	NSString* _bundleID;
	FBApplicationProcess* _process;
	/*^block*/id _executionContextProvider;
	FBWaitForProcessDeathTransaction* _deathTransaction;
	FBProcessExecutionContext* _executionContext;
	int _interruptedOrComplete;
	BOOL _failedLaunch;
	BOOL _exited;

}

@property (nonatomic,retain,readonly) FBApplicationProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) BOOL failedLaunch;                                  //@synthesize failedLaunch=_failedLaunch - In the implementation block
@property (nonatomic,readonly) BOOL exited;                                        //@synthesize exited=_exited - In the implementation block
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_didComplete;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_queue_launchProcess:(id)arg1 ;
-(void)_willComplete;
-(void)_queue_processWillLaunch:(id)arg1 ;
-(void)_queue_finishProcessLaunch:(BOOL)arg1 ;
-(id)initWithApplicationProcess:(id)arg1 ;
-(void)_queue_noteExited;
-(BOOL)failedLaunch;
-(BOOL)exited;
-(FBApplicationProcess *)process;
@end

