/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)url;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(CKDServerConfiguration *)configuration;
-(long long)serverType;
-(id)sourceApplicationBundleIdentifier;
-(id)sourceApplicationSecondaryIdentifier;
-(BOOL)allowsAnonymousAccount;
-(id)httpMethod;
-(BOOL)requiresSignature;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(Class)expectedResponseClass;
-(long long)partitionType;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(id)additionalHeaderValues;
@end

