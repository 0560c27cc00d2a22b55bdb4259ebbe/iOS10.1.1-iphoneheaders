/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerRequestFactory : NSObject
+(id)sharedFactory;
+(id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(BOOL)arg2 error:(id*)arg3 ;
+(id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id*)arg4 ;
+(id)_logoutSAMLRequestStringWithError:(id*)arg1 ;
-(id)logoutApplicationControllerRequest;
-(id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2 ;
-(id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(BOOL)arg2 ;
-(id)_applicationControllerRequestWithType:(long long)arg1 SAMLRequestString:(id)arg2 authenticationToken:(id)arg3 requestorVerificationToken:(id)arg4 userInfo:(id)arg5 ;
@end

