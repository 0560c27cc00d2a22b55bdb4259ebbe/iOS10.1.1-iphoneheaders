/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;
@class NSCountedSet, NSObject, NSHashTable, NSMutableDictionary, NSString;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient> {

	id<FBApplicationDataStoreRepository> _dataStore;
	NSCountedSet* _prefetchedKeys;
	NSObject*<OS_dispatch_queue> _prefetchQueue;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSHashTable* _observers;
	NSMutableDictionary* _prefetchedKeyValues;

}

@property (nonatomic,retain) NSMutableDictionary * prefetchedKeyValues;              //@synthesize prefetchedKeyValues=_prefetchedKeyValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(id)_observers;
-(void)_repositoryInvalidated:(id)arg1 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_sendAndCachePrefetchedKeysWithCompletion:(/*^block*/id)arg1 ;
-(void)setPrefetchedKeyValues:(NSMutableDictionary *)arg1 ;
-(void)_updateNotificationListeners;
-(id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1 ;
-(void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 checkPrefetch:(BOOL)arg4 ;
-(void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)availableDataStores:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)prefetchedKeyValues;
@end
