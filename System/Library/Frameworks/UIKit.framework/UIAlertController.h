/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKit/_UIAlertControllerTextFieldViewControllerContaining.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding, UIAlertControllerSystemProvidedPresentationDelegate, UIAlertControllerCoordinatedActionPerforming;
@class NSString, NSAttributedString, NSSet, UIAlertAction, NSMutableDictionary, NSMapTable, UIViewController, _UIAlertControllerTextFieldViewController, UITapGestureRecognizer, NSMutableArray, NSObject, _UIAnimationCoordinator, UIPreviewInteractionController, UIAlertControllerVisualStyle, NSIndexSet, UIPopoverController, UIView, UIGestureRecognizer, NSArray;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding> {

	NSString* _message;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedMessage;
	NSAttributedString* _attributedDetailMessage;
	NSSet* _linkedAlertControllers;
	UIAlertAction* _cancelAction;
	NSMutableDictionary* _actionToKeyCommandsDictionary;
	NSMapTable* _keyCommandToActionMapTable;
	long long _resolvedStyle;
	long long _preferredStyle;
	UIViewController* _contentViewController;
	_UIAlertControllerTextFieldViewController* _textFieldViewController;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	id _ownedTransitioningDelegate;
	BOOL _shouldInformViewOfAddedContentViewController;
	BOOL _isInSupportedInterfaceOrientations;
	BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;
	BOOL _hidden;
	BOOL __shouldFlipFrameForShimDismissal;
	BOOL __shouldAllowNilParameters;
	BOOL _hasPreservedInputViews;
	NSMutableArray* _actions;
	NSObject*<UIAlertControllerVisualStyleProviding> _styleProvider;
	UIAlertAction* _preferredAction;
	_UIAnimationCoordinator* _temporaryAnimationCoordinator;
	UIPreviewInteractionController* _previewInteractionController;
	UIAlertControllerVisualStyle* __visualStyle;
	NSIndexSet* _indexesOfActionSectionSeparators;
	NSMutableArray* __actionDelimiterIndices;
	UIPopoverController* __compatibilityPopoverController;
	UIView* __systemProvidedPresentationView;
	id<UIAlertControllerSystemProvidedPresentationDelegate> __systemProvidedPresentationDelegate;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	id<UIAlertControllerCoordinatedActionPerforming> _coordinatedActionPerformingDelegate;
	UIView* __presentationSourceRepresentationView;

}

@property (assign) BOOL _shouldFlipFrameForShimDismissal;                                                                                                                              //@synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal - In the implementation block
@property (nonatomic,retain) _UIAnimationCoordinator * temporaryAnimationCoordinator;                                                                                                  //@synthesize temporaryAnimationCoordinator=_temporaryAnimationCoordinator - In the implementation block
@property (setter=_setPreviewInteractionController:,getter=_previewInteractionController,nonatomic,retain) UIPreviewInteractionController * previewInteractionController;              //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle;                                                                                      //@synthesize _visualStyle=__visualStyle - In the implementation block
@property (readonly) NSMutableArray * _actions;                                                                                                                                        //@synthesize actions=_actions - In the implementation block
@property (setter=_setIndexesOfActionSectionSeparators:,getter=_indexesOfActionSectionSeparators,nonatomic,copy) NSIndexSet * indexesOfActionSectionSeparators;                        //@synthesize indexesOfActionSectionSeparators=_indexesOfActionSectionSeparators - In the implementation block
@property (readonly) UIAlertAction * _cancelAction;                                                                                                                                    //@synthesize cancelAction=_cancelAction - In the implementation block
@property (readonly) UIAlertAction * _focusedAction; 
@property (readonly) NSMutableArray * _actionDelimiterIndices;                                                                                                                         //@synthesize _actionDelimiterIndices=__actionDelimiterIndices - In the implementation block
@property (readonly) UIView * _foregroundView; 
@property (readonly) UIView * _dimmingView; 
@property (readonly) long long _resolvedStyle;                                                                                                                                         //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (readonly) BOOL _shouldProvideDimmingView; 
@property (readonly) BOOL _shouldAlignToKeyboard; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL _hidden;                                                                                                         //@synthesize hidden=_hidden - In the implementation block
@property (assign,setter=_setEffectAlpha:,getter=_effectAlpha,nonatomic) double effectAlpha; 
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters;                                                                                                       //@synthesize _shouldAllowNilParameters=__shouldAllowNilParameters - In the implementation block
@property (assign,setter=_setCompatibilityPopoverController:,nonatomic) UIPopoverController * _compatibilityPopoverController;                                                         //@synthesize _compatibilityPopoverController=__compatibilityPopoverController - In the implementation block
@property (readonly) _UIAlertControllerTextFieldViewController * _textFieldViewController; 
@property (setter=_setTextFieldsHidden:) BOOL _textFieldsHidden; 
@property (assign,setter=_setHasPreservedInputViews:,getter=_hasPreservedInputViews,nonatomic) BOOL hasPreservedInputViews;                                                            //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (setter=_setSystemProvidedPresentationView:,nonatomic,retain) UIView * _systemProvidedPresentationView;                                                                      //@synthesize _systemProvidedPresentationView=__systemProvidedPresentationView - In the implementation block
@property (setter=_setSystemProvidedPresentationDelegate:,nonatomic,retain) id<UIAlertControllerSystemProvidedPresentationDelegate> _systemProvidedPresentationDelegate;               //@synthesize _systemProvidedPresentationDelegate=__systemProvidedPresentationDelegate - In the implementation block
@property (setter=_setSystemProvidedGestureRecognizer:,getter=_systemProvidedGestureRecognizer,nonatomic,retain) UIGestureRecognizer * systemProvidedGestureRecognizer;                //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<UIAlertControllerCoordinatedActionPerforming> coordinatedActionPerformingDelegate;                                                              //@synthesize coordinatedActionPerformingDelegate=_coordinatedActionPerformingDelegate - In the implementation block
@property (setter=_setPresentationSourceRepresentationView:,nonatomic,retain) UIView * _presentationSourceRepresentationView;                                                          //@synthesize _presentationSourceRepresentationView=__presentationSourceRepresentationView - In the implementation block
@property (readonly) BOOL _shouldReverseActions; 
@property (setter=_setAttributedDetailMessage:,getter=_attributedDetailMessage,nonatomic,copy) NSAttributedString * _attributedDetailMessage; 
@property (setter=_setActions:,nonatomic,retain) NSArray * actions; 
@property (assign,nonatomic) long long preferredStyle; 
@property (setter=_setAttributedTitle:,getter=_attributedTitle,nonatomic,copy) NSAttributedString * attributedTitle; 
@property (setter=_setAttributedMessage:,getter=_attributedMessage,nonatomic,copy) NSAttributedString * attributedMessage; 
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,setter=_setStyleProvider:,getter=_styleProvider,nonatomic,__weak) NSObject*<UIAlertControllerVisualStyleProviding> styleProvider;                                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,setter=_setDefaultAlertAction:,nonatomic,__weak) UIAlertAction * _defaultAlertAction; 
@property (assign,setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:,nonatomic) BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;                          //@synthesize shouldEnsureContentControllerViewIsVisibleOnAppearance=_shouldEnsureContentControllerViewIsVisibleOnAppearance - In the implementation block
@property (nonatomic,retain) UIAlertAction * preferredAction;                                                                                                                          //@synthesize preferredAction=_preferredAction - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pu_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(BOOL)arg2 includesVideos:(BOOL)arg3 actionHandler:(/*^block*/id)arg4 cancelHandler:(/*^block*/id)arg5 ;
+(id)pu_alertForCPLEnableError:(id)arg1 actionHandler:(/*^block*/id)arg2 cancelHandler:(/*^block*/id)arg3 ;
+(id)pu_alertForStorageUpgradeLoadFailure;
+(id)notifyMeConfirmationControllerWithHandler:(/*^block*/id)arg1 ;
+(id)mf_actionSheetWithTitle:(id)arg1 cancellationHandler:(/*^block*/id)arg2 ;
+(id)mutedThreadActionAlertControllerWithHandler:(/*^block*/id)arg1 ;
+(id)enableWiFiCallingAlertControllerWithPreferredStyle:(long long)arg1 ;
+(id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 preferredStyle:(long long)arg3 ;
+(id)enableWiFiCallingAlertController;
+(id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 ;
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
+(BOOL)_shouldUsePresentationController;
+(void)_setShouldUsePresentationController:(BOOL)arg1 ;
+(id)_alertControllerWithTitle:(id)arg1 message:(id)arg2 ;
+(id)_alertControllerContainedInViewController:(id)arg1 ;
-(void)_gkAddCancelButtonWithNoAction;
-(void)mf_addCancelActionWithHandler:(/*^block*/id)arg1 ;
-(void)mf_presentFromViewController:(id)arg1 withSourceView:(id)arg2 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)_foregroundView;
-(NSArray *)actions;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(NSMutableArray *)_actions;
-(UIEdgeInsets)_contentInsets;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(id)_requiredNotificationsForRemoteServices;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(void)_getRotationContentSettings:(SCD_Struct_UI37*)arg1 ;
-(UIView *)_dimmingView;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)_canDismissWithGestureRecognizer;
-(id)_dismissGestureRecognizer;
-(void)_updateProvidedStyleWithTraitCollection:(id)arg1 ;
-(BOOL)_shouldAlignToKeyboard;
-(BOOL)_shouldReverseActions;
-(void)_setShouldReverseActions:(BOOL)arg1 ;
-(id)_containedAlertController;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 shouldDismissHandler:(/*^block*/id)arg4 ;
-(void)addAction:(id)arg1 ;
-(void)_updateModalPresentationStyle;
-(void)set_shouldFlipFrameForShimDismissal:(BOOL)arg1 ;
-(void)setCancelAction:(id)arg1 ;
-(void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(id)_alertControllerView;
-(void)_updateProvidedStyle;
-(void)_removeAllActions;
-(void)_performBatchActionChangesWithBlock:(/*^block*/id)arg1 ;
-(UIAlertAction *)preferredAction;
-(void)setPreferredAction:(UIAlertAction *)arg1 ;
-(void)_setIndexesOfActionSectionSeparators:(id)arg1 ;
-(void)_removeKeyCommandForAction:(id)arg1 ;
-(void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)_handleKeyCommand:(id)arg1 ;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 ;
-(void)_handleReturn;
-(NSArray *)textFields;
-(id)_actionForReturnKey;
-(long long)_resolvedStyle;
-(id)_returnKeyCommand;
-(UIAlertAction *)_cancelAction;
-(long long)preferredStyle;
-(void)_updateShouldAlignToKeyboard;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_clearActionHandlers;
-(void)_resolvedStyleChanged;
-(void)_reevaluateResolvedStyle;
-(void)_installBackGestureRecognizer;
-(NSString *)message;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedMessage;
-(void)_setAttributedMessage:(id)arg1 ;
-(NSAttributedString *)_attributedDetailMessage;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(BOOL)_isPresentedAsPopover;
-(BOOL)_needsPreferredSizeCalculated;
-(void)_recomputePreferredContentSize;
-(BOOL)_shouldDismissOnSizeChange;
-(void)_dismissWithCancelAction;
-(id)_currentDescriptor;
-(id)_styleProvider;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1 ;
-(BOOL)_hasTitle;
-(BOOL)_hasMessage;
-(BOOL)_idiomSupportsBackGesture:(long long)arg1 ;
-(void)_dismissFromBackButton:(id)arg1 ;
-(long long)_buttonTypeForBackGestureForIdiom:(long long)arg1 ;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1 ;
-(id)cancelAction;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3 ;
-(void)_invokeHandlersForAction:(id)arg1 ;
-(void)_performAction:(id)arg1 invokeActionBlock:(/*^block*/id)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(/*^block*/id)arg3 ;
-(void)_postWillBeginSystemProvidedDismissalOfAlertController;
-(void)_postDidBeginSystemProvidedDismissalOfAlertController;
-(UIPopoverController *)_compatibilityPopoverController;
-(id<UIAlertControllerSystemProvidedPresentationDelegate>)_systemProvidedPresentationDelegate;
-(BOOL)_viewControllerIsPresentedInModalPresentationContext:(id)arg1 ;
-(long long)_modalPresentationStyleForResolvedStyle;
-(BOOL)_shouldFlipFrameForShimDismissal;
-(id)_alertControllerContainer;
-(BOOL)_shouldTreatEmptyStringsAsNil;
-(BOOL)_hasAttributedTitle;
-(BOOL)_hasAttributedMessage;
-(UIAlertAction *)_focusedAction;
-(BOOL)_shouldProvideDimmingView;
-(void)setTemporaryAnimationCoordinator:(_UIAnimationCoordinator *)arg1 ;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)_becomeFirstResponderIfAppropriate;
-(void)_addReturnKeyCommandIfAppropriate;
-(BOOL)_shouldAllowNilParameters;
-(BOOL)_hasContentToDisplay;
-(void)_logBeingPresented;
-(id)_systemProvidedGestureRecognizer;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)_logBeingDismissed;
-(BOOL)_shouldBecomeFirstResponder;
-(BOOL)_hasPreservedInputViews;
-(BOOL)_shouldPreserveInputViews;
-(void)_setHasPreservedInputViews:(BOOL)arg1 ;
-(UIView *)_systemProvidedPresentationView;
-(id)_previewInteractionController;
-(void)_setSystemProvidedPresentationDelegate:(id)arg1 ;
-(void)_setSystemProvidedPresentationView:(id)arg1 ;
-(void)_setPreviewInteractionController:(id)arg1 ;
-(BOOL)_canBePresentedAtLocation:(CGPoint)arg1 ;
-(BOOL)_isPresented;
-(CFStringRef)_powerLoggingEventName;
-(BOOL)_shouldSupportReturnKeyPresses;
-(void)_returnKeyPressedInLastTextField;
-(id)_textFieldContainingViewWithTextField:(id)arg1 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_setActions:(id)arg1 ;
-(void)_setDefaultAlertAction:(id)arg1 ;
-(UIAlertAction *)_defaultAlertAction;
-(void)_addSectionDelimiter;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(_UIAlertControllerTextFieldViewController *)_textFieldViewController;
-(void)_willParentTextFieldViewController;
-(void)_didParentTextFieldViewController;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(BOOL)_textFieldsHidden;
-(void)_dismissWithAction:(id)arg1 ;
-(void)_dismissFromPopoverDimmingView;
-(void)linkAlertController:(id)arg1 ;
-(void)unlinkAlertController:(id)arg1 ;
-(id)linkedAlertControllers;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_flipFrameForShimDismissalIfNecessary;
-(BOOL)_isPresentedAsPopoverWithLegacyUI;
-(BOOL)_shouldSizeToFillSuperview;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(id)_viewControllerForSizing;
-(BOOL)_hasDetailMessage;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)_contentViewControllerWillTransitionToSize:(CGSize)arg1 withAnimations:(/*^block*/id)arg2 ;
-(void)_removeAllTextFields;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_setEffectAlpha:(double)arg1 ;
-(double)_effectAlpha;
-(id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2 ;
-(BOOL)_shouldEnsureContentControllerViewIsVisibleOnAppearance;
-(void)_setShouldEnsureContentControllerViewIsVisibleOnAppearance:(BOOL)arg1 ;
-(void)_setStyleProvider:(id)arg1 ;
-(BOOL)_isHidden;
-(_UIAnimationCoordinator *)temporaryAnimationCoordinator;
-(id)_indexesOfActionSectionSeparators;
-(NSMutableArray *)_actionDelimiterIndices;
-(void)_setShouldAllowNilParameters:(BOOL)arg1 ;
-(void)_setCompatibilityPopoverController:(id)arg1 ;
-(id<UIAlertControllerCoordinatedActionPerforming>)coordinatedActionPerformingDelegate;
-(void)setCoordinatedActionPerformingDelegate:(id<UIAlertControllerCoordinatedActionPerforming>)arg1 ;
-(UIView *)_presentationSourceRepresentationView;
-(void)_setPresentationSourceRepresentationView:(id)arg1 ;
@end

