/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {

	double _travelTime;
	GEOComposedWaypoint* _destination;
	NSString* _destinationName;
	GEOComposedWaypoint* _origin;
	int _transportType;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                     //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) double travelTime;                              //@synthesize travelTime=_travelTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToRouteSummary:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOComposedWaypoint *)origin;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(NSString *)destinationName;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTravelTime:(double)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(double)travelTime;
-(void)setDestinationName:(NSString *)arg1 ;
-(BOOL)hasDestinationName;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
@end

