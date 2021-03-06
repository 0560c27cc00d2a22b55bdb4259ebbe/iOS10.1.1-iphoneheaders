/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <ChatKit/CKBrowserViewController.h>
#import <HandwritingProvider/HWScrollViewDelegate.h>
#import <HandwritingProvider/HWFavoritesPickerDelegate.h>
#import <HandwritingProvider/CKHandwritingBrowserViewControllerProtocol.h>

@class CKBrowserItemPayload, UIVisualEffectView, UIStackView, UIView, NSLayoutConstraint, HWPreviewBubbleView, HWRepeatingButton, UIButton, HWFavoritesPickerView, UILabel, DKInkView, HWScrollView, HWHandwritingItem, NSString, UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, CKBrowserDragManager, NSNumber, NSURL;

@interface HWBrowserViewController : CKBrowserViewController <HWScrollViewDelegate, HWFavoritesPickerDelegate, CKHandwritingBrowserViewControllerProtocol> {

	CKBrowserItemPayload* _resumablePayload;
	CKBrowserItemPayload* _resumablePayloadToLoad;
	BOOL _hasSwipeTextBeenShown;
	BOOL _hasSwipeDefaultBeenLoaded;
	BOOL _canvasNeedsRepositioning;
	UIVisualEffectView* _backgroundView;
	UIStackView* _topStackView;
	UIView* _bottomView;
	UIStackView* _bottomStackView;
	NSLayoutConstraint* _bottomViewHeightConstraint;
	NSLayoutConstraint* _scrollViewCenterYConstraint;
	NSLayoutConstraint* _topStackViewHeightConstraint;
	NSLayoutConstraint* _topStackViewToSuperViewTopConstraint;
	NSLayoutConstraint* _topStackViewTopToTopScrollViewConstraint;
	NSLayoutConstraint* _topStackViewBottomToTopScrollViewConstraint;
	NSLayoutConstraint* _bottomStackViewToSuperViewBottomConstraint;
	NSLayoutConstraint* _bottomStackViewBottomToBottomScrollViewConstraint;
	NSLayoutConstraint* _bottomStackViewTopToBottomScrollViewConstraint;
	UIView* _handwritingPreviewContainer;
	HWPreviewBubbleView* _handwritingPreviewBubble;
	HWRepeatingButton* _undoButton;
	UIButton* _clearButton;
	UIButton* _doneButton;
	UIButton* _keyboardButton;
	UIButton* _inputMethodPickerButton;
	UIButton* _recentsButton;
	HWFavoritesPickerView* _recentsPicker;
	UILabel* _swipeInstructionLabel;
	UILabel* _roateInstructionLabel;
	UIView* _advancePageRightButton;
	UIView* _advancePageLeftButton;
	DKInkView* _canvasView;
	HWScrollView* _handwritingScrollView;
	UIView* _handwritingContainerView;
	HWHandwritingItem* _currentHandwritingItem;
	CGSize _currentLayoutSize;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIStackView * topStackView;                                                                  //@synthesize topStackView=_topStackView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                                                         //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIStackView * bottomStackView;                                                               //@synthesize bottomStackView=_bottomStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomViewHeightConstraint;                                             //@synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrollViewCenterYConstraint;                                            //@synthesize scrollViewCenterYConstraint=_scrollViewCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewHeightConstraint;                                           //@synthesize topStackViewHeightConstraint=_topStackViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewToSuperViewTopConstraint;                                   //@synthesize topStackViewToSuperViewTopConstraint=_topStackViewToSuperViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewTopToTopScrollViewConstraint;                               //@synthesize topStackViewTopToTopScrollViewConstraint=_topStackViewTopToTopScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStackViewBottomToTopScrollViewConstraint;                            //@synthesize topStackViewBottomToTopScrollViewConstraint=_topStackViewBottomToTopScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewToSuperViewBottomConstraint;                             //@synthesize bottomStackViewToSuperViewBottomConstraint=_bottomStackViewToSuperViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewBottomToBottomScrollViewConstraint;                      //@synthesize bottomStackViewBottomToBottomScrollViewConstraint=_bottomStackViewBottomToBottomScrollViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomStackViewTopToBottomScrollViewConstraint;                         //@synthesize bottomStackViewTopToBottomScrollViewConstraint=_bottomStackViewTopToBottomScrollViewConstraint - In the implementation block
@property (nonatomic,retain) UIView * handwritingPreviewContainer;                                                        //@synthesize handwritingPreviewContainer=_handwritingPreviewContainer - In the implementation block
@property (nonatomic,retain) HWPreviewBubbleView * handwritingPreviewBubble;                                              //@synthesize handwritingPreviewBubble=_handwritingPreviewBubble - In the implementation block
@property (nonatomic,retain) HWRepeatingButton * undoButton;                                                              //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) UIButton * clearButton;                                                                      //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * keyboardButton;                                                                   //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,retain) UIButton * inputMethodPickerButton;                                                          //@synthesize inputMethodPickerButton=_inputMethodPickerButton - In the implementation block
@property (nonatomic,retain) UIButton * recentsButton;                                                                    //@synthesize recentsButton=_recentsButton - In the implementation block
@property (nonatomic,retain) HWFavoritesPickerView * recentsPicker;                                                       //@synthesize recentsPicker=_recentsPicker - In the implementation block
@property (nonatomic,retain) UILabel * swipeInstructionLabel;                                                             //@synthesize swipeInstructionLabel=_swipeInstructionLabel - In the implementation block
@property (nonatomic,retain) UILabel * roateInstructionLabel;                                                             //@synthesize roateInstructionLabel=_roateInstructionLabel - In the implementation block
@property (nonatomic,retain) UIView * advancePageRightButton;                                                             //@synthesize advancePageRightButton=_advancePageRightButton - In the implementation block
@property (nonatomic,retain) UIView * advancePageLeftButton;                                                              //@synthesize advancePageLeftButton=_advancePageLeftButton - In the implementation block
@property (nonatomic,retain) DKInkView * canvasView;                                                                      //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) HWScrollView * handwritingScrollView;                                                        //@synthesize handwritingScrollView=_handwritingScrollView - In the implementation block
@property (nonatomic,retain) UIView * handwritingContainerView;                                                           //@synthesize handwritingContainerView=_handwritingContainerView - In the implementation block
@property (nonatomic,retain) HWHandwritingItem * currentHandwritingItem;                                                  //@synthesize currentHandwritingItem=_currentHandwritingItem - In the implementation block
@property (assign,nonatomic) CGSize currentLayoutSize;                                                                    //@synthesize currentLayoutSize=_currentLayoutSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * presentationViewController; 
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate; 
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin; 
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource; 
@property (assign,nonatomic) BOOL isiMessage; 
@property (assign,nonatomic) NSString * conversationID; 
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation; 
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) long long currentBrowserConsumer; 
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,retain) NSURL * storeLaunchURL; 
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
@property (nonatomic,readonly) BOOL supportsResumablePayload; 
@property (nonatomic,retain) CKBrowserItemPayload * resumablePayload; 
-(void)_updateUndoButton:(id)arg1 ;
-(void)_updateCanvasSize;
-(void)_pickLayoutForSize:(CGSize)arg1 ;
-(void)_toggleRecentsPicker:(id)arg1 ;
-(void)pickerDidEnterEditMode:(id)arg1 ;
-(CGSize)currentLayoutSize;
-(void)_undo:(id)arg1 ;
-(void)setCurrentHandwritingItem:(HWHandwritingItem *)arg1 ;
-(void)_scrollPageToLeft:(id)arg1 ;
-(void)_scrollPageToRight:(id)arg1 ;
-(void)_inkViewTouchesEndedNotification:(id)arg1 ;
-(UIView *)advancePageRightButton;
-(void)setHandwritingScrollView:(HWScrollView *)arg1 ;
-(NSLayoutConstraint *)scrollViewCenterYConstraint;
-(void)setAdvancePageRightButton:(UIView *)arg1 ;
-(void)setRoateInstructionLabel:(UILabel *)arg1 ;
-(void)setAdvancePageLeftButton:(UIView *)arg1 ;
-(UIView *)advancePageLeftButton;
-(UILabel *)roateInstructionLabel;
-(UIView *)handwritingContainerView;
-(void)setInputMethodPickerButton:(UIButton *)arg1 ;
-(void)_dismissAndShowKeyboard:(id)arg1 ;
-(HWScrollView *)handwritingScrollView;
-(void)setBottomViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHandwritingContainerView:(UIView *)arg1 ;
-(void)setRecentsPicker:(HWFavoritesPickerView *)arg1 ;
-(NSLayoutConstraint *)bottomViewHeightConstraint;
-(UIButton *)inputMethodPickerButton;
-(NSLayoutConstraint *)topStackViewToSuperViewTopConstraint;
-(void)setRecentsButton:(UIButton *)arg1 ;
-(void)setKeyboardButton:(UIButton *)arg1 ;
-(void)setTopStackViewBottomToTopScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopStackViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopStackViewToSuperViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)_swipePageHintTextShouldBeVisible;
-(void)_inkViewTouchesBeganNotification:(id)arg1 ;
-(BOOL)_advancePageRightButtonShouldBeVisible;
-(void)_setupViewHierarchyForiPhoneWithBindings:(id)arg1 ;
-(BOOL)_advancePageLeftButtonShouldBeVisible;
-(void)_configureLayoutToiPhoneRecentsPicker;
-(UIStackView *)bottomStackView;
-(void)_updateLayoutForKeboardInterfaceOrientaion;
-(HWFavoritesPickerView *)recentsPicker;
-(id)_handwritingItemFromCurrentState;
-(void)setBottomStackViewTopToBottomScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topStackViewBottomToTopScrollViewConstraint;
-(NSLayoutConstraint *)topStackViewTopToTopScrollViewConstraint;
-(void)setTopStackViewTopToTopScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(HWPreviewBubbleView *)handwritingPreviewBubble;
-(void)setHandwritingPreviewContainer:(UIView *)arg1 ;
-(void)setTopStackView:(UIStackView *)arg1 ;
-(NSLayoutConstraint *)bottomStackViewTopToBottomScrollViewConstraint;
-(UIButton *)keyboardButton;
-(void)setBottomStackViewBottomToBottomScrollViewConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)handwritingPreviewContainer;
-(UIStackView *)topStackView;
-(void)setBottomStackView:(UIStackView *)arg1 ;
-(void)setScrollViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)swipeInstructionLabel;
-(NSLayoutConstraint *)bottomStackViewToSuperViewBottomConstraint;
-(NSLayoutConstraint *)bottomStackViewBottomToBottomScrollViewConstraint;
-(void)setBottomStackViewToSuperViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)recentsButton;
-(NSLayoutConstraint *)topStackViewHeightConstraint;
-(void)setSwipeInstructionLabel:(UILabel *)arg1 ;
-(void)setHandwritingPreviewBubble:(HWPreviewBubbleView *)arg1 ;
-(void)_scrollToVisibleRegion;
-(void)_configureLayoutToiPadPortrait;
-(id)_pageButtonWith:(SEL)arg1 image:(id)arg2 label:(id)arg3 ;
-(void)_showInputMethodPicker:(id)arg1 event:(id)arg2 ;
-(void)sendEncodedHandwriting:(id)arg1 ;
-(void)setCurrentLayoutSize:(CGSize)arg1 ;
-(BOOL)_currentKeyboardIsRTL;
-(double)pickerOffsetForEditMode:(id)arg1 ;
-(id)_createAdvancePageRightButton;
-(void)_resetScrollView:(BOOL)arg1 ;
-(BOOL)_deviceOrientationPortrait;
-(void)_sendTypingIndicator;
-(id)_createAdvancePageLeftButton;
-(id)_attributedButtonTitleForString:(id)arg1 foregroundColor:(id)arg2 ;
-(HWHandwritingItem *)currentHandwritingItem;
-(id)_recentsPickerImageForState:(BOOL)arg1 isLandscape:(BOOL)arg2 ;
-(void)storeHandwritingToFavorites:(id)arg1 ;
-(void)pickerDidExitEditMode:(id)arg1 ;
-(CGRect)_visibleInkRegionInView;
-(void)_configureLayoutToiPadLandscape;
-(void)_udpatePageButtonVisibility:(BOOL)arg1 ;
-(void)_sendHandwritingMessage;
-(void)_datasourceUpdated:(id)arg1 ;
-(id)_keyboardImageDeviceSize:(BOOL)arg1 orientationIsLandscape:(BOOL)arg2 ;
-(void)_loadDrawingFromResumablePayload;
-(void)_workaround_sendNilMessageToForceModalDismiss;
-(CGSize)_canvasSize;
-(void)_updateSwipePageHintTextVisibility:(BOOL)arg1 ;
-(void)_configureLayoutToiPhoneWritepad;
-(BOOL)handwritingScrollView:(id)arg1 shouldCancelTouchesInView:(id)arg2 ;
-(void)_setupViewHierarchyForiPadWithBindings:(id)arg1 ;
-(void)_nextInputMode:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)viewDidLoad;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIView *)bottomView;
-(UIButton *)clearButton;
-(void)_updateClearButton;
-(void)setBottomView:(UIView *)arg1 ;
-(DKInkView *)canvasView;
-(void)setCanvasView:(DKInkView *)arg1 ;
-(long long)browserPresentationStyle;
-(BOOL)shouldPresentModally;
-(BOOL)supportsResumablePayload;
-(CKBrowserItemPayload *)resumablePayload;
-(void)setResumablePayload:(CKBrowserItemPayload *)arg1 ;
-(void)_clear:(id)arg1 ;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)_done:(id)arg1 ;
-(void)setUndoButton:(HWRepeatingButton *)arg1 ;
-(HWRepeatingButton *)undoButton;
@end

