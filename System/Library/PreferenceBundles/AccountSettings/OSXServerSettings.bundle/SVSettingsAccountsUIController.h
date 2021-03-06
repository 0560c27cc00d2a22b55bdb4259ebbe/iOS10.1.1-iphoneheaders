/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, NSString, NSArray, SVDiscoveredServer;

@interface SVSettingsAccountsUIController : ACUIViewController {

	BOOL _isSettingUpNewAccount;
	BOOL _needsValidation;
	BOOL _usingDefaultDescription;
	ACAccount* _account;
	NSString* _hostName;
	NSString* _userName;
	NSString* _password;
	NSString* _accountDescription;
	NSArray* _loginSpecifiers;
	SVDiscoveredServer* _selectedNearbyServer;

}

@property (nonatomic,retain) NSString * hostName;                                    //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSString * userName;                                    //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * password;                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * accountDescription;                          //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain) NSArray * loginSpecifiers;                              //@synthesize loginSpecifiers=_loginSpecifiers - In the implementation block
@property (assign,nonatomic) BOOL isSettingUpNewAccount;                             //@synthesize isSettingUpNewAccount=_isSettingUpNewAccount - In the implementation block
@property (assign,nonatomic) BOOL needsValidation;                                   //@synthesize needsValidation=_needsValidation - In the implementation block
@property (assign,nonatomic) BOOL usingDefaultDescription;                           //@synthesize usingDefaultDescription=_usingDefaultDescription - In the implementation block
@property (nonatomic,retain) SVDiscoveredServer * selectedNearbyServer;              //@synthesize selectedNearbyServer=_selectedNearbyServer - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
-(id)hostNameWithSpecifier:(id)arg1 ;
-(void)setSelectedNearbyServer:(SVDiscoveredServer *)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)userNameWithSpecifier:(id)arg1 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(BOOL)usingDefaultDescription;
-(void)setNeedsValidation:(BOOL)arg1 ;
-(void)setUserName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)finishAccountSetup;
-(SVDiscoveredServer *)selectedNearbyServer;
-(void)setUsingDefaultDescription:(BOOL)arg1 ;
-(void)presentAlertForError:(id)arg1 ;
-(BOOL)needsValidation;
-(NSArray *)loginSpecifiers;
-(void)setHostName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setAccountDescription:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountDescriptionWithSpecifier:(id)arg1 ;
-(void)updateLoginFormKeysWithValuesFromTextFieldsForChangedTextField:(id)arg1 ;
-(void)setLoginSpecifiers:(NSArray *)arg1 ;
-(NSString *)hostName;
-(NSString *)userName;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setUserName:(NSString *)arg1 ;
-(void)updateDoneButton;
-(id)initWithServer:(id)arg1 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2 ;
-(NSString *)accountDescription;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setIsSettingUpNewAccount:(BOOL)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(BOOL)isSettingUpNewAccount;
-(void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

