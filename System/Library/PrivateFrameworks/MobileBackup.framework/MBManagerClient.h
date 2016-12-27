/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBManager.h>
#import <libobjc.A.dylib/MBConnectionHandler.h>

@protocol OS_dispatch_queue, MBManagerDelegate;
@class MBConnection, NSObject;

@interface MBManagerClient : MBManager <MBConnectionHandler> {

	MBConnection* _conn;
	int _stateToken;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<MBManagerDelegate> _privateDelegate;

}

@property (assign) NSObject*<MBManagerDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setPrivateDelegate:(NSObject*<MBManagerDelegate>)arg1 ;
-(void)_establishConnection;
-(NSObject*<MBManagerDelegate>)privateDelegate;
-(BOOL)countCameraRollQuota;
-(BOOL)discountCameraRollQuota;
-(id)domainInfoForName:(id)arg1 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(BOOL)isBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(void)syncBackupEnabled;
-(BOOL)unsetLocalBackupPasswordWithError:(id*)arg1 ;
-(id)backupDeviceUUID;
-(id)getBackupListWithError:(id*)arg1 ;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(BOOL)startBackupWithError:(id*)arg1 ;
-(id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3 ;
-(id)journalForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(BOOL)restoreSupportsBatching;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2 ;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(BOOL)startScanForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)nextBackupSize;
-(id)nextBackupSizeInfo;
-(id)domainInfoList;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(id)reservedBackupSizeListWithError:(id*)arg1 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)restoreInfo;
-(void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2 ;
-(void)clearRestoreSession;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(BOOL)allowiTunesBackup;
-(BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForBackgroundRestoreWithError:(id*)arg1 ;
-(BOOL)archiveLogsTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(void)_backupDidBeginNotification;
-(void)wakeUp;
-(id)_sendRequest:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)_sendRequest:(id)arg1 arguments:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)connectionWasInvalid:(id)arg1 ;
-(void)accountChanged;
-(void)keyBagIsLocking;
-(void)keyBagIsUnlocked;
-(BOOL)deleteAccountWithError:(id*)arg1 ;
-(BOOL)deleteSnapshotID:(unsigned long long)arg1 fromBackupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)acquireLockWithBackupUDID:(id)arg1 owner:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)releaseLockWithBackupUDID:(id)arg1 owner:(id)arg2 error:(id*)arg3 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(void)repair;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(void)finishRestore;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(id)backupState;
-(void)rebootDevice;
-(id)restoreState;
@end

