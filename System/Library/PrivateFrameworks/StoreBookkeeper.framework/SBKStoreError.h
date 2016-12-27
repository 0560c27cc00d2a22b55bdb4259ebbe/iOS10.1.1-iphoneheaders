/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <Foundation/NSError.h>

@class SBKTransaction, NSString;

@interface SBKStoreError : NSError {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;                             //@synthesize transaction=_transaction - In the implementation block
@property (readonly) BOOL isAuthenticationError; 
@property (readonly) BOOL isAccountsChangedError; 
@property (readonly) BOOL isRecoverableError; 
@property (readonly) BOOL isClampError; 
@property (readonly) BOOL isTransactionCancelledError; 
@property (readonly) BOOL isTransactionMissingInformationError; 
@property (copy,readonly) NSString * previousStoreAccountName; 
@property (copy,readonly) NSString * currentStoreAccountName; 
@property (readonly) double retrySeconds; 
+(id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3 ;
+(id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3 ;
+(id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 ;
+(id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4 ;
+(id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3 ;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4 ;
+(id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBKTransaction *)transaction;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(BOOL)isClampError;
-(double)retrySeconds;
-(BOOL)isAuthenticationError;
-(BOOL)isTransactionCancelledError;
-(BOOL)isAccountsChangedError;
-(BOOL)isRecoverableError;
-(BOOL)isTransactionMissingInformationError;
-(NSString *)previousStoreAccountName;
-(NSString *)currentStoreAccountName;
@end

