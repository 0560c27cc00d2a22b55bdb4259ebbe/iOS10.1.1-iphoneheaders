/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <libobjc.A.dylib/MiroEditorFlowLayoutDelegate.h>
#import <libobjc.A.dylib/MiroCollectionViewDelegate.h>
#import <libobjc.A.dylib/MiroEditorClipCollection.h>

@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;
@class NSIndexPath, NSString;

@interface MiroTimelineClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroCollectionViewDelegate, MiroEditorClipCollection> {

	BOOL _highlightCenterThumbnail;
	id<MiroEditorClipCollectionDataSource> _dataSource;
	id<MiroEditorClipCollectionDelegate> _delegate;
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _collectionViewDraggingIndexPath;

}

@property (nonatomic,retain) NSIndexPath * collectionViewDraggingIndexPath;                         //@synthesize collectionViewDraggingIndexPath=_collectionViewDraggingIndexPath - In the implementation block
@property (assign,nonatomic) BOOL highlightCenterThumbnail;                                         //@synthesize highlightCenterThumbnail=_highlightCenterThumbnail - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets collectionViewContentInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * initialIndexPath;                                        //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
-(void)setDataSource:(id<MiroEditorClipCollectionDataSource>)arg1 ;
-(void)setDelegate:(id<MiroEditorClipCollectionDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(NSIndexPath *)initialIndexPath;
-(void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3 ;
-(void)miroCollectionView:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2 ;
-(void)miroCollectionViewDidEndInteractiveMovement:(id)arg1 ;
-(void)miroCollectionViewDidCancelInteractiveMovement:(id)arg1 ;
-(void)setInitialIndexPath:(NSIndexPath *)arg1 ;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)cellForClip:(id)arg1 ;
-(void)_snapToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)highlightCenterThumbnail;
-(void)_updateHighlightForVisibleCellsAnimated:(BOOL)arg1 ;
-(CGSize)_cellSizeForClipAtIndex:(long long)arg1 ;
-(void)_updateHighlightForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionViewContentInsets;
-(void)setCollectionViewDraggingIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)collectionViewDraggingIndexPath;
-(double)_proximityToCenterForCellAtIndexPath:(id)arg1 ;
-(void)setHighlightCenterThumbnail:(BOOL)arg1 ;
@end

