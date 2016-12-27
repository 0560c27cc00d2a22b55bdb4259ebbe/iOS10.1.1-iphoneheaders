/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class PHInternalAssetResource, PHAssetResourceRequestOptions, NSObject, NSError;

@interface PHAssetResourceRequest : NSOperation {

	int _cloudResourceRequestID;
	PHInternalAssetResource* _assetResource;
	PHAssetResourceRequestOptions* _options;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _cloudResourceDownloadWaitSemaphore;
	/*^block*/id _dataHandler;
	int _requestID;
	NSError* _error;

}

@property (nonatomic,readonly) int requestID;                                             //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) PHAssetResourceRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
-(void)cancel;
-(PHAssetResourceRequestOptions *)options;
-(void)main;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(BOOL)_downloadResourceForAssetWithLocalIdentifier:(id)arg1 progress:(/*^block*/id)arg2 error:(id*)arg3 ;
-(long long)_streamDataAtURL:(id)arg1 progress:(/*^block*/id)arg2 dataHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)initWithRequestID:(int)arg1 assetResource:(id)arg2 options:(id)arg3 dataHandler:(/*^block*/id)arg4 ;
-(NSError *)error;
-(int)requestID;
@end

