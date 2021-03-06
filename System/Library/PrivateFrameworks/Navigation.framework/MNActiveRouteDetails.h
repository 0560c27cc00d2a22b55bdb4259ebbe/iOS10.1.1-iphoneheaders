/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitDecoderData, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEORoute, NSData, GEOTransitSuggestedRoute;

@interface MNActiveRouteDetails : PBCodable <NSCopying> {

	GEOTransitDecoderData* _decoderData;
	GEOComposedWaypoint* _destination;
	int _navigationType;
	GEOComposedWaypoint* _origin;
	unsigned _reconnectionRouteIndex;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	GEORoute* _route;
	NSData* _routeDetailsID;
	unsigned _routeIndex;
	GEOTransitSuggestedRoute* _suggestedRoute;
	int _transportType;
	SCD_Struct_MN17 _has;

}

@property (nonatomic,readonly) BOOL hasRouteDetailsID; 
@property (nonatomic,retain) NSData * routeDetailsID;                                //@synthesize routeDetailsID=_routeDetailsID - In the implementation block
@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) GEORoute * route;                                       //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedRoute; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * suggestedRoute;              //@synthesize suggestedRoute=_suggestedRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                    //@synthesize decoderData=_decoderData - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationType; 
@property (assign,nonatomic) int navigationType;                                     //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                           //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;                      //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEODirectionsRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEODirectionsResponse * response;                       //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL hasReconnectionRouteIndex; 
@property (assign,nonatomic) unsigned reconnectionRouteIndex;                        //@synthesize reconnectionRouteIndex=_reconnectionRouteIndex - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                      //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex;                                    //@synthesize routeIndex=_routeIndex - In the implementation block
-(int)navigationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEODirectionsResponse *)response;
-(GEODirectionsRequest *)request;
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
-(GEORoute *)route;
-(void)setRoute:(GEORoute *)arg1 ;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(unsigned)routeIndex;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDecoderData;
-(GEOTransitDecoderData *)decoderData;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(GEOTransitSuggestedRoute *)suggestedRoute;
-(void)setSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(BOOL)hasRoute;
-(void)setNavigationType:(int)arg1 ;
-(void)setHasNavigationType:(BOOL)arg1 ;
-(BOOL)hasNavigationType;
-(id)navigationTypeAsString:(int)arg1 ;
-(int)StringAsNavigationType:(id)arg1 ;
-(unsigned)reconnectionRouteIndex;
-(BOOL)hasRouteDetailsID;
-(NSData *)routeDetailsID;
-(void)setRouteDetailsID:(NSData *)arg1 ;
-(BOOL)hasSuggestedRoute;
-(void)setReconnectionRouteIndex:(unsigned)arg1 ;
-(void)setHasReconnectionRouteIndex:(BOOL)arg1 ;
-(BOOL)hasReconnectionRouteIndex;
@end

