/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDAcceptSharesURLRequest : CKDURLRequest {

	/*^block*/id _shareAcceptedBlock;
	NSArray* _shareMetadatasToAccept;
	NSMutableDictionary* _shareMetadataByRequestID;

}

@property (nonatomic,retain) NSArray * shareMetadatasToAccept;                            //@synthesize shareMetadatasToAccept=_shareMetadatasToAccept - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadataByRequestID;              //@synthesize shareMetadataByRequestID=_shareMetadataByRequestID - In the implementation block
@property (nonatomic,copy) id shareAcceptedBlock;                                         //@synthesize shareAcceptedBlock=_shareAcceptedBlock - In the implementation block
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)shareMetadatasToAccept;
-(NSMutableDictionary *)shareMetadataByRequestID;
-(id)shareAcceptedBlock;
-(id)initWithShareMetadatasToAccept:(id)arg1 ;
-(void)setShareAcceptedBlock:(id)arg1 ;
-(void)setShareMetadatasToAccept:(NSArray *)arg1 ;
-(void)setShareMetadataByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end
