/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPaymentToken, PKPayment, PKServiceProviderPurchase, NSString;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {

	PKPaymentToken* _paymentToken;
	PKPayment* _payment;
	PKServiceProviderPurchase* _purchase;
	NSString* _purchaseTransactionIdentifier;

}

@property (nonatomic,retain) PKPaymentToken * paymentToken;                       //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                 //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;                //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSString * purchaseTransactionIdentifier;              //@synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier - In the implementation block
+(id)paramWithPayment:(id)arg1 ;
+(id)paramWithPaymentToken:(id)arg1 ;
+(id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2 ;
-(id)description;
-(PKServiceProviderPurchase *)purchase;
-(NSString *)purchaseTransactionIdentifier;
-(PKPaymentToken *)paymentToken;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(void)setPaymentToken:(PKPaymentToken *)arg1 ;
-(void)setPayment:(PKPayment *)arg1 ;
-(void)setPurchaseTransactionIdentifier:(NSString *)arg1 ;
-(PKPayment *)payment;
@end

