/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPContainerPersisterDelegate.h>

@protocol OS_dispatch_queue, NSObjectNSCopying;
@class NSObject, NSArray, NSHashTable, MSPContainerPersister, NSCountedSet, NSMutableSet, NSMutableArray, MSPQuerySource, NSString;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _immutableObjects;
	NSHashTable* _observers;
	MSPContainerPersister* _persister;
	NSCountedSet* _editCoalescingContexts;
	BOOL _isCommittingEnqueuedEdits;
	id<NSObject><NSCopying> _contextCoalescingFor;
	BOOL _coalescedEditsNeedEntireContents;
	NSMutableSet* _coalescedPartialContentIdentifiersToFetch;
	NSMutableArray* _enqueuedCoalescingEditBarrierBlocks;
	NSMutableArray* _enqueuedCoalescingCompletionBlocks;
	BOOL _hasScheduledDelayedCommitForCoalescedEdits;
	BOOL _preventsAssertionsForDuplicateStorageIdentifiers;
	BOOL _simulatesClearingDiscardableDataAfterOperations;

}

@property (nonatomic,readonly) MSPQuerySource * entireContentsQuerySource; 
@property (nonatomic,readonly) MSPContainerPersister * persister;                                                                                                                                                   //@synthesize persister=_persister - In the implementation block
@property (getter=_accessQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) BOOL _preventsAssertionsForDuplicateStorageIdentifiers;                                                                                                                              //@synthesize preventsAssertionsForDuplicateStorageIdentifiers=_preventsAssertionsForDuplicateStorageIdentifiers - In the implementation block
@property (assign,setter=_setSimulatesClearingDiscardableDataAfterOperations:,getter=_simulatesClearingDiscardableDataAfterOperations,nonatomic) BOOL simulatesClearingDiscardableDataAfterOperations;              //@synthesize simulatesClearingDiscardableDataAfterOperations=_simulatesClearingDiscardableDataAfterOperations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_disableLogging;
+(void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(/*^block*/id)arg1 ;
+(void)clearDiscardableDataFromAllContainers;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_accessQueue;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(MSPQuerySource *)entireContentsQuerySource;
-(BOOL)_preventsAssertionsForDuplicateStorageIdentifiers;
-(BOOL)_simulatesClearingDiscardableDataAfterOperations;
-(void)persisterContentsDidChangeExternally:(id)arg1 ;
-(void)_clearObjectCacheIfNeeded;
-(void)_performInitialLoadNotifyingObservers:(BOOL)arg1 kickOffSynchronously:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_processedContentsForPersisterContents:(id)arg1 ;
-(id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)beginCoalescingEditsWithContext:(id)arg1 ;
-(void)_endCoalescingEditsForContext:(id)arg1 ;
-(void)coalesceEditsForContext:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(BOOL)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(/*^block*/id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_commitPendingCoalescedEditsIfAny;
-(MSPContainerPersister *)persister;
-(void)_setSimulatesClearingDiscardableDataAfterOperations:(BOOL)arg1 ;
-(void)accessContentsUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(id)initWithPersister:(id)arg1 ;
@end

