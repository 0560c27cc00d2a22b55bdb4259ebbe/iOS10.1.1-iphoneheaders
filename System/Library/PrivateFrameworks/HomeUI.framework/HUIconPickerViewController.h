/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@protocol HFIconDescriptor, HUIconPickerViewControllerDelegate;
@class NSArray;

@interface HUIconPickerViewController : UICollectionViewController {

	NSArray* _iconDescriptors;
	id<HFIconDescriptor> _selectedIconDescriptor;
	id<HUIconPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<HFIconDescriptor> selectedIconDescriptor;                         //@synthesize selectedIconDescriptor=_selectedIconDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * iconDescriptors;                                         //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
@property (assign,nonatomic,__weak) id<HUIconPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sceneIconDescriptors;
-(void)setDelegate:(id<HUIconPickerViewControllerDelegate>)arg1 ;
-(id<HUIconPickerViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_cancel:(id)arg1 ;
-(id<HFIconDescriptor>)selectedIconDescriptor;
-(NSArray *)iconDescriptors;
-(void)setSelectedIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 delegate:(id)arg3 ;
-(void)_done:(id)arg1 ;
@end

