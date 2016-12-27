/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned long long totalCostLimit; 
@property (assign) unsigned long long countLimit; 
@property (assign) BOOL evictsObjectsWithDiscardedContent; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)CALobjectForKey:(id)arg1 calculatedWithBlock:(/*^block*/id)arg2 ;
-(unsigned long long)totalCostLimit;
-(BOOL)evictsObjectsWithDiscardedContent;
-(unsigned long long)minimumObjectCount;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(id)init;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id<NSCacheDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)setMinimumObjectCount:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(unsigned long long)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
@end

