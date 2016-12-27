/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIShadowedView.h>

@protocol UITabBarDelegate;
@class UIView, NSArray, UITabBarItem, _UITabBarAppearanceStorage, _UITabBarVisualProvider, NSString, UIColor, UIImage;

@interface UITabBar : UIView <_UIShadowedView> {

	UIView* _customizeView;
	id<UITabBarDelegate> _delegate;
	NSArray* _items;
	UITabBarItem* _selectedItem;
	NSArray* _customizationItems;
	long long _barOrientation;
	struct {
		unsigned wasEnabled : 1;
		unsigned customized : 1;
		unsigned downButtonSentAction : 1;
		unsigned isLocked : 1;
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned backgroundNeedsUpdate : 1;
		unsigned hiddenAwaitingFocus : 1;
		unsigned focusedItemHighlightShouldBeVisible : 1;
		unsigned hasVibrantLabels : 1;
		unsigned blurDisabled : 1;
		unsigned disableBlurTinting : 1;
		unsigned pendingFocusAction : 1;
	}  _tabBarFlags;
	_UITabBarAppearanceStorage* _appearanceStorage;
	_UITabBarVisualProvider* _visualProvider;
	BOOL _hidesShadow;
	BOOL _showsHighlightedState;
	BOOL _scrollsItems;
	long long _itemPositioning;
	double _itemDimension;
	double _itemSpacing;
	long long _barMetrics;
	long long _imageStyle;
	long long _tabBarSizing;
	NSString* _backdropViewLayerGroupName;
	unsigned long long _preferredFocusHeading;

}

@property (assign,setter=_setNextSelectionSlideDuration:,nonatomic) double _nextSelectionSlideDuration; 
@property (assign,setter=_setTabButtonWidth:,nonatomic) double _tabButtonWidth; 
@property (assign,setter=_setInterTabButtonSpacing:,nonatomic) double _interTabButtonSpacing; 
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow;                                                                                                          //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (assign,setter=_setTabBarSizing:,nonatomic) long long _tabBarSizing;                                                                                                   //@synthesize tabBarSizing=_tabBarSizing - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (assign,setter=_setBarOrientation:,nonatomic) long long _barOrientation; 
@property (assign,setter=_setShowsHighlightedState:,nonatomic) BOOL _showsHighlightedState;                                                                                      //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView; 
@property (assign,setter=_setBackgroundNeedsUpdate:,nonatomic) BOOL _backgroundNeedsUpdate; 
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;                                    //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;                                                                                                       //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;                                                                                                       //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,setter=_setScrollsItems:,nonatomic) BOOL _scrollsItems;                                                                                                        //@synthesize scrollsItems=_scrollsItems - In the implementation block
@property (assign,setter=_setFocusedItemHightlightShouldBeVisible:,getter=_focusedItemHighlightShouldBeVisible,nonatomic) BOOL focusedItemHighlightShouldBeVisible; 
@property (assign,setter=_setHiddenAwaitingFocus:,getter=_isHiddenAwaitingFocus,nonatomic) BOOL hiddenAwaitingFocus; 
@property (assign,setter=_setPreferredFocusHeading:,getter=_preferredFocusHeading,nonatomic) unsigned long long preferredFocusHeading;                                           //@synthesize preferredFocusHeading=_preferredFocusHeading - In the implementation block
@property (assign,setter=_setPendingFocusAction:,getter=_pendingFocusAction,nonatomic) BOOL pendingFocusAction; 
@property (getter=_focusedTabBarItem,nonatomic,readonly) UITabBarItem * focusedTabBarItem; 
@property (assign,nonatomic,__weak) id<UITabBarDelegate> delegate;                                                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic,__weak) UITabBarItem * selectedItem;                                                                                                                 //@synthesize selectedItem=_selectedItem - In the implementation block
@property (getter=isCustomizing,nonatomic,readonly) BOOL customizing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,copy) UIColor * unselectedItemTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (assign,nonatomic) long long itemPositioning;                                                                                                                          //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) double itemWidth;                                                                                                                                   //@synthesize itemDimension=_itemDimension - In the implementation block
@property (assign,nonatomic) double itemSpacing;                                                                                                                                 //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeForIdiom:(long long)arg1 ;
+(id)_unselectedTabTintColorForView:(id)arg1 ;
+(id)_visualProviderForTabBar:(id)arg1 ;
-(void)pu_animateBarTransitionWithContext:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITabBarDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UITabBarDelegate>)delegate;
-(id)_backgroundView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(BOOL)isTranslucent;
-(BOOL)isLocked;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)_isEligibleForFocus;
-(BOOL)canBecomeFocused;
-(void)removeConstraint:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)_subclassImplementsDrawRect;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)_appearanceStorage;
-(void)_accessibilityButtonShapesParametersDidChange;
-(id)_effectiveBarTintColor;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(BOOL)_hidesShadow;
-(id)_backdropViewLayerGroupName;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(id)_shadowView;
-(void)_setBackgroundView:(id)arg1 ;
-(double)_shadowAlpha;
-(void)_setShadowAlpha:(double)arg1 ;
-(BOOL)_disableBlurTinting;
-(void)_setDisableBlurTinting:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIColor *)barTintColor;
-(UIView *)_accessoryView;
-(BOOL)_isTranslucent;
-(void)_setBarOrientation:(long long)arg1 ;
-(void)_setAccessoryView:(id)arg1 ;
-(void)setSelectedItem:(UITabBarItem *)arg1 ;
-(void)_setPreferredFocusHeading:(unsigned long long)arg1 ;
-(void)_setFocusedItemHightlightShouldBeVisible:(BOOL)arg1 ;
-(void)_setHiddenAwaitingFocus:(BOOL)arg1 ;
-(void)beginCustomizingItems:(id)arg1 ;
-(BOOL)isCustomizing;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(long long)_barMetrics;
-(long long)_imageStyle;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(UIColor *)selectedImageTintColor;
-(id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1 ;
-(void)_buttonDown:(id)arg1 ;
-(void)_buttonUp:(id)arg1 ;
-(void)_buttonCancel:(id)arg1 ;
-(BOOL)_showsHighlightedState;
-(void)_setShowsHighlightedState:(BOOL)arg1 ;
-(BOOL)_scrollsItems;
-(long long)itemPositioning;
-(double)itemWidth;
-(double)itemSpacing;
-(void)_configureItems:(id)arg1 ;
-(void)_setBackgroundNeedsUpdate:(BOOL)arg1 ;
-(BOOL)_blurEnabled;
-(unsigned long long)_preferredFocusHeading;
-(UITabBarItem *)selectedItem;
-(BOOL)_focusedItemHighlightShouldBeVisible;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(BOOL)arg3 ;
-(void)_positionAllItems;
-(void)setItemWidth:(double)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(void)_setScrollsItems:(BOOL)arg1 ;
-(void)setItemPositioning:(long long)arg1 ;
-(void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1 ;
-(void)setUnselectedItemTintColor:(UIColor *)arg1 ;
-(void)_doCommonTabBarInit;
-(long long)_effectiveBarOrientation;
-(void)_updateBackgroundColorForTraitCollection:(id)arg1 ;
-(void)_customizeWithAvailableItems:(id)arg1 ;
-(void)_dismissCustomizeSheet:(BOOL)arg1 ;
-(void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2 ;
-(void)_effectiveBarTintColorDidChange;
-(UIColor *)unselectedItemTintColor;
-(id)_effectiveUnselectedTintColor;
-(BOOL)_isHiddenAwaitingFocus;
-(void)_buttonDownDelayed:(id)arg1 ;
-(void)_adjustButtonSelection:(id)arg1 ;
-(void)_customizeDoneButtonAction:(id)arg1 ;
-(double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4 ;
-(void)_setBackgroundImage:(id)arg1 ;
-(void)_setSelectionIndicatorImage:(id)arg1 ;
-(void)_setLabelFont:(id)arg1 ;
-(void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2 ;
-(void)_setLabelShadowColor:(id)arg1 ;
-(void)_setLabelShadowOffset:(CGSize)arg1 ;
-(void)_setVibrantLabels:(BOOL)arg1 ;
-(BOOL)_vibrantLabels;
-(double)_nextSelectionSlideDuration;
-(void)_setNextSelectionSlideDuration:(double)arg1 ;
-(BOOL)_backgroundNeedsUpdate;
-(void)_setTabBarSizing:(long long)arg1 ;
-(void)_setTabButtonWidth:(double)arg1 ;
-(double)_tabButtonWidth;
-(void)_setInterTabButtonSpacing:(double)arg1 ;
-(double)_interTabButtonSpacing;
-(long long)_barOrientation;
-(BOOL)endCustomizingAnimated:(BOOL)arg1 ;
-(void)_makeCurrentButtonFirstResponder;
-(void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3 ;
-(id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2 ;
-(BOOL)_pendingFocusAction;
-(void)_setPendingFocusAction:(BOOL)arg1 ;
-(id)_focusedTabBarItem;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(BOOL)arg1 ;
-(double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4 ;
-(void)_updateTabBarItemView:(id)arg1 ;
-(long long)_tabBarSizing;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
@end

