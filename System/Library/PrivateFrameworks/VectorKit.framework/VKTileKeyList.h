/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	VKTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;

}
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_VK77*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addKey:(const VKTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(VKTileKey*)firstKey;
-(BOOL)addKey:(const VKTileKey*)arg1 lostKey:(VKTileKey*)arg2 ;
-(void)_addKeyToBack:(const VKTileKey*)arg1 ;
-(BOOL)containsKey:(const VKTileKey*)arg1 ;
-(unsigned long long)capacity;
-(id)listWithout:(id)arg1 ;
-(void)sort:(/*^block*/id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)removeKey:(const VKTileKey*)arg1 ;
-(BOOL)isEqualToList:(id)arg1 ;
@end

