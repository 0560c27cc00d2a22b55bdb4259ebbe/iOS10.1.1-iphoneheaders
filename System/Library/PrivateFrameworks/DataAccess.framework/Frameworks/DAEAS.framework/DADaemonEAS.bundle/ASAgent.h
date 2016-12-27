/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonEAS/DADaemonEAS-Structs.h>
#import <DADaemonSupport/DAAgent.h>
#import <DADaemonEAS/DAContactsUpdateConsumer.h>
#import <DADaemonEAS/DAEventsUpdateConsumer.h>
#import <DADaemonEAS/DAToDosUpdateConsumer.h>
#import <DADaemonEAS/DANotesUpdateConsumer.h>
#import <DADaemonEAS/DAMessageSendConsumer.h>
#import <DADaemonEAS/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>
#import <DADaemonEAS/DAMessageMoveRequestConsumer.h>
#import <libobjc.A.dylib/ASFolderHierarchyUpdateConsumer.h>
#import <libobjc.A.dylib/ASFolderHierarchyLocalChangeConsumer.h>
#import <DADaemonEAS/DAPreferredDaysToSyncDidChangeObserver.h>

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSLock, NSString;

@interface ASAgent : DAAgent <DAContactsUpdateConsumer, DAEventsUpdateConsumer, DAToDosUpdateConsumer, DANotesUpdateConsumer, DAMessageSendConsumer, DADataclassLockWatcher, ABPredicateDelegate, DAMessageMoveRequestConsumer, ASFolderHierarchyUpdateConsumer, ASFolderHierarchyLocalChangeConsumer, DAPreferredDaysToSyncDidChangeObserver> {

	void* _matchedRecord;
	BOOL _isShuttingDown;
	int _numLocalFolderUpdatesInFlight;
	NSMutableDictionary* _eventCalendarsByFolderId;
	NSMutableDictionary* _toDoCalendarsByFolderId;
	NSMutableDictionary* _contactStoresByFolderId;
	NSMutableDictionary* _noteStoreObjectIdsByFolderId;
	NSMutableArray* _outstandingFolderRequests;
	NSMutableSet* _currentlySyncingFolderIds;
	NSLock* _folderItemSyncRequestLock;
	NSMutableDictionary* _folderIdToSequentialFailureCount;
	NSMutableDictionary* _folderIdToSequentialServerErrorCount;
	/*^block*/id _calUnitTestMergedRequestsBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * eventCalendarsByFolderId;                          //@synthesize eventCalendarsByFolderId=_eventCalendarsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * toDoCalendarsByFolderId;                           //@synthesize toDoCalendarsByFolderId=_toDoCalendarsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contactStoresByFolderId;                           //@synthesize contactStoresByFolderId=_contactStoresByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * noteStoreObjectIdsByFolderId;                      //@synthesize noteStoreObjectIdsByFolderId=_noteStoreObjectIdsByFolderId - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingFolderRequests;                              //@synthesize outstandingFolderRequests=_outstandingFolderRequests - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentlySyncingFolderIds;                                //@synthesize currentlySyncingFolderIds=_currentlySyncingFolderIds - In the implementation block
@property (nonatomic,retain) NSLock * folderItemSyncRequestLock;                                      //@synthesize folderItemSyncRequestLock=_folderItemSyncRequestLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderIdToSequentialFailureCount;                  //@synthesize folderIdToSequentialFailureCount=_folderIdToSequentialFailureCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderIdToSequentialServerErrorCount;              //@synthesize folderIdToSequentialServerErrorCount=_folderIdToSequentialServerErrorCount - In the implementation block
@property (assign,nonatomic) int numLocalFolderUpdatesInFlight;                                       //@synthesize numLocalFolderUpdatesInFlight=_numLocalFolderUpdatesInFlight - In the implementation block
@property (assign,nonatomic) void* matchedRecord;                                                     //@synthesize matchedRecord=_matchedRecord - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                                     //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,copy) id calUnitTestMergedRequestsBlock;                                         //@synthesize calUnitTestMergedRequestsBlock=_calUnitTestMergedRequestsBlock - In the implementation block
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
-(void)dealloc;
-(id)waiterID;
-(id)_powerLogInfoDictionary;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(BOOL)isShuttingDown;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageDidSendWithContext:(id)arg1 ;
-(void)resultsForMessageMove:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)fetchAttachmentTask:(id)arg1 completedWithStatus:(long long)arg2 dataWasBase64:(BOOL)arg3 error:(id)arg4 ;
-(void)fetchAttachmentTask:(id)arg1 receivedData:(id)arg2 ofContentType:(id)arg3 ;
-(void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(BOOL)arg8 moreAvailable:(BOOL)arg9 moreLocalChangesAvailable:(BOOL)arg10 pushedActions:(id)arg11 ;
-(void)syncResultForEventsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(BOOL)arg7 moreAvailable:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11 ;
-(void)syncResultForToDosFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(BOOL)arg7 moreAvailable:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11 ;
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(BOOL)arg9 moreAvailable:(BOOL)arg10 moreLocalChangesAvailable:(BOOL)arg11 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_tearDownABNotifications;
-(void)_tearDownCalNotifications;
-(void)_tearDownNotesNotifications;
-(NSMutableDictionary *)eventCalendarsByFolderId;
-(NSMutableDictionary *)contactStoresByFolderId;
-(NSMutableDictionary *)toDoCalendarsByFolderId;
-(id)_noteAccountObject:(BOOL)arg1 ;
-(void)setContactStoresByFolderId:(NSMutableDictionary *)arg1 ;
-(void*)_newABSourceForDAFolder:(id)arg1 ;
-(void*)_containerForFolderWithId:(id)arg1 dataclass:(long long)arg2 ;
-(void)setEventCalendarsByFolderId:(NSMutableDictionary *)arg1 ;
-(void*)_newCalCalendarForDAFolder:(id)arg1 ;
-(void)setToDoCalendarsByFolderId:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)noteStoreObjectIdsByFolderId;
-(void)setNoteStoreObjectIdsByFolderId:(NSMutableDictionary *)arg1 ;
-(id)_newNoteSourceForDAFolder:(id)arg1 ;
-(void)_appendSyncRequestForFoldersOfDataclasses:(long long)arg1 remoteChanges:(BOOL)arg2 ;
-(void)_syncAllContactFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)_syncAllEventsFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)_syncAllToDosFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)_syncAllNotesFoldersWithRemoteChanges:(BOOL)arg1 ;
-(void)_refirePendingCalendarInvitations;
-(id)foldersForFolderIDs:(id)arg1 andDataclasses:(long long)arg2 ;
-(void)_appendSyncRequestForFolders:(id)arg1 remoteChanges:(BOOL)arg2 ;
-(void)_syncAllContactsEventsToDosAndNotesFolders;
-(void)_openLocalDBConnections;
-(BOOL)_abBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(BOOL)arg3 ;
-(BOOL)_calBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(BOOL)arg3 ;
-(BOOL)_notesBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(BOOL)arg3 ;
-(void)_cacheFoldersForDataclasses:(long long)arg1 ;
-(void)_removeABSourceForDAFolder:(id)arg1 ;
-(void)_removeCalCalendarForDAFolder:(id)arg1 ;
-(void)_removeNoteSourceForDAFolder:(id)arg1 ;
-(void)_updateFolderHierarchyRequireChangedFolders:(BOOL)arg1 ;
-(void)_nilOutContainersForDataclasses:(long long)arg1 ;
-(BOOL)_closeLocalDBConnectionsWithoutSaving;
-(void)_appendFolderHierarchyChangesForFoldersOfDataclasses:(long long)arg1 ;
-(void)_appendSyncRequestForFoldersOfDataclasses:(long long)arg1 ;
-(void)_verifySearchStore;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)folderHierarchyUpdateNotification:(id)arg1 ;
-(void)folderHierarchyUpdateRequireChangedFoldersNotification:(id)arg1 ;
-(void)folderContentsUpdate:(id)arg1 ;
-(void)_setUpABNotifications;
-(void)_setUpCalNotifications;
-(void)_setUpNotesNotifications;
-(id)_parentIdFromEventId:(id)arg1 ;
-(void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned long long)arg2 ;
-(void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(long long)arg2 andError:(id)arg3 ;
-(void)localChangeForFolder:(id)arg1 finishedWithStatus:(long long)arg2 andError:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)preferredDaysToSyncDidChange;
-(void*)matchedRecord;
-(void)setMatchedRecord:(void*)arg1 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_handleDaemonBackedLocalFolderChangeWithDBChangeIndices:(CFArrayRef)arg1 oldFolders:(id)arg2 status:(long long)arg3 error:(id)arg4 ;
-(void)processDAFolderChange:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_exchangeIdForLocalId:(id)arg1 inContainer:(void*)arg2 dataclass:(long long)arg3 redirectToParent:(BOOL)arg4 ;
-(id)_localIdForExchangeId:(id)arg1 inContainer:(void*)arg2 dataclass:(long long)arg3 ;
-(id)_syncKeyForFolderWithId:(id)arg1 ;
-(void)_setSyncKey:(id)arg1 forFolderWithId:(id)arg2 ;
-(NSMutableArray *)outstandingFolderRequests;
-(void)setOutstandingFolderRequests:(NSMutableArray *)arg1 ;
-(NSMutableSet *)currentlySyncingFolderIds;
-(void)setCurrentlySyncingFolderIds:(NSMutableSet *)arg1 ;
-(NSLock *)folderItemSyncRequestLock;
-(void)setFolderItemSyncRequestLock:(NSLock *)arg1 ;
-(NSMutableDictionary *)folderIdToSequentialFailureCount;
-(void)setFolderIdToSequentialFailureCount:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)folderIdToSequentialServerErrorCount;
-(void)setFolderIdToSequentialServerErrorCount:(NSMutableDictionary *)arg1 ;
-(int)numLocalFolderUpdatesInFlight;
-(void)setNumLocalFolderUpdatesInFlight:(int)arg1 ;
-(id)calUnitTestMergedRequestsBlock;
-(void)setCalUnitTestMergedRequestsBlock:(id)arg1 ;
-(void*)_copyExistingABRecordForContact:(ASContact*)arg1 matchOnAttributes:(BOOL)arg2 inStore:(void*)arg3 ;
-(void*)_copyExistingCalRecordForEvent:(ASEvent*)arg1 matchOnAttributes:(BOOL)arg2 inCalendar:(void*)arg3 ;
-(void*)_copyExistingCalRecordForToDo:(ASToDo*)arg1 matchOnAttributes:(BOOL)arg2 inCalendar:(void*)arg3 ;
-(id)_copyExistingNoteRecordForNote:(ASNote*)arg1 matchOnAttributes:(BOOL)arg2 inNoteStore:(id)arg3 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_noteSyncForFolderWithId:(id)arg1 andTitle:(id)arg2 finishedWithSuccess:(BOOL)arg3 ;
-(void)_removePostponedRequestForFolderWithId:(id)arg1 ;
-(void)_queueServerFailureResyncForFolderWithId:(id)arg1 isInitialSync:(BOOL)arg2 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_folderItemsSyncTask:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)_moveItemsTask:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void*)_copyExistingLocalItemForExchangeItem:(id)arg1 matchOnAttributes:(BOOL)arg2 inContainer:(void*)arg3 ;
-(BOOL)_handleAction:(id)arg1 inFolderWithId:(id)arg2 dataclass:(long long)arg3 isInitialSync:(BOOL)arg4 resultingChangeActionsForServer:(id)arg5 eventServerIDsToDrop:(id)arg6 eventServerIDSWithDroppedDeletes:(id)arg7 ;
-(BOOL)_detectDuplicatedEventFromExchangeEvent:(id)arg1 inFolderWithId:(id)arg2 isInitialSync:(BOOL)arg3 eventServerIDsToDrop:(id)arg4 eventServerIDSWithDroppedDeletes:(id)arg5 resultingChangeActionsForServer:(id)arg6 outEvent:(id*)arg7 outLocalItem:(const void*)arg8 outDidTouchDB:(BOOL*)arg9 ;
-(BOOL)_clearChangeHistoriesWithChangeIdContext:(id)arg1 dataclass:(long long)arg2 inFolderWithId:(id)arg3 pushedActions:(id)arg4 ;
-(void)_syncResultForFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(BOOL)arg7 moreAvailable:(BOOL)arg8 dataclass:(long long)arg9 resultingChangeActionsForServer:(id)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12 eventsWithPendingInvitationEmails:(id)arg13 ;
-(void)_finishInitialSyncForFolder:(id)arg1 dataclass:(long long)arg2 ;
-(void)_wrapperSyncResultForFolder:(id)arg1 dataclass:(long long)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(BOOL)arg8 moreAvailable:(BOOL)arg9 moreLocalChangesAvailable:(BOOL)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12 ;
-(BOOL)_finishWithInvitationEvent:(void*)arg1 eventUID:(id)arg2 expectedResponse:(int)arg3 wasMyInvite:(BOOL)arg4 isStillInvite:(BOOL)arg5 ;
-(void)_reallyApplyMessageDidSendWithContext:(id)arg1 ;
-(void)_reallyFinishInvitationBatch:(id)arg1 ;
-(id)_copyCalendarItemMoveActionsInCalendar:(void*)arg1 dataHandler:(id)arg2 deleteActionsByFolderId:(id)arg3 ;
-(void)_appendSyncRequest:(id)arg1 atBeginning:(BOOL)arg2 ;
-(void)_reallySendMoves:(id)arg1 ;
-(id)_copyABActionsInContainer:(void*)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(BOOL)arg4 changeContext:(id)arg5 ;
-(id)_copyCalendarItemActionsInContainer:(void*)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(BOOL)arg4 skippedDetachments:(id)arg5 changeContext:(id)arg6 ;
-(id)_copyNotesActionsInNoteStore:(id)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(BOOL)arg4 changeSet:(id)arg5 ;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)_addSimpleChangeForType:(long long)arg1 changedItemId:(id)arg2 addedIds:(id)arg3 modifiedIds:(id)arg4 deletedIds:(id)arg5 collapsedIds:(id)arg6 ;
-(BOOL)_getHierarchyChangeForDataclass:(long long)arg1 changedItemId:(int*)arg2 changeType:(long long*)arg3 externalId:(id*)arg4 changeTableIndices:(CFArrayRef)arg5 ;
-(BOOL)_handleLocallyChangedFolderWithChangedItemId:(int)arg1 changeType:(long long)arg2 externalId:(id)arg3 changeTableIndices:(CFArrayRef)arg4 dataclass:(long long)arg5 ;
-(void)_saveAttachmentDataToDatabaseForTask:(id)arg1 ;
-(void)_reallyPrepareFetchAttachmentTask:(id)arg1 ;
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(long long)arg2 error:(id)arg3 ;
-(void)finishWithInvitationBatch:(id)arg1 ;
-(void)meetingResponseFinishedWithStatus:(long long)arg1 error:(id)arg2 successfulResponses:(id)arg3 failedResponses:(id)arg4 ;
-(BOOL)_markEventWithLocalIDAsNeedingInvitationEmail:(int)arg1 parentId:(int)arg2 ;
-(void)_appendSyncRequestForFolders:(id)arg1 ;
-(void)prepareFetchAttachmentTask:(id)arg1 ;
-(void)_addChangeForType:(long long)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 pseudoDeletedIdsToChangeId:(id)arg7 changeIdsToClear:(id)arg8 ;
-(id)_dbExternalIdForLocalId:(int)arg1 dataclass:(long long)arg2 ;
-(BOOL)_isOrganizerSelfWithLocalEvent:(void*)arg1 ;
-(void)_handleChangeOnEventWithExchangeId:(id)arg1 localId:(int)arg2 changeType:(long long)arg3 eventChangeId:(id)arg4 hasSignificantAttributeChanges:(BOOL)arg5 container:(void*)arg6 dataHandler:(id)arg7 addedIdsToEventChangeId:(id)arg8 modifiedIdsToEventChangeId:(id)arg9 deletedIdsToEventChangeId:(id)arg10 pseudoDeletedIdsToEventChangeId:(id)arg11 eventChangeIdsToClear:(id)arg12 allAddedDetachmentIds:(id)arg13 localToExchangeIdMap:(id)arg14 outShouldSaveDB:(BOOL*)arg15 ;
-(id)_instanceIdFromIdWithExceptionDate:(id)arg1 ;
-(void)_faultInCalendarSubentitiesInCalendar:(void*)arg1 addedIdsToEventChangeId:(id)arg2 modifiedIdsToEventChangeId:(id)arg3 deletedIdsToEventChangeId:(id)arg4 pseudoDeletedIdsToEventChangeId:(id)arg5 localToExchangeIdMap:(id)arg6 eventChangeIdsToClear:(id)arg7 allAddedDetachmentIds:(id)arg8 outRecurrenceId:(int*)arg9 outAlarmId:(int*)arg10 outAttendeeId:(int*)arg11 outHighestSequenceNumber:(int*)arg12 dataHandler:(id)arg13 ;
-(void)_participantChangesInCalendar:(void*)arg1 eventIdToAttendeeEmail:(id)arg2 dataHandler:(id)arg3 ;
-(BOOL)_isDetachmentFromEventId:(id)arg1 ;
-(id)_instanceIdFromEventId:(id)arg1 ;
-(id)_instanceIdFromUniqueId:(id)arg1 ;
-(void)startMonitoring;
@end

