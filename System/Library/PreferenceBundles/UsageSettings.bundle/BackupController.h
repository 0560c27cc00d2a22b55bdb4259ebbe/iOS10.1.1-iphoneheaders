/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class MBManager, BackupStatusView, NSArray, PSSpecifier, NSObject;

@interface BackupController : PSListController <MBManagerDelegate> {

	MBManager* _backupManager;
	int _backupState;
	BOOL _backupEnabled;
	BOOL _showingEnableBackupConfirmation;
	BOOL _finishedInitialLoad;
	BackupStatusView* _backupStatusView;
	NSArray* _backupNowSpecifiers;
	PSSpecifier* _backupNowButton;
	BOOL _backupCancelled;
	BOOL _networkSupportsBackup;
	WiFiManagerClientRef _wifiManagerClient;
	WiFiDeviceClientRef _wifiDeviceClient;
	NSObject*<OS_dispatch_queue> _backup_state_queue;

}
-(void)setLastBackupDateString:(id)arg1 ;
-(void)updateBusyState;
-(void)cancelBackup:(id)arg1 ;
-(void)beginBackup:(id)arg1 ;
-(void)cancelRestore:(id)arg1 ;
-(id)dateStringOfLatestBackup;
-(void)openBackupHelpPage:(id)arg1 ;
-(void)updateLastBackupDate;
-(void)startListeningForNetworkChanges;
-(void)checkIfNetworkSupportsBackup;
-(void)stopListeningForNetworkChanges;
-(void)setNetworkSupportsBackup:(BOOL)arg1 ;
-(BOOL)policyPreventsBackup;
-(void)_enableBackupWithSpecifier:(id)arg1 ;
-(void)_setBackupEnabled:(BOOL)arg1 passcode:(id)arg2 ;
-(void)_disableBackupWithSpecifier:(id)arg1 ;
-(void)_backupEnabledSwitchCancelled:(id)arg1 ;
-(void)updateLastBackupDateInvalidatePrevious:(BOOL)arg1 ;
-(void)setBackupProgress:(double)arg1 estimatedTimeRemaining:(unsigned long long)arg2 allowDecrease:(BOOL)arg3 ;
-(void)_updateToBackupState:(int)arg1 backupError:(id)arg2 progress:(float)arg3 timeRemaining:(unsigned long long)arg4 restoreStateInfo:(id)arg5 backupEnabled:(BOOL)arg6 ;
-(void)_updateToBackupState:(id)arg1 restoreState:(id)arg2 backupEnabled:(BOOL)arg3 ;
-(void)appleAccountChanged;
-(void)setBackupEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)cachedIsBackupEnabledNumber;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(Class)tableViewClass;
-(void)willUnlock;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(BOOL)isBackupEnabled;
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 ;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)managerDidCancelRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(id)specifiers;
@end

