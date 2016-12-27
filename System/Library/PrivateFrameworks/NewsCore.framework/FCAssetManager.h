/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetHandleDelegate.h>
#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol OS_dispatch_queue;
@class FCKeyValueStore, FCAssetStore, FCCacheCoordinator, NSMapTable, NSObject, FCNetworkBehaviorMonitor, NSURLSession, NSString;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {

	BOOL _flushUnusedAssets;
	FCKeyValueStore* _keyValueStore;
	FCAssetStore* _assetStore;
	FCCacheCoordinator* _cacheCoordinator;
	NSMapTable* _assetHandles;
	NSObject*<OS_dispatch_queue> _assetHandlesQueue;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) FCKeyValueStore * keyValueStore;                                //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,retain) FCAssetStore * assetStore;                                      //@synthesize assetStore=_assetStore - In the implementation block
@property (nonatomic,retain) FCCacheCoordinator * cacheCoordinator;                          //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,retain) NSMapTable * assetHandles;                                      //@synthesize assetHandles=_assetHandles - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetHandlesQueue;                 //@synthesize assetHandlesQueue=_assetHandlesQueue - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                      //@synthesize URLSession=_URLSession - In the implementation block
@property (assign,nonatomic) BOOL flushUnusedAssets;                                         //@synthesize flushUnusedAssets=_flushUnusedAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedURLSession;
-(id)init;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(long long)arg2 ;
-(id)assetHandleForRemoteURL:(id)arg1 lifetimeHint:(long long)arg2 transformer:(id)arg3 ;
-(FCCacheCoordinator *)cacheCoordinator;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(id)operationToFetchFileForAssetHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(void)setCacheCoordinator:(FCCacheCoordinator *)arg1 ;
-(FCAssetStore *)assetStore;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
-(id)_assetKeyForRemoteURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetHandlesQueue;
-(NSMapTable *)assetHandles;
-(FCKeyValueStore *)keyValueStore;
-(BOOL)flushUnusedAssets;
-(id)initWithName:(id)arg1 directory:(id)arg2 networkBehaviorMonitor:(id)arg3 ;
-(void)setFlushUnusedAssets:(BOOL)arg1 ;
-(void)setKeyValueStore:(FCKeyValueStore *)arg1 ;
-(void)setAssetHandles:(NSMapTable *)arg1 ;
-(void)setAssetHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

