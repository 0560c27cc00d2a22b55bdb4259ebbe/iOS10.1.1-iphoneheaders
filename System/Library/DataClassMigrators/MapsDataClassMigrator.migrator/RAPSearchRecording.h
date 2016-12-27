/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEORPCorrectedSearch, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface RAPSearchRecording : PBCodable <NSCopying> {

	unsigned long long _originatingAuxiliaryControlIndex;
	NSMutableArray* _auxiliaryControls;
	GEORPCorrectedSearch* _correctedSearchTemplate;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	SCD_Struct_RA3 _has;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;                                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedSearchTemplate; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearchTemplate;                   //@synthesize correctedSearchTemplate=_correctedSearchTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryControls;                               //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (assign,nonatomic) BOOL hasOriginatingAuxiliaryControlIndex; 
@property (assign,nonatomic) unsigned long long originatingAuxiliaryControlIndex;              //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
+(Class)auxiliaryControlsType;
-(void)setCorrectedSearchTemplate:(GEORPCorrectedSearch *)arg1 ;
-(void)addAuxiliaryControls:(id)arg1 ;
-(id)auxiliaryControlsAtIndex:(unsigned long long)arg1 ;
-(GEORPCorrectedSearch *)correctedSearchTemplate;
-(BOOL)hasCorrectedSearchTemplate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOPlaceSearchResponse *)response;
-(GEOPlaceSearchRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(void)clearAuxiliaryControls;
-(unsigned long long)auxiliaryControlsCount;
-(void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1 ;
-(void)setHasOriginatingAuxiliaryControlIndex:(BOOL)arg1 ;
-(BOOL)hasOriginatingAuxiliaryControlIndex;
-(NSMutableArray *)auxiliaryControls;
-(void)setAuxiliaryControls:(NSMutableArray *)arg1 ;
-(unsigned long long)originatingAuxiliaryControlIndex;
@end

