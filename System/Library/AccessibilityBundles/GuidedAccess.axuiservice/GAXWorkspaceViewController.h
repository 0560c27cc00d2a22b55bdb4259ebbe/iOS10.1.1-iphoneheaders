/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXEventStealerViewDelegate.h>
#import <GuidedAccess/GAXFeatureViewControllerDelegate.h>
#import <GuidedAccess/GAXInterestAreaViewControllerDelegate.h>

@class GAXUIServer, GAXStyleProvider, GAXOverlayUserInterfaceViewController, UIView, GAXInterestAreaViewController, GAXFeatureViewController, UIStatusBar, GAXPassthroughNavigationBar, _UIBackdropView, UILabel, NSMutableArray, NSString;

@interface GAXWorkspaceViewController : GAXViewController <GAXEventStealerViewDelegate, GAXFeatureViewControllerDelegate, GAXInterestAreaViewControllerDelegate> {

	BOOL _usesResumeNavigationTitles;
	BOOL _transitionInProgress;
	int _layoutMode;
	GAXUIServer* _userInterfaceServer;
	GAXStyleProvider* _styleProvider;
	GAXOverlayUserInterfaceViewController* _overlayUserInterfaceViewController;
	UIView* _hostedApplicationShadowView;
	GAXInterestAreaViewController* _interestAreaViewController;
	GAXFeatureViewController* _featureViewController;
	UIStatusBar* _statusBar;
	GAXPassthroughNavigationBar* _navigationBar;
	_UIBackdropView* _statusAndNavigationBarBackgroundView;
	UILabel* _instructionsLabel;
	NSMutableArray* _transitionContextQueue;

}

@property (nonatomic,retain) GAXOverlayUserInterfaceViewController * overlayUserInterfaceViewController;              //@synthesize overlayUserInterfaceViewController=_overlayUserInterfaceViewController - In the implementation block
@property (nonatomic,retain) UIView * hostedApplicationShadowView;                                                    //@synthesize hostedApplicationShadowView=_hostedApplicationShadowView - In the implementation block
@property (nonatomic,retain) GAXInterestAreaViewController * interestAreaViewController;                              //@synthesize interestAreaViewController=_interestAreaViewController - In the implementation block
@property (nonatomic,retain) GAXFeatureViewController * featureViewController;                                        //@synthesize featureViewController=_featureViewController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                                                 //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) GAXPassthroughNavigationBar * navigationBar;                                             //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UIBackdropView * statusAndNavigationBarBackgroundView;                                  //@synthesize statusAndNavigationBarBackgroundView=_statusAndNavigationBarBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                             //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (assign,nonatomic) int layoutMode;                                                                          //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitionContextQueue;                                                 //@synthesize transitionContextQueue=_transitionContextQueue - In the implementation block
@property (assign,getter=isTransitionInProgress,nonatomic) BOOL transitionInProgress;                                 //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
@property (nonatomic,readonly) long long applicationInterfaceOrientation; 
@property (nonatomic,readonly) BOOL navigationBarNeedsMiniMetricsInitialized; 
@property (getter=isTouchEnabled,nonatomic,readonly) BOOL touchEnabled; 
@property (assign,nonatomic) GAXUIServer * userInterfaceServer;                                                       //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL usesResumeNavigationTitles;                                                         //@synthesize usesResumeNavigationTitles=_usesResumeNavigationTitles - In the implementation block
@property (nonatomic,readonly) double statusBarHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInterfaceServer:(GAXUIServer *)arg1 ;
-(GAXUIServer *)userInterfaceServer;
-(void)setUsesResumeNavigationTitles:(BOOL)arg1 ;
-(BOOL)usesResumeNavigationTitles;
-(GAXInterestAreaViewController *)interestAreaViewController;
-(BOOL)eventStealerView:(id)arg1 shouldStealEventAtPoint:(CGPoint)arg2 ;
-(BOOL)isTouchEnabled;
-(id)initWithOverlayUserInterfaceViewController:(id)arg1 ;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(void)getInterestAreaPathForFingerPath:(id)arg1 interestAreaViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)boundsForConstrainingFingerPathInInterestAreaViewController:(id)arg1 ;
-(id)referenceViewForConvertingFromAndToWindowCoordinateSystemForInterestAreaViewController:(id)arg1 ;
-(id)viewToCoverWithOutOfBoundsDrawingForInterestAreaViewWithController:(id)arg1 edgeInsets:(UIEdgeInsets*)arg2 ;
-(double)scaleForSpecialControlsInInterestAreaViewController:(id)arg1 ;
-(void)setOverlayUserInterfaceViewController:(GAXOverlayUserInterfaceViewController *)arg1 ;
-(void)setInterestAreaViewController:(GAXInterestAreaViewController *)arg1 ;
-(void)setTransitionContextQueue:(NSMutableArray *)arg1 ;
-(void)setFeatureViewController:(GAXFeatureViewController *)arg1 ;
-(void)setHostedApplicationShadowView:(UIView *)arg1 ;
-(void)setStatusAndNavigationBarBackgroundView:(_UIBackdropView *)arg1 ;
-(GAXFeatureViewController *)featureViewController;
-(long long)applicationInterfaceOrientation;
-(void)_loadNavigationBarWithContainerView:(id)arg1 ;
-(void)_loadStatusAndNavigationBarBackgroundViewWithContainerView:(id)arg1 ;
-(void)_loadInstructionsLabelWithContainerView:(id)arg1 ;
-(void)_loadSystemFeatureViewWithContainerView:(id)arg1 ;
-(void)_loadStatusBarWithContainerView:(id)arg1 ;
-(void)_loadHostedApplicationShadowViewWithContainerView:(id)arg1 ;
-(GAXOverlayUserInterfaceViewController *)overlayUserInterfaceViewController;
-(void)_loadInterestAreaViewWithContainerView:(id)arg1 ;
-(void)_updateEverythingForLayoutMode:(int)arg1 ;
-(void)_updateInterestAreaView;
-(void)_updateHostedApplicationShadowView;
-(void)_updateInstructionsLabel;
-(void)_updateHostedApplicationViewWithAnimationDuration:(double)arg1 targetSize:(CGSize)arg2 ;
-(id)_instructionsLabelTextWhenTouchEnabled:(BOOL)arg1 ;
-(CGSize)_instructionsLabelMaximumSize;
-(UIEdgeInsets)_hostedApplicationViewEdgeInsetsForLayoutMode:(int)arg1 interfaceOrientation:(long long)arg2 ;
-(void)_handleDismissButtonTapped:(id)arg1 ;
-(void)_handleStartButtonTapped:(id)arg1 ;
-(id)_instructionsLabelWithText:(id)arg1 ;
-(CGRect)_adjustedTopChromeViewFrame:(CGRect)arg1 ;
-(_UIBackdropView *)statusAndNavigationBarBackgroundView;
-(UIView *)hostedApplicationShadowView;
-(void)_getHostedApplicationViewParametersForLayoutMode:(int)arg1 scaleFactor:(double*)arg2 frame:(CGRect*)arg3 targetSize:(CGSize)arg4 ;
-(CGRect)_adjustedBottomChromeViewFrame:(CGRect)arg1 ;
-(void)_updateStatusBar;
-(void)_updateStatusAndNavigationBarBackgroundView;
-(void)_updateSystemFeatureView;
-(void)_willBeginTransitionWithType:(int)arg1 ;
-(double)_transitionDuration;
-(void)_didFinishTransitionWithType:(int)arg1 ;
-(BOOL)isTransitionInProgress;
-(void)setTransitionInProgress:(BOOL)arg1 ;
-(NSMutableArray *)transitionContextQueue;
-(void)_performOrScheduleTransitionWithType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performTransitionWithType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)navigationBarNeedsMiniMetricsInitialized;
-(BOOL)shouldDisplayMiniToolbarForController:(id)arg1 ;
-(id)viewForPresentingOverlayUserInterfaceForFeatureViewController:(id)arg1 ;
-(void)featureViewController:(id)arg1 touchSystemFeatureDidChange:(BOOL)arg2 ;
-(void)featureViewController:(id)arg1 willPresentPopoverControllerInOverlayUserInterfaceView:(id)arg2 ;
-(void)featureViewController:(id)arg1 didDismissPopoverControllerFromOverlayUserInterfaceView:(id)arg2 ;
-(BOOL)isInterestAreaViewAccessibilityElementWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(GAXPassthroughNavigationBar *)navigationBar;
-(double)statusBarHeight;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setNavigationBar:(GAXPassthroughNavigationBar *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidUnload;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)_updateNavigationBar;
-(int)layoutMode;
-(void)setLayoutMode:(int)arg1 ;
-(void)transitionInWithContext:(void*)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitionOutWithContext:(void*)arg1 completion:(/*^block*/id)arg2 ;
-(void)releaseOutlets;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
@end

