/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSCLAccountStore, NSMutableDictionary;

@interface MSCLFacebookAccountsRequest : NSObject {

	MSCLAccountStore* _accountStore;
	/*^block*/id _responseBlock;
	NSMutableDictionary* _services;

}
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)_finishWithPages:(id)arg1 accessToken:(id)arg2 error:(id)arg3 ;
-(void)_getPagesWithAccessToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_updateCredentialsForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_pagesWithResponseDictionary:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
@end

