/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {

	double _updatedTimeStamp;
	GEODirectionsResponse* _directionsResponse;
	GEOETAResponse* _etaResponse;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponse; 
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse;              //@synthesize directionsResponse=_directionsResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaResponse; 
@property (nonatomic,retain) GEOETAResponse * etaResponse;                            //@synthesize etaResponse=_etaResponse - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedTimeStamp; 
@property (assign,nonatomic) double updatedTimeStamp;                                 //@synthesize updatedTimeStamp=_updatedTimeStamp - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDirectionsResponse;
-(BOOL)hasEtaResponse;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(void)setHasUpdatedTimeStamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimeStamp;
-(GEODirectionsResponse *)directionsResponse;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(GEOETAResponse *)etaResponse;
-(void)setEtaResponse:(GEOETAResponse *)arg1 ;
-(double)updatedTimeStamp;
@end

