/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>

@protocol BrowserContainerViewControllerDelegate;
@class BrowserContainerArrangement, NSArray, UIView, BrowserContainerSeparatorView, NSValue, UITraitCollection;

@interface BrowserContainerViewController : UIViewController {

	CGRect _arrangementOverrideFrame;
	unsigned long long _arrangementOverrideIndex;
	BrowserContainerArrangement* _currentArrangement;
	/*^block*/id _deferredLayoutTransitionCompletion;
	NSArray* _displayedBrowserControllers;
	UIView* _hintingTransformContainerView;
	NSRange _preferredOnScreenChildRange;
	BOOL _sentDidChangeArrangement;
	BrowserContainerSeparatorView* _separatorView;
	NSValue* _targetSizeForTransition;
	UITraitCollection* _targetTraitCollectionForTransition;
	BOOL _usesDeferredLayoutTransitionCompletion;
	id<BrowserContainerViewControllerDelegate> _delegate;
	unsigned long long _preferredOnScreenCapacity;
	NSArray* _browserControllers;
	long long _newWindowHintingEdge;

}

@property (assign,nonatomic,__weak) id<BrowserContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredOnScreenCapacity;                          //@synthesize preferredOnScreenCapacity=_preferredOnScreenCapacity - In the implementation block
@property (nonatomic,copy) NSArray * browserControllers;                                              //@synthesize browserControllers=_browserControllers - In the implementation block
@property (nonatomic,readonly) BOOL canDisplayMultipleControllers; 
@property (nonatomic,readonly) BOOL isDisplayingMultipleControllers; 
@property (assign,nonatomic) long long newWindowHintingEdge;                                          //@synthesize newWindowHintingEdge=_newWindowHintingEdge - In the implementation block
@property (nonatomic,readonly) CGSize childSizeForNextBrowserController; 
-(NSArray *)browserControllers;
-(id)browserControllerAtPoint:(CGPoint)arg1 ;
-(BOOL)canDisplayMultipleControllers;
-(id)initWithPreferredOnScreenCapacity:(unsigned long long)arg1 ;
-(BOOL)isDisplayingMultipleControllers;
-(void)setBrowserControllers:(id)arg1 withInitialFrame:(CGRect)arg2 forBrowserController:(id)arg3 ;
-(void)setBrowserControllers:(NSArray *)arg1 ;
-(void)_performDeferredLayoutTransitionCompletion;
-(void)invalidateArrangement;
-(id)currentArrangement;
-(void)_getStatusBarStyle:(long long*)arg1 childrenAgreeOnStyle:(BOOL*)arg2 ;
-(BOOL)_usesSeparatorView;
-(void)_createArrangement;
-(void)updateBarInsetsIfNeeded;
-(NSRange)_rangeOfSubarrayInDisplayedBrowserControllers:(id)arg1 ;
-(void)_addChildBrowserController:(id)arg1 ;
-(void)_removeChildBrowserController:(id)arg1 ;
-(void)_layoutWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)safari_wantsTransparentApplicationBackground;
-(CGSize)childSizeForNextBrowserController;
-(void)setNewWindowHintingEdge:(long long)arg1 ;
-(id)onScreenBrowserControllerAfter:(id)arg1 ;
-(unsigned long long)preferredOnScreenCapacity;
-(long long)newWindowHintingEdge;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<BrowserContainerViewControllerDelegate>)arg1 ;
-(id<BrowserContainerViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)viewDidLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)_layoutSize;
-(void)_updateStatusBarAppearance;
@end

