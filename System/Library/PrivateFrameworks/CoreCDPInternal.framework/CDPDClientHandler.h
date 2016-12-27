/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDaemonProtocol.h>

@class NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {

	NSXPCConnection* _connection;
	unsigned long long _entitlements;
	unsigned long long _clientType;
	id _notificationObject;

}
-(void)dealloc;
-(void)_removeObserver;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3 ;
-(void)clearFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_allowStateMachineAccess;
-(void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1 ;
-(void)postFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_allowFollowUps;
-(BOOL)_allowDataRecovery;
-(void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldPerformRepairForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hasLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)isUserVisibleKeychainSyncEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setStingrayState:(BOOL)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getStingrayStateForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getStingrayDisableEligibility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preflightStingrayDisableForContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recoverIDMSRecoveryDictionaryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_allowUtilityAccess;
@end

