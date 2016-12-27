/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITransitionView.h>
#import <libobjc.A.dylib/MFComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFAutocompleteResultsTableViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeContactsSearchControllerDelegate.h>
#import <libobjc.A.dylib/MFComposeBodyFieldDelegate.h>
#import <libobjc.A.dylib/MFDragContext.h>

@protocol MFComposeRecipientTextViewDelegate, MFMailComposeViewDelegate, MFMailComposeToFieldDelegate;
@class UIView, MFComposeBodyField, MFComposeScrollView, MFComposeTextContentView, MFMailComposeRecipientView, MFComposeSubjectView, MFComposeFromView, MFComposeMultiView, MFComposeImageSizeView, UIPickerView, MFFromAddressViewController, UIResponder, NSInvocation, MFMailComposeContactsSearchController, MFAutocompleteResultsTableViewController, UIViewController, NSString;

@interface MFMailComposeView : UITransitionView <MFComposeHeaderViewDelegate, MFAutocompleteResultsTableViewControllerDelegate, UIPopoverControllerDelegate, UITextContentViewDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {

	id<MFComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	UIView* _headerView;
	UIView* _contentView;
	UIView* _shadowView;
	MFComposeBodyField* _bodyField;
	MFComposeScrollView* _bodyScroller;
	MFComposeTextContentView* _textView;
	MFMailComposeRecipientView* _toField;
	MFMailComposeRecipientView* _ccField;
	MFMailComposeRecipientView* _bccField;
	MFMailComposeRecipientView* _lastChangedRecipientView;
	MFMailComposeRecipientView* _activeRecipientView;
	MFComposeSubjectView* _subjectField;
	MFComposeFromView* _fromField;
	MFComposeMultiView* _multiField;
	MFComposeImageSizeView* _imageSizeField;
	UIPickerView* _fromAddressPickerView;
	MFFromAddressViewController* _fromAddressViewController;
	UIView* _fromAddressPickerBackgroundView;
	UIResponder* _firstResponderBeforeSheet;
	UIResponder* _pinningResponder;
	NSInvocation* _delayedPopoverInvocation;
	MFMailComposeContactsSearchController* _searchController;
	MFAutocompleteResultsTableViewController* _searchViewController;
	MFAutocompleteResultsTableViewController* _corecipientsSearchViewController;
	UIView* _corecipientsSearchTableViewSeparator;
	double _offsetBeforeSearch;
	double _keyboardIntersection;
	unsigned long long _options;
	CGSize _currentContentSize;
	unsigned long long _notifyingBodyField;
	unsigned long long _fromAddressPickerDisplayMode;
	unsigned _isChangingRecipients : 1;
	unsigned _isLoading : 1;
	unsigned _isShowingPeoplePicker : 1;
	unsigned _isRotating : 1;
	unsigned _isClosing : 1;
	unsigned _isForEditing : 1;
	unsigned _isAnimationDisabled : 1;
	unsigned _shouldShowOptionalHeaders : 1;
	unsigned _isDraggingRecipients : 1;
	unsigned _hasAppeared : 1;
	unsigned _corecipientsTableVisible : 1;
	UIViewController* _popoverOwner;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;

}

@property (assign,nonatomic) id<MFMailComposeViewDelegate> composeViewDelegate;                              //@synthesize mailComposeViewDelegate=_mailComposeViewDelegate - In the implementation block
@property (assign,nonatomic) id<MFComposeRecipientTextViewDelegate> composeRecipientDelegate;                //@synthesize composeRecipientViewDelegate=_composeRecipientViewDelegate - In the implementation block
@property (assign,nonatomic) UIViewController * popoverOwner;                                                //@synthesize popoverOwner=_popoverOwner - In the implementation block
@property (assign,nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate;                               //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL isForEditing; 
@property (assign,getter=isAnimationDisabled,nonatomic) BOOL animationDisabled; 
@property (assign,getter=isChangingRecipients,nonatomic) BOOL changingRecipients; 
@property (assign,getter=isShowingPeoplePicker,nonatomic) BOOL showingPeoplePicker; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) MFMailComposeRecipientView * toField;                                         //@synthesize toField=_toField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientView * ccField;                                         //@synthesize ccField=_ccField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientView * bccField;                                        //@synthesize bccField=_bccField - In the implementation block
@property (nonatomic,readonly) MFComposeSubjectView * subjectField;                                          //@synthesize subjectField=_subjectField - In the implementation block
@property (nonatomic,readonly) MFComposeFromView * fromField;                                                //@synthesize fromField=_fromField - In the implementation block
@property (nonatomic,readonly) MFComposeImageSizeView * imageSizeField;                                      //@synthesize imageSizeField=_imageSizeField - In the implementation block
@property (nonatomic,readonly) MFComposeMultiView * multiField;                                              //@synthesize multiField=_multiField - In the implementation block
@property (nonatomic,readonly) MFComposeBodyField * bodyField;                                               //@synthesize bodyField=_bodyField - In the implementation block
@property (nonatomic,readonly) MFComposeScrollView * bodyScroller;                                           //@synthesize bodyScroller=_bodyScroller - In the implementation block
@property (nonatomic,readonly) MFComposeTextContentView * bodyTextView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) MFMailComposeContactsSearchController * searchController;                     //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) MFAutocompleteResultsTableViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long fromAddressPickerDisplayMode;                              //@synthesize fromAddressPickerDisplayMode=_fromAddressPickerDisplayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expectedFromAddressPickerDisplayModeForTraitCollection:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_collectKeyViews:(id)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)layoutMarginsDidChange;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(BOOL)endEditing:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(BOOL)isLoading;
-(id)bottomView;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(MFComposeTextContentView *)bodyTextView;
-(MFMailComposeContactsSearchController *)searchController;
-(void)willDisappear;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(BOOL)isSearching;
-(id<MFMailComposeViewDelegate>)composeViewDelegate;
-(void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(CGRect)arg4 ;
-(void)menuDidHide;
-(void)automaticKeyboardFinishedAppearing:(id)arg1 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg1 ;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(void)_cancelAnimations;
-(BOOL)_presentsSearchResultsTableAsPopover;
-(BOOL)isShowingFromAddressPickerWheel;
-(void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_multiFieldClicked;
-(double)_heightForBottomView;
-(void)_adjustScrollerContentSize;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(CGSize)arg2 withPinFrame:(out CGRect*)arg3 ;
-(BOOL)isSearchResultsPopoverVisible;
-(id)_searchResultsTable;
-(void)_cancelDelayedPopover;
-(void)_presentDelayedPopover;
-(void)_setShadowViewVisible:(BOOL)arg1 frame:(CGRect)arg2 ;
-(BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
-(id)_corecipientResultsTable;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4 ;
-(BOOL)_shouldShowCorecipientsTableView;
-(void)_setCorecipientsTableViewVisible:(BOOL)arg1 withFieldFrame:(CGRect)arg2 ;
-(void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(CGSize)arg2 fieldFrame:(CGRect)arg3 ;
-(void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(CGSize)arg2 fieldFrame:(CGRect)arg3 ;
-(id)_allHeaderViews;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
-(BOOL)isChangingRecipients;
-(void)_setupBodyFieldWithHeaderFrame:(CGRect)arg1 enclosingFrame:(CGRect)arg2 changingView:(id)arg3 frameToPin:(CGRect)arg4 wasSearching:(BOOL)arg5 ;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(MFComposeSubjectView *)subjectField;
-(void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3 ;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1 ;
-(MFComposeScrollView *)bodyScroller;
-(void)_adjustScrollerForBottomView;
-(void)_finishUpRotationToInterfaceOrientation:(long long)arg1 ;
-(id)_focusedRecipientView;
-(unsigned long long)fromAddressPickerDisplayMode;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setFromAddressPickerVisible:(BOOL)arg1 ;
-(void)_updateKeyboardIntersection:(CGRect)arg1 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(BOOL)presentSearchResults;
-(void)setChangingRecipients:(BOOL)arg1 ;
-(id)sendingAccountProxyForComposeContactsSearchController:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2 ;
-(void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2 ;
-(void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2 ;
-(void)composeBodyFieldFrameChanged:(id)arg1 ;
-(void)composeBodyFieldDidDraw:(id)arg1 ;
-(void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)dragBeganInWindow:(id)arg1 ;
-(void)dragEnded;
-(id)dragScrollView;
-(void)setComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)setComposeRecipientDelegate:(id<MFComposeRecipientTextViewDelegate>)arg1 ;
-(void)resetContentSize;
-(void)toggleImageSizeFieldIfNecessary;
-(void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)searchResultsPopoverWasDismissed;
-(BOOL)isForEditing;
-(void)setIsForEditing:(BOOL)arg1 ;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(BOOL)isAnimationDisabled;
-(void)setShowingPeoplePicker:(BOOL)arg1 ;
-(BOOL)isShowingPeoplePicker;
-(void)cancelDelayedPopover;
-(void)fromAddressPickerPopoverWasDismissed;
-(void)fromAddressPickerNeedsToBeRefreshed;
-(void)saveFirstResponder;
-(void)restoreFirstResponder;
-(void)focusFirstResponderAfterRecipientView:(id)arg1 ;
-(void)layoutForChangedComposeRecipientView:(id)arg1 size:(CGSize)arg2 ;
-(void)viewDidBecomeFirstResponder:(id)arg1 ;
-(void)updateOptionalHeaderVisibility;
-(BOOL)chooseSelectedSearchResult;
-(void)dismissSearchResults;
-(void)beginSearchForText:(id)arg1 recipientView:(id)arg2 ;
-(void)clearSearchForActiveRecipientView;
-(void)findCorecipientsWithRecipientView:(id)arg1 ;
-(void)didIgnoreSearchResults;
-(void)didAppear;
-(id<MFComposeRecipientTextViewDelegate>)composeRecipientDelegate;
-(UIViewController *)popoverOwner;
-(void)setPopoverOwner:(UIViewController *)arg1 ;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(MFMailComposeRecipientView *)ccField;
-(MFMailComposeRecipientView *)bccField;
-(MFComposeFromView *)fromField;
-(MFComposeImageSizeView *)imageSizeField;
-(MFComposeMultiView *)multiField;
-(MFComposeBodyField *)bodyField;
-(void)setLoading:(BOOL)arg1 ;
-(void)cancelSearch;
-(MFAutocompleteResultsTableViewController *)searchViewController;
-(void)composeHeaderViewClicked:(id)arg1 ;
-(BOOL)presentSearchResults:(id)arg1 ;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(MFMailComposeRecipientView *)toField;
-(void)parentWillClose;
-(void)parentDidClose;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(BOOL)isKeyboardVisible;
-(id)dragWindow;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
@end

