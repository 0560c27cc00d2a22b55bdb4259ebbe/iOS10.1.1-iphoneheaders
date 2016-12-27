/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBSearchEtceteraLayoutViewDelegate.h>
#import <SpringBoard/SPUISearchViewControllerDelegate.h>
#import <SpringBoard/WGWidgetGroupViewControllerDelegate.h>

@protocol SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning, SBSearchEtceteraIsolatedViewControllerAppearanceDelegate, WGWidgetGroupViewControllerDelegate, SPUISearchViewControllerDelegate;
@class SBSearchEtceteraLayoutView, SPUISearchViewController, WGWidgetGroupViewController, SBNotificationCenterDestination, NCNotificationListContainerViewController, WALockscreenWidgetViewController, SBSearchEtceteraDateViewController, UIViewController, SBViewControllerTransitionContext, NSMutableSet, NSHashTable, UINavigationItem, NSString;

@interface SBSearchEtceteraIsolatedViewController : UIViewController <SBViewControllerTransitionContextDelegate, SBSearchEtceteraLayoutViewDelegate, SPUISearchViewControllerDelegate, WGWidgetGroupViewControllerDelegate> {

	unsigned long long _currentMode;
	unsigned long long _supportedModes;
	SBSearchEtceteraLayoutView* _layoutView;
	SPUISearchViewController* _searchViewController;
	WGWidgetGroupViewController* _todayViewController;
	SBNotificationCenterDestination* _notificationCenterDestination;
	NCNotificationListContainerViewController* _notificationListContainerViewController;
	WALockscreenWidgetViewController* _weatherViewController;
	SBSearchEtceteraDateViewController* _dateViewController;
	unsigned long long _transitioningFromMode;
	unsigned long long _transitioningToMode;
	UIViewController* _transitioningFromChildViewController;
	UIViewController* _transitioningToChildViewController;
	unsigned long long _searchDismissalReasonForThisTransition;
	unsigned long long _lastPresentationSource;
	SBViewControllerTransitionContext* _currentTransition;
	id<SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning> _currentTransitionAnimator;
	NSMutableSet* _userInteractionDisabledReasons;
	BOOL _pullToSearchPossible;
	BOOL _pullToSearchRecognizing;
	BOOL transitionedToSearchInteractively;
	BOOL _scrollViewContentOffsetDirty;
	CGPoint _scrollViewLastContentOffset;
	long long _isInteractivePopToSearch;
	long long _poppingToSearch;
	long long _pushingOverSearch;
	BOOL _searchControllerRequestedReset;
	NSHashTable* _widgetEffectViews;
	struct {
		unsigned runningOnPad : 1;
		unsigned delegateRespondsToWillBeginDragging : 1;
		unsigned delegateRespondsToDidScroll : 1;
		unsigned delegateRespondsToWillEndDragging : 1;
		unsigned delegateRespondsToDidEndDragging : 1;
		unsigned delegateRespondsToDidEndDecelerating : 1;
		unsigned delegateRespondsToDidEndScrollingAnimation : 1;
		unsigned delegateRespondsToNewCustomBackgroundViewForItemInList : 1;
		unsigned didDelaySearchWillDismiss : 1;
	}  _isolatedViewControllerFlags;
	BOOL _widgetsUseCustomBackgroundViews;
	unsigned long long _currentStyle;
	id<SBSearchEtceteraIsolatedViewControllerAppearanceDelegate> _delegate;
	id<WGWidgetGroupViewControllerDelegate> _widgetGroupDelegate;
	id<SPUISearchViewControllerDelegate> _searchDelegate;
	unsigned long long _searchViewPresentationSourceForNextTransition;
	unsigned long long _searchViewDismissalReasonForNextTransition;
	unsigned long long _defaultMode;
	unsigned long long _defaultSearchViewPresentationSource;
	unsigned long long _defaultSearchViewDismissalReason;

}

@property (setter=_setTodayViewController:,getter=_todayViewController,nonatomic,retain) WGWidgetGroupViewController * todayViewController;                                                                                        //@synthesize todayViewController=_todayViewController - In the implementation block
@property (setter=_setSearchViewController:,getter=_searchViewController,nonatomic,retain) SPUISearchViewController * searchViewController;                                                                                        //@synthesize searchViewController=_searchViewController - In the implementation block
@property (setter=_setNotificationListContainerViewController:,getter=_notificationListContainerViewController,nonatomic,retain) NCNotificationListContainerViewController * notificationListContainerViewController;              //@synthesize notificationListContainerViewController=_notificationListContainerViewController - In the implementation block
@property (setter=_setNotificationCenterDestination:,getter=_notificationCenterDestination,nonatomic,retain) SBNotificationCenterDestination * notificationCenterDestination;                                                      //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
@property (nonatomic,readonly) UINavigationItem * navigationItem; 
@property (assign,nonatomic) unsigned long long currentMode; 
@property (assign,nonatomic) unsigned long long currentStyle;                                                                                                                                                                      //@synthesize currentStyle=_currentStyle - In the implementation block
@property (nonatomic,retain,readonly) SBSearchEtceteraLayoutView * contentView; 
@property (assign,nonatomic,__weak) id<SBSearchEtceteraIsolatedViewControllerAppearanceDelegate> delegate;                                                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetGroupViewControllerDelegate> widgetGroupDelegate;                                                                                                                                   //@synthesize widgetGroupDelegate=_widgetGroupDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchViewControllerDelegate> searchDelegate;                                                                                                                                           //@synthesize searchDelegate=_searchDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long searchViewPresentationSourceForNextTransition;                                                                                                                                     //@synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition - In the implementation block
@property (assign,nonatomic) unsigned long long searchViewDismissalReasonForNextTransition;                                                                                                                                        //@synthesize searchViewDismissalReasonForNextTransition=_searchViewDismissalReasonForNextTransition - In the implementation block
@property (assign,nonatomic) unsigned long long defaultMode;                                                                                                                                                                       //@synthesize defaultMode=_defaultMode - In the implementation block
@property (assign,nonatomic) unsigned long long defaultSearchViewPresentationSource;                                                                                                                                               //@synthesize defaultSearchViewPresentationSource=_defaultSearchViewPresentationSource - In the implementation block
@property (assign,nonatomic) unsigned long long defaultSearchViewDismissalReason;                                                                                                                                                  //@synthesize defaultSearchViewDismissalReason=_defaultSearchViewDismissalReason - In the implementation block
@property (assign,nonatomic) BOOL widgetsUseCustomBackgroundViews;                                                                                                                                                                 //@synthesize widgetsUseCustomBackgroundViews=_widgetsUseCustomBackgroundViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)__viewClass;
+(id)sharedInstance;
+(Class)viewClass;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enterSpotlightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetAfterAnimatedScroll;
-(void)_scrollToEnterSpotlight;
-(id)_notificationListContainerViewController;
-(id)_searchViewController;
-(id)_todayViewController;
-(BOOL)isShowingSpotlight;
-(void)transitionWillBegin:(id)arg1 ;
-(void)transitionDidReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(void)setSearchViewDismissalReasonForNextTransition:(unsigned long long)arg1 ;
-(unsigned long long)defaultSearchViewPresentationSource;
-(unsigned long long)defaultSearchViewDismissalReason;
-(void)_setUserInteractionDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)_notificationCenterDestination;
-(void)setWidgetGroupDelegate:(id<WGWidgetGroupViewControllerDelegate>)arg1 ;
-(void)setDefaultMode:(unsigned long long)arg1 ;
-(void)setDefaultSearchViewDismissalReason:(unsigned long long)arg1 ;
-(void)setDefaultSearchViewPresentationSource:(unsigned long long)arg1 ;
-(id<WGWidgetGroupViewControllerDelegate>)widgetGroupDelegate;
-(void)setWidgetsUseCustomBackgroundViews:(BOOL)arg1 ;
-(void)_willDeactivateHosting;
-(BOOL)isTransitioningToSpotlight;
-(void)setSearchViewPresentationSourceForNextTransition:(unsigned long long)arg1 ;
-(void)_enterSpotlightAnimated:(BOOL)arg1 animationBegan:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(BOOL)arg2 animationBegan:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_exitSpotlightForReason:(unsigned long long)arg1 ;
-(unsigned long long)searchViewPresentationSourceForNextTransition;
-(unsigned long long)searchViewDismissalReasonForNextTransition;
-(void)searchEtceteraLayoutView:(id)arg1 willChangeToMode:(unsigned long long)arg2 ;
-(void)searchEtceteraLayoutView:(id)arg1 didChangeToMode:(unsigned long long)arg2 ;
-(id)_dateMovingScrollView;
-(BOOL)_searchIsVisible;
-(BOOL)_todayViewIsVisible;
-(unsigned long long)_lastPresentationSource;
-(unsigned long long)_currentPresentationSource;
-(void)_updateTodayViewContentInsets;
-(void)_createMultiplexedChildViewControllers;
-(void)_cleanupTransitionStateTracking;
-(void)_statusBarWasTapped:(id)arg1 ;
-(BOOL)_onlySupportsSearch;
-(void)_containedViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)_performStateChangeForEligibleContainedViewControllers:(/*^block*/id)arg1 ;
-(void)_containedViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)_containedViewController:(id)arg1 willDisappear:(BOOL)arg2 ;
-(void)_containedViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(unsigned long long)_searchPresentationSourceForThisTransition;
-(BOOL)_shouldPresentSearchFromSource:(unsigned long long)arg1 ;
-(void)_captureStateForNavigationControllerTransitionTo:(id)arg1 ;
-(BOOL)_isPoppingToSearch:(id)arg1 ;
-(BOOL)_isInteractivePopToSearch:(id)arg1 ;
-(void)_setOrientationLockOverrideForSearch:(BOOL)arg1 ;
-(void)_postNotificationForSearchVisibilityChanged;
-(void)_resetStateForNavigationControllerTransitionTo:(id)arg1 ;
-(unsigned long long)_searchDismissalReasonForThisTransition;
-(BOOL)_isPushingOverSearch:(id)arg1 ;
-(BOOL)_shouldDelaySearchWillDismissWithReason:(unsigned long long)arg1 ;
-(void)_setCurrentMode:(unsigned long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateTodayViewAppearanceForCurrentStyle;
-(void)_setSearchViewController:(id)arg1 ;
-(void)_setTodayViewController:(id)arg1 ;
-(BOOL)_deviceSupportsWeatherDisplay;
-(void)_setWeatherViewController:(id)arg1 ;
-(void)_setDateViewController:(id)arg1 ;
-(void)_setNotificationCenterDestination:(id)arg1 ;
-(id)viewControllerForMode:(unsigned long long)arg1 ;
-(double)pullDownSearchGestureYOffset;
-(UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)arg1 ;
-(BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1 ;
-(void)_updateWeatherAndDateViewOffsetsForScrollView:(id)arg1 ;
-(double)pullDownSearchGesturePercentComplete;
-(void)_enterSpotlightInteractively;
-(void)handleDraggingWillEndWithTargetContentOffset:(inout CGPoint*)arg1 forScrollView:(id)arg2 ;
-(void)handleScrollingEnded:(id)arg1 ;
-(void)_updateAccessoryLegibility;
-(void)_captureTransitionStateTrackingForTransitionToMode:(unsigned long long)arg1 ;
-(void)_propagateLifecycleMethodsOnWillChangeToModeAnimated:(BOOL)arg1 reverse:(BOOL)arg2 ;
-(void)_propagateLifecycleMethodsOnDidChangeToModeAnimated:(BOOL)arg1 reverse:(BOOL)arg2 ;
-(void)_setMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setNotificationViewController:(id)arg1 ;
-(void)_weatherWidgetVisibilityChanged;
-(void)_propagateLifecycleMethodsOnWillChangeToModeAnimated:(BOOL)arg1 ;
-(void)_propagateLifecycleMethodsOnDidChangeToModeAnimated:(BOOL)arg1 ;
-(BOOL)_shouldNotifyWeatherWidgetForAppearanceChanges;
-(id)_viewControllersToNotifyOfStateChanges;
-(void)_popToRootViewControllerForSearchIfNeeded:(BOOL)arg1 ;
-(void)_willChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_didChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_nextModeIfResigningCurrentMode;
-(BOOL)isTransitioningFromSpotlight;
-(void)_updateWeatherLegibility:(id)arg1 ;
-(void)_updateDateViewLegibility:(id)arg1 ;
-(void)_updateSearchLegibility:(id)arg1 ;
-(void)_updateWidgetLegibility:(id)arg1 ;
-(void)_containingNavigationControllerDidDisappear;
-(void)_setNotificationListContainerViewController:(id)arg1 ;
-(unsigned long long)defaultMode;
-(BOOL)widgetsUseCustomBackgroundViews;
-(id)init;
-(SBSearchEtceteraLayoutView *)contentView;
-(void)setDelegate:(id<SBSearchEtceteraIsolatedViewControllerAppearanceDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBSearchEtceteraIsolatedViewControllerAppearanceDelegate>)delegate;
-(UINavigationItem *)navigationItem;
-(unsigned long long)currentStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(void)transitionDidFinish:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)currentMode;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setCurrentMode:(unsigned long long)arg1 ;
-(void)setSearchDelegate:(id<SPUISearchViewControllerDelegate>)arg1 ;
-(void)setCurrentStyle:(unsigned long long)arg1 ;
-(id<SPUISearchViewControllerDelegate>)searchDelegate;
-(unsigned long long)supportedModes;
-(void)resetSearchView;
-(void)searchFieldDidFocus;
-(void)dismissSearchViewWithReason:(unsigned long long)arg1 ;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(id)additionalBundleIdentifiersForAttribution:(id)arg1 ;
-(id)widgetGroupViewController:(id)arg1 newCustomBackgroundViewForItem:(id)arg2 inScrollView:(id)arg3 ;
@end

