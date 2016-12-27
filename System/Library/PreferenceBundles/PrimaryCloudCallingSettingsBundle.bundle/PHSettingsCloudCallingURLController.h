/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (nonatomic,retain) NSString * bundleDescriptor;                                         //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (nonatomic,readonly) BOOL shouldShowEmergencyAddress; 
-(id)genericErrorAlertController;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(id)updateEmergencyAddressController;
-(void)reloadWebViewController;
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(void)loadWebViewController;
-(void)enableCapability;
-(BOOL)shouldEnableCapability;
-(void)webSheetCompletion;
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(BOOL)shouldShowEmergencyAddress;
-(id)provisionCapabilityController;
-(NSString *)bundleDescriptor;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end

