/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateZoneController.h>
#import <libobjc.A.dylib/FCReadingListContentControllerObserving.h>

@class NSMutableDictionary, FCReadingListContentController, FCCloudContext, NSString;

@interface FCReadingList : FCPrivateZoneController <FCReadingListContentControllerObserving> {

	NSMutableDictionary* _entriesByArticleID;
	FCReadingListContentController* _readingListContentController;
	FCCloudContext* _cloudContext;

}

@property (nonatomic,retain) NSMutableDictionary * entriesByArticleID;                                   //@synthesize entriesByArticleID=_entriesByArticleID - In the implementation block
@property (nonatomic,retain) FCReadingListContentController * readingListContentController;              //@synthesize readingListContentController=_readingListContentController - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                              //@synthesize cloudContext=_cloudContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(FCCloudContext *)cloudContext;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(id)allSortedArticleIDsInReadingList;
-(void)prepareForUse;
-(FCReadingListContentController *)readingListContentController;
-(BOOL)isArticleOnReadingList:(id)arg1 ;
-(NSMutableDictionary *)entriesByArticleID;
-(id)_entryIDForArticleID:(id)arg1 ;
-(void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 ;
-(void)removeArticleFromReadingList:(id)arg1 ;
-(void)addArticleToReadingList:(id)arg1 ;
-(void)enableDownloadingForOfflineReading;
-(BOOL)isArticleAvailableForOfflineReading:(id)arg1 ;
-(void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)setEntriesByArticleID:(NSMutableDictionary *)arg1 ;
-(void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1 ;
-(BOOL)shouldHideHeadline:(id)arg1 ;
-(void)toggleArticleIsOnReadingList:(id)arg1 ;
-(id)dateArticleWasAdded:(id)arg1 ;
-(id)allUnreadArticleIDsInReadingList;
-(void)setReadingListContentController:(FCReadingListContentController *)arg1 ;
@end

