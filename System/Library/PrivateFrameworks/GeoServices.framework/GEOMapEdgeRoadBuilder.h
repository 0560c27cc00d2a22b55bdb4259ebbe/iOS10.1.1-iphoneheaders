/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(void)dealloc;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE26)arg2 radius:(double)arg3 ;
-(id)initWithMap:(id)arg1 roadFeature:(SCD_Struct_GE93*)arg2 shouldFlip:(BOOL)arg3 ;
-(unsigned long long)_connectionTypeForEdge:(SCD_Struct_GE80*)arg1 points:(SCD_Struct_GE47*)arg2 connectingTilePoint:(Matrix<float, 2, 1>)arg3 ;
@end
