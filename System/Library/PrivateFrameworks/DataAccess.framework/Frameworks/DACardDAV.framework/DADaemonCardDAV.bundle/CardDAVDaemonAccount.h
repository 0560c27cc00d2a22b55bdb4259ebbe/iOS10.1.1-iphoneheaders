/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/CardDAVAccount.h>
#import <DADaemonCardDAV/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/CoreDAVLocalDBInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVGetAccountPropertiesTaskGroupDelegate.h>
#import <libobjc.A.dylib/CoreDAVContainerInfoTaskGroupDelegate.h>
#import <libobjc.A.dylib/CoreDAVContainerQueryTaskDelegate.h>
#import <DADaemonCardDAV/DABabysittable.h>

@class NSDictionary, NSURL, NSMutableDictionary, NSMutableSet, NSMapTable, NSSet, NSString;

@interface CardDAVDaemonAccount : CardDAVAccount <DADataclassLockWatcher, CoreDAVLocalDBInfoProvider, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerQueryTaskDelegate, DABabysittable> {

	BOOL _hasOutstandingABChanges;
	NSDictionary* _pushTransport;
	NSURL* _homeURL;
	NSMutableDictionary* _mAddressBooksByFolderURL;
	NSMutableSet* _mAddressBooks;
	NSMutableSet* _mSearchAddressBooks;
	NSMutableDictionary* _mPushKeysToFolderURLs;
	NSMutableSet* _searchTaskSet;
	NSURL* _meCardURL;
	NSURL* _meFolderURL;
	NSMapTable* _pushedActionsByTaskGroup;

}

@property (nonatomic,retain) NSMutableDictionary * mAddressBooksByFolderURL;              //@synthesize mAddressBooksByFolderURL=_mAddressBooksByFolderURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * mAddressBooks;                                //@synthesize mAddressBooks=_mAddressBooks - In the implementation block
@property (nonatomic,retain) NSMutableSet * mSearchAddressBooks;                          //@synthesize mSearchAddressBooks=_mSearchAddressBooks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mPushKeysToFolderURLs;                 //@synthesize mPushKeysToFolderURLs=_mPushKeysToFolderURLs - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransport;                                //@synthesize pushTransport=_pushTransport - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchTaskSet;                                //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) NSURL * homeURL;                                             //@synthesize homeURL=_homeURL - In the implementation block
@property (nonatomic,retain) NSURL * meCardURL;                                           //@synthesize meCardURL=_meCardURL - In the implementation block
@property (nonatomic,retain) NSURL * meFolderURL;                                         //@synthesize meFolderURL=_meFolderURL - In the implementation block
@property (nonatomic,retain) NSMapTable * pushedActionsByTaskGroup;                       //@synthesize pushedActionsByTaskGroup=_pushedActionsByTaskGroup - In the implementation block
@property (assign,nonatomic) BOOL hasOutstandingABChanges;                                //@synthesize hasOutstandingABChanges=_hasOutstandingABChanges - In the implementation block
@property (nonatomic,readonly) NSSet * addressBooks; 
@property (nonatomic,readonly) NSDictionary * addressBooksByFolderURL; 
@property (nonatomic,readonly) NSDictionary * pushKeysToFolderURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMeCardURL:(NSURL *)arg1 ;
-(NSURL *)meCardURL;
-(void)containerQueryTask:(id)arg1 completedWithFoundItems:(id)arg2 error:(id)arg3 ;
-(BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4 ;
-(BOOL)syncPostTask:(id)arg1 postedData:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4 ;
-(BOOL)syncDeleteTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(NSURL *)homeURL;
-(id)waiterID;
-(void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void*)_copyABAccount:(BOOL)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(BOOL)_reallySearchQueriesRunning;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3 ;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6 ;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)searchTaskSet;
-(void)syncAddressBookURLsWithConsumer:(id)arg1 ;
-(NSDictionary *)addressBooksByFolderURL;
-(NSSet *)addressBooks;
-(BOOL)updateMeCardWithWithConsumer:(id)arg1 ;
-(BOOL)setBestMeCard;
-(BOOL)finishInitialSyncOfContactsFolder:(id)arg1 previousTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 useCRUD:(BOOL)arg5 maxResources:(long long)arg6 maxSize:(long long)arg7 consumer:(id)arg8 ;
-(BOOL)_fillOutExternalURLForRecordType:(unsigned)arg1 localId:(int)arg2 changeType:(long long)arg3 inFolderWithURL:(id)arg4 outNewExternalURL:(id*)arg5 outTouchedDB:(BOOL*)arg6 ;
-(NSDictionary *)pushTransport;
-(NSDictionary *)pushKeysToFolderURLs;
-(void)setPushedActionsByTaskGroup:(NSMapTable *)arg1 ;
-(NSMapTable *)pushedActionsByTaskGroup;
-(BOOL)isForgivableError:(id)arg1 ;
-(id)pushedActionsForTaskGroup:(id)arg1 ;
-(void)_fillOutActionsArray:(id)arg1 addedOrModified:(id)arg2 removed:(id)arg3 ;
-(id)daActionsFromCDVActions:(id)arg1 ;
-(void)removePushedActionsForTaskGroup:(id)arg1 ;
-(id)copyCDVActionFromDAAction:(id)arg1 ;
-(void)_updateMeTaskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_bulkUploadTaskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)copyDAActionFromCDVAction:(id)arg1 ;
-(id)cdvActionsFromDAActions:(id)arg1 ;
-(void)setMPushKeysToFolderURLs:(NSMutableDictionary *)arg1 ;
-(void)setPushTransport:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)mPushKeysToFolderURLs;
-(BOOL)_handleOrphanarium:(id)arg1 toBeCreatedContainersByURL:(id)arg2 ;
-(void*)newABSourceForContainer:(id)arg1 ;
-(void)_fillOutAddressBooksFromLocalDB;
-(void)_reallySyncAddressBookURLsWithConsumer:(id)arg1 ;
-(NSMutableDictionary *)mAddressBooksByFolderURL;
-(void)setMAddressBooksByFolderURL:(NSMutableDictionary *)arg1 ;
-(void)setMAddressBooks:(NSMutableSet *)arg1 ;
-(void)setMSearchAddressBooks:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mAddressBooks;
-(NSMutableSet *)mSearchAddressBooks;
-(void)_updateStoredMeCardWithURL:(id)arg1 ;
-(void*)_copyCardFromMeIdentifierAndContainer:(const void*)arg1 ;
-(BOOL)_serverMeCard:(void*)arg1 hasChangedInContainer:(void*)arg2 ;
-(BOOL)_reallyUpdateMeCardWithWithConsumer:(id)arg1 allowDistantUpdate:(BOOL)arg2 ;
-(void)setHomeURL:(NSURL *)arg1 ;
-(NSURL *)meFolderURL;
-(void)setMeFolderURL:(NSURL *)arg1 ;
-(BOOL)hasOutstandingABChanges;
-(void)setHasOutstandingABChanges:(BOOL)arg1 ;
@end

