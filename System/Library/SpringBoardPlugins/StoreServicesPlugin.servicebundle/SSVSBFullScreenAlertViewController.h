/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>
#import <libobjc.A.dylib/SKAccountPageViewControllerDelegate.h>

@protocol SSVSBFullScreenAlertViewDelegate;
@class SKAccountPageViewController, NSString;

@interface SSVSBFullScreenAlertViewController : SBUIFullscreenAlertController <SKAccountPageViewControllerDelegate> {

	SKAccountPageViewController* _childViewController;
	id<SSVSBFullScreenAlertViewDelegate> _storeServicesPluginDelegate;

}

@property (assign,nonatomic,__weak) id<SSVSBFullScreenAlertViewDelegate> storeServicesPluginDelegate;              //@synthesize storeServicesPluginDelegate=_storeServicesPluginDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(id)initWithChildViewController:(id)arg1 ;
-(void)finishedAnimatingOut;
-(BOOL)handleMenuButtonTap;
-(void)accountPageViewControllerDidFinish:(id)arg1 ;
-(id<SSVSBFullScreenAlertViewDelegate>)storeServicesPluginDelegate;
-(void)setStoreServicesPluginDelegate:(id<SSVSBFullScreenAlertViewDelegate>)arg1 ;
-(BOOL)handleLockButtonPressed;
@end

