/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTMergeOwner, NSMutableIndexSet, NSIndexSet;

@interface TSTMergeRangeCache : NSObject {

	TSTMergeOwner* _mergeOwner;
	unordered_map<unsigned long, TSUCellRect, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSUCellRect> > >* _mergeRanges;
	NSMutableIndexSet* _mergeIndexes;
	TSCEBitGrid* _mergedAtCellIds;
	TSCEBitGridTransaction* _transaction;

}

@property (nonatomic,readonly) NSIndexSet * mergeIndexes; 
@property (nonatomic,readonly) TSTMergeOwner * mergeOwner;              //@synthesize mergeOwner=_mergeOwner - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(TSUCellRect)expandCellRangeToCoverMergedCells:(TSUCellRect)arg1 ;
-(TSTMergeOwner *)mergeOwner;
-(vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)mergeRangesIntersectingRange:(TSUCellRect)arg1 ;
-(vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)mergeRangesIntersectingCellRegion:(id)arg1 ;
-(vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)mergeRanges;
-(TSUCellRect)mergedRangeForCellID:(TSUCellCoord)arg1 ;
-(BOOL)partiallyIntersectsCellRange:(TSUCellRect)arg1 ;
-(id)mergedGridIndicesForDimension:(long long)arg1 ;
-(id)expandCellRegionToCoverMergedCells:(id)arg1 ;
-(void)enumerateCacheItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeMergeRangeAtIndex:(unsigned long long)arg1 ;
-(void)setMerge:(TSUCellRect)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithMergeOwner:(id)arg1 ;
-(void)enumerateCacheItemsIntersectingRange:(TSUCellRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(TSUCellRect)mergeRangeAtIndex:(unsigned long long)arg1 ;
-(void)enumerateCacheItemsIntersectingCellRegion:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)partiallyIntersectsCellRegion:(id)arg1 ;
-(BOOL)hasRangeSpanningRowsForCellRange:(TSUCellRect)arg1 ;
-(void)openRewritingTransaction;
-(void)commitRewritingTransaction;
-(NSIndexSet *)mergeIndexes;
-(void)p_updateGridForReplacingRange:(TSUCellRect)arg1 withRange:(TSUCellRect)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
@end

