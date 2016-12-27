/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/QLPreviewingController.h>
#import <libobjc.A.dylib/QLToolbarButtonAction.h>

@protocol QLPreviewItemViewControllerDelegate;
@class NSMutableArray, UIView, NSArray, QLItem, QLAppearance, NSString;

@interface QLItemViewController : UIViewController <QLPreviewingController, QLToolbarButtonAction> {

	BOOL _isLoading;
	NSMutableArray* _completionBlocks;
	BOOL _isLoaded;
	BOOL _loadingFailed;
	UIView* _accessoryView;
	NSArray* _toolbarButtons;
	id<QLPreviewItemViewControllerDelegate> _delegate;
	QLItem* _previewItem;
	QLAppearance* _appearance;

}

@property (assign) BOOL isLoaded;                                                                  //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign) BOOL isLoading;                                                                 //@synthesize isLoading=_isLoading - In the implementation block
@property (assign) BOOL loadingFailed;                                                             //@synthesize loadingFailed=_loadingFailed - In the implementation block
@property (retain) QLItem * previewItem;                                                           //@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,retain) QLAppearance * appearance;                                            //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) NSArray * registeredKeyCommands; 
@property (nonatomic,retain) NSArray * toolbarButtons;                                             //@synthesize toolbarButtons=_toolbarButtons - In the implementation block
@property (assign,nonatomic,__weak) id<QLPreviewItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<QLPreviewItemViewControllerDelegate>)arg1 ;
-(id<QLPreviewItemViewControllerDelegate>)delegate;
-(long long)preferredWhitePointAdaptivityStyle;
-(QLAppearance *)appearance;
-(id)scrollView;
-(id)transitioningView;
-(UIView *)accessoryView;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(QLItem *)previewItem;
-(BOOL)loadingFailed;
-(void)loadPreviewItemIfNeededWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)updateScrollViewContentOffset;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)buttonPressedWithIdentifier:(id)arg1 ;
-(NSArray *)toolbarButtons;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canPinchToDismiss;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowToolBar;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(NSArray *)registeredKeyCommands;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(id)parallaxView;
-(void)updateScrollViewContentOffset:(BOOL)arg1 withPreviousAppearance:(id)arg2 ;
-(void)performCompletionBlocksWithError:(id)arg1 ;
-(void)_scrollScrollViewWithKeyCommand:(id)arg1 ;
-(void)_scrollScrollViewByPercentualOffset:(double)arg1 ;
-(id)_cancelTouchToken;
-(void)setToolbarButtons:(NSArray *)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setLoadingFailed:(BOOL)arg1 ;
-(BOOL)canSwipeToDismiss;
-(void)setAppearance:(QLAppearance *)arg1 ;
@end

