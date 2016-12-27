/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServerFormattedStepStringFormatter;
@class NSXPCConnection, NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, NSData, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEONavigationGuidanceState, GEOCompanionRouteDetails, GEOCompanionRouteStatus;

@interface GEONavigationProxy : NSObject {

	NSXPCConnection* _navdConnection;
	NSXPCConnection* _nanomapscdConnection;
	int _navigationStartedToken;
	BOOL _hasNavigationStartedToken;
	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	BOOL _locationUnreliable;
	GEORouteMatch* _routeMatch;
	BOOL _guidancePromptsEnabled;
	NSData* _activeRouteDetailsData;
	unsigned long long _stepIndex;
	unsigned long long _rideIndex;
	unsigned long long _legIndex;
	unsigned long long _displayedStepIndex;
	double _remainingDistance;
	double _remainingTime;
	double _distanceToManeuver;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitRouteSummary;
	GEONavigationGuidanceState* _guidanceState;
	GEOCompanionRouteDetails* _companionRouteDetails;
	GEOCompanionRouteStatus* _companionRouteStatus;
	NSData* _lastSentCompanionRouteContext;
	BOOL _shouldSendRouteWithStatus;
	id<GEOServerFormattedStepStringFormatter> _formatter;

}

@property (retain) id<GEOServerFormattedStepStringFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)_invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setRoute:(id)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)_closeNanomapscdConnection;
-(void)startWithDestinationName:(id)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)setRouteMatch:(id)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setActiveRouteDetailsData:(id)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg1 routeID:(id)arg2 ;
-(void)setRemainingDistance:(double)arg1 ;
-(void)setDistanceToManeuver:(double)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)_clearState;
-(void)_openNavdConnection;
-(void)_closeNavdConnection;
-(void)_sendRouteSummary;
-(void)_sendTransitSummary;
-(void)_sendGuidanceState;
-(void)_sendStepIndex;
-(void)_sendSelectedRideOption;
-(void)_sendActiveRouteDetailsData;
-(void)_openNanomapscdConnection;
-(void)_updateCompanionRouteStatus;
-(void)_sendCompanionRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)_sendCompanionRouteStatus;
-(void)_sendCoalescedCompanionRouteStatus;
-(id<GEOServerFormattedStepStringFormatter>)formatter;
-(void)setFormatter:(id<GEOServerFormattedStepStringFormatter>)arg1 ;
-(void)setLastLocation:(id)arg1 ;
@end

