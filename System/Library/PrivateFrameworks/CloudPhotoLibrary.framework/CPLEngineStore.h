/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSMutableArray, NSURL, CPLPlatformObject, CPLEngineLibrary, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineTransientRepository, CPLEngineResourceStorage, CPLEngineResourceDownloadQueue, CPLEngineResourceUploadQueue, CPLEngineRemappedDeletes, CPLEngineQuarantinedRecords, CPLEngineDerivativesCache, NSArray, NSDate, NSString;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {

	NSHashTable* _storages;
	NSObject*<OS_dispatch_queue> _batchedTransactionsQueue;
	NSMutableArray* _batchedTransactions;
	BOOL _batchedTransactionDequeueIsScheduled;
	NSURL* _resetEventsURL;
	NSMutableArray* _resetEvents;
	BOOL _supportedFeatureVersionIsMostRecent;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	CPLEngineChangePipe* _pushQueue;
	CPLEngineChangePipe* _deletePushQueue;
	CPLEngineChangePipe* _pullQueue;
	CPLEngineIDMapping* _idMapping;
	CPLEngineClientCache* _clientCache;
	CPLEngineCloudCache* _cloudCache;
	CPLEngineTransientRepository* _transientPullRepository;
	CPLEngineResourceStorage* _resourceStorage;
	CPLEngineResourceDownloadQueue* _downloadQueue;
	CPLEngineResourceUploadQueue* _uploadQueue;
	CPLEngineRemappedDeletes* _remappedDeletes;
	CPLEngineQuarantinedRecords* _quarantinedRecords;
	CPLEngineDerivativesCache* _derivativesCache;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * storages; 
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;                             //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) CPLEngineChangePipe * pushQueue;                                     //@synthesize pushQueue=_pushQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineChangePipe * deletePushQueue;                               //@synthesize deletePushQueue=_deletePushQueue - In the implementation block
@property (nonatomic,readonly) BOOL pushQueuesAreFull; 
@property (nonatomic,readonly) CPLEngineChangePipe * pullQueue;                                     //@synthesize pullQueue=_pullQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineIDMapping * idMapping;                                      //@synthesize idMapping=_idMapping - In the implementation block
@property (nonatomic,readonly) CPLEngineClientCache * clientCache;                                  //@synthesize clientCache=_clientCache - In the implementation block
@property (nonatomic,readonly) CPLEngineCloudCache * cloudCache;                                    //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) CPLEngineTransientRepository * transientPullRepository;              //@synthesize transientPullRepository=_transientPullRepository - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceStorage * resourceStorage;                          //@synthesize resourceStorage=_resourceStorage - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceDownloadQueue * downloadQueue;                      //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineResourceUploadQueue * uploadQueue;                          //@synthesize uploadQueue=_uploadQueue - In the implementation block
@property (nonatomic,readonly) CPLEngineRemappedDeletes * remappedDeletes;                          //@synthesize remappedDeletes=_remappedDeletes - In the implementation block
@property (nonatomic,readonly) CPLEngineQuarantinedRecords * quarantinedRecords;                    //@synthesize quarantinedRecords=_quarantinedRecords - In the implementation block
@property (nonatomic,readonly) BOOL supportedFeatureVersionIsMostRecent;                            //@synthesize supportedFeatureVersionIsMostRecent=_supportedFeatureVersionIsMostRecent - In the implementation block
@property (readonly) NSDate * libraryCreationDate; 
@property (nonatomic,readonly) id corruptionInfo; 
@property (nonatomic,readonly) CPLEngineDerivativesCache * derivativesCache;                        //@synthesize derivativesCache=_derivativesCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldGenerateDerivatives; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                                  //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)libraryVersion;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)assertCanWrite;
-(void)assertCanRead;
-(id)createNewLibraryVersion;
-(BOOL)storeLibraryVersion:(id)arg1 withError:(id*)arg2 ;
-(BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isClientInSyncWithClientCache;
-(void)_storeResetEvent:(id)arg1 cause:(id)arg2 ;
-(BOOL)_resetLocalSyncStateWithError:(id*)arg1 ;
-(BOOL)storeUserIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_setTransactionOnCurrentThread:(id)arg1 ;
-(void)_removeTransactionOnCurrentThread:(id)arg1 ;
-(void)_performTransaction:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)supportedFeatureVersionInLastSync;
-(void)_reallyPerformBatchedTransactionsLocked;
-(void)_scheduleBatchedTransactionsLocked;
-(id)performWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(id)libraryZoneName;
-(BOOL)storeLibraryZoneName:(id)arg1 error:(id*)arg2 ;
-(id)lastQuarantineCountReportDate;
-(BOOL)storeLastQuarantineCountReportDate:(id)arg1 error:(id*)arg2 ;
-(id)clientCacheIdentifier;
-(BOOL)storeClientIsInSyncWithClientCacheWithError:(id*)arg1 ;
-(NSDate *)libraryCreationDate;
-(id)corruptionInfo;
-(id)_currentTransaction;
-(BOOL)_canWrite;
-(BOOL)_canRead;
-(id)_resetEventsDescriptions;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(NSArray *)storages;
-(void)registerStorage:(id)arg1 ;
-(void)noteResetSyncFinished;
-(BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2 ;
-(void)performBatchedWriteTransactionWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)pushQueuesAreFull;
-(CPLEngineChangePipe *)deletePushQueue;
-(CPLEngineChangePipe *)pullQueue;
-(CPLEngineIDMapping *)idMapping;
-(CPLEngineClientCache *)clientCache;
-(CPLEngineCloudCache *)cloudCache;
-(CPLEngineTransientRepository *)transientPullRepository;
-(CPLEngineResourceStorage *)resourceStorage;
-(CPLEngineResourceUploadQueue *)uploadQueue;
-(CPLEngineRemappedDeletes *)remappedDeletes;
-(CPLEngineQuarantinedRecords *)quarantinedRecords;
-(BOOL)supportedFeatureVersionIsMostRecent;
-(CPLEngineDerivativesCache *)derivativesCache;
-(id)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldGenerateDerivatives;
-(CPLEngineChangePipe *)pushQueue;
-(id)userIdentifier;
-(CPLEngineResourceDownloadQueue *)downloadQueue;
@end

