/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSyncContext, PLSyncableAsset;
@class NSMutableSet;

@interface PLCPLFacePullSupport : NSObject {

	id<PLSyncContext> _syncContext;
	NSMutableSet* _existingFaces;
	NSMutableSet* _deletedFaces;
	id<PLSyncableAsset> _currentAsset;

}
+(void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(void)dealloc;
-(id)initWithSyncContext:(id)arg1 asset:(id)arg2 ;
-(void)applyFacesChangesFromAssetChange:(id)arg1 ;
-(BOOL)_shouldSkipAssetChange:(id)arg1 ;
-(void)_setupExistingFacesWithAssetChange:(id)arg1 ;
-(id)_detectedFacesFromAssetChange:(id)arg1 ;
-(void)_deletePushedFacesNotIn:(id)arg1 ;
-(void)_processPendingFaceChanges;
-(void)_applyRejectedPeopleFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
-(void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
-(id)_detectedFaceFromFaceRef:(id)arg1 algorithmVersion:(long long)arg2 ;
-(id)_findOrMakeFaceMatchingRef:(id)arg1 ;
-(void)applyFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
@end

