/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContactlessInterfaceSessionDelegate <NSObject>
@optional
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
-(void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
-(void)contactlessInterfaceSessionDidSelectValueAddedService:(id)arg1;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;

@end

