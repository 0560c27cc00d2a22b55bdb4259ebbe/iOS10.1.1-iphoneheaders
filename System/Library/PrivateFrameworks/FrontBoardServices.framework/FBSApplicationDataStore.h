/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSApplicationDataStoreRepositoryClient;
@class NSString;

@interface FBSApplicationDataStore : NSObject {

	NSString* _bundleId;
	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;

}

@property (nonatomic,retain,readonly) NSString * bundleID;              //@synthesize bundleId=_bundleId - In the implementation block
+(void)setPrefetchedKeys:(id)arg1 ;
+(void)_doWithClassClient:(/*^block*/id)arg1 ;
+(void)_setClassClient:(id)arg1 ;
+(void)synchronize;
+(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
+(id)applicationsWithAvailableStores;
+(id)storeForApplication:(id)arg1 ;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleID;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
@end

