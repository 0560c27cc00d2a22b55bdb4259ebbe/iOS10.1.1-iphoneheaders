/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {

	BOOL _onlyFetchPCSInfo;
	NSArray* _recordZones;
	/*^block*/id _recordZoneFetchedBlock;
	NSArray* _zoneIDs;
	NSMutableDictionary* _zoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDByRequestID;              //@synthesize zoneIDByRequestID=_zoneIDByRequestID - In the implementation block
@property (nonatomic,readonly) NSArray * recordZones;                              //@synthesize recordZones=_recordZones - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,copy) id recordZoneFetchedBlock;                              //@synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock - In the implementation block
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)onlyFetchPCSInfo;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setRecordZoneFetchedBlock:(id)arg1 ;
-(NSMutableDictionary *)zoneIDByRequestID;
-(id)recordZoneFetchedBlock;
-(void)setZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
-(NSArray *)recordZones;
-(id)initWithRecordZoneIDs:(id)arg1 ;
@end

