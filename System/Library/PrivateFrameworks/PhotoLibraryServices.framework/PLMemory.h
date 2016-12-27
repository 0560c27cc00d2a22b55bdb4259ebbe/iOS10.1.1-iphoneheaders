/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>

@class NSString, NSDate, NSDictionary, NSData, PLManagedAsset, NSSet;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection> {

	BOOL _needsPersistenceUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                 //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short category; 
@property (assign,nonatomic) short subcategory; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL pending; 
@property (assign,nonatomic) BOOL userCreated; 
@property (nonatomic,retain) NSDictionary * movieAssetState; 
@property (nonatomic,retain) NSData * movieData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSData * assetListPredicate; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (nonatomic,retain) NSSet * curatedAssets; 
@property (nonatomic,retain) NSSet * movieCuratedAssets; 
+(id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)memoriesWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5 ;
+(void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 ;
+(void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoriesMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityName;
+(id)baseSearchIndexPredicate;
-(void)delete;
-(BOOL)supportsCloudUpload;
-(id)cplMemoryChange;
-(void)persistMetadataToFileSystem;
-(id)searchIndexContents;
-(unsigned long long)searchIndexCategory;
-(void)prepareForDeletion;
-(void)removePersistedFileSystemData;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)didSave;
-(BOOL)needsPersistenceUpdate;
-(BOOL)isSyncableChange;
-(id)updatedKeyAsset;
-(void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(BOOL)isValidForPersistence;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
@end

