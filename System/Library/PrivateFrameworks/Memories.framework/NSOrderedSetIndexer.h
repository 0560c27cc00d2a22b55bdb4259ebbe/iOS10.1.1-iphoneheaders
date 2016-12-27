/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSIndexSet;

@interface NSOrderedSetIndexer : NSObject {

	NSOrderedSet* _initialOrderedSet;
	NSOrderedSet* _finalOrderedSet;
	NSIndexSet* _insertedIndexesAfterDeletions;
	NSIndexSet* _deletedIndexesBeforeInsertions;

}

@property (nonatomic,retain) NSIndexSet * insertedIndexesAfterDeletions;               //@synthesize insertedIndexesAfterDeletions=_insertedIndexesAfterDeletions - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexesBeforeInsertions;              //@synthesize deletedIndexesBeforeInsertions=_deletedIndexesBeforeInsertions - In the implementation block
@property (nonatomic,retain) NSOrderedSet * initialOrderedSet;                         //@synthesize initialOrderedSet=_initialOrderedSet - In the implementation block
@property (nonatomic,retain) NSOrderedSet * finalOrderedSet;                           //@synthesize finalOrderedSet=_finalOrderedSet - In the implementation block
+(id)indexerWithInitialSet:(id)arg1 finalSet:(id)arg2 ;
-(void)analyze;
-(NSIndexSet *)insertedIndexesAfterDeletions;
-(NSIndexSet *)deletedIndexesBeforeInsertions;
-(void)setInsertedIndexesAfterDeletions:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexesBeforeInsertions:(NSIndexSet *)arg1 ;
-(id)initWithInitialSet:(id)arg1 finalSet:(id)arg2 ;
-(void)setInitialOrderedSet:(NSOrderedSet *)arg1 ;
-(void)setFinalOrderedSet:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)initialOrderedSet;
-(NSOrderedSet *)finalOrderedSet;
@end

