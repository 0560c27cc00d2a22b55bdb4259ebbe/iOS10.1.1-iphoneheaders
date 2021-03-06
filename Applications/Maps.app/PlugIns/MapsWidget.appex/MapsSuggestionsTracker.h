/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, MapsSuggestionsManager, NSMutableDictionary, _MKLocationShifter, GEOAutomobileOptions, CLLocation, GEOComposedWaypoint, MNIdealTransportTypeFinder, MapsSuggestionsMutableWeakEntries;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _refreshTimer;
	double _refreshInterval;
	double _refreshDeferTime;
	unsigned long long _transportType;
	MapsSuggestionsManager* _manager;
	NSMutableDictionary* _waypoints;
	_MKLocationShifter* _locationShifter;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;
	CLLocation* _currentLocation;
	GEOComposedWaypoint* _currentLocationWaypoint;
	MNIdealTransportTypeFinder* _transportTypeFinder;
	MapsSuggestionsMutableWeakEntries* _trackedEntries;

}

@property (retain) CLLocation * currentLocation;                                              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (retain) GEOComposedWaypoint * currentLocationWaypoint;                             //@synthesize currentLocationWaypoint=_currentLocationWaypoint - In the implementation block
@property (nonatomic,retain) MNIdealTransportTypeFinder * transportTypeFinder;                //@synthesize transportTypeFinder=_transportTypeFinder - In the implementation block
@property (nonatomic,retain) MapsSuggestionsMutableWeakEntries * trackedEntries;              //@synthesize trackedEntries=_trackedEntries - In the implementation block
@property (assign,nonatomic) int mapType;                                                     //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                        //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(void)load;
-(void)trackSuggestionEntries:(NSArray*)arg1 transportType:(unsigned long long)arg2 ;
-(BOOL)_keepExistingWaypointsForTrackedEntries:(NSArray*)arg1 ;
-(BOOL)_requestWaypointForMapsSuggestionsEntry:(id)arg1 dispatchGroup:(id)arg2 ;
-(BOOL)_requestWaypointForCurrentLocation:(id)arg1 dispatchGroup:(id)arg2 ;
-(BOOL)_requestAllRequiredWaypoints;
-(void)_requestETAs;
-(id)_transportTypesForDestinationEntries:(id)arg1 ;
-(void)_decorateEntry:(id)arg1 distance:(double)arg2 ;
-(void)_decorateEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(BOOL)_decorateTrafficStringsOnEntry:(id)arg1 trafficString:(id)arg2 includeLockedVersions:(BOOL)arg3 ;
-(void)_decorateHomeWorkEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(void)_decorateLOIEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(void)_decorateCalendarEventEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(void)_decorateResumeRouteEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(void)_requestDistances;
-(void)_determineTransportTypeFromOrigin:(id)arg1 withMapsSuggestionsEntry:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1 ;
-(void)_scheduleRefresh;
-(void)_unschedule;
-(GEOComposedWaypoint *)currentLocationWaypoint;
-(void)setCurrentLocationWaypoint:(GEOComposedWaypoint *)arg1 ;
-(MapsSuggestionsMutableWeakEntries *)trackedEntries;
-(void)setTrackedEntries:(MapsSuggestionsMutableWeakEntries *)arg1 ;
-(void)dealloc;
-(void)unschedule;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithManager:(id)arg1 ;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)scheduleRefresh;
-(MNIdealTransportTypeFinder *)transportTypeFinder;
-(void)setTransportTypeFinder:(MNIdealTransportTypeFinder *)arg1 ;
-(void)_refresh;
@end

