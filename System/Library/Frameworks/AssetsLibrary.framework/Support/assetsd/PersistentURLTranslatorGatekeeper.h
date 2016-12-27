/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/Support/assetsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, PLAssetsdClientServiceSender, NSString, NSMutableDictionary;

@interface PersistentURLTranslatorGatekeeper : NSObject {

	NSObject*<OS_xpc_object> _connection;
	PLAssetsdClientServiceSender* _clientServiceSender;
	long long _cachedAuthStatus;
	int _currentClientPidForAuthStatus;
	NSString* _trustedCallerBundleID;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _TCCAccessCheckAuditToken_Queue;
	NSObject*<OS_dispatch_queue> _pendingCPLDownloadsIsolationQueue;
	NSMutableDictionary* _pendingCPLDownloads;

}
+(void)_addGatekeeper:(id)arg1 ;
+(void)_removeGatekeeper:(id)arg1 ;
+(id)_utiFromPathConstrainedToImageOrMovie:(id)arg1 ;
+(void)startServer;
-(void)_setupDuet;
-(void)fileDescriptorForPersistentURL:(id)arg1 connection:(id)arg2 ;
-(void)filePathForPersistentURL:(id)arg1 connection:(id)arg2 ;
-(void)getClientAccessState:(id)arg1 connection:(id)arg2 ;
-(void)pathForNewAssetWithTypeAndExtension:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousImageDataForAsset:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousStopPreheatingCPLDownloadForAssets:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousGetSandboxExtensionForPath:(id)arg1 connection:(id)arg2 ;
-(void)synchronousGetSandboxExtensionForAssetResourcePath:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousUnloadImageFilesForAsset:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousVideoURLForAsset:(id)arg1 connection:(id)arg2 ;
-(void)asynchronousAdjustmentDataForAsset:(id)arg1 connection:(id)arg2 ;
-(void)addAssetGroup:(id)arg1 connection:(id)arg2 ;
-(void)addAssetToAlbum:(id)arg1 connection:(id)arg2 ;
-(void)deleteAsset:(id)arg1 connection:(id)arg2 ;
-(void)setExternalUsageIntent:(id)arg1 connection:(id)arg2 ;
-(void)noCheckFilePathForPersistentURL:(id)arg1 connection:(id)arg2 ;
-(void)saveAssetWithDataAndPorts:(id)arg1 connection:(id)arg2 ;
-(void)batchSaveAssetJobs:(id)arg1 connection:(id)arg2 ;
-(void)updateAssetLocationData:(id)arg1 connection:(id)arg2 ;
-(void)createPhotoLibraryDatabase:(id)arg1 connection:(id)arg2 ;
-(void)launchAssetsd:(id)arg1 connection:(id)arg2 ;
-(void)getAssetsCounts:(id)arg1 connection:(id)arg2 ;
-(void)getLibrarySizes:(id)arg1 connection:(id)arg2 ;
-(void)updateThumbnailsForPhotos:(id)arg1 connection:(id)arg2 ;
-(void)updateCameraPreviewWellImage:(id)arg1 connection:(id)arg2 ;
-(void)updateModelAfterOTARestore:(id)arg1 connection:(id)arg2 ;
-(void)importFileSytemAssetsHandler:(id)arg1 connection:(id)arg2 ;
-(void)importFileSytemAssetsNoWaitHandler:(id)arg1 connection:(id)arg2 ;
-(void)updateRestoredAsset:(id)arg1 connection:(id)arg2 ;
-(void)cleanupModelForDataMigration:(id)arg1 connection:(id)arg2 ;
-(void)repairPotentialModelCorruption:(id)arg1 connection:(id)arg2 ;
-(void)dataMigrationWillFinish:(id)arg1 connection:(id)arg2 ;
-(void)clearChangeStore:(id)arg1 connection:(id)arg2 ;
-(void)backupChangeStore:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonJob:(id)arg1 connection:(id)arg2 ;
-(void)recoverFromCrashIfNeeded:(id)arg1 connection:(id)arg2 ;
-(void)createPhotostreamAlbum:(id)arg1 connection:(id)arg2 ;
-(void)enablePhotostreams:(id)arg1 connection:(id)arg2 ;
-(void)repairSingletonObjects:(id)arg1 connection:(id)arg2 ;
-(void)getCurrentBulletins:(id)arg1 connection:(id)arg2 ;
-(void)getCurrentApplicationBadgeCount:(id)arg1 connection:(id)arg2 ;
-(void)getThumbnailImageDataForBulletinWithRecordID:(id)arg1 connection:(id)arg2 ;
-(void)clearAllBulletinsWithLastClearedRecordID:(id)arg1 connection:(id)arg2 ;
-(void)userViewedBulletinWithRecordID:(id)arg1 connection:(id)arg2 ;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 connection:(id)arg2 ;
-(void)cleanupForStoreDemoMode:(id)arg1 connection:(id)arg2 ;
-(void)processRequestUpdateCachedServerConfigurationLimits:(id)arg1 connection:(id)arg2 ;
-(void)processRequestCloudSharingSpaceManagement:(id)arg1 connection:(id)arg2 ;
-(void)resolveEmailAddress:(id)arg1 connection:(id)arg2 ;
-(void)automaticallyDeleteEmptyAlbum:(id)arg1 connection:(id)arg2 ;
-(void)getPersonInfo:(id)arg1 connection:(id)arg2 ;
-(void)setPersonInfo:(id)arg1 connection:(id)arg2 ;
-(void)reloadMomentGenerationOptions:(id)arg1 connection:(id)arg2 ;
-(void)momentGenerationStatus:(id)arg1 connection:(id)arg2 ;
-(void)rebuildMoments:(id)arg1 connection:(id)arg2 ;
-(void)rebuildMomentLists:(id)arg1 connection:(id)arg2 ;
-(void)analyzeAllMoments:(id)arg1 connection:(id)arg2 ;
-(void)invalidateLocationShift:(id)arg1 connection:(id)arg2 ;
-(void)momentAnalysisStatus:(id)arg1 connection:(id)arg2 ;
-(void)locationShiftStatus:(id)arg1 connection:(id)arg2 ;
-(void)dumpMetadataForMoments:(id)arg1 connection:(id)arg2 ;
-(void)dumpMomentsMetadata:(id)arg1 connection:(id)arg2 ;
-(void)clearUserInfluencedMoments:(id)arg1 connection:(id)arg2 ;
-(void)analyzeMoment:(id)arg1 connection:(id)arg2 ;
-(void)analyzeMomentList:(id)arg1 connection:(id)arg2 ;
-(void)dropSearchIndex:(id)arg1 connection:(id)arg2 ;
-(void)setSearchIndexPaused:(id)arg1 connection:(id)arg2 ;
-(void)getSearchIndexProgress:(id)arg1 connection:(id)arg2 ;
-(void)waitForSearchIndexExistence:(id)arg1 connection:(id)arg2 ;
-(void)rebuildSearchIndex:(id)arg1 connection:(id)arg2 ;
-(void)registerSceneTaxonomySHA:(id)arg1 connection:(id)arg2 ;
-(void)dumpPhotoAnalysisStatus:(id)arg1 connection:(id)arg2 ;
-(void)rebuildCloudFeed:(id)arg1 connection:(id)arg2 ;
-(void)resetDupesAnalysis:(id)arg1 connection:(id)arg2 ;
-(void)rebuildAllThumbnails:(id)arg1 connection:(id)arg2 ;
-(void)getCurrentModelVersion:(id)arg1 connection:(id)arg2 ;
-(void)estimatedVideoFileLength:(id)arg1 connection:(id)arg2 ;
-(void)isReadyForCloudPhotoLibrary:(id)arg1 connection:(id)arg2 ;
-(void)hasCompletedRestorePostProcessing:(id)arg1 connection:(id)arg2 ;
-(void)incompleteRestoreProcesses:(id)arg1 connection:(id)arg2 ;
-(void)hasCompletedMomentAnalysis:(id)arg1 connection:(id)arg2 ;
-(void)downloadAssetCloudPlaceholderKindShouldPrioritize:(id)arg1 connection:(id)arg2 ;
-(void)syncWithCloudPhotoLibrary:(id)arg1 connection:(id)arg2 ;
-(void)softResetSyncStatus:(id)arg1 connection:(id)arg2 ;
-(void)enableCloudPhotos:(id)arg1 connection:(id)arg2 ;
-(void)disableCloudPhotos:(id)arg1 connection:(id)arg2 ;
-(void)pauseCloudPhotos:(id)arg1 connection:(id)arg2 ;
-(void)unpauseCloudPhotos:(id)arg1 connection:(id)arg2 ;
-(void)dumpCloudPhotosStatusIncludingDaemon:(id)arg1 connection:(id)arg2 ;
-(void)removeLocalDuplicates:(id)arg1 connection:(id)arg2 ;
-(void)rampingRequestForResourceType:(id)arg1 connection:(id)arg2 ;
-(void)statsFromCloudPhotoLibrary:(id)arg1 connection:(id)arg2 ;
-(void)setAssetKeywords:(id)arg1 connection:(id)arg2 ;
-(void)getAssetKeywords:(id)arg1 connection:(id)arg2 ;
-(void)addLogMark:(id)arg1 connection:(id)arg2 ;
-(void)cancelCPLDownload:(id)arg1 connection:(id)arg2 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg1 connection:(id)arg2 ;
-(void)dictionaryWithContentsOfMediaFile:(id)arg1 connection:(id)arg2 ;
-(void)previewRenderedContentURLCount:(id)arg1 connection:(id)arg2 ;
-(void)previewRenderedContentURLAtIndex:(id)arg1 connection:(id)arg2 ;
-(void)previewAssetLocalIdentifiers:(id)arg1 connection:(id)arg2 ;
-(void)getStatus:(id)arg1 connection:(id)arg2 ;
-(void)getXPCTransactionStatus:(id)arg1 connection:(id)arg2 ;
-(void)getCPLState:(id)arg1 connection:(id)arg2 ;
-(void)getPhotosXPCEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)setPhotosXPCEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)revertToOriginal:(id)arg1 connection:(id)arg2 ;
-(void)prepareRevertToOriginal:(id)arg1 connection:(id)arg2 ;
-(void)computeFingerPrintsOfAsset:(id)arg1 connection:(id)arg2 ;
-(void)purgeExpiredOutboundSharingAssets:(id)arg1 connection:(id)arg2 ;
-(void)migrateCloudFaces:(id)arg1 connection:(id)arg2 ;
-(void)getCurrentTransferProgress:(id)arg1 connection:(id)arg2 ;
-(void)getCurrentTotalSize:(id)arg1 connection:(id)arg2 ;
-(void)pruneAssets:(id)arg1 connection:(id)arg2 ;
-(void)generateOnDemandResourcesForAsset:(id)arg1 connection:(id)arg2 ;
-(void)removeAnalysisRecordsForDeletedAssets:(id)arg1 connection:(id)arg2 ;
-(void)markAnalysisStatesProcessedForWorkerType:(id)arg1 connection:(id)arg2 ;
-(void)prefetchResourcesForMemories:(id)arg1 connection:(id)arg2 ;
-(void)setUnverifiedFaceCountThreshold:(id)arg1 connection:(id)arg2 ;
-(void)markPersonAsNeedingKeyFace:(id)arg1 connection:(id)arg2 ;
-(void)getPhotoLibraryStoreXPCListenerEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)checkAuthorizationForConnection:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)gatekeeperPhotoLibrary;
-(void)translatePersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)hasEntitlement:(id)arg1 connection:(id)arg2 ;
-(id)_startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 track:(BOOL)arg5 notify:(BOOL)arg6 transient:(BOOL)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id*)arg10 ;
-(void)_sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2 ;
-(id)_newPlatformDependentXPCObjectWithBuffer:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 track:(BOOL)arg5 notify:(BOOL)arg6 proposedTaskIdentifier:(id)arg7 doneToken:(id)arg8 error:(id*)arg9 ;
-(id)_generateFullsizeRenderForAssetIfNecessary:(id)arg1 format:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_requiresFullsizeRenderGenerationForAsset:(id)arg1 format:(id)arg2 ;
-(void)_generateFullsizeRenderForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_readRestoreAlbumMetadataForAlbum:(id)arg1 ;
-(void)_cleanupAlbumMetadataAfterRestore;
-(void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2 inLibrary:(id)arg3 ;
-(void)_updatePendingCountForMissingAsset:(id)arg1 inLibrary:(id)arg2 ;
-(void)_linkPathsAside:(id)arg1 ;
-(void)_recoverAsideFiles:(id)arg1 ;
-(id)_fileRestoreExclusionPaths;
-(void)_pauseICloudPhoto:(BOOL)arg1 event:(id)arg2 connection:(id)arg3 ;
-(BOOL)_testFileExistAtPath:(id)arg1 reserve:(BOOL)arg2 reservedFileToken:(id*)arg3 ;
-(void)_addMappedImageDataToReply:(id)arg1 fd:(int)arg2 length:(unsigned long long)arg3 debugFileName:(id)arg4 ;
-(void)_addNonMappedImageDataToReply:(id)arg1 data:(id)arg2 debugFileName:(id)arg3 ;
-(void)dealloc;
-(id)debugDescription;
-(void)dispatchEvent:(id)arg1 connection:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
@end

