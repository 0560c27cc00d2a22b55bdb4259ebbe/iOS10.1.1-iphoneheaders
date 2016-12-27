/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtras-Structs.h>
#import <VideosExtras/VideosExtrasTemplateViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <VideosExtras/VideosExtrasMainMenuSectionMetricsDataSource.h>

@protocol UICollectionViewDelegate;
@class VideosExtrasMainMenuSectionMetrics, UICollectionViewFlowLayout, NSLayoutConstraint, UICollectionView, UIView, NSIndexPath, NSString;

@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasMainMenuSectionMetricsDataSource> {

	VideosExtrasMainMenuSectionMetrics* _mainMenuMetrics;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	UICollectionView* _menuBarCollectionView;
	BOOL _hasHadMenuSelection;
	UIView* _menuBarView;
	id<UICollectionViewDelegate> _didSelectDelegate;

}

@property (nonatomic,readonly) double collectionViewHeight; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfFeaturedItem; 
@property (nonatomic,readonly) UIView * menuBarView;                                             //@synthesize menuBarView=_menuBarView - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> didSelectDelegate;              //@synthesize didSelectDelegate=_didSelectDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(id)_menuItems;
-(void)_prepareLayout;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(UIView *)menuBarView;
-(double)collectionViewHeight;
-(void)setCollectionViewHeight:(double)arg1 ;
-(void)_startBackgroundAudio;
-(void)_dynamicTypeChanged;
-(void)_prepareCollectionView;
-(void)_recalculateSizes;
-(long long)numberOfItemsForSectionMetrics:(id)arg1 ;
-(id)_textElementAtIndex:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)_isFeatureItemAtIndexPath:(id)arg1 ;
-(BOOL)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2 ;
-(id<UICollectionViewDelegate>)didSelectDelegate;
-(CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3 ;
-(NSIndexPath *)indexPathOfFeaturedItem;
-(void)setDidSelectDelegate:(id<UICollectionViewDelegate>)arg1 ;
@end
