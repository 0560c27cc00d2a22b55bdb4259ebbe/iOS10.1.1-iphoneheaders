/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSCLTwitterAuthenticationRequest : NSObject {

	NSString* _password;
	/*^block*/id _responseBlock;
	NSString* _username;

}
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2 ;
-(void)_authenticateUsername:(id)arg1 password:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_consumerKey;
-(id)_consumerSecret;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

