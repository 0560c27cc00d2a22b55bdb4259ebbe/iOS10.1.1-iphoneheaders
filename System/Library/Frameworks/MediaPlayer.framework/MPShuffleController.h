/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPShuffleControllerDataSource;
@class NSMutableIndexSet, NSMapTable, MPSparseArray, NSMutableArray;

@interface MPShuffleController : NSObject <NSSecureCoding> {

	NSMutableIndexSet* _availableShuffleIndexSet;
	BOOL _isPendingFineGrainedInvalidation;
	BOOL _isPendingGlobalInvalidation;
	unsigned long long _itemCount;
	NSMapTable* _itemIdentifierToKnownCount;
	MPSparseArray* _originalIndexToItemIdentifier;
	MPSparseArray* _originalIndexToShuffledIndex;
	NSMutableArray* _pendingInvalidationRemovedIdentifiers;
	id<MPShuffleControllerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<MPShuffleControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<MPShuffleControllerDataSource>)arg1 ;
-(id<MPShuffleControllerDataSource>)dataSource;
-(void)invalidate;
-(void)shuffle;
-(void)_commitPendingInvalidations;
-(void)_replaceItemIdentifierAtOriginalIndex:(unsigned long long)arg1 withItemIdentifier:(id)arg2 ;
-(void)_loadItemCountIfPendingInvalidation;
-(void)_clearPendingInvalidationInformation;
-(void)_removeAllItemIdentifiers;
-(unsigned long long)_generateShuffleIndexFromAvailableIndexSet;
-(void)_removeItemIdentifierAtOriginalIndex:(unsigned long long)arg1 ;
-(void)_loadItemCount;
-(void)invalidateWithRemovedIdentifiers:(id)arg1 ;
-(unsigned long long)itemIndexForShuffledIndex:(unsigned long long)arg1 ;
-(void)shuffleWithStartingIndex:(unsigned long long)arg1 ;
-(unsigned long long)shuffledIndexForItemIndex:(unsigned long long)arg1 ;
@end

