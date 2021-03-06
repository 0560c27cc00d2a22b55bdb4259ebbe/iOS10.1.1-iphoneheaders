/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMutableAuthenticationContext, NSString;

@interface PurchaseAuthenticateOperation : ISOperation {

	/*^block*/id _authenticationBlock;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (copy) id authenticationBlock; 
@property (copy) NSString * clientIdentifierHeader; 
-(void)setAuthenticationBlock:(id)arg1 ;
-(id)_clientIdentifierForPurchases:(id)arg1 ;
-(id)_userAgentForPurchases:(id)arg1 ;
-(id)authenticationBlock;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)dealloc;
-(void)run;
-(id)initWithPurchases:(id)arg1 ;
@end

