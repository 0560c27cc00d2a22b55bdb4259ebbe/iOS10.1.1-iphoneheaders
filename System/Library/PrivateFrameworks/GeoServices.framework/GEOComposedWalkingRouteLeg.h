/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteLeg.h>

@protocol GEOTransitRoutingIncidentMessage;
@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg {

	id<GEOTransitRoutingIncidentMessage> _transitSteppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _transitRouteDetailsIncidentMessage;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage;                  //@synthesize transitSteppingIncidentMessage=_transitSteppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage;              //@synthesize transitRouteDetailsIncidentMessage=_transitRouteDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOComposedWalkingRouteStep * lastWalkingStep; 
@property (nonatomic,readonly) GEOComposedTransitWalkingRouteStep * arrivalStep; 
-(void)dealloc;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 pointRange:(NSRange)arg3 transitSteppingIncidentMessage:(id)arg4 transitRouteDetailsIncidentMessage:(id)arg5 ;
-(GEOComposedWalkingRouteStep *)lastWalkingStep;
-(GEOComposedTransitWalkingRouteStep *)arrivalStep;
-(id<GEOTransitRoutingIncidentMessage>)transitSteppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)transitRouteDetailsIncidentMessage;
@end

