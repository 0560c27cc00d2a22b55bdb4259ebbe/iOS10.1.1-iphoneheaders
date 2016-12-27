/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class ACAccount, DAStatusReport, NSMapTable, NSString, DATaskManager, DATrustHandler, NSArray, NSMutableDictionary, NSMutableArray, NSObject, NSData, NSURL, NSSet;

@interface DAAccount : NSObject {

	ACAccount* _backingAccountInfo;
	BOOL _hasInitted;
	BOOL _shouldUseOpportunisticSockets;
	BOOL _wasUserInitiated;
	DAStatusReport* _statusReport;
	NSMapTable* _consumers;
	CFURLStorageSessionRef _storageSession;
	NSString* _clientToken;
	DATaskManager* _taskManager;
	BOOL _shouldFailAllTasks;
	BOOL _isValidating;
	DATrustHandler* _trustHandler;
	NSArray* _appIdsForPasswordPrompt;
	NSString* _sourceApplicationBundleIdentifier;
	NSMutableDictionary* _dataclassPropertyURLsByDataclass;
	NSMutableArray* _pendingQueries;
	NSObject*<OS_dispatch_queue> _pendingQueryQueue;
	unsigned long long _lastQueryStartedTime;

}

@property (nonatomic,retain) NSMutableDictionary * dataclassPropertyURLsByDataclass;              //@synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                                       //@synthesize statusReport=_statusReport - In the implementation block
@property (nonatomic,retain) DATrustHandler * trustHandler;                                       //@synthesize trustHandler=_trustHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpportunisticSockets;                                  //@synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL wasUserInitiated;                                               //@synthesize wasUserInitiated=_wasUserInitiated - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingQueries;                                     //@synthesize pendingQueries=_pendingQueries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pendingQueryQueue;                      //@synthesize pendingQueryQueue=_pendingQueryQueue - In the implementation block
@property (assign,nonatomic) unsigned long long lastQueryStartedTime;                             //@synthesize lastQueryStartedTime=_lastQueryStartedTime - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (assign,setter=setDAAccountVersion:,nonatomic) int daAccountVersion; 
@property (nonatomic,copy,readonly) NSString * persistentUUID; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * user; 
@property (nonatomic,copy) NSString * host; 
@property (assign,nonatomic) long long port; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) BOOL useSSL; 
@property (nonatomic,readonly) long long enabledDataclassesBitmask; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) ACAccount * backingAccountInfo;                                    //@synthesize backingAccountInfo=_backingAccountInfo - In the implementation block
@property (nonatomic,readonly) DATaskManager * taskManager;                                       //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,readonly) int keychainAccessibilityType; 
@property (nonatomic,readonly) NSString * scheduleIdentifier; 
@property (nonatomic,retain) NSData * signingIdentityPersistentReference; 
@property (nonatomic,retain) NSData * encryptionIdentityPersistentReference; 
@property (assign,nonatomic) BOOL shouldDoInitialAutodiscovery; 
@property (nonatomic,readonly) BOOL shouldAutodiscoverAccountProperties; 
@property (nonatomic,copy,readonly) NSString * scheme; 
@property (nonatomic,copy) NSURL * principalURL; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy,readonly) NSString * clientToken; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * appIdsForPasswordPrompt;                                 //@synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt - In the implementation block
@property (nonatomic,readonly) BOOL shouldFailAllTasks;                                           //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityPersist; 
@property (assign,nonatomic) BOOL isValidating;                                                   //@synthesize isValidating=_isValidating - In the implementation block
@property (nonatomic,readonly) NSString * userAgentHeader; 
@property (nonatomic,readonly) NSSet * serverComplianceClasses; 
@property (nonatomic,readonly) NSString * serverRoot; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
+(id)_leafAccountTypes;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg1 ;
+(id)daAccountSubclassWithBackingAccountInfo:(id)arg1 ;
-(BOOL)isCardDAVAccount;
-(BOOL)isBookmarkDAVAccount;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(void)setUseSSL:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reload;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)scheme;
-(NSString *)host;
-(id)displayName;
-(long long)port;
-(id)protocolVersion;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)serverRoot;
-(NSSet *)serverComplianceClasses;
-(void)clientTokenRequestedByServer;
-(id)oauthInfoProvider;
-(BOOL)handleCertificateError:(id)arg1 ;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)getAppleIDSession;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(void)resetStatusReport;
-(void)_setPersistentUUID:(id)arg1 ;
-(void)ingestBackingAccountInfoProperties;
-(int)accountIntPropertyForKey:(id)arg1 ;
-(void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2 ;
-(id)passwordWithExpected:(BOOL)arg1 ;
-(NSMutableDictionary *)dataclassPropertyURLsByDataclass;
-(id)urlFromDataclassPropertiesForDataclass:(id)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setIsValidating:(BOOL)arg1 ;
-(BOOL)shouldDoInitialAutodiscovery;
-(BOOL)shouldRemoveDBSyncDataOnAccountChange;
-(void)removeDBSyncData;
-(BOOL)monitorFoldersWithIDs:(id)arg1 ;
-(BOOL)_isIdentityManagedByProfile;
-(void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2 ;
-(void)saveAccountPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)exceptionsDict;
-(DATrustHandler *)trustHandler;
-(BOOL)resetCertWarnings;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(BOOL)wasUserInitiated;
-(int)keychainAccessibilityType;
-(int)daAccountVersion;
-(void)setDAAccountVersion:(int)arg1 ;
-(NSString *)scheduleIdentifier;
-(BOOL)enabledForAnyDADataclasses:(long long)arg1 ;
-(long long)enabledDataclassesBitmask;
-(id)spinnerIdentifiers;
-(void)stopMonitoringFolderWithID:(id)arg1 ;
-(id)hostFromDataclassPropertiesForDataclass:(id)arg1 ;
-(BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1 ;
-(long long)portFromDataclassPropertiesForDataclass:(id)arg1 ;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(void)setShouldDoInitialAutodiscovery:(BOOL)arg1 ;
-(BOOL)shouldAutodiscoverAccountProperties;
-(void)accountDidChangeFromOldAccountInfo:(id)arg1 ;
-(BOOL)monitorFolderWithID:(id)arg1 ;
-(void)stopMonitoringFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(void)removeClientCertificateData;
-(void)updateExistingAccountProperties;
-(id)addUsernameToURL:(id)arg1 ;
-(CFDataRef)exceptionsForDigest:(id)arg1 ;
-(void)setExceptions:(CFDataRef)arg1 forDigest:(id)arg2 ;
-(BOOL)isChildAccount;
-(BOOL)isLDAPAccount;
-(BOOL)isBookmarkDAVAccount;
-(BOOL)isCalDAVAccount;
-(BOOL)isCardDAVAccount;
-(BOOL)isCalDAVChildAccount;
-(BOOL)isSubscribedCalendarAccount;
-(void)setTrustHandler:(DATrustHandler *)arg1 ;
-(NSArray *)appIdsForPasswordPrompt;
-(void)setDataclassPropertyURLsByDataclass:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingQueries;
-(void)setPendingQueries:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pendingQueryQueue;
-(void)setPendingQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)lastQueryStartedTime;
-(void)setLastQueryStartedTime:(unsigned long long)arg1 ;
-(void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleValidationError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8 ;
-(BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2 ;
-(void)cancelDownloadingInstance:(id)arg1 error:(id)arg2 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 ;
-(id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3 ;
-(void)cancelShareResponseInstance:(id)arg1 error:(id)arg2 ;
-(void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
-(void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2 ;
-(void)retrieveOofSettingsForConsumer:(id)arg1 ;
-(id)getPendingQueryQueue;
-(void)_dequeueQuery;
-(void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8 ;
-(int)toDosNumberOfPastDaysToSync;
-(void)setToDosNumberOfPastDaysToSync:(int)arg1 ;
-(void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)accountTypeIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)oauth2Token;
-(ACAccount *)backingAccountInfo;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(BOOL)isHotmailAccount;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
-(NSData *)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(NSData *)arg1 ;
-(NSData *)encryptionIdentityPersistentReference;
-(oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1 ;
-(NSString *)clientToken;
-(BOOL)useSSL;
-(id)accountPropertyForKey:(id)arg1 ;
-(NSString *)userAgentHeader;
-(void)saveAccountProperties;
-(void)setShouldUseOpportunisticSockets:(BOOL)arg1 ;
-(void)setWasUserInitiated:(BOOL)arg1 ;
-(void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(DATaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setConsumer:(id)arg1 forTask:(id)arg2 ;
-(id)consumerForTask:(id)arg1 ;
-(void)removeConsumerForTask:(id)arg1 ;
-(id)stateString;
-(BOOL)isGoogleAccount;
-(void)setEnabled:(BOOL)arg1 forDADataclass:(long long)arg2 ;
-(void)resetAccountID;
-(id)defaultContactsFolder;
-(id)defaultEventsFolder;
-(id)defaultToDosFolder;
-(id)defaultNotesFolder;
-(NSString *)changeTrackingID;
-(void)suspendMonitoringFoldersWithIDs:(id)arg1 ;
-(void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 ;
-(void)resumeMonitoringFoldersWithIDs:(id)arg1 ;
-(void)setAccountIntProperty:(int)arg1 forKey:(id)arg2 ;
-(BOOL)accountBoolPropertyForKey:(id)arg1 ;
-(id)domainOnly;
-(id)usernameWithoutDomain;
-(NSData *)identityPersist;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)cleanupAccountFiles;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)upgradeAccount;
-(id)contactsFolders;
-(id)eventsFolders;
-(id)toDosFolders;
-(id)notesFolders;
-(id)defaultContainerIdentifierForDADataclass:(long long)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelPendingSearchQuery:(id)arg1 ;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(BOOL)_reallySearchQueriesRunning;
-(id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(BOOL)isActiveSyncAccount;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)accountContainsEmailAddress:(id)arg1 ;
-(DAStatusReport *)statusReport;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(BOOL)shouldUseOpportunisticSockets;
-(void)dropAssertionsAndRenewCredentialsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(NSString *)emailAddress;
-(BOOL)isValidating;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(BOOL)isDisabled;
-(void)setEmailAddress:(NSString *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)tearDown;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)dataclassProperties;
-(void)shutdown;
-(NSString *)sourceApplicationBundleIdentifier;
-(BOOL)shouldFailAllTasks;
-(id)additionalHeaderValues;
-(NSString *)accountID;
-(NSString *)persistentUUID;
-(NSArray *)emailAddresses;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)syncStoreIdentifier;
-(NSString *)user;
-(void)setPort:(long long)arg1 ;
-(void)setUser:(NSString *)arg1 ;
@end

