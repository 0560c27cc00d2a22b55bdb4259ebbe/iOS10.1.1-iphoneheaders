/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDFitnessFriendsIDSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 errorSendingInviteRequest:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingInviteResponse:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingFinalizeHandshake:(id)arg2;
-(void)messageCenter:(id)arg1 errorSendingWithdrawInviteRequest:(id)arg2;

@required
-(void)messageCenter:(id)arg1 didReceiveInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveInviteResponse:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveFinalizeHandshake:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;
-(void)messageCenter:(id)arg1 didReceiveWithdrawInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4;

@end

