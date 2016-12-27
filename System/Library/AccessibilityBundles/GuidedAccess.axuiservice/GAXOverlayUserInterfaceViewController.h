/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXOverlayUserInterfaceViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXOverlayUserInterfaceViewControllerDelegate;
@class NSMutableArray, NSString;

@interface GAXOverlayUserInterfaceViewController : GAXViewController <GAXOverlayUserInterfaceViewDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	BOOL _hasOverlayUserInterface;
	id<GAXOverlayUserInterfaceViewControllerDelegate> _delegate;
	NSMutableArray* _presentedPopoverControllers;

}

@property (assign,nonatomic) BOOL hasOverlayUserInterface;                                            //@synthesize hasOverlayUserInterface=_hasOverlayUserInterface - In the implementation block
@property (nonatomic,retain) NSMutableArray * presentedPopoverControllers;                            //@synthesize presentedPopoverControllers=_presentedPopoverControllers - In the implementation block
@property (assign,nonatomic) id<GAXOverlayUserInterfaceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)presentedPopoverControllers;
-(void)setPresentedPopoverControllers:(NSMutableArray *)arg1 ;
-(BOOL)hasOverlayUserInterface;
-(BOOL)_hasOverlayUserInterface;
-(void)didDismissPopoverController:(id)arg1 ;
-(void)setHasOverlayUserInterface:(BOOL)arg1 ;
-(void)willPresentPopoverController:(id)arg1 ;
-(void)_checkPresenceOfOverlayUserInterface;
-(void)willPresentModalViewController;
-(BOOL)isModalContentBeingPresentedInOverlayUserInterfaceView:(id)arg1 ;
-(void)setDelegate:(id<GAXOverlayUserInterfaceViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXOverlayUserInterfaceViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)didDismissModalViewController;
-(void)releaseOutlets;
@end

