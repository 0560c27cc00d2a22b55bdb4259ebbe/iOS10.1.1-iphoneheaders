/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRestartManagerDelegate;
@class SBInitialRestartState, SBStartupTransitionController, SBRestartTransitionRequest, FBSystemService;

@interface SBRestartManager : NSObject {

	id<SBRestartManagerDelegate> _delegate;
	SBInitialRestartState* _initialRestartState;
	SBStartupTransitionController* _startupController;
	SBRestartTransitionRequest* _pendingRestartTransitionRequest;
	BOOL _isShuttingDown;
	BOOL _isRestartImminent;
	BOOL _isUserSwitchPending;
	FBSystemService* _systemService;

}

@property (assign,setter=_setUserSwitchPending:,getter=_isUserSwitchPending,nonatomic) BOOL isUserSwitchPending;              //@synthesize isUserSwitchPending=_isUserSwitchPending - In the implementation block
@property (assign,nonatomic,__weak) id<SBRestartManagerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BSTransaction*<SBStartupTransition> startupTransition; 
@property (nonatomic,readonly) SBRestartTransitionRequest * pendingRestartTransitionRequest;                                  //@synthesize pendingRestartTransitionRequest=_pendingRestartTransitionRequest - In the implementation block
@property (getter=isPendingExit,nonatomic,readonly) BOOL pendingExit; 
-(id)initWithInitialRestartState:(id)arg1 ;
-(void)initializeAndRunStartupTransition:(/*^block*/id)arg1 ;
-(BSTransaction*<SBStartupTransition>)startupTransition;
-(void)restartWithTransitionRequest:(id)arg1 ;
-(void)shutdownForReason:(id)arg1 ;
-(void)_exitIsImminent;
-(void)_setUserSwitchPending:(BOOL)arg1 ;
-(void)rebootWithContext:(id)arg1 ;
-(SBRestartTransitionRequest *)pendingRestartTransitionRequest;
-(id)_initWithInitialRestartState:(id)arg1 startupController:(id)arg2 systemService:(id)arg3 ;
-(void)_shutdownWithOptions:(unsigned long long)arg1 description:(id)arg2 ;
-(void)_persistStartupTransitionContextFromRebootContext:(id)arg1 ;
-(void)_restartWithTransitionRequest:(id)arg1 ;
-(void)_postShutdownNotification;
-(void)_killAllAppsForPendingExitWithReason:(long long)arg1 description:(id)arg2 expiration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_reallyRestartWithTransitionRequest:(id)arg1 ;
-(void)_persistStartupTransitionContextFromRestartRequest:(id)arg1 ;
-(void)_doRestartForTransition:(int)arg1 ;
-(void)___waitForeverTillBackBoarddExits;
-(BOOL)_isUserSwitchPending;
-(void)setDelegate:(id<SBRestartManagerDelegate>)arg1 ;
-(id)description;
-(id<SBRestartManagerDelegate>)delegate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isPendingExit;
-(void)rebootForReason:(id)arg1 ;
@end

