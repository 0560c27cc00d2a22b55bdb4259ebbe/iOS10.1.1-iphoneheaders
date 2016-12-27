/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIMetricsViewController.h>
#import <libobjc.A.dylib/SKUINetworkErrorDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageHeaderViewDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIMessageBannerDelegate.h>

@protocol SKUIProductPageChildViewController, SKUIIPhoneProductPageDelegate;
@class SKUIMessageBanner, NSString, UIViewController, SKUIProductPageDetailsViewController, SKUINetworkErrorViewController, SKUIProductPageHeaderViewController, SKUIIncompatibleAppViewController, SKUIItem, SSMetricsPageEvent, SKUIProductPagePlaceholderViewController, SKUILoadProductPageOperation, SKUIMetricsController, NSOperationQueue, SKUIProductPage, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURLRequest, NSURL;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate> {

	BOOL _askPermission;
	SKUIMessageBanner* _banner;
	NSString* _bannerText;
	UIViewController*<SKUIProductPageChildViewController> _childViewController;
	id<SKUIIPhoneProductPageDelegate> _delegate;
	SKUIProductPageDetailsViewController* _detailsViewController;
	SKUINetworkErrorViewController* _errorViewController;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIIncompatibleAppViewController* _incompatibleViewController;
	SKUIItem* _item;
	SSMetricsPageEvent* _lastPageEvent;
	SKUIProductPagePlaceholderViewController* _loadingViewController;
	SKUILoadProductPageOperation* _loadOperation;
	long long _lookupItemIdentifier;
	SKUIMetricsController* _metricsController;
	NSOperationQueue* _operationQueue;
	SKUIProductPagePlaceholderViewController* _relatedPlaceholderViewController;
	SKUIProductPage* _productPage;
	SKUISwooshArrayViewController* _relatedViewController;
	SKUIProductPageReviewsViewController* _reviewsViewController;
	long long _sectionIndex;
	NSURLRequest* _urlRequest;
	BOOL _wantsActivityViewController;

}

@property (nonatomic,readonly) SKUIItem * item;                                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SKUIProductPage * productPage;                                //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign,nonatomic,__weak) id<SKUIIPhoneProductPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL askPermission;                                             //@synthesize askPermission=_askPermission - In the implementation block
@property (nonatomic,copy) NSString * bannerText;                                            //@synthesize bannerText=_bannerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIIPhoneProductPageDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUIIPhoneProductPageDelegate>)delegate;
-(SKUIItem *)item;
-(void)loadView;
-(NSURL *)URL;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setAskPermission:(BOOL)arg1 ;
-(void)setBannerText:(NSString *)arg1 ;
-(void)configureMetricsWithPageEvent:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(SKUIProductPage *)productPage;
-(void)_setMetricsController:(id)arg1 ;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(id)activeMetricsController;
-(void)_reloadChildViewControllers;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg1 ;
-(void)productPageChildOpenItem:(id)arg1 ;
-(void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(/*^block*/id)arg2 ;
-(void)productPageChildViewControllerDidScroll:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg1 ;
-(BOOL)askPermission;
-(id)_headerViewController;
-(void)_shareButtonAction:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2 ;
-(id)metricsControllerForProductPageHeader:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2 ;
-(void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2 ;
-(void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1 ;
-(id)initWithItemIdentifier:(long long)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(CGPoint)topContentOffset;
-(void)_setProductPage:(id)arg1 error:(id)arg2 ;
-(void)_showBanner;
-(id)_reviewsViewController;
-(id)_viewControllerForSectionIndex:(unsigned long long)arg1 ;
-(void)_showError:(id)arg1 ;
-(BOOL)_isIncompatibleItem;
-(id)_detailsViewController;
-(id)_relatedViewController;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(NSString *)bannerText;
-(id)_initSKUIIPhoneProductPageViewController;
-(void)_setSectionIndexWithFragment:(long long)arg1 ;
-(void)_setContentInsetsForChildViewController:(id)arg1 ;
-(void)_setHeaderPositionForChildViewController:(id)arg1 ;
-(void)_hideBanner;
-(void)_showActivityViewController;
-(void)_invalidateChildViewControllers;
-(void)_presentHTMLProductPage;
-(void)_animateAddToWishlist;
-(id)_loadingViewController;
-(id)_relatedPlaceholderViewController;
@end

