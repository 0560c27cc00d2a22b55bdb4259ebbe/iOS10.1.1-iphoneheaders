/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
+(id)p_sharedQueue;
-(void)saveToArchive:(TileStorage*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileStorage*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(id)tileForID:(SCD_Struct_TS587)arg1 ;
-(void)enumerateTilesConcurrentlyUsingBlock:(/*^block*/id)arg1 andWaitForAsyncBlocks:(BOOL)arg2 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS587)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS587)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)enumerateTilesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)removeAllTiles;
-(id)initWithOwner:(id)arg1 ;
@end

