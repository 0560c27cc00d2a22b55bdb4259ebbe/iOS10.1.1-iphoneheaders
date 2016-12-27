/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableArray, NSString, NSMutableDictionary, PSSpecifier, NSArray, ACAccount;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {

	BOOL _forceMailSetup;
	NSMutableArray* _dirtyDataclassCells;
	NSString* _accountIdentifier;
	NSMutableDictionary* _allDesiredDataclassActions;
	BOOL _isMergingSyncData;
	PSSpecifier* _deleteButtonSpecifier;
	PSSpecifier* _accountSummaryCellSpecifier;
	NSArray* _dataclassSpecifiers;
	NSArray* _otherSpecifiers;
	BOOL _didShowDataclassActionPickerDuringRemoval;
	BOOL _firstTimeSetup;
	BOOL _shouldShowDeleteAccountButton;
	BOOL _shouldEnableDeleteAccountButton;
	BOOL _shouldEnableAccountSummaryCell;
	BOOL _isMailSetupForced;
	NSArray* _preEnabledDataclasses;
	ACAccount* _account;
	PSSpecifier* _dataclassGroupSpecifier;
	/*^block*/id _configurationCompletion;

}

@property (assign,getter=isFirstTimeSetup,nonatomic) BOOL firstTimeSetup;              //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,copy) NSArray * preEnabledDataclasses;                            //@synthesize preEnabledDataclasses=_preEnabledDataclasses - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PSSpecifier * dataclassGroupSpecifier;                    //@synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * deleteButtonSpecifier;                    //@synthesize deleteButtonSpecifier=_deleteButtonSpecifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDeleteAccountButton;                       //@synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableDeleteAccountButton;                     //@synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableAccountSummaryCell;                      //@synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell - In the implementation block
@property (assign,nonatomic) BOOL isMailSetupForced;                                   //@synthesize isMailSetupForced=_isMailSetupForced - In the implementation block
@property (nonatomic,copy) id configurationCompletion;                                 //@synthesize configurationCompletion=_configurationCompletion - In the implementation block
+(BOOL)shouldPresentAsModalSheet;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_accountIdentifier;
-(id)displayedAccountTypeString;
-(id)displayedShortAccountTypeString;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(void)setFirstTimeSetup:(BOOL)arg1 ;
-(void)forceMailSetup;
-(void)setPreEnabledDataclasses:(NSArray *)arg1 ;
-(void)setConfigurationCompletion:(id)arg1 ;
-(void)setShouldEnableAccountSummaryCell:(BOOL)arg1 ;
-(void)setShouldEnableDeleteAccountButton:(BOOL)arg1 ;
-(void)setShouldShowDeleteAccountButton:(BOOL)arg1 ;
-(BOOL)isFirstTimeSetup;
-(id)_navigationTitle;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)configurationCompletion;
-(id)specifierForAccountSummaryCell;
-(id)_specifiersForDataclasses:(id)arg1 ;
-(BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(BOOL)shouldShowDeleteAccountButton;
-(id)titleForDeleteButton;
-(BOOL)shouldEnableDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(BOOL)shouldEnableAccountSummaryCell;
-(id)_orderDataclassList:(id)arg1 ;
-(void)setDataclassGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)dataclassGroupSpecifier;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)dataclassSwitchStateForSpecifier:(id)arg1 ;
-(NSArray *)preEnabledDataclasses;
-(void)_markDataclassSwitchCellAsDirty:(id)arg1 ;
-(void)_setDataclass:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(void)resetDirtyDataclassSwitchCells;
-(void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
-(id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(BOOL)arg2 ;
-(void)_showDelayedActivityInProgressUIWithMessage:(id)arg1 ;
-(BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1 ;
-(BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1 ;
-(void)_notifyOfAccountSetupCompletion;
-(BOOL)_isShowingDeleteAccountButton;
-(BOOL)_promptUserToConfirmAccountDeletion;
-(BOOL)isAppleMailAccount:(id)arg1 ;
-(BOOL)_confirmSyncDelete;
-(long long)_promptUserToConfirmAccountSyncDeletion;
-(id)deviceMessage;
-(id)messageForAccountDeletionProgressUI;
-(long long)deleteButtonIndex;
-(BOOL)isMailSetupForced;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1 ;
-(void)setDataclass:(id)arg1 enabled:(BOOL)arg2 ;
-(void)appendDeleteAccountButton;
-(PSSpecifier *)deleteButtonSpecifier;
-(void)setIsMailSetupForced:(BOOL)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

