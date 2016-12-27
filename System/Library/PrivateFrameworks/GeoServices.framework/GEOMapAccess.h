/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOMapAccess : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<GEOMapAccessRestrictions> _restrictions;
	/*^block*/id _tileErrorHandler;
	BOOL _useMapMatchingTilesetForRoads;

}

@property (nonatomic,readonly) unsigned long long roadsZoomLevel; 
@property (nonatomic,readonly) unsigned long long transitZoomLevel; 
@property (nonatomic,readonly) unsigned long long buildingsZoomLevel; 
@property (assign,nonatomic) BOOL useMapMatchingTilesetForRoads;                     //@synthesize useMapMatchingTilesetForRoads=_useMapMatchingTilesetForRoads - In the implementation block
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
@property (assign,nonatomic) id<GEOMapAccessRestrictions> restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                      //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
@property (assign,nonatomic) unsigned zoomLevel; 
@property (nonatomic,readonly) unsigned minZoomLevel; 
@property (nonatomic,readonly) unsigned maxZoomLevel; 
@property (nonatomic,readonly) unsigned maxTransitZoomLevel; 
+(id)map;
+(BOOL)supportsRealisticMap;
+(BOOL)supportsTransitMap;
+(id)realisticMap;
+(id)transitMap;
+(BOOL)supportsRoadMapAccess;
+(BOOL)supportsTransitMapAccess;
+(BOOL)supportsBuildingMapAccess;
-(id)init;
-(void)dealloc;
-(BOOL)allowsNetworkTileLoad;
-(id)callbackQueue;
-(void)setCallbackQueue:(id)arg1 ;
-(void)setZoomLevel:(unsigned)arg1 ;
-(unsigned)minZoomLevel;
-(unsigned)maxZoomLevel;
-(unsigned)maxTransitZoomLevel;
-(id)findClosestNamedFeaturesAtCoordinate:(SCD_Struct_GE26)arg1 roadHandler:(/*^block*/id)arg2 pointHandler:(/*^block*/id)arg3 polygonHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findClosestRoadAtCoordinate:(SCD_Struct_GE26)arg1 roadHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadEdgesWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitEdgesWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitLinksWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 linkHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodesWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodeWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStationWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithParentID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findBuildingsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 buildingHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)preloadRoadTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadTransitTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preloadBuildingTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_hasLoadedTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6 ;
-(BOOL)hasLoadedRoadTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 ;
-(BOOL)hasLoadedTransitTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 ;
-(BOOL)hasLoadedBuildingTilesNearCoordinate:(SCD_Struct_GE26)arg1 radius:(double)arg2 ;
-(id)findRoadTilesWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 tileHander:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)buildMapEdgeTransitFrom:(const TransitEdgePiece*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(id)_findTransitPointsWithin:(double)arg1 of:(SCD_Struct_GE26)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE26)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_transitPointForTransitMapNode:(shared_ptr<geo::MapNodeTransit>*)arg1 ;
-(unsigned long long)roadsZoomLevel;
-(unsigned long long)transitZoomLevel;
-(unsigned long long)buildingsZoomLevel;
-(id<GEOMapAccessRestrictions>)restrictions;
-(void)setRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id)tileErrorHandler;
-(void)setTileErrorHandler:(id)arg1 ;
-(BOOL)useMapMatchingTilesetForRoads;
-(void)setUseMapMatchingTilesetForRoads:(BOOL)arg1 ;
-(unsigned)zoomLevel;
@end

