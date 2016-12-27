/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionAdvertiserDelegate.h>

@protocol UAUserActivityDelegate;
@class NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSMutableSet, NSError, CSSearchableItemAttributeSet, NSDate, NSData, UAUserActivityManager, NSUUID, NSDictionary, NSSet, NSUserActivity;

@interface UAUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

	NSMutableDictionary* _userInfo;
	NSMutableDictionary* _frameworkPayload;
	NSString* _title;
	NSURL* _webpageURL;
	SFCompanionAdvertiser* _advertiser;
	SFCompanionAdvertiser* _resumerAdvertiser;
	NSMutableSet* _dirtyPayloadIdentifiers;
	double _lastSaveTime;
	BOOL _saveScheduled;
	BOOL _createsNewUUIDIfSaved;
	NSError* _decodeUserInfoError;
	BOOL _needsSave;
	BOOL _dirty;
	BOOL _sendToServerPending;
	BOOL _activityHasBeenSentToServer;
	BOOL _supportsContinuationStreams;
	BOOL _forceImmediateSendToServer;
	BOOL _encodedContainsUnsynchronizedCloudDocument;
	BOOL _encodedFileProviderURL;
	BOOL _userActivityWasCreatedSent;
	BOOL _indexInProcess;
	long long _inWillSaveCallback;
	double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
	CSSearchableItemAttributeSet* _contentAttributeSet;
	NSMutableSet* _keywords;
	NSDate* _expirationDate;
	NSString* _contentUserAction;
	NSMutableSet* _requiredUserInfoKeys;
	NSString* _teamIdentifier;
	unsigned long long _os_state_handler;
	int _forwardToCoreSpotlightIndexerCount;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForReminders;
	BOOL _eligibleForPublicIndexing;
	BOOL _invalidated;
	BOOL _canCreateStreams;
	NSData* _cachedEncodedUserInfo;
	id<UAUserActivityDelegate> _delegate;
	UAUserActivityManager* _manager;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _suggestedActionType;
	NSDictionary* _options;
	NSUUID* _originalUniqueIdentifier;
	NSMutableDictionary* _payloadObjects;
	NSMutableDictionary* _payloadUpdateBlocks;
	NSMutableDictionary* _payloadDataCache;

}

@property (copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * contentUserAction; 
@property (copy) NSSet * requiredUserInfoKeys; 
@property (copy) NSSet * keywords; 
@property (copy) NSString * contentIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff; 
@property (getter=isEligibleForSearch) BOOL eligibleForSearch; 
@property (getter=isEligibleForReminders) BOOL eligibleForReminders; 
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; 
@property (copy) CSSearchableItemAttributeSet * contentAttributeSet; 
@property (readonly) BOOL forwardToCoreSpotlightIndexer; 
@property (__weak,readonly) UAUserActivityManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSUUID * originalUniqueIdentifier;                                      //@synthesize originalUniqueIdentifier=_originalUniqueIdentifier - In the implementation block
@property (assign) BOOL dirty; 
@property (assign) BOOL sendToServerPending;                                                      //@synthesize sendToServerPending=_sendToServerPending - In the implementation block
@property (assign) BOOL createsNewUUIDIfSaved;                                                    //@synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved - In the implementation block
@property (retain) NSError * decodeUserInfoError;                                                 //@synthesize decodeUserInfoError=_decodeUserInfoError - In the implementation block
@property (assign) BOOL encodedContainsUnsynchronizedCloudDocument;                               //@synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument - In the implementation block
@property (assign) double encodedContainsUnsynchronizedCloudDocumentBackoffInterval;              //@synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval - In the implementation block
@property (assign) BOOL encodedFileProviderURL;                                                   //@synthesize encodedFileProviderURL=_encodedFileProviderURL - In the implementation block
@property (retain) NSData * cachedEncodedUserInfo;                                                //@synthesize cachedEncodedUserInfo=_cachedEncodedUserInfo - In the implementation block
@property (retain) NSMutableDictionary * payloadObjects;                                          //@synthesize payloadObjects=_payloadObjects - In the implementation block
@property (retain) NSMutableDictionary * payloadUpdateBlocks;                                     //@synthesize payloadUpdateBlocks=_payloadUpdateBlocks - In the implementation block
@property (retain) NSMutableDictionary * payloadDataCache;                                        //@synthesize payloadDataCache=_payloadDataCache - In the implementation block
@property (retain) NSMutableSet * dirtyPayloadIdentifiers;                                        //@synthesize dirtyPayloadIdentifiers=_dirtyPayloadIdentifiers - In the implementation block
@property (readonly) unsigned long long os_state_handler;                                         //@synthesize os_state_handler=_os_state_handler - In the implementation block
@property (copy) NSString * typeIdentifier;                                                       //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                                                    //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSURL * webpageURL; 
@property (assign) BOOL needsSave; 
@property (assign) BOOL supportsContinuationStreams; 
@property (assign) BOOL forceImmediateSendToServer;                                               //@synthesize forceImmediateSendToServer=_forceImmediateSendToServer - In the implementation block
@property (assign) id<UAUserActivityDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSUserActivity * parentUserActivity; 
@property (readonly) BOOL activityHasBeenSentToServer;                                            //@synthesize activityHasBeenSentToServer=_activityHasBeenSentToServer - In the implementation block
@property (getter=isInvalidated,readonly) BOOL invalidated;                                       //@synthesize invalidated=_invalidated - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long suggestedActionType;                                      //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDictionary * options;                                                          //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData; 
@property (assign) BOOL canCreateStreams;                                                         //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (copy) NSString * teamIdentifier;                                                       //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
+(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(id)currentUserActivityUUID;
+(BOOL)supportsUserActivityAppLinks;
+(BOOL)userActivityContinuationSupported;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(id)allowedWebpageURLSchemes;
+(BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3 ;
+(id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(id)_encodeToString:(id)arg1 ;
+(id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2 ;
+(id)_decodeFromScanner:(id)arg1 ;
+(id)_decodeFromString:(id)arg1 ;
+(void)initialize;
+(id)observers;
+(id)userActivityFromUUID:(id)arg1 timeout:(double)arg2 withError:(id*)arg3 ;
+(void)addUserActivityObserver:(id)arg1 ;
+(void)removeUserActivityObserver:(id)arg1 ;
+(BOOL)isIndexPendingForUUID:(id)arg1 ;
+(void)setIndexPending:(BOOL)arg1 forUUID:(id)arg2 ;
+(BOOL)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setParentUserActivity:(NSUserActivity *)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(BOOL)needsSave;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSString *)contentUserAction;
-(void)setContentUserAction:(NSString *)arg1 ;
-(BOOL)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(BOOL)isEligibleForHandoff;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(BOOL)isEligibleForSearch;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(BOOL)isEligibleForPublicIndexing;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)contentAttributes;
-(void)setContentAttributes:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)addKeywordsFromArray:(id)arg1 ;
-(id)initWithUserActivityData:(id)arg1 options:(id)arg2 ;
-(id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4 ;
-(BOOL)createUserActivityDataWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)createUserActivityStringsWithSaving:(BOOL)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3 ;
-(unsigned long long)suggestedActionType;
-(void)_resignCurrent;
-(void)sendUserActivityInfoToLSUserActivityd:(BOOL)arg1 onAsyncQueue:(BOOL)arg2 ;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(BOOL)arg1 clearDirty:(BOOL)arg2 ;
-(void)didSynchronizeUserActivity;
-(void)tellDaemonAboutNewLSUserActivity;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4 ;
-(BOOL)sendToServerPending;
-(void)setSendToServerPending:(BOOL)arg1 ;
-(BOOL)forceImmediateSendToServer;
-(void)setForceImmediateSendToServer:(BOOL)arg1 ;
-(BOOL)createsNewUUIDIfSaved;
-(void)setCreatesNewUUIDIfSaved:(BOOL)arg1 ;
-(NSError *)decodeUserInfoError;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(BOOL)encodedContainsUnsynchronizedCloudDocument;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(BOOL)arg1 ;
-(double)encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
-(void)setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(double)arg1 ;
-(BOOL)encodedFileProviderURL;
-(void)setEncodedFileProviderURL:(BOOL)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(BOOL)canCreateStreams;
-(void)setCanCreateStreams:(BOOL)arg1 ;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(NSString *)contentIdentifier;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)setDelegate:(id<UAUserActivityDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<UAUserActivityDelegate>)delegate;
-(void)invalidate;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(void)becomeCurrent;
-(long long)priority;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)typeIdentifier;
-(NSUUID *)uniqueIdentifier;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(BOOL)isEligibleForReminders;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(id)objectForIdentifier:(id)arg1 ;
-(id)payloadForIdentifier:(id)arg1 ;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 ;
-(void)setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)resignCurrent;
-(void)setContentAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(void)updateForwardToCoreSpotlightIndexer:(char)arg1 ;
-(CSSearchableItemAttributeSet *)contentAttributeSet;
-(id)stateString;
-(id)contentType;
-(id)teamID;
-(void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(NSUserActivity *)parentUserActivity;
-(void)indexActivity:(double)arg1 forceIndexing:(BOOL)arg2 ;
-(BOOL)forwardToCoreSpotlightIndexer;
-(void)setCachedEncodedUserInfo:(NSData *)arg1 ;
-(void)setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(BOOL)arg4 ;
-(void)displayInDtrace;
-(BOOL)activityHasBeenSentToServer;
-(void)scheduleSendUserActivityInfoToLSUserActivityd;
-(id)archiveURL:(id)arg1 error:(id*)arg2 ;
-(id)unarchiveURL:(id)arg1 error:(id*)arg2 ;
-(NSData *)cachedEncodedUserInfo;
-(id)encodeUserInfo:(id)arg1 error:(id*)arg2 ;
-(id)payloadIdentifiers;
-(id)encodeUserInfo:(id)arg1 ;
-(id)decodeUserInfo:(id)arg1 ;
-(void)pinUserActivityWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)os_state_handler;
-(NSUUID *)originalUniqueIdentifier;
-(NSMutableDictionary *)payloadObjects;
-(void)setPayloadObjects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)payloadUpdateBlocks;
-(void)setPayloadUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)payloadDataCache;
-(void)setPayloadDataCache:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)dirtyPayloadIdentifiers;
-(void)setDirtyPayloadIdentifiers:(NSMutableSet *)arg1 ;
-(void)addContentAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeContentAttribute:(id)arg1 ;
-(id)userActivityInfoForSelfWithPayload:(BOOL)arg1 ;
-(void)setEligibleForReminders:(BOOL)arg1 ;
-(id)userActivityInfoForSelf;
-(id)copyWithNewUUID;
-(void)willSynchronizeUserActivityWithHandler:(/*^block*/id)arg1 ;
-(void)sendToServer:(BOOL)arg1 ;
-(BOOL)_encodeIntoUserActivityStringWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_encodeIntoUserActivityDataWithSave:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendToCoreSpotlightIndexer;
-(/*^block*/id)payloadUpdateBlockForIdentifier:(id)arg1 ;
-(void)setDirty:(BOOL)arg1 identifier:(id)arg2 ;
-(BOOL)isPayloadDirty:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(UAUserActivityManager *)manager;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
@end

