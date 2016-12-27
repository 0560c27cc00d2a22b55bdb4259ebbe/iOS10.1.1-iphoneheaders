/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSearchIndexerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {

	BOOL _observingChanges;
	BOOL _needsReindexing;
	BOOL _reindexing;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableSet* _objectIDsToProcess;
	NSMutableSet* _objectIDsBeingProcessed;
	NSMutableSet* _objectIDsToIgnore;
	NSMutableDictionary* _objectIDsByIdentifier;
	NSMutableDictionary* _identifiersByObjectID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToProcess;                            //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsBeingProcessed;                       //@synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToIgnore;                             //@synthesize objectIDsToIgnore=_objectIDsToIgnore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectIDsByIdentifier;                  //@synthesize objectIDsByIdentifier=_objectIDsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifiersByObjectID;                  //@synthesize identifiersByObjectID=_identifiersByObjectID - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (assign) BOOL needsReindexing;                                                   //@synthesize needsReindexing=_needsReindexing - In the implementation block
@property (getter=isReindexing) BOOL reindexing;                                           //@synthesize reindexing=_reindexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setObjectIDsBeingProcessed:(NSMutableSet *)arg1 ;
-(void)setObjectIDsToIgnore:(NSMutableSet *)arg1 ;
-(void)setObjectIDsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setIdentifiersByObjectID:(NSMutableDictionary *)arg1 ;
-(void)setReindexing:(BOOL)arg1 ;
-(NSMutableSet *)objectIDsToIgnore;
-(void)saveObjectIDsToIgnore;
-(id)searchableItemForObject:(id)arg1 ;
-(void)resetContextObservers;
-(void)loadObjectIDsToIgnore;
-(NSMutableDictionary *)objectIDsByIdentifier;
-(NSMutableDictionary *)identifiersByObjectID;
-(id)objectIDsFromSearchableItems:(id)arg1 ;
-(NSMutableSet *)objectIDsBeingProcessed;
-(BOOL)isReindexing;
-(id)stateDefaultsKey;
-(id)objectIDsToIgnoreDefaultsKey;
-(void)loadState;
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(void)saveState;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(BOOL)needsReindexing;
-(id)searchableItemsWithIdentifiers:(id)arg1 ;
-(id)searchableItemsNeedingIndexing;
-(id)searchableItemIdentifiersToBeDeleted;
-(id)allSearchableItems;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2 ;
-(void)searchIndexerWillIndexSearchableItems:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingItems:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillBeginReindexing;
-(void)searchIndexerDidFinishReindexingWithError:(id)arg1 ;
-(void)stopObservingChanges;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObjectIDsToProcess:(NSMutableSet *)arg1 ;
-(NSMutableSet *)objectIDsToProcess;
-(id)searchableItemsForObjects:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
-(void)setNeedsReindexing:(BOOL)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
@end

