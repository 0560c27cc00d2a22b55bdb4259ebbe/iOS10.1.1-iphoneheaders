/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface CKDPCSMemoryCache : NSObject {

	BOOL _memoryStatusChanged;
	int _evictNoticeToken;
	unsigned long long _maxEntries;
	double _minAge;
	NSMutableDictionary* _cacheEntries;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _memoryNotificationSource;
	unsigned long long _memoryStatus;
	double _oldestCacheEntry;
	unsigned long long _memoryCacheRequestCount;
	unsigned long long _memoryCacheHitCount;
	unsigned long long _memoryCacheHighwaterCount;
	unsigned long long _memoryCacheDeleteCount;
	unsigned long long _memoryCacheUpdateCount;
	unsigned long long _memoryCacheEvictCount;

}

@property (nonatomic,retain) NSMutableDictionary * cacheEntries;                                  //@synthesize cacheEntries=_cacheEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                            //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryNotificationSource;              //@synthesize memoryNotificationSource=_memoryNotificationSource - In the implementation block
@property (assign) unsigned long long memoryStatus;                                               //@synthesize memoryStatus=_memoryStatus - In the implementation block
@property (assign) BOOL memoryStatusChanged;                                                      //@synthesize memoryStatusChanged=_memoryStatusChanged - In the implementation block
@property (assign) int evictNoticeToken;                                                          //@synthesize evictNoticeToken=_evictNoticeToken - In the implementation block
@property (assign) double oldestCacheEntry;                                                       //@synthesize oldestCacheEntry=_oldestCacheEntry - In the implementation block
@property (assign) unsigned long long memoryCacheRequestCount;                                    //@synthesize memoryCacheRequestCount=_memoryCacheRequestCount - In the implementation block
@property (assign) unsigned long long memoryCacheHitCount;                                        //@synthesize memoryCacheHitCount=_memoryCacheHitCount - In the implementation block
@property (assign) unsigned long long memoryCacheHighwaterCount;                                  //@synthesize memoryCacheHighwaterCount=_memoryCacheHighwaterCount - In the implementation block
@property (assign) unsigned long long memoryCacheDeleteCount;                                     //@synthesize memoryCacheDeleteCount=_memoryCacheDeleteCount - In the implementation block
@property (assign) unsigned long long memoryCacheUpdateCount;                                     //@synthesize memoryCacheUpdateCount=_memoryCacheUpdateCount - In the implementation block
@property (assign) unsigned long long memoryCacheEvictCount;                                      //@synthesize memoryCacheEvictCount=_memoryCacheEvictCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                       //@synthesize maxEntries=_maxEntries - In the implementation block
@property (assign,nonatomic) double minAge;                                                       //@synthesize minAge=_minAge - In the implementation block
+(void)registerEvictionActivity;
+(id)globalEvictQueue;
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMinAge:(double)arg1 ;
-(void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(NSObject*<OS_dispatch_source>)memoryNotificationSource;
-(void)setMemoryStatus:(unsigned long long)arg1 ;
-(void)setMemoryStatusChanged:(BOOL)arg1 ;
-(void)runCacheEviction;
-(NSMutableDictionary *)cacheEntries;
-(double)minAge;
-(unsigned long long)maxEntries;
-(unsigned long long)memoryStatus;
-(double)oldestCacheEntry;
-(void)setOldestCacheEntry:(double)arg1 ;
-(unsigned long long)memoryCacheEvictCount;
-(void)setMemoryCacheEvictCount:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheRequestCount;
-(void)setMemoryCacheRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheHitCount;
-(void)setMemoryCacheHitCount:(unsigned long long)arg1 ;
-(BOOL)memoryStatusChanged;
-(void)_lockedEvictEntriesFromCache;
-(unsigned long long)memoryCacheUpdateCount;
-(void)setMemoryCacheUpdateCount:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheHighwaterCount;
-(void)setMemoryCacheHighwaterCount:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheDeleteCount;
-(void)setMemoryCacheDeleteCount:(unsigned long long)arg1 ;
-(unsigned long long)_cacheCount;
-(void)setMaxEntries:(unsigned long long)arg1 ;
-(void)setCacheEntries:(NSMutableDictionary *)arg1 ;
-(void)setMemoryNotificationSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)evictNoticeToken;
-(void)setEvictNoticeToken:(int)arg1 ;
@end

