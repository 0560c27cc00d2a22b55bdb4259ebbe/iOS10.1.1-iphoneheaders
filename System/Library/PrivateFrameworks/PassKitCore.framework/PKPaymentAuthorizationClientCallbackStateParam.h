/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class CNContact, PKPaymentMethod, PKShippingMethod, PKPayment, PKServiceProviderPurchase;

@interface PKPaymentAuthorizationClientCallbackStateParam : PKPaymentAuthorizationStateParam {

	long long _kind;
	id _object;

}

@property (nonatomic,retain) id object;                                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) long long kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) CNContact * shippingContact; 
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod; 
@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
@property (nonatomic,readonly) PKPayment * payment; 
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase; 
+(id)paramWithCallbackKind:(long long)arg1 object:(id)arg2 ;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(long long)kind;
-(PKServiceProviderPurchase *)purchase;
-(void)setKind:(long long)arg1 ;
-(PKPayment *)payment;
-(PKShippingMethod *)shippingMethod;
-(PKPaymentMethod *)paymentMethod;
-(CNContact *)shippingContact;
@end

