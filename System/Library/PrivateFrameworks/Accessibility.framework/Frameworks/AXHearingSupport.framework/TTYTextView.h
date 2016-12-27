/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionViewFlowLayout, UIView, UICollectionView, NSArray, NSString;

@interface TTYTextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	long long _leftIndex;
	CGPoint _panContentOffset;
	double _currentKeyboardWidth;
	UICollectionViewFlowLayout* _flowLayout;
	UIView* _leftBackgroundColorEdge;
	UIView* _rightBackgroundColorEdge;
	UIView* _middleBackgroundColorEdge;
	UIView* _inputAccessoryPlaceholderView;
	BOOL _showTTYPredictions;
	BOOL _isHandlingKeyboardFrameChanged;
	UICollectionView* _predictionsCollectionView;
	NSArray* _ttyAbbreviations;

}

@property (nonatomic,retain) UICollectionView * predictionsCollectionView;              //@synthesize predictionsCollectionView=_predictionsCollectionView - In the implementation block
@property (nonatomic,retain) NSArray * ttyAbbreviations;                                //@synthesize ttyAbbreviations=_ttyAbbreviations - In the implementation block
@property (assign,nonatomic) BOOL isHandlingKeyboardFrameChanged;                       //@synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged - In the implementation block
@property (assign,nonatomic) BOOL showTTYPredictions;                                   //@synthesize showTTYPredictions=_showTTYPredictions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)keyCommands;
-(id)accessibilityIdentifier;
-(long long)keyboardType;
-(long long)keyboardAppearance;
-(id)inputAccessoryView;
-(BOOL)disableInputBars;
-(void)_keyboardDidHide:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)updateTTYBar;
-(void)overrideTTYPredictionsHidden:(BOOL)arg1 ;
-(double)ttyBarHeight;
-(void)setShowTTYPredictions:(BOOL)arg1 ;
-(void)_kbFrameChanged:(id)arg1 ;
-(void)_loadTTYAbbreviations;
-(float)_predictionsCellHeight;
-(void)setPredictionsCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)predictionsCollectionView;
-(void)setIsHandlingKeyboardFrameChanged:(BOOL)arg1 ;
-(void)_didPanPredictions:(id)arg1 ;
-(void)setTtyAbbreviations:(NSArray *)arg1 ;
-(void)_updateBlackBarPositioning;
-(void)_tapTTYBarCell:(id)arg1 ;
-(NSArray *)ttyAbbreviations;
-(void)_updateTTYBarPosition;
-(int)_predictionsPerPage;
-(BOOL)isHandlingKeyboardFrameChanged;
-(void)_resetTTYBarPosition;
-(BOOL)_isKeyboardPredictionsEnabled;
-(void)_insertWhitespaceIfNeeded;
-(void)_didSwipeLeft:(id)arg1 ;
-(BOOL)showTTYPredictions;
@end

