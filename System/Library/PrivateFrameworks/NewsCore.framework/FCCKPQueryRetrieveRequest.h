/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPQuery, FCCKPRequestedFields, FCCKPRecordZoneIdentifier;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	unsigned _limit;
	FCCKPQuery* _query;
	FCCKPRequestedFields* _requestedFields;
	FCCKPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) FCCKPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                             //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) FCCKPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) FCCKPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
+(id)options;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FCCKPQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)setQuery:(FCCKPQuery *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(FCCKPRecordZoneIdentifier *)zoneIdentifier;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(BOOL)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)setZoneIdentifier:(FCCKPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
-(BOOL)hasRequestedFields;
-(FCCKPRequestedFields *)requestedFields;
@end

