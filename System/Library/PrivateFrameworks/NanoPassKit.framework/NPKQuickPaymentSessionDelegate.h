/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKQuickPaymentSessionDelegate <NSObject>
@optional
-(void)paymentSession:(id)arg1 didMakePassCurrent:(id)arg2;
-(void)paymentSession:(id)arg1 willActivatePass:(id)arg2;
-(void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;
-(void)paymentSession:(id)arg1 didActivatePass:(id)arg2;
-(void)paymentSessionDidEnterField:(id)arg1;
-(void)paymentSessionDidExitField:(id)arg1;
-(void)paymentSessionDidReceiveActivityTimeout:(id)arg1;
-(void)paymentSessionDidSelectPayment:(id)arg1;
-(void)paymentSessionDidSelectValueAddedService:(id)arg1;
-(void)paymentSession:(id)arg1 didFailTransactionForPass:(id)arg2 withValueAddedServiceTransactions:(id)arg3 forValueAddedServicePasses:(id)arg4;

@end

