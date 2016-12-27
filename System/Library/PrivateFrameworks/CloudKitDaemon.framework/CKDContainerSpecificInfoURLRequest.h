/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	BOOL _needUserID;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;
	NSString* _iCloudAuthToken;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (nonatomic,copy) NSString * iCloudAuthToken;                    //@synthesize iCloudAuthToken=_iCloudAuthToken - In the implementation block
@property (assign,nonatomic) BOOL needUserID;                             //@synthesize needUserID=_needUserID - In the implementation block
@property (assign,nonatomic) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(id)url;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(long long)serverType;
-(id)sourceApplicationBundleIdentifier;
-(id)sourceApplicationSecondaryIdentifier;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresSignature;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(long long)partitionType;
-(BOOL)requiresConfiguration;
-(BOOL)allowsAuthedAccount;
-(BOOL)requiresDeviceID;
-(void)prepareRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasRequestBody;
-(id)additionalHeaderValues;
-(void)setICloudAuthToken:(NSString *)arg1 ;
-(BOOL)needUserID;
-(NSString *)iCloudAuthToken;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setNeedUserID:(BOOL)arg1 ;
@end
