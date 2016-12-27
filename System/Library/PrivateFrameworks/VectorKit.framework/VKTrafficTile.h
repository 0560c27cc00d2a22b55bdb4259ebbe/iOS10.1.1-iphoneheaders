/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class NSData, VKTileKeyMap, NSMutableArray, NSArray;

@interface VKTrafficTile : VKVectorTile {

	unique_ptr<md::PilledTrafficLayer, std::__1::default_delete<md::PilledTrafficLayer> >* _pilledTrafficLayer;
	unique_ptr<md::SolidTrafficLayer, std::__1::default_delete<md::SolidTrafficLayer> >* _solidTrafficLayer;
	GEOTileKey _dataKey;
	NSData* _data;
	VKTileKeyMap* _dynamicTiles;
	unique_ptr<md::TrafficStream, std::__1::default_delete<md::TrafficStream> >* _trafficStream;
	NSMutableArray* _incidents;
	TrafficSkeletonTile* _trafficData;
	TrafficMeshStyle _builtTrafficStyle;
	FeatureAttributeSet* _styleAttributes;

}

@property (assign,nonatomic) const GEOTileKey* dataKey; 
@property (nonatomic,readonly) NSArray * incidents;                                 //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,readonly) VKTileKeyMap * dynamicTiles;                         //@synthesize dynamicTiles=_dynamicTiles - In the implementation block
@property (nonatomic,readonly) PilledTrafficLayer* pilledTrafficLayer; 
@property (nonatomic,readonly) SolidTrafficLayer* solidTrafficLayer; 
@property (nonatomic,readonly) const TrafficStream* trafficStream; 
@property (nonatomic,readonly) FeatureAttributeSet* styleAttributes;                //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)dealloc;
-(FeatureAttributeSet*)styleAttributes;
-(NSArray *)incidents;
-(void)buildTrafficMeshWithRoadData:(id)arg1 withLoader:(Loader*)arg2 trafficMeshStyle:(const TrafficMeshStyle*)arg3 ;
-(SolidTrafficLayer*)solidTrafficLayer;
-(PilledTrafficLayer*)pilledTrafficLayer;
-(const TrafficMeshStyle*)builtTrafficStyle;
-(const TrafficStream*)trafficStream;
-(void)setDataKey:(const GEOTileKey*)arg1 ;
-(const GEOTileKey*)dataKey;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 styleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device*)arg7 ;
-(void)buildSkeletonMap;
-(void)setupStyleAttributesWithRoadData:(id)arg1 ;
-(BOOL)_buildStartOffset:(float*)arg1 endOffset:(float*)arg2 forLine:(SCD_Struct_VK311*)arg3 forSkeleton:(const Record*)arg4 forRange:(NSRange)arg5 forFlow:(const Flow*)arg6 forPoints:(Matrix<float, 2, 1>*)arg7 ;
-(void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const function<void (const md::RoadPiece &)>*)arg2 ;
-(void)buildTrafficStreamWithRoadData:(id)arg1 trafficMeshStyle:(const TrafficMeshStyle*)arg2 ;
-(void)buildTrafficWithRoadData:(id)arg1 trafficMeshStyle:(const TrafficMeshStyle*)arg2 addSegment:(/*^block*/id)arg3 ;
-(void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2 ;
-(void)buildTrafficIncidentsWithRoadData:(id)arg1 ;
-(BOOL)builtRenderingData;
-(VKTileKeyMap *)dynamicTiles;
@end
