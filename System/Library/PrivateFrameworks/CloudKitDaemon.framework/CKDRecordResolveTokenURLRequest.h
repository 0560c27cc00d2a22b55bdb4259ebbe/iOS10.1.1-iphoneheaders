/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSSet, NSArray, NSMutableDictionary;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest {

	BOOL _shouldFetchRootRecord;
	NSSet* _rootRecordDesiredKeySet;
	/*^block*/id _tokenResolveBlock;
	NSArray* _lookupInfos;
	NSMutableDictionary* _lookupInfosByRequestID;

}

@property (nonatomic,retain) NSArray * lookupInfos;                                     //@synthesize lookupInfos=_lookupInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lookupInfosByRequestID;              //@synthesize lookupInfosByRequestID=_lookupInfosByRequestID - In the implementation block
@property (nonatomic,retain) NSSet * rootRecordDesiredKeySet;                           //@synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,copy) id tokenResolveBlock;                                        //@synthesize tokenResolveBlock=_tokenResolveBlock - In the implementation block
-(id)sourceApplicationBundleIdentifier;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(id)initWithShortTokenLookupInfos:(id)arg1 ;
-(void)setRootRecordDesiredKeySet:(NSSet *)arg1 ;
-(void)setTokenResolveBlock:(id)arg1 ;
-(NSArray *)lookupInfos;
-(NSSet *)rootRecordDesiredKeySet;
-(NSMutableDictionary *)lookupInfosByRequestID;
-(id)tokenResolveBlock;
-(void)setLookupInfos:(NSArray *)arg1 ;
-(void)setLookupInfosByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end

