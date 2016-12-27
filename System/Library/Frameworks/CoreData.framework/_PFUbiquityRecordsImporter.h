/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PFUbiquityRecordImportOperationDelegate.h>
#import <libobjc.A.dylib/NSManagedObjectContextFaultingDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRollOperationDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRecoveryOperationDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRollResponseOperationDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSOperationQueue, NSObject, NSString, PFUbiquityLocation, NSPersistentStoreCoordinator, NSSQLCore, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, NSRecursiveLock, NSMutableDictionary, NSPersistentStore;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {

	NSOperationQueue* _importQueue;
	NSObject*<OS_dispatch_queue> _privateQueue;
	BOOL _isMonitoring;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	PFUbiquitySwitchboardCacheWrapper* _sideLoadCacheWrapper;
	NSObject*<OS_dispatch_source> _logRestartTimer;
	NSRecursiveLock* _schedulingLock;
	BOOL _importOnlyActiveStores;
	BOOL _throttleNotifications;
	unsigned long long _numPendingNotifications;
	NSMutableDictionary* _pendingNotificationUserInfo;
	BOOL _allowBaselineRoll;
	unsigned long long _pendingImportOperationsCount;

}

@property (readonly) NSOperationQueue * importQueue;                                                        //@synthesize importQueue=_importQueue - In the implementation block
@property (readonly) NSString * localPeerID;                                                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (readonly) NSString * storeName;                                                                  //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                     //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (readonly) BOOL isMonitoring;                                                                     //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (assign) NSObject*<OS_dispatch_source> logRestartTimer;                                           //@synthesize logRestartTimer=_logRestartTimer - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * schedulingLock;                                            //@synthesize schedulingLock=_schedulingLock - In the implementation block
@property (assign) BOOL importOnlyActiveStores;                                                             //@synthesize importOnlyActiveStores=_importOnlyActiveStores - In the implementation block
@property (assign) BOOL throttleNotifications;                                                              //@synthesize throttleNotifications=_throttleNotifications - In the implementation block
@property (assign) BOOL allowBaselineRoll;                                                                  //@synthesize allowBaselineRoll=_allowBaselineRoll - In the implementation block
@property (nonatomic,readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * sideLoadCacheWrapper;                      //@synthesize sideLoadCacheWrapper=_sideLoadCacheWrapper - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * privateStore;                                            //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * privatePSC;                                   //@synthesize privatePSC=_privatePSC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPrivateCoordinatorForStore:(id)arg1 error:(id*)arg2 ;
+(id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(BOOL)canProcessContentsOfUbiquityRootPath:(id)arg1 ;
+(id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(void)executeBlockOnRootQueue:(/*^block*/id)arg1 ;
+(void)afterDelay:(double)arg1 executeBlockOnRootQueue:(/*^block*/id)arg2 ;
+(void)initialize;
-(NSPersistentStore *)privateStore;
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)requestBaselineRollForStore:(id)arg1 ;
-(void)operationWasInterruptedDuringImport:(id)arg1 ;
-(void)metadataInconsistencyDetectedForStore:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(NSOperationQueue *)importQueue;
-(BOOL)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2 ;
-(void)setAllowBaselineRoll:(BOOL)arg1 ;
-(NSRecursiveLock *)schedulingLock;
-(id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(BOOL)arg2 ;
-(BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id*)arg2 ;
-(BOOL)scheduleTransactionLogOperations:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id*)arg2 ;
-(BOOL)schedulePendingLogs:(BOOL)arg1 error:(id*)arg2 ;
-(id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2 ;
-(BOOL)shouldThrottleNotificationsWithOperation:(id)arg1 ;
-(void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3 ;
-(void)scheduleRecoveryTimer;
-(BOOL)discoverAndImportAllAvailableLogs:(BOOL)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_source>)logRestartTimer;
-(void)setLogRestartTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)allowBaselineRoll;
-(void)executeBlockOnPrivateQueue:(/*^block*/id)arg1 ;
-(void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1 ;
-(void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1 ;
-(void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1 ;
-(void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2 ;
-(void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3 ;
-(void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3 ;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4 ;
-(BOOL)isPeerForked:(id)arg1 andLocalKV:(id)arg2 ;
-(BOOL)startMonitor:(id*)arg1 ;
-(long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2 ;
-(void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1 ;
-(BOOL)throttleNotifications;
-(void)setThrottleNotifications:(BOOL)arg1 ;
-(BOOL)importOnlyActiveStores;
-(void)setImportOnlyActiveStores:(BOOL)arg1 ;
-(PFUbiquityRecordsImporterSchedulingContext *)schedulingContext;
-(PFUbiquitySwitchboardCacheWrapper *)sideLoadCacheWrapper;
-(void)setSideLoadCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSPersistentStoreCoordinator *)privatePSC;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(BOOL)isMonitoring;
-(void)tearDown;
@end

