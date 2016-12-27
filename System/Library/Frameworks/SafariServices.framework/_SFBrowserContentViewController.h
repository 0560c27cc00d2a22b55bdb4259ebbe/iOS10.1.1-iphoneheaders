/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SFReaderEnabledWebViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFDynamicBarAnimatorDelegate.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>
#import <libobjc.A.dylib/_SFPageLoadErrorControllerDelegate.h>
#import <libobjc.A.dylib/_SFSafeBrowsingControllerDelegate.h>
#import <libobjc.A.dylib/_SFBrowserToolbarDataSource.h>
#import <libobjc.A.dylib/_SFBrowserToolbarDelegate.h>
#import <libobjc.A.dylib/WBSFluidProgressStateSource.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerWindowDelegate.h>
#import <libobjc.A.dylib/_SFNavigationBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SFReaderAppearanceViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_SFDownloadControllerDelegate.h>
#import <libobjc.A.dylib/_SFFindOnPageViewDelegate.h>
#import <libobjc.A.dylib/_SFTelephonyNavigationMitigationPolicyDelegate.h>

@class _SFBrowserView, SFReaderViewController, WKBackForwardListItem, _SFDynamicBarAnimator, _SFNavigationBarItem, _SFURLSpoofingMitigator, WBSFluidProgressState, WBSFluidProgressController, UITapGestureRecognizer, _SFPageLoadErrorController, _SFSafeBrowsingController, _SFDownloadController, NSString, WBUSheetController, WebUIAuthenticationManager, _SFSafariSharingExtensionController, _SFTelephonyNavigationMitigationPolicy, _SFReloadOptionsController, _SFFindOnPageView, SFReaderEnabledWebViewController, NSArray, _WKActivatedElementInfo, UIColor;

@interface _SFBrowserContentViewController : UIViewController <SFReaderEnabledWebViewControllerDelegate, _SFActivityViewControllerDelegate, _SFDynamicBarAnimatorDelegate, _SFSingleBookmarkNavigationControllerDelegate, _SFPageLoadErrorControllerDelegate, _SFSafeBrowsingControllerDelegate, _SFBrowserToolbarDataSource, _SFBrowserToolbarDelegate, WBSFluidProgressStateSource, WBSFluidProgressControllerWindowDelegate, _SFNavigationBarDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, SFReaderAppearanceViewControllerDelegate, UIPopoverPresentationControllerDelegate, _SFDownloadControllerDelegate, _SFFindOnPageViewDelegate, _SFTelephonyNavigationMitigationPolicyDelegate> {

	_SFBrowserView* _browserView;
	SFReaderViewController* _readerViewController;
	BOOL _showingReader;
	WKBackForwardListItem* _lastBackFowardListItemOnWhichReaderWasActivated;
	_SFDynamicBarAnimator* _dynamicBarAnimator;
	BOOL _scrollViewIsDragging;
	_SFNavigationBarItem* _navigationBarItem;
	_SFURLSpoofingMitigator* _URLSpoofingMitigator;
	WBSFluidProgressState* _fluidProgressState;
	WBSFluidProgressController* _fluidProgressController;
	UITapGestureRecognizer* _showBarsFromBottomBarRecognizer;
	BOOL _pageScrollsWithBottomBar;
	BOOL _updatingGeometryFromDynamicBarAnimator;
	BOOL _interfaceFillsScreen;
	BOOL _usesNarrowLayout;
	_SFPageLoadErrorController* _pageLoadErrorController;
	_SFSafeBrowsingController* _safeBrowsingController;
	BOOL _safeBrowsingEnabled;
	_SFDownloadController* _downloadController;
	BOOL _showingCrashBanner;
	double _crashBannerDraggingOffset;
	BOOL _didNotifyInitialLoadFinish;
	BOOL _EVOrganizationNameIsValid;
	NSString* _EVOrganizationName;
	WBUSheetController* _sheetController;
	BOOL _isShowingSheetController;
	WebUIAuthenticationManager* _authenticationManager;
	BOOL _isSuppressingPreviewProgressAnimation;
	_SFSafariSharingExtensionController* _sharingExtensionController;
	BOOL _didReceivePolicyForInitialLoad;
	long long _preferredWhitePointAdaptivityStyle;
	long long _customPreferredStatusBarStyle;
	BOOL _isDisplayingTelephonyPrompt;
	_SFTelephonyNavigationMitigationPolicy* _telephonyNavigationPolicy;
	BOOL _entersReaderIfAvailable;
	BOOL _remoteSwipeGestureEnabled;
	long long _displayMode;
	_SFReloadOptionsController* _reloadOptionsController;
	_SFFindOnPageView* _findOnPageView;
	SFReaderEnabledWebViewController* _webViewController;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	UIColor* _preferredBarTintColor;
	UIColor* _preferredControlTintColor;

}

@property (nonatomic,retain) SFReaderEnabledWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,copy) NSArray * linkActions;                                               //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                    //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (assign,nonatomic) BOOL remoteSwipeGestureEnabled;                                    //@synthesize remoteSwipeGestureEnabled=_remoteSwipeGestureEnabled - In the implementation block
@property (assign,nonatomic) long long preferredWhitePointAdaptivityStyle; 
@property (nonatomic,retain) UIColor * preferredBarTintColor;                                   //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredControlTintColor;                               //@synthesize preferredControlTintColor=_preferredControlTintColor - In the implementation block
@property (assign,nonatomic) BOOL entersReaderIfAvailable;                                      //@synthesize entersReaderIfAvailable=_entersReaderIfAvailable - In the implementation block
@property (assign,nonatomic) long long displayMode;                                             //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) _SFReloadOptionsController * reloadOptionsController;              //@synthesize reloadOptionsController=_reloadOptionsController - In the implementation block
@property (nonatomic,retain) _SFFindOnPageView * findOnPageView;                                //@synthesize findOnPageView=_findOnPageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(long long)preferredStatusBarStyle;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isSecure;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)previewActions;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)_setWebView:(id)arg1 ;
-(void)stopLoading;
-(long long)displayMode;
-(void)_dismiss;
-(double)estimatedProgress;
-(NSArray *)linkActions;
-(id)progressState;
-(id)expectedOrCurrentURL;
-(id)currentFluidProgressStateSource;
-(void)clearFluidProgressState;
-(BOOL)createFluidProgressState;
-(BOOL)hasFailedURL;
-(void)fluidProgressRocketAnimationDidComplete;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(void)_updateDynamicBarGeometry;
-(void)_updateNavigationBar;
-(void)presentDialog:(id)arg1 forTelephonyNavigationPolicy:(id)arg2 ;
-(id)_previewViewControllerForURL:(id)arg1 defaultActions:(id)arg2 elementInfo:(id)arg3 ;
-(void)_commitPreviewViewController:(id)arg1 ;
-(void)pageLoadErrorControllerDidShowAlert:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3 ;
-(void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2 ;
-(void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2 ;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1 ;
-(id)pageLoadErrorControllerApplicationDisplayName:(id)arg1 ;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2 ;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)_currentWebView;
-(void)navigationBar:(id)arg1 backDropWillApplySettings:(id)arg2 ;
-(void)navigationBarReloadButtonWasTapped:(id)arg1 ;
-(void)navigationBarReloadButtonWasLongPressed:(id)arg1 ;
-(void)navigationBarStopLoadingButtonWasTapped:(id)arg1 ;
-(void)navigationBarReaderAppearanceButtonWasTapped:(id)arg1 ;
-(void)compressedNavigationBarWasTapped:(id)arg1 ;
-(void)navigationBarURLWasTapped:(id)arg1 ;
-(void)navigationBarReaderButtonWasTapped:(id)arg1 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg1 ;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(void)navigationBarBackdropDidApplySettings:(id)arg1 ;
-(id)navigationBarURLForSharing:(id)arg1 ;
-(void)setPreferredBarTintColor:(UIColor *)arg1 ;
-(UIColor *)preferredBarTintColor;
-(void)safeBrowsingControllerDidShowSecurityWarningPage:(id)arg1 ;
-(void)safeBrowsingControllerClosePage:(id)arg1 ;
-(void)safeBrowsingController:(id)arg1 didIgnoreWarningWithURL:(id)arg2 ;
-(void)safeBrowsingControllerGoBack:(id)arg1 ;
-(void)activityViewController:(id)arg1 prepareActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)browserToolbarCanGoBack:(id)arg1 ;
-(BOOL)browserToolbarCanGoForward:(id)arg1 ;
-(BOOL)browserToolbarCanShowAction:(id)arg1 ;
-(BOOL)browserToolbarCanOpenPageInSafari:(id)arg1 ;
-(void)browserToolbarGoBack:(id)arg1 ;
-(void)browserToolbarGoForward:(id)arg1 ;
-(void)browserToolbarShowActionSheet:(id)arg1 ;
-(void)browserToolbarOpenInSafari:(id)arg1 ;
-(void)setEntersReaderIfAvailable:(BOOL)arg1 ;
-(void)setPreferredControlTintColor:(UIColor *)arg1 ;
-(void)visibilityWillChangeForFindOnPageView:(id)arg1 ;
-(id)webViewForFindOnPageView:(id)arg1 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
-(_SFReloadOptionsController *)reloadOptionsController;
-(_SFFindOnPageView *)findOnPageView;
-(BOOL)remoteSwipeGestureEnabled;
-(SFReaderEnabledWebViewController *)webViewController;
-(void)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateStatusBarAppearance;
-(void)_updateRemoteSwipeGestureState;
-(void)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_didLoadWebView;
-(void)_recordHostAppIdAndURLForTapToRadar:(id)arg1 ;
-(id)presentingViewControllerForWebViewController:(id)arg1 ;
-(void)webViewControllerDidChangeEstimatedProgress:(id)arg1 ;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(void)webViewControllerDidChangeHasOnlySecureContent:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeResponsive:(id)arg1 ;
-(void)webViewControllerWebProcessDidBecomeUnresponsive:(id)arg1 ;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 setDownloadingFileType:(long long)arg2 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)webViewControllerWebProcessDidCrash:(id)arg1 ;
-(void)webViewController:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)webViewController:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 ;
-(id)webViewController:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)webViewController:(id)arg1 commitPreviewedViewController:(id)arg2 ;
-(void)webViewControllerWillPresentJavaScriptDialog:(id)arg1 ;
-(id)downloadBackgroundTaskName;
-(void)fileDownloadDidFinish:(id)arg1 withPath:(id)arg2 withType:(long long)arg3 withSourceURL:(id)arg4 ;
-(void)readerAppearanceViewControllerDidChangeFont:(id)arg1 ;
-(void)readerAppearanceViewControllerDidDecreaseTextSize:(id)arg1 ;
-(void)readerAppearanceViewControllerDidIncreaseTextSize:(id)arg1 ;
-(void)readerAppearanceViewControllerDidChangeTheme:(id)arg1 ;
-(void)dynamicBarAnimatorOutputsDidChange:(id)arg1 ;
-(UIColor *)preferredControlTintColor;
-(void)_showBarsFromBottomBarTap:(id)arg1 ;
-(void)_updateDoNotTrackPreference;
-(long long)_sizeClassForWidth:(double)arg1 ;
-(void)_setUpTopBarAndBottomBar;
-(void)_updateStatusBarStyleForced:(BOOL)arg1 ;
-(void)setPreferredWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)_setUpSafeBrowsingController;
-(void)_setUpReloadOptionsControllerIfNeeded;
-(void)_setUpFindOnPageViewIfNeeded;
-(void)_updatePreferredBarTintColor;
-(void)_updatePreferredControlTintColor;
-(void)_setSuppressingPreviewProgressAnimation:(BOOL)arg1 ;
-(void)setWebViewController:(SFReaderEnabledWebViewController *)arg1 ;
-(void)_setUpToolbar;
-(void)_setUpWebViewControllerIfNeeded;
-(void)_updateInterfaceFillsScreen;
-(void)_updateUsesNarrowLayout;
-(void)_updateWhitePointAdaptivityStyle;
-(void)_updateScrollToTopView;
-(void)_updateWebViewLayoutSize;
-(void)_updateWebViewShrinkToFit;
-(void)_updateCurrentScrollViewInsets;
-(BOOL)_isSplitScreen;
-(void)_updateContentInsets:(UIEdgeInsets)arg1 forWebView:(id)arg2 ;
-(BOOL)_canScrollToTopInView:(id)arg1 ;
-(void)_scrollToTopFromScrollToTopView;
-(double)_buttonBarHeight;
-(id)_EVOrganizationName;
-(id)_activeToolbar;
-(void)_updatePreviewLoadingUI;
-(void)_setShowingCrashBanner:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_hideCrashBanner;
-(void)_updateCrashBannerOffset;
-(void)_performSafeBrowsingCheckForURL:(id)arg1 ;
-(void)_setShowingReader:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateEVOrganizationName;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(BOOL)_shouldPromptUserForExternalNavigationResult:(id)arg1 userAction:(id)arg2 ;
-(void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalRequest:(id)arg2 isMainFrame:(BOOL)arg3 userAction:(id)arg4 ;
-(void)_addAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_linkPreviewActionsWithDefaultActions:(id)arg1 ;
-(void)setLinkActions:(NSArray *)arg1 ;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(void)updateBottombarOffset:(double)arg1 topBarHeight:(double)arg2 ;
-(double)_crashBannerDraggingOffsetForContentOffset:(CGPoint)arg1 ;
-(void)reloadWithoutContentBlockers;
-(void)_showPassBookControllerForPass:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(BOOL)_showICSControllerForPath:(id)arg1 sourceURL:(id)arg2 ;
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 ;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)sheetControllerDidShowSheet:(id)arg1 ;
-(void)sheetControllerDidHideSheet:(id)arg1 ;
-(void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3 ;
-(id)sheetController:(id)arg1 viewControllerForAlert:(id)arg2 ;
-(id)presentingViewControllerForAlertInAuthenticationManager:(id)arg1 ;
-(BOOL)entersReaderIfAvailable;
-(void)setReloadOptionsController:(_SFReloadOptionsController *)arg1 ;
-(void)setFindOnPageView:(_SFFindOnPageView *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)setDisplayMode:(long long)arg1 ;
-(void)_updateUI;
@end

