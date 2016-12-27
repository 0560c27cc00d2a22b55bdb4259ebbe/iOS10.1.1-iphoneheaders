/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface CPLEngineDerivativesCache : NSObject {

	NSURL* _cacheMappingURL;
	BOOL _tryCreatingCacheFolder;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _cacheURL;
	Class _derivativeGeneratorClass;

}

@property (nonatomic,copy,readonly) NSURL * cacheURL;                     //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,retain) Class derivativeGeneratorClass;              //@synthesize derivativeGeneratorClass=_derivativeGeneratorClass - In the implementation block
-(id)initWithCacheURL:(id)arg1 ;
-(void)discardCache;
-(Class)derivativeGeneratorClass;
-(id)_cacheKeyForReferenceResource:(id)arg1 ;
-(id)_folderNameForReferenceResource:(id)arg1 ;
-(id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 ;
-(void)_createCacheFolderIfNecessary;
-(id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 ;
-(BOOL)_checkResource:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)cachedResourcesForReferenceResource:(id)arg1 ;
-(void)_updateChange:(id*)arg1 fromOldChange:(id)arg2 withResources:(id)arg3 ;
-(id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 ;
-(void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 ;
-(BOOL)_isUnsupportedFormatError:(id)arg1 ;
-(BOOL)_checkGeneratedResources:(id)arg1 error:(id*)arg2 ;
-(void)generateDerivativesForChange:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDerivativeGeneratorClass:(Class)arg1 ;
-(NSURL *)cacheURL;
@end
