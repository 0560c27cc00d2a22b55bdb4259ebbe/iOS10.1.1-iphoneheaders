/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class GEOActiveTileSet, VKTimer, VKTilePool, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource {

	GEOActiveTileSet* _tileSet;
	GEOTileKey _downloadTemplate;
	unsigned _minimumDownloadZoomLevel;
	unsigned _maximumDownloadZoomLevel;
	VKTimer* _expirationTimer;
	VKTilePool* _expiredTilePool;
	ZoomRange _zoomLevelRange;
	_VKTileSetBackedTileSourceTimerTarget* _timerTarget;

}

@property (nonatomic,retain) GEOActiveTileSet * tileSet;              //@synthesize tileSet=_tileSet - In the implementation block
-(void)dealloc;
-(long long)tileSize;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(GEOActiveTileSet *)tileSet;
-(void)setTileSet:(GEOActiveTileSet *)arg1 ;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(long long)maximumZoomLevel;
-(long long)minimumZoomLevel;
-(id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 ;
-(long long)defaultMinimumZoomLevel;
-(unsigned long long)mapLayerForZoomLevelRange;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(long long)defaultMaximumZoomLevel;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(unsigned)minimumDownloadZoomLevel;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(unsigned)maximumDownloadZoomLevel;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(BOOL)shouldObeyHybridUnavailableRegions;
-(double)_expirationInterval;
-(double)_nextTileExpirationDate;
-(void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_expireTiles;
-(void)setClient:(id)arg1 ;
-(void)clearCaches;
-(BOOL)expires;
@end

