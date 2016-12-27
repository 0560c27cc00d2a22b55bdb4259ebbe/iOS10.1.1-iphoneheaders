/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteSecretEntryDelegate
@required
-(void)dismissRecoveryFlow:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
-(void)cancelledRemoteSecretEntry:(id)arg1;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
-(void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
-(void)performRemoteApproval:(id)arg1;
-(void)performAccountReset:(id)arg1;
-(void)finishValidation:(id)arg1 withError:(id)arg2;
-(BOOL)performingAccountRecovery;

@end

