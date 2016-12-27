/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableArray, NSRecursiveLock, NSArray, ABContactsFilter;

@interface ABModel : NSObject {

	void* _addressBook;
	SCD_Struct_AB5* _sectionLists;
	CFDictionaryRef _headerSortKeyToHeaderString;
	NSRange _displayedMemberPreparedRange;
	unsigned long long _numberOfDisplayedMembers;
	BOOL _displayedMembersAreSearchResults;
	void* _selectedPerson;
	unsigned _displayOrdering;
	CFArrayRef _databaseChangeDelegates;
	void* _backgroundAddressBook;
	BOOL _backgroundAddressBookInvalidated;
	NSMutableArray* _cachedModelRecords;
	NSRecursiveLock* _memberLock;
	BOOL _loadingInBackground;
	NSRecursiveLock* _backgroundLoadingLock;
	BOOL _backgroundInvalidated;
	id _delayedNotificationHandler;
	BOOL _autoInvalidateOnDatabaseChange;
	NSArray* _lastSeenSources;
	NSArray* _lastSeenGroups;
	int _meID;
	ABContactsFilter* _displayedContactsFilter;
	ABContactsFilter* _selectedContactsFilter;
	ABContactsFilter* _lastSelectedContactsFilter;

}

@property (nonatomic,retain) ABContactsFilter * displayedContactsFilter;                   //@synthesize displayedContactsFilter=_displayedContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactsFilter * selectedContactsFilter;                  //@synthesize selectedContactsFilter=_selectedContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactsFilter * lastSelectedContactsFilter;              //@synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter - In the implementation block
@property (nonatomic,readonly) void* sourceForNewRecords; 
@property (nonatomic,readonly) void* groupForNewRecords; 
@property (assign,nonatomic) void* addressBook; 
+(void)initialize;
+(unsigned)sortOrdering;
-(void)dealloc;
-(void)removeDatabaseChangeDelegate:(id)arg1 ;
-(ABContactsFilter *)selectedContactsFilter;
-(void)addDatabaseChangeDelegate:(id)arg1 ;
-(void)setSelectedContactsFilter:(ABContactsFilter *)arg1 ;
-(void*)groupForNewRecords;
-(void*)sourceForNewRecords;
-(ABContactsFilter *)displayedContactsFilter;
-(void*)selectedPerson;
-(unsigned long long)numberOfDisplayedMembers;
-(long long)indexForDisplayedMember:(void*)arg1 ;
-(void)setSortOrdering:(unsigned)arg1 ;
-(void)setDisplayNameOrdering:(unsigned)arg1 ;
-(id)allGroups;
-(SCD_Struct_AB5*)displayedMemberSectionLists;
-(unsigned long long)displayedMemberSectionListsCount;
-(void*)displayedMemberAtIndex:(long long)arg1 ;
-(void)updateForMajorAddressBookChange;
-(void)setSelectedPerson:(void*)arg1 ;
-(void)invalidateDisplayedMembers;
-(ABContactsFilter *)lastSelectedContactsFilter;
-(void)resetSectionList;
-(void)_cacheMeID;
-(void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1 ;
-(void)prepareDisplayedMembersInRange:(NSRange)arg1 ;
-(void)_waitUntilBackgroundThreadFinished;
-(CFDictionaryRef)headerSortKeyToHeaderStringDictionary;
-(BOOL)shouldUsePartialLoadingForContactsFilter:(id)arg1 ;
-(long long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(CFDictionaryRef)arg2 ;
-(long long)resetFullSectionList:(CFDictionaryRef)arg1 maximumSectionCount:(int)arg2 ;
-(void)_cachePeople:(CFArrayRef)arg1 atEnd:(BOOL)arg2 ;
-(id)displayedMembersInRange:(NSRange)arg1 ;
-(id)_newModelRecordFromRecord:(void*)arg1 ;
-(CFArrayRef)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(void)_loadMembersInBackground:(id)arg1 ;
-(void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1 ;
-(id)_partialDisplayedGroupMembersInRange:(NSRange)arg1 ;
-(id)_displayedGroupMembersInRange:(NSRange)arg1 ;
-(long long)_indexOfMember:(void*)arg1 inDisplayedMembers:(id)arg2 ;
-(void)setLastSelectedContactsFilter:(ABContactsFilter *)arg1 ;
-(void)setDisplayedContactsFilter:(ABContactsFilter *)arg1 ;
-(void)_updateForMajorAddressBookChange:(BOOL)arg1 ;
-(void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2 ;
-(void)resetSortKeyToHeaderStringDictionary;
-(void)setFilteredDisplayedMembers:(CFArrayRef)arg1 ;
-(id)allCachedModelRecords;
-(void)copyDisplayedNamePieces:(id*)arg1 isGroup:(BOOL*)arg2 highlightIndex:(long long*)arg3 forMemberID:(int*)arg4 atindex:(long long)arg5 ;
-(void)invalidateLastSelectedContactsFilter;
-(int)meID;
-(void)_modelDatabaseChangedLocally:(CFDictionaryRef)arg1 ;
-(void)_modelDatabaseChangedExternally:(CFDictionaryRef)arg1 ;
-(CFArrayRef)_databaseChangeDelegates;
-(void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 ;
-(void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2 ;
-(id)allSources;
-(void)setAddressBook:(void*)arg1 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end

