/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetListViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetGroupViewControllerDelegate;
@class WGWidgetDiscoveryController, NSArray, NSMapTable, NSString, UIScrollView;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGWidgetExtensionVisibilityProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	NSArray* _widgetListViewControllers;
	unsigned long long _lastWidgetCount;
	NSMapTable* _transitionCoordinatorToTargetColumnMode;
	id<WGWidgetGroupViewControllerDelegate> _delegate;
	unsigned long long _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WGWidgetGroupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) UIScrollView * majorScrollView; 
@property (nonatomic,readonly) UIScrollView * minorScrollView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
-(void)setDelegate:(id<WGWidgetGroupViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id<WGWidgetGroupViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(unsigned long long)location;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setLocation:(unsigned long long)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)activeColumnModeForWidgetListViewController:(id)arg1 ;
-(id)widgetListViewController:(id)arg1 newCustomBackgroundViewForItemInList:(id)arg2 ;
-(long long)_activeColumnMode;
-(id)initWithWidgetDiscoveryController:(id)arg1 ;
-(unsigned long long)widgetCount;
-(void)invalidateWidgetBackgroundViews;
-(long long)widgetListViewController:(id)arg1 columnModeForTransitionToSize:(CGSize)arg2 withCoordinator:(id)arg3 ;
-(void)editViewWillAppear:(id)arg1 ;
-(void)editViewDidAppear:(id)arg1 ;
-(void)editViewWillDisappear:(id)arg1 ;
-(void)editViewDidDisappear:(id)arg1 ;
-(id)_majorColumnListViewController;
-(id)_scrollViewForListViewController:(id)arg1 ;
-(id)_minorColumnListViewController;
-(void)_loadWidgetListViewControllersForColumnModes:(long long)arg1 ;
-(BOOL)_supportedColumnModesIncludesTwoColumns;
-(CGRect)_majorColumnFrameForBounds:(CGRect)arg1 columnMode:(long long)arg2 ;
-(CGRect)_minorColumnFrameForBounds:(CGRect)arg1 columnMode:(long long)arg2 ;
-(long long)_columnModeForSize:(CGSize)arg1 ;
-(CGRect)_minorColumnFrameForBounds:(CGRect)arg1 targetBounds:(CGRect)arg2 columnMode:(long long)arg3 ;
-(long long)_layoutModeForSize:(CGSize)arg1 ;
-(long long)_columnModeForLayoutMode:(long long)arg1 ;
-(long long)_activeLayoutMode;
-(void)invalidateVisibleWidgets;
-(UIScrollView *)majorScrollView;
-(UIScrollView *)minorScrollView;
-(void)presentEditViewWithCompletion:(/*^block*/id)arg1 ;
@end

