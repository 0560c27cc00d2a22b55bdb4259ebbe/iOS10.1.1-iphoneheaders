/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {

	NSString* _APIToken;
	/*^block*/id _tokenFetchedBlock;

}

@property (nonatomic,copy) NSString * APIToken;               //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id tokenFetchedBlock;              //@synthesize tokenFetchedBlock=_tokenFetchedBlock - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(void)setTokenFetchedBlock:(id)arg1 ;
-(id)tokenFetchedBlock;
-(int)operationType;
@end

