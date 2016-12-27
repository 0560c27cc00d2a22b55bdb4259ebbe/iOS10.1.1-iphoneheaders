/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerCanHideSetupLaterButton.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, NSArray, PKTableHeaderView, PKPaymentSetupCardDetailsFooterView, PKPaymentSetupProduct, NSString;

@interface PKPaymentRemoteCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupViewControllerCanHideSetupLaterButton> {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSArray* _remoteCredentials;
	PKTableHeaderView* _tableHeader;
	PKPaymentSetupCardDetailsFooterView* _tableFooter;
	BOOL _allowsManualEntry;
	BOOL _hideSetupLaterButton;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                    //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_presentViewController:(id)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(BOOL)hideSetupLaterButton;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(void)_presentManualAddController;
-(void)_presentCardDetailsControllerForCredential:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 remoteCredentials:(id)arg4 allowsManualEntry:(BOOL)arg5 ;
@end

