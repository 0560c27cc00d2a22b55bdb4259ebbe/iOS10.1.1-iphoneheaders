/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBSearchGestureObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBFramewiseInteractiveTransitionAnimatorDelegate.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate.h>

@class SBDockView, SBDockIconListView, UILabel, SBFParallaxSettings, NSMutableSet, _SBRootFolderLayoutWrapperView, SBSearchBlurEffectView, SBSearchBackdropView, _SBMinusPageStepper, SBHomeScreenPullDownSearchViewController, SBHomeScreenSearchableTodayViewController, SBViewControllerTransitionContext, SBFramewiseInteractiveTransitionAnimator, SBPercentPassthroughInteractiveTransition, SBRootFolder, NSString;

@interface SBRootFolderView : SBFolderView <_UISettingsKeyObserver, SBSearchGestureObserver, UIGestureRecognizerDelegate, SBViewControllerTransitionContextDelegate, SBFramewiseInteractiveTransitionAnimatorDelegate, SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> {

	SBDockView* _dockView;
	SBDockIconListView* _dockListView;
	BOOL _dockViewBorrowed;
	UILabel* _idleTextView;
	SBFParallaxSettings* _parallaxSettings;
	NSMutableSet* _parallaxDisabledReasons;
	double _reachabilityYOffset;
	BOOL _layingOutForReachability;
	_SBRootFolderLayoutWrapperView* _searchPulldownWrapperView;
	_SBRootFolderLayoutWrapperView* _searchableTodayWrapperView;
	SBSearchBlurEffectView* _searchBlurEffectView;
	SBSearchBackdropView* _searchBackdropView;
	_SBMinusPageStepper* _minusPageAnimationStepper;
	double _baseOffsetForDeterminingScrollToSearchThreshold;
	CGPoint _contentOffsetWhenScrollToSearchBeganDragging;
	long long _currentPageIndexWhenScrollToSearchBeganDragging;
	double _dockListHeightWhenScrollToSearchBeganDragging;
	double _pageWidthWhenScrollToSearchBeganDragging;
	BOOL _retryingAutoScrollToSearchDueToUnexpectedContentOffset;
	BOOL _scrollToSearchIsDraggingOrAnimating;
	BOOL _scrollToSearchIsBeingPresentedOrDismissedAutomatically;
	BOOL _searchWasVisibleWhenScrollToSearchBeganDragging;
	long long _targetPageIndexForAutoScrollToSearch;
	double _doNotUseThisDirectlyPlease_dockOffscreenProgress;
	NSMutableSet* _dockOffscreenProgressSettingReasons;
	SBHomeScreenPullDownSearchViewController* _pullDownSearchViewController;
	SBHomeScreenSearchableTodayViewController* _searchableTodayViewController;
	SBViewControllerTransitionContext* _currentPullDownTransition;
	SBFramewiseInteractiveTransitionAnimator* _currentPullDownAnimator;
	SBPercentPassthroughInteractiveTransition* _currentPullDownInteractor;
	SBViewControllerTransitionContext* _currentSlideOverTransition;
	SBFramewiseInteractiveTransitionAnimator* _currentSlideOverAnimator;
	SBPercentPassthroughInteractiveTransition* _currentSlideOverInteractor;
	BOOL _spotlightTransitioningFromBreadcrumb;
	unsigned long long _dockEdge;

}

@property (assign,getter=isDockViewBorrowed,nonatomic) BOOL dockViewBorrowed;                                                      //@synthesize dockViewBorrowed=_dockViewBorrowed - In the implementation block
@property (assign,getter=isSpotlightTransitioningFromBreadcrumb,nonatomic) BOOL spotlightTransitioningFromBreadcrumb;              //@synthesize spotlightTransitioningFromBreadcrumb=_spotlightTransitioningFromBreadcrumb - In the implementation block
@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings;                                                             //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (assign,nonatomic) unsigned long long dockEdge;                                                                          //@synthesize dockEdge=_dockEdge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(id)searchableTodayViewController;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(void)resetIconListViews;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(id)pullDownSearchViewController;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)dockView;
-(void)beginAnimatingDockOffscreenFractionForReason:(id)arg1 ;
-(void)setDockOffscreenFraction:(double)arg1 ;
-(void)endAnimatingDockOffscreenFractionForReason:(id)arg1 ;
-(unsigned long long)dockEdge;
-(void)returnDockView;
-(UIEdgeInsets)statusBarInsetsForDockEdge:(unsigned long long)arg1 ;
-(void)borrowDockView;
-(void)transitionWillBegin:(id)arg1 ;
-(void)transitionDidBegin:(id)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3 ;
-(void)setSpotlightTransitioningFromBreadcrumb:(BOOL)arg1 ;
-(void)layoutSearchableViews;
-(BOOL)isPullDownSearchVisible;
-(BOOL)isSearchableTodayViewVisible;
-(void)handleReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)returnScalingView;
-(void)searchEtceteraViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)searchEtceteraViewController:(id)arg1 shouldPresentSearchFromSource:(unsigned long long)arg2 ;
-(BOOL)searchEtceteraViewController:(id)arg1 shouldDelaySearchWillDismissWithReason:(unsigned long long)arg2 ;
-(void)cleanUpAfterTransition;
-(void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(double)effectiveStatusBarHeight;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 forSnapshot:(BOOL)arg4 ;
-(void)_currentPageIndexDidChange;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)_handleReachabilityActivatedAnimate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleReachabilityDectivatedAnimate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(double)reachabilityYOffset;
-(void)_configureParallax;
-(void)_resetSearchScrollTrackingState;
-(BOOL)isDockViewBorrowed;
-(BOOL)isPullDownSearchVisibleOrTransitioning;
-(double)_offsetForSearchableTodayViewPage;
-(double)_pullDownSearchVisiblilityProgress;
-(void)_animateViewsForPullingToSearchWithPercent:(double)arg1 ;
-(double)_searchableTodayViewVisiblilityProgress;
-(void)_animateViewsForScrollingToSearchableTodayViewWithPercent:(double)arg1 ;
-(void)_layoutSubviewsForPulldownSearch;
-(void)_layoutSubviewsForSearchableTodayView;
-(CGRect)effectivePageControlFrame;
-(UIEdgeInsets)_searchableTodayViewInsetsForPageControl;
-(CGRect)effectiveDockFrame;
-(void)layoutDockView;
-(BOOL)_isExternallyAnimatingDockOffscreenFraction;
-(void)_setDockOffscreenFraction:(double)arg1 ;
-(void)_updateDockViewZOrdering;
-(BOOL)_searchableTodayViewIsTransitioning;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)setDockViewBorrowed:(BOOL)arg1 ;
-(void)updateDockViewOrientation;
-(double)_searchableTodayViewDockOffscreenProgress;
-(UIEdgeInsets)_statusBarInsetsForDockEdge:(unsigned long long)arg1 dockOffscreenPercentage:(double)arg2 ;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)tearDownListViews;
-(BOOL)_updatesWallpaperRelativeCenter;
-(BOOL)_pullDownSearchIsTransitioning;
-(void)_captureInitialSearchScrollTrackingState;
-(void)_setReachabilityTemporarilyDisabled:(BOOL)arg1 ;
-(void)_cleanUpAfterScrolling;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(id)_activeVCForSearchableTodayView;
-(void)_kickoffTransitionWithViewController:(id)arg1 presenting:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)_scrollOffsetForPageAtIndex:(long long)arg1 ;
-(CGRect)_scrollViewFrameForDockEdge:(unsigned long long)arg1 ;
-(double)_pageWidth;
-(void)_updateStatusBarInsetsToPercent:(double)arg1 ;
-(id)_activeVCForPullDownSearch;
-(BOOL)_searchableTodayViewModeWantsBlur;
-(unsigned long long)_minusPageCount;
-(void)_setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isSpotlightTransitioningFromBreadcrumb;
-(void)setScrolling:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)prepareForTransition;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_removeParallax;
-(SBFParallaxSettings *)parallaxSettings;
-(void)_layoutSubviews;
-(void)setContentAlpha:(double)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)setIdleText:(id)arg1 ;
@end

