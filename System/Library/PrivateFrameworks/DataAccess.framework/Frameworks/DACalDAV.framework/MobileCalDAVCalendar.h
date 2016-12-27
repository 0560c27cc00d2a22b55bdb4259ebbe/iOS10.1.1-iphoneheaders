/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CalDAVCalendar.h>

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray, MobileCalDAVPrincipal, CalDiagCalendarCollectionSync, NSMutableDictionary;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {

	MobileCalDAVPrincipal* _principal;
	void* _calCalendar;
	NSString* _calendarURLString;
	BOOL _isScheduleOutbox;
	BOOL _isEnabled;
	BOOL _isAffectingAvailability;
	BOOL _wasModifiedLocally;
	BOOL _needsResync;
	BOOL _didResync;
	BOOL _isDirty;
	BOOL _needsPublishUpdate;
	int _mostRecentSequenceNumber;
	int _mostRecentShareeChangeIndex;
	int _mostRecentEventActionChangeIndex;
	NSString* _guid;
	unsigned long long _numDownloadedElements;
	unsigned long long _numUploadedElements;
	CalDiagCalendarCollectionSync* _calendarCollectionSyncDiagnostics;
	NSMutableDictionary* _deletedCalendarItems;
	NSArray* _syncActions;
	NSArray* _shareeActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSDictionary* _uuidsToAddActions;
	NSMutableDictionary* _uniqueIdentifierToRecordIDMap;
	NSMutableDictionary* _URLToRecordIDMap;
	NSMutableDictionary* _URLToEtagMap;

}

@property (nonatomic,readonly) MobileCalDAVPrincipal * daPrincipal; 
@property (nonatomic,retain) CalDiagCalendarCollectionSync * calendarCollectionSyncDiagnostics;              //@synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics - In the implementation block
@property (assign,nonatomic,__weak) id<CalDAVPrincipal> principal; 
@property (nonatomic,readonly) void* calCalendar; 
@property (nonatomic,retain) NSString * calendarURLString;                                                   //@synthesize calendarURLString=_calendarURLString - In the implementation block
@property (assign,nonatomic) int mostRecentSequenceNumber;                                                   //@synthesize mostRecentSequenceNumber=_mostRecentSequenceNumber - In the implementation block
@property (assign,nonatomic) int mostRecentShareeChangeIndex;                                                //@synthesize mostRecentShareeChangeIndex=_mostRecentShareeChangeIndex - In the implementation block
@property (assign,nonatomic) int mostRecentEventActionChangeIndex;                                           //@synthesize mostRecentEventActionChangeIndex=_mostRecentEventActionChangeIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deletedCalendarItems;                                     //@synthesize deletedCalendarItems=_deletedCalendarItems - In the implementation block
@property (nonatomic,retain) NSArray * syncActions;                                                          //@synthesize syncActions=_syncActions - In the implementation block
@property (nonatomic,retain) NSArray * shareeActions;                                                        //@synthesize shareeActions=_shareeActions - In the implementation block
@property (nonatomic,retain) NSDictionary * hrefsToModDeleteActions;                                         //@synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions - In the implementation block
@property (nonatomic,retain) NSDictionary * uuidsToAddActions;                                               //@synthesize uuidsToAddActions=_uuidsToAddActions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uniqueIdentifierToRecordIDMap;                            //@synthesize uniqueIdentifierToRecordIDMap=_uniqueIdentifierToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToRecordIDMap;                                         //@synthesize URLToRecordIDMap=_URLToRecordIDMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLToEtagMap;                                             //@synthesize URLToEtagMap=_URLToEtagMap - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,readonly) NSString * ownerEmailAddress; 
@property (nonatomic,retain) NSSet * calendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) BOOL isTaskContainer; 
@property (assign,nonatomic) BOOL isEventContainer; 
@property (assign,nonatomic) BOOL isSubscribed; 
@property (assign,nonatomic) BOOL isManagedByServer; 
@property (assign,nonatomic) BOOL isScheduleInbox; 
@property (assign,nonatomic) BOOL isScheduleOutbox;                                                          //@synthesize isScheduleOutbox=_isScheduleOutbox - In the implementation block
@property (assign,nonatomic) BOOL isNotification; 
@property (assign,nonatomic) BOOL isEditable; 
@property (assign,nonatomic) BOOL isRenameable; 
@property (assign,nonatomic) BOOL isEnabled;                                                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isAffectingAvailability;                                                   //@synthesize isAffectingAvailability=_isAffectingAvailability - In the implementation block
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL wasModifiedLocally;                                                        //@synthesize wasModifiedLocally=_wasModifiedLocally - In the implementation block
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (nonatomic,retain) NSString * syncToken; 
@property (assign,nonatomic) BOOL needsResync;                                                               //@synthesize needsResync=_needsResync - In the implementation block
@property (assign,nonatomic) BOOL didResync;                                                                 //@synthesize didResync=_didResync - In the implementation block
@property (nonatomic,readonly) NSSet * allItemURLs; 
@property (assign,nonatomic) BOOL isDirty;                                                                   //@synthesize isDirty=_isDirty - In the implementation block
@property (nonatomic,readonly) NSString * displayColor; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) NSString * accountID; 
@property (assign,nonatomic) BOOL needsPublishUpdate;                                                        //@synthesize needsPublishUpdate=_needsPublishUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long numDownloadedElements;                                       //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) unsigned long long numUploadedElements;                                         //@synthesize numUploadedElements=_numUploadedElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) BOOL isPoll; 
@property (assign,nonatomic) BOOL isPublished; 
+(id)calendarWithCalCalendar:(void*)arg1 principal:(id)arg2 ;
+(int)addedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)modifiedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)deletedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(BOOL)clearCalendarChangesToIndex:(int)arg1 inPrincipal:(id)arg2 forChangeTrackingClient:(id)arg3 ;
+(void)cacheCalendarUID:(int)arg1 forCalendarURLString:(id)arg2 ;
+(id)calURLToUIDCache;
+(void)removeUIDCacheEntryForCalendarURLString:(id)arg1 ;
+(int)cachedCalendarUIDForURLString:(id)arg1 ;
+(void)clearCalendarUIDCache;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEnabled;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(NSURL *)owner;
-(void)setOwner:(NSURL *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)symbolicColorName;
-(void)setCanBePublished:(BOOL)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setIsFamilyCalendar:(BOOL)arg1 ;
-(void)setIsMarkedUndeletable:(BOOL)arg1 ;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1 ;
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(NSDictionary *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(void)setPublishURL:(NSURL *)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(BOOL)isSubscribed;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)isFamilyCalendar;
-(int)sharingStatus;
-(NSSet *)sharees;
-(BOOL)canBeShared;
-(void)setSharees:(NSSet *)arg1 ;
-(BOOL)isMarkedImmutableSharees;
-(void)setSharingStatus:(int)arg1 ;
-(BOOL)isMarkedUndeletable;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(BOOL)hasEvents;
-(BOOL)isPublished;
-(NSURL *)publishURL;
-(BOOL)canBePublished;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isScheduleInbox;
-(BOOL)isScheduleOutbox;
-(BOOL)isNotification;
-(BOOL)isEventContainer;
-(BOOL)isTaskContainer;
-(NSURL *)prePublishURL;
-(void)setPrePublishURL:(NSURL *)arg1 ;
-(Class)appSpecificCalendarItemClass;
-(NSString *)syncToken;
-(BOOL)needsResync;
-(NSURL *)calendarURL;
-(NSArray *)syncActions;
-(void)setCalendarUserAddresses:(NSSet *)arg1 ;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(BOOL)needsPublishUpdate;
-(NSArray *)shareeActions;
-(void)clearShareeActions;
-(BOOL)isAffectingAvailability;
-(void)setIsEventContainer:(BOOL)arg1 ;
-(void)setIsTaskContainer:(BOOL)arg1 ;
-(void)setIsRenameable:(BOOL)arg1 ;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(void)setIsScheduleInbox:(BOOL)arg1 ;
-(void)setIsScheduleOutbox:(BOOL)arg1 ;
-(void)setIsPoll:(BOOL)arg1 ;
-(void)setIsNotification:(BOOL)arg1 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1 ;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)syncDidFinishWithError:(id)arg1 ;
-(void)putAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2 ;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(NSSet *)calendarUserAddresses;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1 ;
-(BOOL)isPoll;
-(BOOL)isRenameable;
-(void)setIsAffectingAvailability:(BOOL)arg1 ;
-(BOOL)wasModifiedLocally;
-(void)setWasModifiedLocally:(BOOL)arg1 ;
-(void)setNeedsResync:(BOOL)arg1 ;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSSet *)allItemURLs;
-(NSString *)calendarURLString;
-(void)deleteCalendar;
-(void)flushCaches;
-(void)setNeedsPublishUpdate:(BOOL)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 ;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)_dropCalStoreContext;
-(void*)getCalCalendar;
-(void*)initCalCalendarWithTitle:(id)arg1 ;
-(void*)calCalendar;
-(BOOL)_updateCalendarOwnerInfo;
-(void)setUniqueIdentifierToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToRecordIDMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToEtagMap:(NSMutableDictionary *)arg1 ;
-(void)setCalendarURLString:(NSString *)arg1 ;
-(void)_setSupportsEvents:(BOOL)arg1 supportsTodos:(BOOL)arg2 ;
-(MobileCalDAVPrincipal *)daPrincipal;
-(CalRecordIDRef)recordIDForUniqueIdentifier:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 forRecordID:(CalRecordIDRef)arg2 ;
-(NSMutableDictionary *)uniqueIdentifierToRecordIDMap;
-(void*)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(void*)_copyCalItemWithExternalID:(id)arg1 ;
-(CalDiagCalendarCollectionSync *)calendarCollectionSyncDiagnostics;
-(NSMutableDictionary *)URLToRecordIDMap;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(NSString *)ownerEmailAddress;
-(void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4 ;
-(int)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2 ;
-(int)mostRecentSequenceNumber;
-(void)setMostRecentSequenceNumber:(int)arg1 ;
-(int)_gatherModifiedItemsFromCalChangesCall:(/*function pointer*/void*)arg1 forType:(id)arg2 inArray:(id)arg3 ;
-(int)_gatherModifiedTasksInArray:(id)arg1 ;
-(int)_gatherModifiedEventsInArray:(id)arg1 ;
-(id)_itemPropertyDictForItemAtIndex:(long long)arg1 withChangedIDs:(CFArrayRef)arg2 withChangedRowids:(CFArrayRef)arg3 withExternalIDs:(CFArrayRef)arg4 uniqueIdentifiers:(CFArrayRef)arg5 significantAttributeChanges:(CFArrayRef)arg6 oldCalendarIDs:(CFArrayRef)arg7 entityType:(int)arg8 ;
-(int)_gatherDeletedChanges:(/*function pointer*/void*)arg1 inDictionary:(id)arg2 ;
-(void)setMostRecentEventActionChangeIndex:(int)arg1 ;
-(int)mostRecentEventActionChangeIndex;
-(void)setDeletedCalendarItems:(NSMutableDictionary *)arg1 ;
-(void)_clearChangesAtIndices:(id)arg1 forType:(int)arg2 ;
-(void)_clearChangesFromItem:(id)arg1 ;
-(unsigned long long)numUploadedElements;
-(void)setNumUploadedElements:(unsigned long long)arg1 ;
-(void)_forceRefreshNextSync;
-(void)_collectShareeActions;
-(int)mostRecentShareeChangeIndex;
-(void)setMostRecentShareeChangeIndex:(int)arg1 ;
-(void)setShareeActions:(NSArray *)arg1 ;
-(void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2 ;
-(id)copyDeletedItems;
-(id)copyAddedItems;
-(id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 createServerIDs:(BOOL)arg4 shouldSave:(BOOL*)arg5 ;
-(id)copyModifiedItems;
-(id)_copyDeletedEventActions;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1 ;
-(id)copyAllItems;
-(void)setUuidsToAddActions:(NSDictionary *)arg1 ;
-(void)setHrefsToModDeleteActions:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)URLToEtagMap;
-(void)setSyncActions:(NSArray *)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(NSString *)displayColor;
-(id)_calExternalRep;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(BOOL)didResync;
-(void)setDidResync:(BOOL)arg1 ;
-(void)setCalendarCollectionSyncDiagnostics:(CalDiagCalendarCollectionSync *)arg1 ;
-(NSMutableDictionary *)deletedCalendarItems;
-(BOOL)isDirty;
-(void)setIsDirty:(BOOL)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(unsigned long long)numDownloadedElements;
-(void)setNumDownloadedElements:(unsigned long long)arg1 ;
-(NSString *)accountID;
@end

