/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, NSArray, NSString;

@interface SiriPhoneCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSArray* _phoneCalls;

}

@property (nonatomic,retain) NSArray * phoneCalls;                  //@synthesize phoneCalls=_phoneCalls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)phoneCalls;
-(void)setPhoneCalls:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(Class)cellClass;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(double)desiredHeightForFooterView;
@end

