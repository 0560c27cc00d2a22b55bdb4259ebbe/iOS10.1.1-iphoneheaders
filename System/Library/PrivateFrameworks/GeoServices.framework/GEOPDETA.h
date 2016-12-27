/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDETA : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _time;
	int _transportType;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time;                            //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                        //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;              //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
+(id)etaForPlaceData:(id)arg1 transportType:(int)arg2 ;
+(int)recommendedTransportTypeForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)setTime:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(unsigned)historicTravelTime;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
@end

