/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, PSTextFieldSpecifier;

@interface WEPAccountEditController : ACUIViewController {

	ACAccount* _account;
	PSTextFieldSpecifier* _screennameSpecifier;
	BOOL _isAccountDirty;
	BOOL _didAttemptNameUpdate;

}
-(void)_saveAccountChangesIfNecessary;
-(id)_descriptionSpecifier;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 wasVerifying:(BOOL)arg3 ;
-(id)_userNameSpecifier;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_confirmDeleteAccount;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(id)_screennameWithSpecifier:(id)arg1 ;
-(id)_screennameSpecifier;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_updateFullNameIfNecessary;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordSpecifier;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

