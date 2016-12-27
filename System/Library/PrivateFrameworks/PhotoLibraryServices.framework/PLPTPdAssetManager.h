/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate, OS_dispatch_queue;
@class NSObject, NSString, NSSet, PLPhotoLibrary, NSMutableSet, NSFileManager, PLManagedObjectContext;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject*<PhotoLibraryPTPDelegate> _delegate;
	NSString* _firstDCIMFolderServiced;
	NSSet* _availableAssetIDs;
	PLPhotoLibrary* _photoLibrary;
	int _libraryStatus;
	NSMutableSet* _ptpDeletedAssets;
	NSObject*<OS_dispatch_queue> availableAssetsQueue;
	NSFileManager* fileManager;
	PLManagedObjectContext* _managedObjectContext;

}

@property (assign,nonatomic) NSObject*<PhotoLibraryPTPDelegate> delegate; 
@property (retain,readonly) PLManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(NSObject*<PhotoLibraryPTPDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<PhotoLibraryPTPDelegate>)delegate;
-(PLManagedObjectContext *)managedObjectContext;
-(PLManagedObjectContext *)managedObjectContext;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)_registerForFirstUnlockNotification;
-(void)handlePhotoLibraryAvailableNotification;
-(id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1 ;
-(id)albumHandles;
-(id)infoForAlbum:(NSObject*)arg1 ;
-(id)associationsInAlbum:(NSObject*)arg1 ;
-(id)assetsInAssociation:(NSObject*)arg1 ;
-(id)infoForAsset:(NSObject*)arg1 ;
-(void)deleteAsset:(NSObject*)arg1 ;
-(id)_ptpInformationForAllAssets;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(NSObject*)arg1 size:(CGSize)arg2 ;
-(CGSize)_validateSize:(CGSize)arg1 ;
-(BOOL)ptpCanDeleteFiles;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)ptpExifDataForPhotoWithKey:(NSObject*)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(NSObject*)arg1 ;
-(BOOL)ptpDeletePhotoWithKey:(NSObject*)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(BOOL)libraryIsAvailable;
-(id)_allAssetObjectIDs;
-(PLPhotoLibrary *)photoLibrary;
-(NSFileManager *)fileManager;
@end

