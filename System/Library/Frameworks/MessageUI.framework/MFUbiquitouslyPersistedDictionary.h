/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMutableDictionaryProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUbiquitousKeyValueStore, NSMutableDictionary, NSObject;

@interface MFUbiquitouslyPersistedDictionary : NSObject <MFMutableDictionaryProtocol> {

	NSString* _identifier;
	NSUbiquitousKeyValueStore* _kvStore;
	NSMutableDictionary* _storedObjects;
	NSObject*<OS_dispatch_queue> _mutationQueue;
	NSString* _plistPath;

}

@property (nonatomic,readonly) NSString * plistPath;                                             //@synthesize plistPath=_plistPath - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * ubiquitousKeyValueStore; 
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDictionaryWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)plistPath;
-(void)_mergeKVStoreChangedKeys:(id)arg1 ;
-(void)_storeChangedExternally:(id)arg1 ;
-(void)_synchronize;
-(void)_resetKVStore;
-(void)_writeToPlist;
-(void)_ensureStoredObjectsAreInKVStore;
-(void)_purgeOldestEntries;
-(NSUbiquitousKeyValueStore *)ubiquitousKeyValueStore;
@end

