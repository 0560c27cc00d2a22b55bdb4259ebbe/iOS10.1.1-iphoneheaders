/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {

	SSPersistentCache* _persistentCache;

}
+(id)allPropertyKeys;
+(unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2 ;
+(id)databaseTable;
-(id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2 ;
-(void)setPersistentCache:(id)arg1 ;
-(id)dataBlob:(BOOL*)arg1 ;
-(void)dealloc;
-(id)description;
@end

