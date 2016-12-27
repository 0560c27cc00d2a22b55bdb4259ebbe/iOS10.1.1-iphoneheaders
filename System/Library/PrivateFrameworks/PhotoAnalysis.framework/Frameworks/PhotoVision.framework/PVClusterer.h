/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PVFaceComparer.h>

@protocol PVCVMLIntegrating;
@class PVQueue, PVContext, PVDataAccessor, NSURL, NSString, NSNumber, CVMLRequestHandler, NSMutableSet, PVCanceler, PVClustererPerformanceStats, NSMutableArray, PVSuggestionRequest, NSLock, PVEventManager;

@interface PVClusterer : NSObject <PVFaceComparer> {

	id<PVCVMLIntegrating> _cvmlIntegration;
	PVQueue* _processingQueue;
	PVContext* _context;
	PVDataAccessor* _dataAccessor;
	NSURL* _cacheDirUrl;
	NSURL* _cacheFileUrl;
	NSString* _clusteringType;
	NSNumber* _threshold;
	CVMLRequestHandler* _requestHandler;
	unsigned long long _nextSeqNum;
	NSMutableSet* _faceIdStrsToAdd;
	NSMutableSet* _faceCSNsToRemove;
	unsigned long long _accumulatedChangesCount;
	unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
	PVCanceler* _clusteringCanceler;
	BOOL _rebuildClusterer;
	BOOL _faceClusteringLogEnabled;
	BOOL _faceClusteringPerfLogEnabled;
	PVClustererPerformanceStats* _performanceStats;
	NSMutableArray* _outstandingSuggestionRequests;
	PVSuggestionRequest* _currentSuggestionRequest;
	NSLock* _suggestionLock;
	PVEventManager* _eventManager;
	long long _state;

}

@property (assign) long long state;                                 //@synthesize state=_state - In the implementation block
@property (__weak) PVEventManager * eventManager;                   //@synthesize eventManager=_eventManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id*)arg3 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)restoreState:(id*)arg1 ;
-(void)terminate;
-(PVEventManager *)eventManager;
-(void)setEventManager:(PVEventManager *)arg1 ;
-(id)_newCVMLRequestOptions;
-(id)initWithContext:(id)arg1 dataAccessor:(id)arg2 cacheDirectoryUrl:(id)arg3 cvmlIntegration:(id)arg4 ;
-(void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2 ;
-(BOOL)hasAccumulatedClusterChanges;
-(void)clusterIfNecessaryAndWait;
-(void)clusterAndWait;
-(void)requestClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)performClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelClustering;
-(BOOL)cancelSuggestionRequest:(id)arg1 ;
-(id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2 ;
-(id)_persistenceDelegate;
-(void)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 ;
-(void)_appendToClusterLog:(id)arg1 ;
-(void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
-(id)_faceObservationsFromFaceCSNs:(id)arg1 ;
-(BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg1 removingFaceObs:(id)arg2 updateFaces:(id)arg3 canceler:(id)arg4 error:(id*)arg5 ;
-(id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 sortFacesByClusterSequenceNumber:(BOOL)arg3 updatedFaces:(id)arg4 excludeClustered:(BOOL)arg5 ;
-(void)_transitionToReadyState;
-(BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg1 withCanceler:(id)arg2 ;
-(BOOL)_updatePersistedAlgorithmicClusters:(id)arg1 andFaces:(id)arg2 returnFaceGroupsWithoutKeyFace:(id*)arg3 deletedFaceCSNs:(id)arg4 toBeReclusteredFaceIds:(id)arg5 error:(id*)arg6 ;
-(BOOL)_processingQueueSaveState:(id*)arg1 ;
-(BOOL)_updateRepresentativeFacesForClusters:(id)arg1 csnByGroupWithoutKeyFace:(id)arg2 error:(id*)arg3 ;
-(BOOL)_compareLocalClusters:(id)arg1 withPersistedClusters:(id)arg2 ;
-(void)_noteThatWeSawBadPersistedClusters;
-(id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 sortFacesByClusterSequenceNumber:(BOOL)arg3 updatedFaces:(id)arg4 ;
-(void)_removeEmptyGroups;
-(unsigned long long)_selectRepresentativeFromFaces:(id)arg1 representativenessByCSN:(id)arg2 ;
-(void)_syncClustererWithPhotoLibrary:(id)arg1 ;
-(BOOL)_processingQueueRestoreState:(id*)arg1 ;
-(id)_faceObservationFromFace:(id)arg1 ;
-(float)clusterRepresentativenessOfFace:(id)arg1 ;
-(BOOL)getDistance:(float*)arg1 fromFaceObservation:(id)arg2 toFaceObservation:(id)arg3 error:(id*)arg4 ;
-(BOOL)saveState:(id*)arg1 ;
-(BOOL)_sawBadPersistedClusters;
-(BOOL)faceIsGoodRepresentativeOfItsCluster:(id)arg1 ;
-(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 updateHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)cancelAllSuggestionRequests;
@end

