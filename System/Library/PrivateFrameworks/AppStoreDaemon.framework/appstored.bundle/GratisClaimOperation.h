/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, NSData, NSDictionary, SSVGratisRequestBody, SSURLConnectionResponse;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _authenticationReasonDescription;
	NSData* _clientAuditTokenData;
	NSDictionary* _httpHeaders;
	NSDictionary* _rawOutput;
	SSVGratisRequestBody* _requestBody;
	BOOL _suppressesErrorDialogs;
	SSURLConnectionResponse* _urlResponse;

}

@property (copy) NSString * authenticationReasonDescription; 
@property (nonatomic,retain) NSData * clientAuditTokenData; 
@property (assign) BOOL suppressesErrorDialogs; 
@property (readonly) NSDictionary * rawOutput; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_accountID;
-(id)initWithRequestBody:(id)arg1 ;
-(NSDictionary *)rawOutput;
-(void)setAuthenticationReasonDescription:(NSString *)arg1 ;
-(void)setSuppressesErrorDialogs:(BOOL)arg1 ;
-(id)_newDefaultRequestProperties;
-(id)_newRetryRequestPropertiesWithURL:(id)arg1 ;
-(BOOL)suppressesErrorDialogs;
-(NSString *)authenticationReasonDescription;
-(NSData *)clientAuditTokenData;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(SSURLConnectionResponse *)URLResponse;
-(id)_authenticationContext;
-(id)_bodyData;
@end

