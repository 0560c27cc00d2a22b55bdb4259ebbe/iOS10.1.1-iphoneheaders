/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIBarButtonItem, UINavigationBar, UIView, NSArray, UIImageView, NSMutableDictionary, PUAbstractNavigationBanner;

@interface UINavigationItem : NSObject <NSCoding> {

	NSString* _title;
	NSString* _backButtonTitle;
	UIBarButtonItem* _backBarButtonItem;
	NSString* _prompt;
	long long _tag;
	id _context;
	UINavigationBar* _navigationBar;
	UIView* _defaultTitleView;
	UIView* _titleView;
	UIView* _backButtonView;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	NSArray* _customLeftViews;
	NSArray* _customRightViews;
	BOOL _hidesBackButton;
	BOOL _leftItemsSupplementBackButton;
	UIImageView* _frozenTitleView;
	NSArray* _abbreviatedBackButtonTitles;
	NSMutableDictionary* _minimumDesiredHeights;
	BOOL __backgroundHidden;
	double _fontScaleAdjustment;
	NSString* _pendingTitle;
	NSArray* _leftItemSpaceList;
	NSArray* _rightItemSpaceList;
	unsigned long long _leftFlexibleSpaceCount;
	unsigned long long _rightFlexibleSpaceCount;
	double __titleViewWidthForAnimations;
	double __idealCustomTitleWidth;
	UINavigationBar* __owningNavigationBar;
	UIView* __canvasView;

}

@property (setter=pu_setBanner:,nonatomic,retain) PUAbstractNavigationBanner * pu_banner; 
@property (assign,setter=_setIndependentBarStyle:,nonatomic) long long _independentBarStyle; 
@property (assign,setter=_setBackgroundHidden:,nonatomic) BOOL _backgroundHidden;                                                             //@synthesize _backgroundHidden=__backgroundHidden - In the implementation block
@property (assign,setter=_setLeftFlexibleSpaceCount:,nonatomic) unsigned long long _leftFlexibleSpaceCount;                                   //@synthesize leftFlexibleSpaceCount=_leftFlexibleSpaceCount - In the implementation block
@property (assign,setter=_setRightFlexibleSpaceCount:,nonatomic) unsigned long long _rightFlexibleSpaceCount;                                 //@synthesize rightFlexibleSpaceCount=_rightFlexibleSpaceCount - In the implementation block
@property (setter=_setLeftItemSpaceList:,nonatomic,copy) NSArray * _leftItemSpaceList;                                                        //@synthesize leftItemSpaceList=_leftItemSpaceList - In the implementation block
@property (setter=_setRightItemSpaceList:,nonatomic,copy) NSArray * _rightItemSpaceList;                                                      //@synthesize rightItemSpaceList=_rightItemSpaceList - In the implementation block
@property (assign,nonatomic) double _titleViewWidthForAnimations;                                                                             //@synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations - In the implementation block
@property (assign,setter=_setIdealCustomTitleWidth:,nonatomic) double _idealCustomTitleWidth;                                                 //@synthesize _idealCustomTitleWidth=__idealCustomTitleWidth - In the implementation block
@property (setter=_setPendingTitle:,nonatomic,copy) NSString * _pendingTitle;                                                                 //@synthesize pendingTitle=_pendingTitle - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                                     //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (setter=_setAbbreviatedBackButtonTitles:,nonatomic,copy) NSArray * _abbreviatedBackButtonTitles; 
@property (assign,setter=_setOwningNavigationBar:,getter=_owningNavigationBar,nonatomic) UINavigationBar * _owningNavigationBar;              //@synthesize _owningNavigationBar=__owningNavigationBar - In the implementation block
@property (setter=_setCanvasView:,nonatomic,retain) UIView * _canvasView;                                                                     //@synthesize _canvasView=__canvasView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIView * titleView;                                                                                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem; 
@property (assign,nonatomic) BOOL hidesBackButton; 
@property (nonatomic,copy) NSArray * leftBarButtonItems; 
@property (nonatomic,copy) NSArray * rightBarButtonItems; 
@property (assign,nonatomic) BOOL leftItemsSupplementBackButton; 
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem; 
+(id)defaultFont;
-(void)resetAllValues;
-(void)mergeValuesFromItem:(id)arg1 ;
-(void)fadeOutTitleView;
-(void)fadeInTitleView;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(void)pu_setBanner:(id)arg1 ;
-(PUAbstractNavigationBanner *)pu_banner;
-(BOOL)pu_shouldUpdateLeftBarButtonItems:(id)arg1 ;
-(BOOL)pu_shouldUpdateRightBarButtonItems:(id)arg1 ;
-(BOOL)_pu_shouldUpdateBarButtonItems:(id)arg1 withNewBarButtonItems:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)navigationBar;
-(BOOL)hidesBackButton;
-(NSArray *)leftBarButtonItems;
-(BOOL)leftItemsSupplementBackButton;
-(NSString *)title;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(id)existingBackButtonView;
-(void)_removeTitleAndButtonViews;
-(id)_defaultTitleView;
-(void)_cleanupFrozenTitleView;
-(void)_setPendingTitle:(id)arg1 ;
-(void)_freezeCurrentTitleView;
-(void)_addDefaultTitleViewToNavigationBarIfNecessary;
-(void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3 ;
-(id)backButtonView;
-(void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2 ;
-(void)_removeBackButtonView;
-(id)backButtonTitle;
-(NSArray *)rightBarButtonItems;
-(UIView *)titleView;
-(void)_setCustomLeftViews:(id)arg1 ;
-(void)_setCustomRightViews:(id)arg1 ;
-(void)_setIdealCustomTitleWidth:(double)arg1 ;
-(id)_customLeftViews;
-(id)_customRightViews;
-(void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_barButtonForBackButtonIndicator;
-(void)_setLeftBarButtonItem:(id)arg1 ;
-(void)_setRightBarButtonItem:(id)arg1 ;
-(void)_setCustomRightView:(id)arg1 ;
-(void)_setCustomLeftView:(id)arg1 ;
-(void)_setRightBarButtonItems:(id)arg1 ;
-(void)_setLeftBarButtonItems:(id)arg1 ;
-(void)_updateBarItemOwnersTo:(id)arg1 ;
-(void)updateNavigationBarButtonsAnimated:(BOOL)arg1 ;
-(id)_leftBarButtonItem;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3 ;
-(id)_rightBarButtonItem;
-(void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3 ;
-(id)_customLeftViewsCreating:(BOOL)arg1 ;
-(id)_customLeftViewCreating:(BOOL)arg1 ;
-(id)_customRightViewCreating:(BOOL)arg1 ;
-(id)_customRightViewsCreating:(BOOL)arg1 ;
-(void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2 ;
-(id)_customLeftView;
-(void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(id)_customRightView;
-(void)setCustomRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setLeftItemSpaceList:(id)arg1 ;
-(void)_setLeftFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)_setRightItemSpaceList:(id)arg1 ;
-(void)_setRightFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)leftBarButtonItem;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(id)_firstNonSpaceItemInList:(id)arg1 ;
-(NSArray *)_abbreviatedBackButtonTitles;
-(void)_setAbbreviatedBackButtonTitles:(id)arg1 ;
-(void)_setBackButtonPressed:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setNavigationBar:(id)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)currentBackButtonTitle;
-(UIBarButtonItem *)backBarButtonItem;
-(void)_removeBarButtonItemViews;
-(void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(BOOL)arg3 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(BOOL)_leftItemsWantBackButton;
-(BOOL)_wantsBackButtonIndicator;
-(id)_buttonForBackButtonIndicator;
-(void)set_leftBarButtonItem:(id)arg1 ;
-(void)set_rightBarButtonItem:(id)arg1 ;
-(void)set_customRightView:(id)arg1 ;
-(void)set_customLeftView:(id)arg1 ;
-(void)set_rightBarButtonItems:(id)arg1 ;
-(void)set_leftBarButtonItems:(id)arg1 ;
-(void)set_customLeftViews:(id)arg1 ;
-(void)set_customRightViews:(id)arg1 ;
-(id)customLeftView;
-(void)setCustomLeftView:(id)arg1 ;
-(id)customRightView;
-(void)setCustomRightView:(id)arg1 ;
-(void)setLeftBarButtonItems:(NSArray *)arg1 ;
-(void)setRightBarButtonItems:(NSArray *)arg1 ;
-(id)_rightBarButtonItems;
-(id)_leftBarButtonItems;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg1 ;
-(void)_removeContentInView:(id)arg1 ;
-(void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1 ;
-(id)_titleView;
-(void)setCustomTitleView:(id)arg1 ;
-(id)customTitleView;
-(void)setCustomLeftItem:(id)arg1 ;
-(id)customLeftItem;
-(void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomRightItem:(id)arg1 ;
-(id)customRightItem;
-(void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_firstNonSpaceLeftItem;
-(id)_firstNonSpaceRightItem;
-(void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)_minimumDesiredHeightForBarMetrics:(long long)arg1 ;
-(double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(/*^block*/id)arg2 ;
-(BOOL)_needsSizeTransitionToItem:(id)arg1 barMetrics:(long long)arg2 defaultHeightBlock:(/*^block*/id)arg3 ;
-(long long)_independentBarStyle;
-(void)_setIndependentBarStyle:(long long)arg1 ;
-(void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3 ;
-(id)_independentBackgroundImageForBarMetrics:(long long)arg1 ;
-(id)_independentShadowImage;
-(double)_fontScaleAdjustment;
-(NSString *)_pendingTitle;
-(NSArray *)_leftItemSpaceList;
-(NSArray *)_rightItemSpaceList;
-(unsigned long long)_leftFlexibleSpaceCount;
-(unsigned long long)_rightFlexibleSpaceCount;
-(BOOL)_backgroundHidden;
-(void)_setBackgroundHidden:(BOOL)arg1 ;
-(double)_titleViewWidthForAnimations;
-(void)set_titleViewWidthForAnimations:(double)arg1 ;
-(double)_idealCustomTitleWidth;
-(UINavigationBar *)_owningNavigationBar;
-(void)_setOwningNavigationBar:(id)arg1 ;
-(UIView *)_canvasView;
-(void)_setCanvasView:(id)arg1 ;
@end

