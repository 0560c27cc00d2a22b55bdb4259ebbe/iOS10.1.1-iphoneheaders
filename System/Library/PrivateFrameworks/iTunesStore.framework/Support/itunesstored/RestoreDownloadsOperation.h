/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/RestoreDownloadItemsOperationDelegate.h>
#import <itunesstored/RestorePodcastItemsOperationDelegate.h>

@class NSMutableDictionary, NSOrderedSet, NSMutableArray, NSString, NSArray;

@interface RestoreDownloadsOperation : ISOperation <RestoreDownloadItemsOperationDelegate, RestorePodcastItemsOperationDelegate> {

	NSMutableDictionary* _accountIDsByAppleID;
	long long _cancelRetryAlertState;
	NSOrderedSet* _downloadIDs;
	NSMutableArray* _errors;
	BOOL _hadAutoRetrySoftFailure;
	BOOL _hadCancelFailure;
	BOOL _hadHardFailure;
	NSString* _restoreReason;

}

@property (readonly) NSOrderedSet * downloadIdentifiers; 
@property (readonly) NSString * restoreReason; 
@property (readonly) NSArray * errors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resetShouldSuppressTermsAndConditionsDialogs;
+(BOOL)shouldSuppressTermsAndConditionsDialogs;
+(void)setShouldSuppressTermsAndConditionsDialogs:(BOOL)arg1 ;
-(NSString *)restoreReason;
-(void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2 ;
-(BOOL)_shouldAuthenticateForCancelRetry;
-(void)_establishPrimaryAccount;
-(id)_newRestoreItemsWithDownloadIDs:(id)arg1 ;
-(id)_accountIDForAccountName:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isErrorCancelFailure:(id)arg1 ;
-(BOOL)_isErrorSoftFail:(id)arg1 ;
-(BOOL)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1 ;
-(void)_applyResponses:(id)arg1 withTransaction:(id)arg2 ;
-(BOOL)_preflightAccountWithID:(id)arg1 isFamily:(BOOL)arg2 error:(id*)arg3 ;
-(void)_scheduleAutomaticRetry;
-(void)_scheduleCancelRetry;
-(long long)_downloadRestoreStateForError:(id)arg1 ;
-(BOOL)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4 ;
-(id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2 ;
-(id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4 ;
-(void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(id)_newDownloadWithStoreDownload:(id)arg1 ;
-(void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3 ;
-(NSOrderedSet *)downloadIdentifiers;
-(NSArray *)errors;
@end

