/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class SATimerObject, UICollectionView, NSString;

@interface MobileTimerAssistantTimerSnippetController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	SATimerObject* _timer;
	UICollectionView* _collectionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_cellHeight;
-(void)handleTimerStateChanged:(id)arg1 ;
-(void)handleMarkStaleNotification:(id)arg1 ;
-(id)snippetCell;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)initWithAceObject:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
@end

