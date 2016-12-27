/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUbiquitousKeyValueStore, NSThread;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	BOOL iCloudSyncingEnabled;

}

@property (retain) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (retain) NSThread * clientThread; 
@property (assign) BOOL iCloudSyncingEnabled; 
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications;
-(BOOL)iCloudSyncingEnabled;
-(void)synchronizeKVS;
-(NSThread *)clientThread;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(void)initWithCallback:(/*function pointer*/void*)arg1 callbackContext:(void*)arg2 ;
-(void)addToKVStore:(id)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)synchronizeAndCallMergeNetworks;
-(void)queryKeychainSyncState;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
@end

