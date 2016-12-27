/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSString, StoreKitClientIdentity;

@interface LoadCompletedMicroPaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _applicationUsername;
	StoreKitClientIdentity* _clientIdentity;
	BOOL _partialFailure;
	/*^block*/id _paymentBatchBlock;

}

@property (copy) NSString * applicationUsername; 
@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (copy) id paymentBatchBlock; 
@property (getter=isPartialFailure,readonly) BOOL partialFailure; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_runForIdentity:(id)arg1 ;
-(id)_newFetchOperationForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 ;
-(id)paymentBatchBlock;
-(id)_copyResponseForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)isPartialFailure;
-(void)setPaymentBatchBlock:(id)arg1 ;
-(void)run;
-(NSString *)applicationUsername;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(StoreKitClientIdentity *)clientIdentity;
@end

