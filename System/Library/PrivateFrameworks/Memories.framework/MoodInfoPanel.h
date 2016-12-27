/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UICollectionViewController.h>

@protocol MoodDelegate;
@class NSString, NSArray;

@interface MoodInfoPanel : UICollectionViewController {

	BOOL _firstPresentation;
	int _initial_index;
	id<MoodDelegate> _moodDelegate;
	NSString* _kNeutralDisplayName;
	NSArray* _moods;

}

@property (assign) BOOL firstPresentation;                                      //@synthesize firstPresentation=_firstPresentation - In the implementation block
@property (assign,nonatomic,__weak) id<MoodDelegate> moodDelegate;              //@synthesize moodDelegate=_moodDelegate - In the implementation block
@property (assign) int initial_index;                                           //@synthesize initial_index=_initial_index - In the implementation block
@property (nonatomic,retain) NSString * kNeutralDisplayName;                    //@synthesize kNeutralDisplayName=_kNeutralDisplayName - In the implementation block
@property (nonatomic,retain) NSArray * moods;                                   //@synthesize moods=_moods - In the implementation block
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)preferredFocusEnvironments;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(double)_estimatedWidth;
-(void)setKNeutralDisplayName:(NSString *)arg1 ;
-(void)setMoodDelegate:(id<MoodDelegate>)arg1 ;
-(void)setInitial_index:(int)arg1 ;
-(void)setMoods:(NSArray *)arg1 ;
-(int)initial_index;
-(void)setFirstPresentation:(BOOL)arg1 ;
-(NSArray *)moods;
-(BOOL)firstPresentation;
-(id<MoodDelegate>)moodDelegate;
-(NSString *)kNeutralDisplayName;
@end

