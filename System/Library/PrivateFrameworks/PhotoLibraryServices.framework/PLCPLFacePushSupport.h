/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSyncContext;
@interface PLCPLFacePushSupport : NSObject {

	/*^block*/id _lazyAdjustmentFingerprint;
	id<PLSyncContext> _syncContext;

}
+(void)markPushedFaceMatchingRef:(id)arg1 inAsset:(id)arg2 ;
+(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 withLazyAdjustmentFingerprint:(/*^block*/id)arg3 inPhotoLibrary:(id)arg4 ;
-(void)dealloc;
-(id)initWithLazyAdjustmentFingerprint:(/*^block*/id)arg1 syncContext:(id)arg2 ;
-(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 ;
-(id)cplFaceAnalysisRefFromAsset:(id)arg1 ;
-(long long)_faceAlgorithmVersionFromAsset:(id)arg1 ;
-(id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 ;
-(id)_cplFaceRefsFromFaces:(id)arg1 ;
-(BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1 ;
-(id)cplFaceRefsFromFace:(id)arg1 ;
-(BOOL)isFaceSyncable:(id)arg1 ;
-(id)cplFaceRefFromFace:(id)arg1 ;
-(BOOL)isRepresentativeFace:(id)arg1 ;
-(id)rejectedPersonIdentifiersForFace:(id)arg1 ;
@end

