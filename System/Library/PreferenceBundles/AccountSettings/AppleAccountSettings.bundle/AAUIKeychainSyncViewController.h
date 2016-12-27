/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NSArray, NSString;

@interface AAUIKeychainSyncViewController : PSListController {

	PSSpecifier* _switchCellSpecifier;
	NSMutableArray* _approvalSpecifiers;
	NSArray* _advancedSettingSpecifiers;
	int _keychainSyncStatus;
	int _keychainSyncNotificationToken;
	int _keychainViewNotificationToken;
	BOOL _isTogglingKeychainSync;
	NSString* _pendingApprovalText;
	id _restrictionChangeNotificationObserver;

}
-(void)_keychainSyncStatusDidChange;
-(void)_handleKeychainSyncEnablingCompletionWithNewState:(int)arg1 error:(id)arg2 ;
-(void)_handleKeychainSyncDisablingCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(int)_keychainSyncStatus;
-(void)_showResetKeychainDialog:(id)arg1 ;
-(id)_specifierForApproveButton;
-(void)_showApproveWithSecurityCodeDialog:(id)arg1 ;
-(void)_reloadParentSpecifier;
-(id)_advancedSettingsSpecifiers;
-(id)_specifierForKeychainSwitchCell;
-(void)_addApprovalPendingSpecifierIfNecessary;
-(id)_specifierForPendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(id)_specifierForResetKeychainButton;
-(id)_pendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(void)_setKeychainSyncEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isKeychainSyncEnabledForSpecifier:(id)arg1 ;
-(void)_updateKeychainSyncStatusAndReloadSpecifiers:(BOOL)arg1 ;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
@end

