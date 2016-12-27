/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, NSArray, UICollectionViewFlowLayout, NSString;

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _verticalLayout;
	UICollectionView* _collectionView;
	NSArray* _recentInputStrings;
	UICollectionViewFlowLayout* _flowLayout;

}

@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * recentInputStrings;                         //@synthesize recentInputStrings=_recentInputStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)displayLayer:(id)arg1 ;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(unsigned long long)focusableVariantCount;
-(void)setRecentInputs:(id)arg1 ;
-(void)setupCollectionView;
-(NSArray *)recentInputStrings;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setRecentInputStrings:(NSArray *)arg1 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setVerticalLayout:(BOOL)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)refreshSelectedRecent;
-(id)selectedRecentInputString;
@end

