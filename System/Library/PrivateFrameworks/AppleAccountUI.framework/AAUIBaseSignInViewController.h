/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/AAUIAccountCreationDelegate.h>
#import <libobjc.A.dylib/AAUICredentialRecoveryPresentationDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUIAccountRepairRemoteUIDelegate.h>

@class ACAccount, ACAccountType, NSString, ABMonogrammer, PSSpecifier, AAUIAccountCreationRemoteUI, AAUIGenericTermsRemoteUI, AAUIAccountRepairRemoteUI, AAUICredentialRecoveryController, RUILoader, NSMutableArray, UINavigationController, UIImageView;

@interface AAUIBaseSignInViewController : ACUIViewController <AAUIAccountCreationDelegate, AAUICredentialRecoveryPresentationDelegate, AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate> {

	ACAccount* _account;
	ACAccountType* _appleAccountType;
	ACAccount* _appleAccount;
	BOOL _isPasswordDirty;
	BOOL _shouldHideBackButton;
	NSString* _recommendedUsername;
	BOOL _shouldHideCreateNewAccount;
	ABMonogrammer* _monogrammer;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _createNewAccountButtonSpecifier;
	NSString* _initialTitle;
	AAUIAccountCreationRemoteUI* _remoteAccountCreationUI;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	AAUIAccountRepairRemoteUI* _accountRepairRemoteUI;
	AAUICredentialRecoveryController* _credentialRecoveryUIController;
	id _textFieldTextDidChangeObserver;
	RUILoader* _remoteUILoader;
	NSMutableArray* _remoteUIModels;
	UINavigationController* _modalRemoteViewController;
	/*^block*/id _identityConsolidationCompletion;
	UIImageView* _silhouetteView;
	BOOL _isPresentedModally;

}

@property (assign,setter=setPresentedModally:,nonatomic) BOOL isPresentedModally;              //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)_specifierForGroupWithiForgotLink;
-(id)_specifiersForLoginForm;
-(id)_specifiersForSignInButton;
-(id)_specifiersForCreateNewAccount;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_usernameForSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_passwordForSpecifier:(id)arg1 ;
-(BOOL)_runningInMail;
-(id)_monogrammer;
-(double)_heightForCreateNewAccountFooterWithWidth:(double)arg1 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_presentInvalidUsernameAlert;
-(BOOL)_shouldShowCancelDone;
-(void)setPresentedModally:(BOOL)arg1 ;
-(BOOL)isPresentedModally;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3 ;
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2 ;
-(void)accountCreationDidFailWithError:(id)arg1 ;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 ;
-(void)accountCreationWasCanceled;
-(id)_appleAccountType;
-(void)_presentExistingAccountAlert:(id)arg1 ;
-(void)_presentUnableToSaveAccountAlert;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1 ;
-(id)_displayedAccountType;
-(void)_verifyAccount;
-(void)didCancelSignIn;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_openiForgotLink:(id)arg1 ;
-(void)_handleAccountSetupCompletionWithAppleID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)_saveAccountWithAllDataclassesEnabledIfPossible;
-(void)didCompleteSignIn;
-(void)_saveAccountAndComplete;
-(void)_didFinishAccountVerificationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)_accountDescriptionFromEmailAddress:(id)arg1 ;
-(void)_handleAccountRegistrationCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_promoteExistingAccountToPrimary:(id)arg1 ;
-(void)_updateAccountInformation:(id)arg1 ;
-(void)_attemptHSALoginForAccount:(id)arg1 ;
-(void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 ;
-(void)_presentNoMailServiceWhileInMailAlert;
-(void)_saveAccountWithAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleAccountPromotionCompletionForAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)_learnMoreURLForErrorCode:(id)arg1 ;
-(void)_showGenericTermsUIforAccount:(id)arg1 ;
-(void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 ;
-(void)_accountRepairDidFail;
-(id)descriptionPlaceholder;
-(void)_presentWrongAccountStatusAlert;
-(ACAccount *)account;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_updateDoneButton;
-(void)returnPressedAtEnd;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

