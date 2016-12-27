/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(CGPoint*)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2;

@end

