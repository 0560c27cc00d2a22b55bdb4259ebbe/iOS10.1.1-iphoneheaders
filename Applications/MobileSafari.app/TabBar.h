/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TabBarDelegate;
@class NSMutableArray, UIScrollView, UITapGestureRecognizer, UIView, UIGestureRecognizer, TabBarItem, UIPanGestureRecognizer, NSArray, TabBarStyle, NSString;

@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	NSMutableArray* _tabBarItemViewReuseStack;
	UIScrollView* _scrollView;
	UITapGestureRecognizer* _tapRecognizer;
	UIView* _leadingContainer;
	UIView* _trailingContainer;
	UIView* _leadingBackgroundTintView;
	UIView* _trailingBackgroundTintView;
	UIView* _leadingBackgroundOverlayView;
	UIView* _trailingBackgroundOverlayView;
	UIGestureRecognizer* _reorderRecognizer;
	BOOL _reorderOriginNeedsReset;
	CGPoint _reorderOrigin;
	CGPoint _reorderEffectiveTouchLocation;
	TabBarItem* _floatingItem;
	TabBarItem* _sinkingItem;
	TabBarItem* _draggingItem;
	UIPanGestureRecognizer* _scrollableTabBarDragGestureRecognizer;
	BOOL _draggingItemUsingScrollableTabBarDragGestureRecognizer;
	BOOL _hidesTitles;
	id<TabBarDelegate> _delegate;
	NSArray* _items;
	TabBarStyle* _barStyle;

}

@property (assign,nonatomic,__weak) id<TabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) TabBarStyle * barStyle;                          //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesTitles;                                //@synthesize hidesTitles=_hidesTitles - In the implementation block
@property (nonatomic,readonly) double itemWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
-(void)scrollToItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setHidesTitles:(BOOL)arg1 ;
-(CGRect)frameForItem:(id)arg1 ;
-(id)itemAtPoint:(CGPoint)arg1 ;
-(void)beginDraggingItem:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)stopDraggingItem;
-(void)updateDraggingItemAtPoint:(CGPoint)arg1 ;
-(void)_itemDidPressCloseButton:(id)arg1 ;
-(id)_requestReusableTabBarItemView;
-(void)_relinquishReusableTabBarItemView:(id)arg1 ;
-(void)_tap:(id)arg1 ;
-(void)reorder:(id)arg1 ;
-(double)_scrollableWidth;
-(void)_scrollToItemIfNeeded:(id)arg1 ;
-(id)_itemAtLocation:(CGPoint)arg1 ;
-(double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 withSlowingFactor:(double)arg2 ;
-(double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveIndexForIndex:(unsigned long long)arg1 ofItems:(id)arg2 ;
-(void)_layoutItem:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(CGRect)arg3 itemCount:(unsigned long long)arg4 beforeActiveItem:(BOOL)arg5 ;
-(void)_layoutContainers;
-(void)_updateReorderRecognizer;
-(void)_layoutIndexes:(id)arg1 ofItems:(id)arg2 ;
-(void)_scrollTowardItem:(id)arg1 byAmount:(double)arg2 ;
-(void)_activateItemIfNecessary:(id)arg1 ;
-(id)_itemForTouch:(id)arg1 ;
-(void)_beginReorderingItem:(id)arg1 ;
-(void)_updateReorderingAtPoint:(CGPoint)arg1 reorderingSupportsDragInitiation:(BOOL)arg2 ;
-(void)_finishReorderingAnimated:(BOOL)arg1 ;
-(long long)_dragInteractionTypeWithFloatingItem:(id)arg1 gestureRecognizerLocation:(CGPoint)arg2 ;
-(void)_beginReorderingItemWithGestureRecognizer:(id)arg1 ;
-(unsigned long long)_maximumTruncationIndexForTitle:(id)arg1 ;
-(BOOL)hidesTitles;
-(BOOL)_isScrollable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<TabBarDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<TabBarDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setBarStyle:(TabBarStyle *)arg1 ;
-(TabBarStyle *)barStyle;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(double)itemWidth;
-(void)_updateBackground;
-(double)_itemWidth;
-(CGRect)_frameForItemAtIndex:(unsigned long long)arg1 ;
@end

