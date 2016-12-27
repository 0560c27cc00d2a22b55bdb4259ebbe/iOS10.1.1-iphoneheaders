/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AEAssetPackageGenerator.h>
#import <libobjc.A.dylib/NSProgressReporting.h>
#import <AssetExplorer/PUReviewAssetProviderRequest.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSProgress, PXAssetReference, NSObject, PUResourceDownloadRequest, AEAssetPackage, NSError, PHAsset, NSString;

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest> {

	PXAssetReference* _sourceAssetReference;
	NSObject*<OS_dispatch_queue> __packagerIvarIsolationQueue;
	NSObject*<OS_dispatch_group> __packagerWorkGroup;
	PUResourceDownloadRequest* __downloadRequest;
	AEAssetPackage* __ivarQueue_currentPackage;
	NSError* __ivarQueue_lastError;
	PHAsset* __asset;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _packagerIvarIsolationQueue;                                  //@synthesize _packagerIvarIsolationQueue=__packagerIvarIsolationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> _packagerWorkGroup;                                           //@synthesize _packagerWorkGroup=__packagerWorkGroup - In the implementation block
@property (nonatomic,readonly) PUResourceDownloadRequest * _downloadRequest;                                              //@synthesize _downloadRequest=__downloadRequest - In the implementation block
@property (setter=_setIvarQueueCurrentPackage:,nonatomic,retain) AEAssetPackage * _ivarQueue_currentPackage;              //@synthesize _ivarQueue_currentPackage=__ivarQueue_currentPackage - In the implementation block
@property (setter=_setIvarQueueLastError:,nonatomic,retain) NSError * _ivarQueue_lastError;                               //@synthesize _ivarQueue_lastError=__ivarQueue_lastError - In the implementation block
@property (nonatomic,retain) PHAsset * _asset;                                                                            //@synthesize _asset=__asset - In the implementation block
@property (nonatomic,copy,readonly) PXAssetReference * sourceAssetReference;                                              //@synthesize sourceAssetReference=_sourceAssetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (nonatomic,readonly) id<PUDisplayAsset> sourceAsset; 
-(void)_callCompletionWithResult:(/*^block*/id)arg1 ;
-(void)_setIvarQueueLastError:(id)arg1 ;
-(PXAssetReference *)sourceAssetReference;
-(id)initWithAssetReference:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_packagerIvarIsolationQueue;
-(NSObject*<OS_dispatch_group>)_packagerWorkGroup;
-(void)_setIvarQueueCurrentPackage:(id)arg1 ;
-(AEAssetPackage *)_ivarQueue_currentPackage;
-(NSError *)_ivarQueue_lastError;
-(void)_beginGeneratingWithFinalizer:(id)arg1 ;
-(void)beginGeneratingWithFinalizer:(id)arg1 ;
-(BOOL)retrieveGeneratedPackageWithCompletion:(/*^block*/id)arg1 ;
-(void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2 ;
-(void)_downloadIfNeededBeforeGeneratingWithFinalizer:(id)arg1 ;
-(void)_downloadBeforeBeforeGeneratingWithFinalizer:(id)arg1 ;
-(void)set_asset:(PHAsset *)arg1 ;
-(NSProgress *)progress;
-(id)initWithAsset:(id)arg1 ;
-(PHAsset *)_asset;
-(id<PUDisplayAsset>)sourceAsset;
-(void)cancelReviewAssetRequest;
-(void)requestReviewAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(PUResourceDownloadRequest *)_downloadRequest;
@end

