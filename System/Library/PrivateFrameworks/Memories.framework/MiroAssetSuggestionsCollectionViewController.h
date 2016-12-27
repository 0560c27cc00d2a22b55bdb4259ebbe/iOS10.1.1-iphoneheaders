/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewController.h>

@protocol MiroAssetSuggestionsCollectionViewControllerDelegate;
@class NSMutableArray, NSString, NSArray, UIBarButtonItem;

@interface MiroAssetSuggestionsCollectionViewController : UICollectionViewController {

	BOOL _showDebugInterfaces;
	NSMutableArray* _allAssets;
	NSString* _memoryLocalizedTitle;
	NSArray* _assets;
	id<MiroAssetSuggestionsCollectionViewControllerDelegate> _delegate;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _showAllButton;

}

@property (nonatomic,readonly) NSMutableArray * allAssets;                                                          //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * showAllButton;                                                       //@synthesize showAllButton=_showAllButton - In the implementation block
@property (assign,nonatomic) BOOL showDebugInterfaces;                                                              //@synthesize showDebugInterfaces=_showDebugInterfaces - In the implementation block
@property (nonatomic,copy) NSString * memoryLocalizedTitle;                                                         //@synthesize memoryLocalizedTitle=_memoryLocalizedTitle - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                                      //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) id<MiroAssetSuggestionsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)_indexOAssetWithCreationDate:(id)arg1 inChronologicallySortedAssets:(id)arg2 insertionIndex:(unsigned long long*)arg3 ;
-(void)setDelegate:(id<MiroAssetSuggestionsCollectionViewControllerDelegate>)arg1 ;
-(id<MiroAssetSuggestionsCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)done:(id)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(NSMutableArray *)allAssets;
-(id)_assetAtIndex:(unsigned long long)arg1 ;
-(void)setShowDebugInterfaces:(BOOL)arg1 ;
-(void)showAll:(id)arg1 ;
-(void)setShowAllButton:(UIBarButtonItem *)arg1 ;
-(void)_updateLayoutWithSize:(CGSize)arg1 ;
-(BOOL)assetsArePhotosOnly;
-(BOOL)showDebugInterfaces;
-(UIBarButtonItem *)showAllButton;
-(long long)_indexOfAssetID:(id)arg1 ;
-(NSString *)memoryLocalizedTitle;
-(id)_selectedAssets;
-(void)_updateDebugLabelsOnCell:(id)arg1 withAsset:(id)arg2 ;
-(void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg1 ;
-(void)_setupPopoverPresentationIfNecessary:(id)arg1 fromView:(id)arg2 ;
-(void)selectCellsWithAssetIDs:(id)arg1 ;
-(void)setMemoryLocalizedTitle:(NSString *)arg1 ;
@end

