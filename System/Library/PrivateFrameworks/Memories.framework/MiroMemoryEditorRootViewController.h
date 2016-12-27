/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MiroMemoryEditorToolbarDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MiroMovieDisplayContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/MiroContentEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/MiroMemoryEditorMenuViewControllerDelegate.h>
#import <libobjc.A.dylib/MiroMemoryEditorPlayerViewDelegate.h>
#import <libobjc.A.dylib/MiroMemoryEditorToolbarOwner.h>

@protocol MiroEditorViewControllerDelegate, MiroMemoryEditorAutoEditCompletionActionDelegate;
@class MiroAutoEditor, MiroMovieDisplayContainerViewController, UIViewController, UISplitViewController, MiroMemoryEditorMenuViewController, MiroMemoryEditorDurationViewController, MiroMemoryEditorPosterController, MiroEditorController, MiroBlueprint, UIView, NSLayoutConstraint, MiroMemoryEditorBottomToolbar, NSString;

@interface MiroMemoryEditorRootViewController : UIViewController <MiroMemoryEditorToolbarDelegate, UISplitViewControllerDelegate, UIViewControllerTransitioningDelegate, MiroMovieDisplayContainerViewControllerDelegate, MiroContentEditorViewControllerDelegate, MiroMemoryEditorMenuViewControllerDelegate, MiroMemoryEditorPlayerViewDelegate, MiroMemoryEditorToolbarOwner> {

	BOOL _isSeparatingOrCollapsing;
	BOOL _isDismissing;
	int _splitViewState;
	id<MiroEditorViewControllerDelegate> _delegate;
	MiroAutoEditor* _autoEditor;
	MiroMovieDisplayContainerViewController* _movieDisplayController;
	UIViewController* _movieDisplayParentViewController;
	UISplitViewController* _contentSplitViewController;
	MiroMemoryEditorMenuViewController* _menuViewController;
	MiroMemoryEditorDurationViewController* _durationViewController;
	MiroMemoryEditorPosterController* _posterController;
	MiroEditorController* _editorController;
	MiroBlueprint* _initialBlueprint;
	id<MiroMemoryEditorAutoEditCompletionActionDelegate> _autoEditCompletionActionDelegate;
	UIView* _playerContainerView;
	UIView* _splitViewContainerView;
	NSLayoutConstraint* _playerContainerYOffset;
	NSLayoutConstraint* _playerContainerTargetHeight;
	MiroMemoryEditorBottomToolbar* _toolbar;
	NSLayoutConstraint* _toolbarYOffset;

}

@property (nonatomic,retain) UIViewController * movieDisplayParentViewController;                                                       //@synthesize movieDisplayParentViewController=_movieDisplayParentViewController - In the implementation block
@property (nonatomic,retain) UISplitViewController * contentSplitViewController;                                                        //@synthesize contentSplitViewController=_contentSplitViewController - In the implementation block
@property (nonatomic,retain) MiroMemoryEditorMenuViewController * menuViewController;                                                   //@synthesize menuViewController=_menuViewController - In the implementation block
@property (assign,nonatomic,__weak) MiroMemoryEditorDurationViewController * durationViewController;                                    //@synthesize durationViewController=_durationViewController - In the implementation block
@property (nonatomic,retain) MiroMemoryEditorPosterController * posterController;                                                       //@synthesize posterController=_posterController - In the implementation block
@property (nonatomic,retain) MiroEditorController * editorController;                                                                   //@synthesize editorController=_editorController - In the implementation block
@property (assign,nonatomic) int splitViewState;                                                                                        //@synthesize splitViewState=_splitViewState - In the implementation block
@property (assign,nonatomic) BOOL isDismissing;                                                                                         //@synthesize isDismissing=_isDismissing - In the implementation block
@property (nonatomic,copy) MiroBlueprint * initialBlueprint;                                                                            //@synthesize initialBlueprint=_initialBlueprint - In the implementation block
@property (assign,nonatomic,__weak) id<MiroMemoryEditorAutoEditCompletionActionDelegate> autoEditCompletionActionDelegate;              //@synthesize autoEditCompletionActionDelegate=_autoEditCompletionActionDelegate - In the implementation block
@property (nonatomic,retain) UIView * playerContainerView;                                                                              //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (nonatomic,retain) UIView * splitViewContainerView;                                                                           //@synthesize splitViewContainerView=_splitViewContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerContainerYOffset;                                                               //@synthesize playerContainerYOffset=_playerContainerYOffset - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerContainerTargetHeight;                                                          //@synthesize playerContainerTargetHeight=_playerContainerTargetHeight - In the implementation block
@property (nonatomic,retain) MiroMemoryEditorBottomToolbar * toolbar;                                                                   //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolbarYOffset;                                                                       //@synthesize toolbarYOffset=_toolbarYOffset - In the implementation block
@property (assign,nonatomic,__weak) id<MiroEditorViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MiroAutoEditor * autoEditor;                                                                               //@synthesize autoEditor=_autoEditor - In the implementation block
@property (nonatomic,retain) MiroMovieDisplayContainerViewController * movieDisplayController;                                          //@synthesize movieDisplayController=_movieDisplayController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfClipsInMovie; 
@property (nonatomic,readonly) double sequenceDuration; 
@property (assign,nonatomic) BOOL isSeparatingOrCollapsing;                                                                             //@synthesize isSeparatingOrCollapsing=_isSeparatingOrCollapsing - In the implementation block
@property (nonatomic,readonly) double toolbarHeight; 
-(void)cancel;
-(void)setDelegate:(id<MiroEditorViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MiroEditorViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(MiroMemoryEditorBottomToolbar *)toolbar;
-(void)setToolbar:(MiroMemoryEditorBottomToolbar *)arg1 ;
-(void)done;
-(BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(MiroAutoEditor *)autoEditor;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(BOOL)playerViewShouldShowInChildViewControllers;
-(void)pausePlayer;
-(void)airPlayDidEnd;
-(void)playerRateChanged;
-(void)playerDidDoContentChange;
-(void)playerWillDoContentChange;
-(void)hideToolbarIfNeeded;
-(void)showToolbar;
-(BOOL)isSeparatingOrCollapsing;
-(MiroMemoryEditorPosterController *)posterController;
-(void)setPosterController:(MiroMemoryEditorPosterController *)arg1 ;
-(UIView *)playerContainerView;
-(UISplitViewController *)contentSplitViewController;
-(UIView *)splitViewContainerView;
-(MiroMovieDisplayContainerViewController *)movieDisplayController;
-(void)setIsDismissing:(BOOL)arg1 ;
-(void)setInitialBlueprint:(MiroBlueprint *)arg1 ;
-(void)setMovieDisplayController:(MiroMovieDisplayContainerViewController *)arg1 ;
-(void)setContentSplitViewController:(UISplitViewController *)arg1 ;
-(void)setMenuViewController:(MiroMemoryEditorMenuViewController *)arg1 ;
-(MiroMemoryEditorMenuViewController *)menuViewController;
-(void)setSplitViewState:(int)arg1 ;
-(NSLayoutConstraint *)playerContainerYOffset;
-(NSLayoutConstraint *)playerContainerTargetHeight;
-(void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2 ;
-(void)setEditorController:(MiroEditorController *)arg1 ;
-(void)setAutoEditCompletionActionDelegate:(id<MiroMemoryEditorAutoEditCompletionActionDelegate>)arg1 ;
-(id<MiroMemoryEditorAutoEditCompletionActionDelegate>)autoEditCompletionActionDelegate;
-(MiroEditorController *)editorController;
-(id)_containerViewForPlayer;
-(id)placeSnapshotOfPlayerViewInContainerView:(id)arg1 ;
-(void)setMovieDisplayParentViewController:(UIViewController *)arg1 ;
-(void)_didEndMemoryEditingWithFinalBlueprint:(id)arg1 ;
-(MiroBlueprint *)initialBlueprint;
-(int)splitViewState;
-(BOOL)isDismissing;
-(UIViewController *)movieDisplayParentViewController;
-(NSLayoutConstraint *)toolbarYOffset;
-(void)setDurationViewController:(MiroMemoryEditorDurationViewController *)arg1 ;
-(void)_showContentEditorViewController;
-(void)_showDebugPickerViewController:(unsigned long long)arg1 ;
-(void)setIsSeparatingOrCollapsing:(BOOL)arg1 ;
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(MiroMemoryEditorDurationViewController *)durationViewController;
-(void)deferredPlay;
-(void)contentEditorViewControllerDidFinish:(id)arg1 ;
-(void)showTitleEditorViewController;
-(void)showMusicPickerViewController;
-(void)showDurationEditorViewController;
-(void)showContentEditorViewController;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDebugFilterPickerViewController;
-(unsigned long long)numberOfClipsInMovie;
-(double)sequenceDuration;
-(double)toolbarHeight;
-(void)setPlayerContainerView:(UIView *)arg1 ;
-(void)setSplitViewContainerView:(UIView *)arg1 ;
-(void)setPlayerContainerYOffset:(NSLayoutConstraint *)arg1 ;
-(void)setPlayerContainerTargetHeight:(NSLayoutConstraint *)arg1 ;
-(void)setToolbarYOffset:(NSLayoutConstraint *)arg1 ;
@end

