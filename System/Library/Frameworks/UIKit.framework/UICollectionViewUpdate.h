/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionView, NSArray, UICollectionViewData, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSIndexPath;

@interface UICollectionViewUpdate : NSObject {

	UICollectionView* _collectionView;
	NSArray* _updateItems;
	UICollectionViewData* _oldModel;
	UICollectionViewData* _newModel;
	CGRect _oldVisibleBounds;
	CGRect _newVisibleBounds;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _movedSections;
	NSMutableIndexSet* _deletedSections;
	NSMutableIndexSet* _insertedSections;
	long long* _oldSectionMap;
	long long* _newSectionMap;
	long long* _oldGlobalItemMap;
	long long* _newGlobalItemMap;
	NSMutableArray* _deletedSupplementaryIndexesSectionArray;
	NSMutableArray* _insertedSupplementaryIndexesSectionArray;
	NSMutableDictionary* _deletedSupplementaryTopLevelIndexesDict;
	NSMutableDictionary* _insertedSupplementaryTopLevelIndexesDict;
	id* _animatedItems;
	id* _animatedHeaders;
	id* _animatedFooters;
	NSMutableArray* _viewAnimations;
	NSIndexPath* _oldFocusedIndexPath;
	NSIndexPath* _newFocusedIndexPath;
	long long _oldFocusedViewType;
	long long _newFocusedViewType;

}
-(void)dealloc;
-(void)_computeSectionUpdates;
-(void)_computeItemUpdates;
-(id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(CGRect)arg5 newVisibleBounds:(CGRect)arg6 ;
-(void)_computeSupplementaryUpdates;
-(id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2 ;
-(id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2 ;
@end

