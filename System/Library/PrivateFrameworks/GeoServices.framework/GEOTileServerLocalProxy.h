/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEODBWriter, GEODBReader, NSString, NSMapTable, NSMutableArray, NSLock;

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOResourceManifestTileGroupObserver> {

	GEODBWriter* _dbWriter;
	GEODBReader* _dbReader;
	NSString* _cacheLocation;
	NSMapTable* _providers;
	NSMutableArray* _inProgress;
	NSLock* _inProgressLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)flushPendingWrites;
-(void)endPreloadSession;
-(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)_registerBuiltInProviders;
-(void)_updateExpiringTilesets;
-(void)registerProvider:(Class)arg1 ;
-(void)open;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned)arg2 tileSet:(unsigned)arg3 eTag:(id)arg4 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)calculateFreeableSize;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2 ;
@end

