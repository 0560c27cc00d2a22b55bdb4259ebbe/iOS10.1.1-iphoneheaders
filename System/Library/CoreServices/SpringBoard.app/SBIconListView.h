/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBIconListLayoutDelegate;
@class SBIconListModel, SBIconViewMap, SBIcon, NSMutableArray, NSArray, UIView, UIFocusContainerGuide, UIFocusGuide;

@interface SBIconListView : UIView {

	SBIconListModel* _model;
	SBIconViewMap* _viewMap;
	long long _orientation;
	double _statusBarHeight;
	SBIcon* _bouncedIcon;
	NSMutableArray* _removedIcons;
	NSArray* _rotationContainers;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	UIView* _fadeView;
	BOOL _purged;
	UIFocusContainerGuide* _pageContainerGuide;
	BOOL _isEditing;
	BOOL _layoutReversed;
	UIFocusGuide* _nextIconFocusGuide;
	UIFocusGuide* _previousIconFocusGuide;
	id<SBIconListLayoutDelegate> _layoutDelegate;
	CGRect _wallpaperRelativeFrame;

}

@property (assign,nonatomic) long long orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                          //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                   //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL purged;                                                     //@synthesize purged=_purged - In the implementation block
@property (assign,getter=isLayoutReversed,nonatomic) BOOL layoutReversed;                     //@synthesize layoutReversed=_layoutReversed - In the implementation block
@property (assign,nonatomic) CGRect wallpaperRelativeFrame;                                   //@synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UIFocusGuide * previousIconFocusGuide;                           //@synthesize previousIconFocusGuide=_previousIconFocusGuide - In the implementation block
@property (nonatomic,retain) UIFocusGuide * nextIconFocusGuide;                               //@synthesize nextIconFocusGuide=_nextIconFocusGuide - In the implementation block
+(unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1 ;
+(unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1 ;
+(unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1 ;
+(unsigned long long)maxIcons;
+(long long)rotationAnchor;
+(unsigned long long)maxVisibleIcons;
-(void)removeAllIconAnimations;
-(id)initWithModel:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(id)visibleIcons;
-(unsigned long long)iconColumnsForCurrentOrientation;
-(unsigned long long)iconRowsForCurrentOrientation;
-(double)bottomIconInset;
-(double)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned long long)rowAtPoint:(CGPoint)arg1 ;
-(unsigned long long)iconsInRowForSpacingCalculation;
-(double)horizontalIconPadding;
-(CGSize)defaultIconSize;
-(double)verticalIconPadding;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(double)topIconInset;
-(void)layoutIconsNow;
-(CGPoint)_wallpaperRelativeIconCenterForIconView:(id)arg1 ;
-(void)enumerateIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)arg1 ;
-(SBIconCoordinate)coordinateForIcon:(id)arg1 ;
-(void)_sendLayoutDelegateWouldHaveMovedIcon:(id)arg1 ;
-(void)_layoutIcon:(id)arg1 atIndex:(unsigned long long)arg2 createViewNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(BOOL)containsIcon:(id)arg1 ;
-(unsigned long long)firstFreeSlotIndexForType:(int)arg1 ;
-(unsigned long long)firstFreeSlotOrLastSlotIndexForType:(int)arg1 ;
-(CGPoint)originForIconAtIndex:(unsigned long long)arg1 ;
-(void)_popIconView:(id)arg1 ;
-(void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2 ;
-(id)removedIcons;
-(void)setIconsNeedLayout;
-(void)layoutIconsIfNeeded:(double)arg1 domino:(BOOL)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(void)removeIconAtIndex:(unsigned long long)arg1 ;
-(Class)baseIconViewClass;
-(SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 ;
-(CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1 ;
-(void)layoutFocusGuides;
-(UIFocusGuide *)nextIconFocusGuide;
-(UIFocusGuide *)previousIconFocusGuide;
-(void)_sendLayoutDelegateLayoutInvalidated;
-(BOOL)isLayoutReversed;
-(unsigned long long)indexForCoordinate:(SBIconCoordinate)arg1 forOrientation:(long long)arg2 ;
-(void)showIconImagesFromColumn:(long long)arg1 toColumn:(long long)arg2 totalColumns:(long long)arg3 allowAnimations:(BOOL)arg4 ;
-(void)enumerateIconsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)iconRowsForSpacingCalculation;
-(double)horizontalBumpForColumn:(unsigned long long)arg1 ;
-(id)viewMap;
-(void)setLayoutReversed:(BOOL)arg1 ;
-(void)setWallpaperRelativeFrame:(CGRect)arg1 ;
-(unsigned long long)rowForIcon:(id)arg1 ;
-(BOOL)compactIcons:(BOOL)arg1 ;
-(unsigned long long)firstFreeSlotIndex;
-(unsigned long long)firstFreeSlotOrLastSlotIndex;
-(id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(BOOL)arg3 ;
-(void)removeIcon:(id)arg1 ;
-(void)setAlphaForAllIcons:(double)arg1 ;
-(CGPoint)originForIcon:(id)arg1 ;
-(CGPoint)centerForIcon:(id)arg1 ;
-(id)viewForIcon:(id)arg1 ;
-(SBIconCoordinate)coordinateForIconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfIcon:(id)arg1 ;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 ;
-(void)showAllIcons;
-(void)updateEditingStateAnimated:(BOOL)arg1 ;
-(BOOL)isDock;
-(void)setBouncedIcon:(id)arg1 ;
-(id)bouncedIcon;
-(void)setIconsLabelAlpha:(double)arg1 ;
-(void)performRotationWithDuration:(double)arg1 ;
-(void)cleanupAfterRotation;
-(void)setNextIconFocusGuide:(UIFocusGuide *)arg1 ;
-(void)setPreviousIconFocusGuide:(UIFocusGuide *)arg1 ;
-(CGRect)wallpaperRelativeFrame;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(double)statusBarHeight;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(id)tintColor;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(id)model;
-(id)icons;
-(Class)modelClass;
-(BOOL)isFull;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(void)setModel:(id)arg1 ;
-(int)iconLocation;
-(void)setLayoutDelegate:(id<SBIconListLayoutDelegate>)arg1 ;
-(id<SBIconListLayoutDelegate>)layoutDelegate;
-(void)setStatusBarHeight:(double)arg1 ;
-(BOOL)purged;
-(void)setPurged:(BOOL)arg1 ;
-(unsigned long long)columnAtPoint:(CGPoint)arg1 ;
@end

