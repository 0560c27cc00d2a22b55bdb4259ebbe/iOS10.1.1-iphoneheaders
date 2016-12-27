/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>
#import <libobjc.A.dylib/SKUIStackedBarDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIMetricsImpressionSession, NSArray, SKUIContentInsetScrollView, SKUIExploreTemplateElement, UINavigationController, CLLocationManager, SKUIStorePageSectionsViewController, UISplitViewController, NSString;

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController> {

	SKUIMetricsImpressionSession* _activeMetricsImpressionSession;
	NSArray* _contentOffsets;
	SKUIContentInsetScrollView* _contentScrollView;
	SKUIExploreTemplateElement* _exploreTemplate;
	UINavigationController* _leftVC;
	CLLocationManager* _locationManager;
	UINavigationController* _navigationController;
	BOOL _nearMeEnabled;
	SKUIStorePageSectionsViewController* _rightVC;
	UISplitViewController* _splitVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)contentScrollView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3 ;
-(void)_reloadData;
-(void)setClientContext:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(BOOL)managesNavigationBarContents;
-(id)impressionableViewElements;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(void)_beginActiveImpressionsForImpressionableViewElements;
-(void)_endAllPendingActiveImpression;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(BOOL)prefersNavigationBarHidden;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_updateChildViewControllers;
-(void)_contentInsetDidChange:(id)arg1 ;
-(void)_reloadLeftViewControllers;
-(void)_reloadRightViewController;
-(void)_reloadSelectionForViewController:(id)arg1 ;
-(double)_leftColumnWidth;
-(id)_rootNavigationTitle;
-(void)_getPageComponents:(id*)arg1 title:(id*)arg2 forViewControllerAtIndex:(long long)arg3 ;
-(id)_pageComponentsAtIndex:(long long)arg1 ;
-(id)_newSectionsViewControllerAtIndex:(long long)arg1 ;
-(id)_rightPageComponents;
-(id)_rightVCColorScheme;
-(void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)selectGenreListComponent:(id)arg1 ;
-(id)_leftPageComponentsAtIndex:(long long)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end

