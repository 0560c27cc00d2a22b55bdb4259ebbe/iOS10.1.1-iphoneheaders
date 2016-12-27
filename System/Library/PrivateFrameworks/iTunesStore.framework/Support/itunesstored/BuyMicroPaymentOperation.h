/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSData, StoreKitClientIdentity, MicroPaymentQueueResponse;

@interface BuyMicroPaymentOperation : ISOperation {

	NSString* _applicationUsername;
	NSString* _buyParameters;
	NSData* _clientAuditTokenData;
	StoreKitClientIdentity* _clientIdentity;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	MicroPaymentQueueResponse* _response;
	BOOL _simulatesAskToBuyInSandbox;

}

@property (copy) NSString * applicationUsername; 
@property (copy) NSString * buyParameters; 
@property (retain) NSData * clientAuditTokenData; 
@property (retain) StoreKitClientIdentity * clientIdentity; 
@property (copy) NSString * partnerIdentifier; 
@property (copy) NSString * partnerTransactionIdentifier; 
@property (copy) NSString * productIdentifier; 
@property (assign) long long quantity; 
@property (copy) NSData * requestData; 
@property (assign) BOOL simulatesAskToBuyInSandbox; 
@property (readonly) MicroPaymentQueueResponse * response; 
-(void)_runPurchaseOperation;
-(id)_fullBuyParameters;
-(void)setQuantity:(long long)arg1 ;
-(NSData *)clientAuditTokenData;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(MicroPaymentQueueResponse *)response;
-(void)run;
-(NSString *)applicationUsername;
-(BOOL)simulatesAskToBuyInSandbox;
-(NSString *)partnerTransactionIdentifier;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(void)setSimulatesAskToBuyInSandbox:(BOOL)arg1 ;
-(void)setPartnerTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)partnerIdentifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(StoreKitClientIdentity *)clientIdentity;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(long long)quantity;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
@end

