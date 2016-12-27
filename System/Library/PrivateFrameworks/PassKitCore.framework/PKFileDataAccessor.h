/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@protocol OS_dispatch_queue;
@class PKRemoteAssetManager, NSObject, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKRemoteAssetManager* _remoteAssetManager;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
-(id)bundle;
-(id)archiveData;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 processingQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloaded;
-(id)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)manifestHash;
@end

