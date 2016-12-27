/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOTransitVehicleInfo, GEOComposedTransitTripRouteLeg, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {

	NSArray* _departureTimes;
	NSArray* _arrivalTimes;
	double _departureTimeIntervalMin;
	double _departureTimeIntervalMax;
	GEOTransitVehicleInfo* _transitVehicle;
	id<GEOTransitLine> _transitLine;
	id<GEOTransitSystem> _transitSystem;
	NSArray* _routeLineArtwork;
	BOOL _isRail;
	BOOL _isBus;
	BOOL _canPreloadTiles;

}

@property (nonatomic,readonly) GEOComposedTransitTripRouteLeg * tripLeg; 
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSDate * arrivalTime; 
@property (nonatomic,readonly) NSArray * departureTimes;                              //@synthesize departureTimes=_departureTimes - In the implementation block
@property (nonatomic,readonly) NSArray * arrivalTimes;                                //@synthesize arrivalTimes=_arrivalTimes - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMin;                       //@synthesize departureTimeIntervalMin=_departureTimeIntervalMin - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMax;                       //@synthesize departureTimeIntervalMax=_departureTimeIntervalMax - In the implementation block
@property (nonatomic,readonly) GEOTransitVehicleInfo * transitVehicle;                //@synthesize transitVehicle=_transitVehicle - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLine> transitLine;                        //@synthesize transitLine=_transitLine - In the implementation block
@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem;                    //@synthesize transitSystem=_transitSystem - In the implementation block
@property (nonatomic,readonly) NSArray * routeLineArtwork;                            //@synthesize routeLineArtwork=_routeLineArtwork - In the implementation block
@property (nonatomic,readonly) BOOL isRail;                                           //@synthesize isRail=_isRail - In the implementation block
@property (nonatomic,readonly) BOOL isBus;                                            //@synthesize isBus=_isBus - In the implementation block
@property (nonatomic,readonly) BOOL canPreloadTilesForThisStep; 
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(BOOL)hasDuration;
-(NSDate *)departureTime;
-(BOOL)isRail;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(GEOComposedTransitTripRouteLeg *)tripLeg;
-(NSTimeZone *)departureTimeZone;
-(NSTimeZone *)arrivalTimeZone;
-(NSDate *)arrivalTime;
-(BOOL)canPreloadTilesForThisStep;
-(NSArray *)departureTimes;
-(NSArray *)arrivalTimes;
-(double)departureTimeIntervalMin;
-(double)departureTimeIntervalMax;
-(GEOTransitVehicleInfo *)transitVehicle;
-(id<GEOTransitLine>)transitLine;
-(id<GEOTransitSystem>)transitSystem;
-(NSArray *)routeLineArtwork;
-(BOOL)isBus;
@end

