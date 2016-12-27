/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUINetworkErrorDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>
#import <libobjc.A.dylib/SKUIWishlistDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>
#import <libobjc.A.dylib/SKUIClientContextConsuming.h>

@class SKUIClientContext, SKUINetworkErrorViewController, NSOperationQueue, SKUIProductPageOverlayController, SKUIIPadSearchController, UIBarButtonItem, SKUIPopoverObserver, SKUIWishlistViewController, NSString;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUIWishlistDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming> {

	SKUIClientContext* _clientContext;
	SKUINetworkErrorViewController* _networkErrorViewController;
	NSOperationQueue* _operationQueue;
	SKUIProductPageOverlayController* _productPageOverlayController;
	SKUIIPadSearchController* _searchController;
	BOOL _wishlistButtonHidden;
	UIBarButtonItem* _wishlistButtonItem;
	SKUIPopoverObserver* _wishlistPopoverObserver;
	SKUIWishlistViewController* _wishlistViewController;

}

@property (nonatomic,readonly) UIBarButtonItem * _wishlistButtonItem;                        //@synthesize wishlistButtonItem=_wishlistButtonItem - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIIPadSearchController * IPadSearchController; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_setWishlistButtonHidden:(BOOL)arg1 ;
-(void)showDefaultNavigationItems;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(void)forceOrientationBackToSupportedOrientation;
-(id)_defaultLeftBarButtonItems;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(UIBarButtonItem *)_wishlistButtonItem;
-(id)_getIPadSearchController;
-(id)_defaultRightBarButtonItemsIsCompact:(BOOL)arg1 ;
-(void)_showDialogWithError:(id)arg1 ;
-(void)_reloadForOrientation:(long long)arg1 ;
-(void)_presentWishlistFromSheet;
-(void)_presentWishlistFromPopover:(id)arg1 ;
-(void)_wishlistPopoverDidDismiss;
-(SKUIIPadSearchController *)IPadSearchController;
-(void)_wishlistAction:(id)arg1 ;
-(void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)showDefaultNavigationItemsForSize:(CGSize)arg1 ;
-(void)showDefaultNavigationItemsIsCompact:(BOOL)arg1 ;
-(void)showError:(id)arg1 ;
-(BOOL)showingError;
@end

