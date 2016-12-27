/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject {

	BOOL _forced;
	BOOL _evictNow;
	BOOL _clearRegisteredItems;
	NSMutableOrderedSet* _itemIDsToUnregister;
	NSMutableOrderedSet* _assetHandleItemIDsToDelete;

}

@property (assign) BOOL forced;                                                             //@synthesize forced=_forced - In the implementation block
@property (assign) BOOL evictNow;                                                           //@synthesize evictNow=_evictNow - In the implementation block
@property (assign) BOOL clearRegisteredItems;                                               //@synthesize clearRegisteredItems=_clearRegisteredItems - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * itemIDsToUnregister;                     //@synthesize itemIDsToUnregister=_itemIDsToUnregister - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetHandleItemIDsToDelete;              //@synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete - In the implementation block
-(void)setForced:(BOOL)arg1 ;
-(void)setEvictNow:(BOOL)arg1 ;
-(void)setItemIDsToUnregister:(NSMutableOrderedSet *)arg1 ;
-(void)setAssetHandleItemIDsToDelete:(NSMutableOrderedSet *)arg1 ;
-(id)initForced:(BOOL)arg1 evictNow:(BOOL)arg2 ;
-(BOOL)forced;
-(BOOL)evictNow;
-(BOOL)clearRegisteredItems;
-(void)setClearRegisteredItems:(BOOL)arg1 ;
-(NSMutableOrderedSet *)itemIDsToUnregister;
-(NSMutableOrderedSet *)assetHandleItemIDsToDelete;
@end

