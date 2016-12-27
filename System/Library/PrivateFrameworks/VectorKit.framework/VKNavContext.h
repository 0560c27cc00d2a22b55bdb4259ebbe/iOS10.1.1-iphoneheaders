/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOComposedRoute, GEORouteMatch, GEORouteMatcher, NSHashTable, NSArray;

@interface VKNavContext : NSObject {

	GEOComposedRoute* _route;
	GEORouteMatch* _routeMatch;
	GEORouteMatcher* _routeMatcher;
	unsigned long long _currentStepIndex;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _pointsToFrame;
	NSHashTable* _observers;
	NSArray* _groupedManeuverCounts;
	unsigned _alternateRouteStartPointIndex;
	GEOComposedRoute* _alternateRoute;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                             //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                             //@synthesize routeMatch=_routeMatch - In the implementation block
@property (assign,nonatomic) unsigned long long currentStepIndex;                    //@synthesize currentStepIndex=_currentStepIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long groupedManeuverCount; 
@property (nonatomic,retain) GEOComposedRoute * alternateRoute;                      //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (assign,nonatomic) unsigned alternateRouteStartPointIndex;                 //@synthesize alternateRouteStartPointIndex=_alternateRouteStartPointIndex - In the implementation block
@property (nonatomic,readonly) GEORouteMatcher * routeMatcher;                       //@synthesize routeMatcher=_routeMatcher - In the implementation block
@property (nonatomic,copy) NSArray * groupedManeuverCounts;                          //@synthesize groupedManeuverCounts=_groupedManeuverCounts - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)updateWithNewRoute:(id)arg1 currentStepIndex:(unsigned long long)arg2 ;
-(unsigned long long)groupedManeuverCount;
-(void)setAlternateRoute:(GEOComposedRoute *)arg1 ;
-(void)clearPointsToFrame;
-(void)addPointToFrame:(CGSize)arg1 ;
-(void)enumeratePointsToFrameUsingBlock:(/*^block*/id)arg1 ;
-(void)_notifyObserversStateChanged;
-(GEORouteMatcher *)routeMatcher;
-(unsigned long long)currentStepIndex;
-(GEOComposedRoute *)alternateRoute;
-(unsigned)alternateRouteStartPointIndex;
-(void)setAlternateRouteStartPointIndex:(unsigned)arg1 ;
-(NSArray *)groupedManeuverCounts;
-(void)setGroupedManeuverCounts:(NSArray *)arg1 ;
-(void)setCurrentStepIndex:(unsigned long long)arg1 ;
@end

