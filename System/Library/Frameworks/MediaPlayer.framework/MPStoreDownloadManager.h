/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray, SSDownloadManager, NSMapTable, NSHashTable, SSPurchaseManager, NSMutableDictionary, NSString;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _activeDownloads;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	NSMutableArray* _blockObservers;
	SSDownloadManager* _downloadManager;
	NSMutableArray* _downloads;
	NSMapTable* _downloadIdentifiersToDownloads;
	NSMapTable* _downloadsToObservers;
	NSMapTable* _libraryIdentifiersToDownloads;
	NSHashTable* _observersForAllDownloads;
	SSPurchaseManager* _purchaseManager;
	NSMapTable* _storeIdentifiersToDownloads;
	NSMutableDictionary* _downloadHandlers;

}

@property (nonatomic,readonly) NSArray * activeDownloads; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (getter=isUsingNetwork,nonatomic,readonly) BOOL usingNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 forDownloads:(id)arg2 ;
-(void)removeObserver:(id)arg1 forDownloads:(id)arg2 ;
-(NSArray *)activeDownloads;
-(id)activeDownloadForMediaItemPersistentID:(unsigned long long)arg1 ;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(id)downloadForMediaPlaybackItemMetadata:(id)arg1 ;
-(void)_addStoreDownloadForRedownloadProductItem:(id)arg1 ;
-(void)addFinishHandler:(/*^block*/id)arg1 forDownloads:(id)arg2 ;
-(void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resumeDownloads:(id)arg1 ;
-(void)prioritizeDownloads:(id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2 ;
-(id)downloadForMediaItemPersistentID:(unsigned long long)arg1 ;
-(id)downloadForStoreID:(long long)arg1 ;
-(BOOL)isUsingNetwork;
-(void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2 ;
-(void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2 ;
-(id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2 ;
-(void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_registerBlockObserver:(id)arg1 ;
-(void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1 ;
-(id)_existingDownloadForSSDownload:(id)arg1 ;
-(void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1 ;
-(void)_onQueue_addDownloadToMapTables:(id)arg1 ;
-(void)_updateActiveDownloadsWithChangedActiveDownloads:(id)arg1 inactiveDownloads:(id)arg2 ;
-(id)_observersForAllDownloads;
-(id)_observersForDownload:(id)arg1 ;
-(void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2 ;
-(BOOL)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1 ;
-(void)_onQueue_removeDownloadFromMapTables:(id)arg1 ;
-(void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(void)cancelDownloads:(id)arg1 ;
-(void)restartDownloads:(id)arg1 ;
-(id)downloadForDownloadPersistentIdentifier:(long long)arg1 ;
-(void)_addPurchaseFinishedHandler:(/*^block*/id)arg1 forDownloads:(id)arg2 ;
-(void)_unregisterBlockObserver:(id)arg1 ;
-(void)reloadFromServer;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(id)addDownloads:(id)arg1 ;
-(id)downloadForMediaItem:(id)arg1 ;
-(NSArray *)downloads;
@end

