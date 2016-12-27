/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, PHFetchResult, PHAssetCollection, NSMutableSet, NSMutableDictionary;

@interface CMKCameraRoll : NSObject {

	BOOL _changeNotificationsEnabled;
	BOOL __weakAssetCollectionLoaded;
	BOOL __hasPendingSessionAssets;
	BOOL __hasLoadedCameraRollFrameworks;
	NSDate* _sessionIdentifier;
	PHFetchResult* __weakAssetCollectionFetchResult;
	PHAssetCollection* __weakAssetCollection;
	PHFetchResult* __userLibraryAssetsFetchResult;
	NSMutableSet* __cachedChangeObservers;
	NSMutableDictionary* __inflightAssets;
	NSMutableSet* __sessionAssetUUIDs;

}

@property (getter=_isWeakAssetCollectionLoaded,nonatomic,readonly) BOOL _weakAssetCollectionLoaded;              //@synthesize _weakAssetCollectionLoaded=__weakAssetCollectionLoaded - In the implementation block
@property (nonatomic,readonly) PHFetchResult * _weakAssetCollectionFetchResult;                                  //@synthesize _weakAssetCollectionFetchResult=__weakAssetCollectionFetchResult - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * _weakAssetCollection;                                         //@synthesize _weakAssetCollection=__weakAssetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * _userLibraryAssetsFetchResult;                                    //@synthesize _userLibraryAssetsFetchResult=__userLibraryAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _cachedChangeObservers;                                            //@synthesize _cachedChangeObservers=__cachedChangeObservers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _inflightAssets;                                            //@synthesize _inflightAssets=__inflightAssets - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _sessionAssetUUIDs;                                                //@synthesize _sessionAssetUUIDs=__sessionAssetUUIDs - In the implementation block
@property (nonatomic,readonly) BOOL _hasPendingSessionAssets;                                                    //@synthesize _hasPendingSessionAssets=__hasPendingSessionAssets - In the implementation block
@property (nonatomic,readonly) BOOL _hasLoadedCameraRollFrameworks;                                              //@synthesize _hasLoadedCameraRollFrameworks=__hasLoadedCameraRollFrameworks - In the implementation block
@property (nonatomic,readonly) NSDate * sessionIdentifier;                                                       //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL changeNotificationsEnabled;                                                    //@synthesize changeNotificationsEnabled=_changeNotificationsEnabled - In the implementation block
+(id)sharedCameraRoll;
-(id)init;
-(void)dealloc;
-(NSDate *)sessionIdentifier;
-(BOOL)hasInflightAssets;
-(void)addChangeNotificationsObserver:(id)arg1 ;
-(void)setChangeNotificationsEnabled:(BOOL)arg1 ;
-(void)removeChangeNotificationsObserver:(id)arg1 ;
-(BOOL)updateFromChanges:(id)arg1 ;
-(void)startNewSessionWithIdentifier:(id)arg1 ;
-(void)preflightCameraRollFrameworks;
-(id)realizedWeakAssetCollection;
-(id)fetchResultContainingAssetCollection;
-(NSMutableDictionary *)_inflightAssets;
-(void)removeInflightAsset:(id)arg1 ;
-(void)addInflightAsset:(id)arg1 ;
-(void)addSessionAsset:(id)arg1 ;
-(void)_unregisterAllObjectsForChangeNotifications;
-(BOOL)_isWeakAssetCollectionLoaded;
-(void)_ensureWeakAssetCollection;
-(void)_updateWeakAssetCollectionFromSessionChange;
-(void)_removeAllSessionAssets;
-(void)_updateWeakAlbumChangeNotificationsState;
-(BOOL)isCameraSessionActive;
-(void)_ensureFetchedSessionAssets;
-(void)_registerChangeNotificationObserver:(id)arg1 ;
-(void)_unregisterChangeNotificationObserver:(id)arg1 ;
-(id)_sessionLocalIdentifiers;
-(void)_removeSessionAssets:(id)arg1 ;
-(void)_reloadSessionAssets;
-(void)startNewSession;
-(void)_registerAllChangeNotificationObservers;
-(BOOL)changeNotificationsEnabled;
-(PHFetchResult *)_weakAssetCollectionFetchResult;
-(PHAssetCollection *)_weakAssetCollection;
-(PHFetchResult *)_userLibraryAssetsFetchResult;
-(NSMutableSet *)_cachedChangeObservers;
-(BOOL)_hasPendingSessionAssets;
-(BOOL)_hasLoadedCameraRollFrameworks;
-(void)finishSession;
-(id)album;
-(NSMutableSet *)_sessionAssetUUIDs;
-(void)_invalidateAssetCollection;
@end

