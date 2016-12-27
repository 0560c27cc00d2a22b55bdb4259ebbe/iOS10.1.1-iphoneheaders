/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKOverlay.h>
#import <libobjc.A.dylib/GEOComposedRouteObserver.h>

@protocol VKPolylineOverlayRouteRibbonObserver;
@class GEOComposedRoute, VKRouteLine, NSString, GEOMapRegion;

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver> {

	CFSetRef _observers;
	GEOComposedRoute* _composedRoute;
	BOOL _isReadyForSnapping;
	LabelExternalObjectsModerator* _labelExternalObjectsModerator;
	VKRouteLine* _routeRibbon;
	id<VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
	double _trafficTimeStamp;
	TrafficSegmentsAlongRoute* _trafficSegments;

}

@property (nonatomic,readonly) double trafficTimeStamp;                                                 //@synthesize trafficTimeStamp=_trafficTimeStamp - In the implementation block
@property (assign,nonatomic) VKRouteLine * routeRibbon;                                                 //@synthesize routeRibbon=_routeRibbon - In the implementation block
@property (assign,nonatomic) id<VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver;              //@synthesize routeRibbonObserver=_routeRibbonObserver - In the implementation block
@property (nonatomic,readonly) BOOL containsTransit; 
@property (assign,nonatomic) LabelExternalObjectsModerator* labelExternalObjectsModerator;              //@synthesize labelExternalObjectsModerator=_labelExternalObjectsModerator - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * composedRoute;                                        //@synthesize composedRoute=_composedRoute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize coordinate; 
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOMapRegion *)boundingMapRegion;
-(void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)composedRouteUpdatedSnappedPaths:(id)arg1 ;
-(void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3 ;
-(void)composedRouteUpdatedTraffic:(id)arg1 ;
-(GEOComposedRoute *)composedRoute;
-(id)initWithComposedRoute:(id)arg1 ;
-(VKRouteLine *)routeRibbon;
-(LabelExternalObjectsModerator*)labelExternalObjectsModerator;
-(void)setRouteRibbonObserver:(id<VKPolylineOverlayRouteRibbonObserver>)arg1 ;
-(void)setLabelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg1 ;
-(void)setRouteRibbon:(VKRouteLine *)arg1 ;
-(void)clearSnappedPathsForPainter:(id)arg1 ;
-(BOOL)containsTransit;
-(double)trafficTimeStamp;
-(id)getPathsForPainter:(id)arg1 renderRegion:(id)arg2 shouldSnapToRoads:(BOOL)arg3 verifySnapping:(BOOL)arg4 snappingCompletionHandler:(/*^block*/id)arg5 ;
-(void)_setNeedsLayout;
-(NSRange)sectionRangeForBounds:(Box<double, 2>)arg1 ;
-(void)_updateTraffic;
-(BOOL)isSnappingForSceneTiles;
-(id<VKPolylineOverlayRouteRibbonObserver>)routeRibbonObserver;
-(CGSize)coordinate;
@end

