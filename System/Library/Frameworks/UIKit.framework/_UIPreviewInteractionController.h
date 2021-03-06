/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>

@protocol _UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;
@class UIView, UIViewController, UIPreviewInteraction, _UIRevealGestureRecognizer2, _UIPreviewGestureRecognizer2, UIPanGestureRecognizer, _UIPreviewPresentationController2, _UIPreviewInteractionViewControllerTransition, _UIPreviewInteractionCommitTransition, UIGestureRecognizer, NSArray, NSString;

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {

	BOOL _performingPreviewTransition;
	BOOL _performingCommitTransition;
	id<_UIPreviewInteractionControllerDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _presentingViewController;
	UIPreviewInteraction* _previewInteraction;
	_UIRevealGestureRecognizer2* _revealGestureRecognizer;
	_UIPreviewGestureRecognizer2* _previewGestureRecognizer;
	UIPanGestureRecognizer* _modalPanGestureRecognizer;
	UIViewController* _currentPreviewViewController;
	_UIPreviewPresentationController2* _currentPresentationController;
	_UIPreviewInteractionViewControllerTransition* _currentTransitionDelegate;
	_UIPreviewInteractionCommitTransition* _currentCommitTransition;
	id<UIViewControllerPreviewing_Internal> _currentPreviewingContext;
	id<_UIPreviewInteractionHighlighting> _currentHighlighter;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                                                                       //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                              //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (nonatomic,retain) _UIRevealGestureRecognizer2 * revealGestureRecognizer;                                  //@synthesize revealGestureRecognizer=_revealGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIPreviewGestureRecognizer2 * previewGestureRecognizer;                                //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * modalPanGestureRecognizer;                                     //@synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * currentPreviewViewController;                                        //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationController2 * currentPresentationController;                      //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionViewControllerTransition * currentTransitionDelegate;              //@synthesize currentTransitionDelegate=_currentTransitionDelegate - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionCommitTransition * currentCommitTransition;                        //@synthesize currentCommitTransition=_currentCommitTransition - In the implementation block
@property (assign,nonatomic) BOOL performingPreviewTransition;                                                       //@synthesize performingPreviewTransition=_performingPreviewTransition - In the implementation block
@property (assign,nonatomic) BOOL performingCommitTransition;                                                        //@synthesize performingCommitTransition=_performingCommitTransition - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> currentPreviewingContext;                //@synthesize currentPreviewingContext=_currentPreviewingContext - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionHighlighting> currentHighlighter;                               //@synthesize currentHighlighter=_currentHighlighter - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (assign,nonatomic,__weak) id<_UIPreviewInteractionControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UIPreviewInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<_UIPreviewInteractionControllerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(NSArray *)gestureRecognizers;
-(id)initWithView:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(CGPoint)location;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setRevealGestureRecognizer:(_UIRevealGestureRecognizer2 *)arg1 ;
-(void)_panningRecognizerDidFire:(id)arg1 ;
-(void)setPreviewGestureRecognizer:(_UIPreviewGestureRecognizer2 *)arg1 ;
-(_UIRevealGestureRecognizer2 *)revealGestureRecognizer;
-(_UIPreviewGestureRecognizer2 *)previewGestureRecognizer;
-(BOOL)performingPreviewTransition;
-(UIViewController *)currentPreviewViewController;
-(void)setPerformingCommitTransition:(BOOL)arg1 ;
-(void)_resetCustomPresentationHooks;
-(void)setCurrentCommitTransition:(_UIPreviewInteractionCommitTransition *)arg1 ;
-(void)_finalizeAfterPreviewViewControllerPresentation;
-(BOOL)performingCommitTransition;
-(BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1 ;
-(void)commitInteractivePreview;
-(void)_dismissPreviewViewControllerIfNeeded;
-(BOOL)_previewingIsPossibleForView:(id)arg1 ;
-(void)setCurrentTransitionDelegate:(_UIPreviewInteractionViewControllerTransition *)arg1 ;
-(id<UIViewControllerPreviewing_Internal>)currentPreviewingContext;
-(void)setCurrentPreviewViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(_UIPreviewPresentationController2 *)arg1 ;
-(void)setCurrentHighlighter:(id<_UIPreviewInteractionHighlighting>)arg1 ;
-(id<_UIPreviewInteractionHighlighting>)currentHighlighter;
-(void)setCurrentPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(void)setPerformingPreviewTransition:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)modalPanGestureRecognizer;
-(void)setModalPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1 ;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(id)_preferredNavigationControllerForCommitTransition;
-(void)_finalizeInteractivePreview;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(_UIPreviewPresentationController2 *)currentPresentationController;
-(_UIPreviewInteractionViewControllerTransition *)currentTransitionDelegate;
-(_UIPreviewInteractionCommitTransition *)currentCommitTransition;
@end

