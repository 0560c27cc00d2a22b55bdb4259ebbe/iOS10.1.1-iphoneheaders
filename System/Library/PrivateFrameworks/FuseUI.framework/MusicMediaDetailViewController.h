/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/MusicMediaDetailHeaderViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicMediaDetailSplitViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>

@protocol MusicMediaDetailSplitViewController, MusicMediaDetailHeaderContentViewController, MusicMediaDetailHeaderViewController;
@class MusicHairlineView, SKUIProxyScrollView, UIViewController, NSArray, NSMapTable, MusicMediaDetailTintInformation, UIScrollView, NSString;

@interface MusicMediaDetailViewController : UIViewController <SKUIProxyScrollViewDelegate, MusicMediaDetailHeaderViewControllerDelegate, MusicMediaDetailSplitViewControllerDelegate, SKUINavigationBarDisplayConfiguring> {

	UIEdgeInsets _externalContentInset;
	double _hairlineVisuallyInsetHorizontalLayoutInset;
	MusicHairlineView* _hairlineView;
	BOOL _hasAttemptedSplitDetailViewControllerCreation;
	BOOL _hasReceivedViewDidAppear;
	double _headerHeight;
	double _headerVerticalOffset;
	BOOL _isHandlingScrollViewUpdate;
	BOOL _isSettingLayoutInsets;
	double _maximumHeaderHeight;
	SKUIProxyScrollView* _proxyScrollView;
	UIViewController*<MusicMediaDetailSplitViewController> _splitDetailViewController;
	NSArray* _splitScrollViews;
	NSMapTable* _splitScrollViewToScrollingContext;
	NSMapTable* _viewControllerToClippingView;
	BOOL _allowsVisualInsetting;
	BOOL _showingSplitDetailViewController;
	BOOL _supportsSplitDetailViewController;
	BOOL _hairlineRightInsetIgnoresLayoutInsets;
	BOOL _visuallyInset;
	MusicMediaDetailTintInformation* _detailTintInformation;
	UIViewController*<MusicMediaDetailHeaderContentViewController> _headerContentViewController;
	UIViewController*<MusicMediaDetailHeaderViewController> _headerViewController;
	/*^block*/id _splitDetailViewControllerCreationBlock;
	UIViewController*<MusicMediaDetailSplitViewController> _splitMainViewController;
	double _maximumHeaderHeightAdditions;
	double _headerTransitionProgress;
	double _navigationTitleViewAlphaTransitionProgressDelay;

}

@property (assign,nonatomic) BOOL allowsVisualInsetting;                                                                              //@synthesize allowsVisualInsetting=_allowsVisualInsetting - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;                                                   //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (nonatomic,readonly) CGSize maximumHeaderSize; 
@property (nonatomic,retain) UIViewController*<MusicMediaDetailHeaderContentViewController> headerContentViewController;              //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<MusicMediaDetailHeaderViewController> headerViewController;                            //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,copy) id splitDetailViewControllerCreationBlock;                                                                 //@synthesize splitDetailViewControllerCreationBlock=_splitDetailViewControllerCreationBlock - In the implementation block
@property (getter=isSplitDetailViewControllerLoaded,nonatomic,readonly) BOOL splitDetailViewControllerLoaded; 
@property (nonatomic,readonly) UIViewController*<MusicMediaDetailSplitViewController> splitDetailViewController; 
@property (nonatomic,retain) UIViewController*<MusicMediaDetailSplitViewController> splitMainViewController;                          //@synthesize splitMainViewController=_splitMainViewController - In the implementation block
@property (getter=isShowingSplitDetailViewController,nonatomic,readonly) BOOL showingSplitDetailViewController;                       //@synthesize showingSplitDetailViewController=_showingSplitDetailViewController - In the implementation block
@property (nonatomic,readonly) BOOL supportsSplitDetailViewController;                                                                //@synthesize supportsSplitDetailViewController=_supportsSplitDetailViewController - In the implementation block
@property (assign,nonatomic) BOOL hairlineRightInsetIgnoresLayoutInsets;                                                              //@synthesize hairlineRightInsetIgnoresLayoutInsets=_hairlineRightInsetIgnoresLayoutInsets - In the implementation block
@property (assign,nonatomic) double maximumHeaderHeightAdditions;                                                                     //@synthesize maximumHeaderHeightAdditions=_maximumHeaderHeightAdditions - In the implementation block
@property (nonatomic,readonly) double headerTransitionProgress;                                                                       //@synthesize headerTransitionProgress=_headerTransitionProgress - In the implementation block
@property (assign,nonatomic) double navigationTitleViewAlphaTransitionProgressDelay;                                                  //@synthesize navigationTitleViewAlphaTransitionProgressDelay=_navigationTitleViewAlphaTransitionProgressDelay - In the implementation block
@property (getter=isVisuallyInset,nonatomic,readonly) BOOL visuallyInset;                                                             //@synthesize visuallyInset=_visuallyInset - In the implementation block
@property (nonatomic,readonly) UIScrollView * currentPrimaryScrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(long long)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(UIViewController*<MusicMediaDetailHeaderViewController>)headerViewController;
-(void)setHeaderViewController:(UIViewController*<MusicMediaDetailHeaderViewController>)arg1 ;
-(void)music_viewInheritedLayoutInsetsDidChange;
-(void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(id)arg1 ;
-(void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(id)arg1 ;
-(void)mediaDetailSplitViewController:(id)arg1 contentScrollViewWillEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(BOOL)isShowingSplitDetailViewController;
-(void)setSplitMainViewController:(UIViewController*<MusicMediaDetailSplitViewController>)arg1 ;
-(void)setSplitDetailViewControllerCreationBlock:(id)arg1 ;
-(UIViewController*<MusicMediaDetailSplitViewController>)splitMainViewController;
-(UIViewController*<MusicMediaDetailSplitViewController>)splitDetailViewController;
-(CGSize)maximumHeaderSize;
-(BOOL)allowsHairline;
-(BOOL)allowsShowingSplitDetailViewController;
-(void)detailTintInformationDidChange;
-(void)showingSplitDetailViewControllerDidChange;
-(void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4 ;
-(void)setNeedsAllowsShowingSplitDetailViewControllerUpdate;
-(UIViewController*<MusicMediaDetailHeaderContentViewController>)headerContentViewController;
-(BOOL)isSplitDetailViewControllerLoaded;
-(void)setNavigationTitleViewAlphaTransitionProgressDelay:(double)arg1 ;
-(void)setHeaderContentViewController:(UIViewController*<MusicMediaDetailHeaderContentViewController>)arg1 ;
-(void)setHairlineRightInsetIgnoresLayoutInsets:(BOOL)arg1 ;
-(void)setMaximumHeaderHeightAdditions:(double)arg1 ;
-(double)headerTransitionProgress;
-(void)setNeedsAllowsHairlineUpdate;
-(void)setAllowsVisualInsetting:(BOOL)arg1 ;
-(BOOL)isVisuallyInset;
-(void)supportsSplitDetailViewControllerDidChange;
-(BOOL)supportsSplitDetailViewController;
-(void)visuallyInsetDidChange;
-(void)maximumMediaDetailHeaderHeightDidChangeForHeaderViewController:(id)arg1 ;
-(void)_updateHeaderViewFrameWithHeaderHeight:(double)arg1 ;
-(void)_updateSplitDetailViewControllerVisibility;
-(BOOL)_updateMaximumHeaderHeight;
-(BOOL)_updateSplitScrollViews;
-(id)_splitMainViewController;
-(void)_addViewControllerViewToHierarchy:(id)arg1 ;
-(void)_applyDetailTintInformation;
-(void)_updateHairlineProperties;
-(void)_updateScrollViewWithOriginatingScrollView:(id)arg1 shouldAlwaysAdjustContentOffset:(BOOL)arg2 ;
-(id)_scrollingContextForSplitScrollView:(id)arg1 ;
-(id)_currentPrimaryScrollView;
-(id)_splitDetailViewController;
-(BOOL)_hasVisibleNavigationBar;
-(id)_calculateHairlineColor;
-(double)_minimumHeaderHeight;
-(BOOL)_calculateSupportsSplitDetailViewControllerAllowingMakingSplitDetailViewController:(BOOL)arg1 ;
-(double)_calculateDisappearanceProgressForHeaderHeight:(double)arg1 ;
-(void)_setChildLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)_updateScrollViewWithOriginatingScrollView:(id)arg1 contentOffset:(CGPoint)arg2 shouldAlwaysAdjustContentOffset:(BOOL)arg3 ;
-(double)_effectiveHeaderHeightForContentOffset:(CGPoint)arg1 externalScrollViewContentInset:(UIEdgeInsets)arg2 ;
-(BOOL)_calculateShowingSplitDetailViewController;
-(void)_removeViewControllerViewFromHierarchy:(id)arg1 ;
-(id)_splitMainContentScrollView;
-(id)_splitDetailContentScrollView;
-(void)_updateScrollViewConsistentContentOffset:(id)arg1 ;
-(UIScrollView *)currentPrimaryScrollView;
-(BOOL)allowsVisualInsetting;
-(id)splitDetailViewControllerCreationBlock;
-(BOOL)hairlineRightInsetIgnoresLayoutInsets;
-(double)maximumHeaderHeightAdditions;
-(double)navigationTitleViewAlphaTransitionProgressDelay;
@end

