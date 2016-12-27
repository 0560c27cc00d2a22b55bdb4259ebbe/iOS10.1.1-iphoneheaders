/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <TencentWeiboSettings/TEAccountCreationDelegate.h>

@class ACAccountType, ACAccount, NSMutableDictionary, NSArray, PSSpecifier, SLNetworkReachabilityWarning, PSSetupController, NSString;

@interface TESettingsController : SLSettingsController <TEAccountCreationDelegate> {

	ACAccountType* _tencentWeiboAccountType;
	ACAccount* _signInAccount;
	ACAccount* _account;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _accountStateDependentSpecifiers;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	SLNetworkReachabilityWarning* _networkWarning;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_networkWarning;
-(id)_specifierForAccount:(id)arg1 ;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)_reloadAuthorizedAppList;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_authorizedAppsListSpecifiers;
-(BOOL)_isTencentWeiboParentalRestrictionEnabled;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(void)_signInButtonTapped:(id)arg1 ;
-(id)_loginSpecifiers;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(id)_noAccountsSpecifiers;
-(id)_accountListSpecifiers;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_tencentWeiboApp;
-(id)_tencentWeiboAccountType;
-(id)_createNewAccountButtonSpecifier;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

