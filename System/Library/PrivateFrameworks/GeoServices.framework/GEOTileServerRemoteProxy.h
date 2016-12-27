/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSLock, NSHashTable;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {

	NSObject*<OS_dispatch_queue> _connQueue;
	NSObject*<OS_xpc_object> _conn;
	NSLock* _connLock;
	int _suspendCount;
	unsigned long long _handleCounter;
	NSHashTable* _cancellingConnections;
	NSLock* _cancellingConnectionsLock;

}
-(void)dealloc;
-(void)close;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)flushPendingWrites;
-(void)endPreloadSession;
-(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(void)open;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)loadTiles:(id)arg1 priorities:(unsigned*)arg2 options:(unsigned long long)arg3 client:(id)arg4 ;
-(void)calculateFreeableSize;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2 ;
-(void)_handleEvent:(id)arg1 fromConnection:(id)arg2 ;
-(void)_handleTile:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleNetworkBegan:(id)arg1 ;
-(void)_handleEditionUpgrade:(id)arg1 ;
@end

