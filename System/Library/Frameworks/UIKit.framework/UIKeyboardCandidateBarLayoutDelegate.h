/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardCandidateBarLayoutDelegate <UICollectionViewDelegate>
@optional
-(double)leftMarginForCollectionView:(id)arg1 layout:(id)arg2;
-(void)candidateBarLayoutDidFinishPreparingLayout;

@required
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
-(CGSize*)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;

@end

