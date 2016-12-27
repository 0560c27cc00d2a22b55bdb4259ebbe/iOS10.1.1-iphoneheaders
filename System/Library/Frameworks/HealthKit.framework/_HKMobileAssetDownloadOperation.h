/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ASAsset, NSDictionary, NSObject, NSString;

@interface _HKMobileAssetDownloadOperation : NSObject {

	ASAsset* _asset;
	NSDictionary* _downloadOptions;
	long long _state;
	/*^block*/id _completion;
	long long _attemptCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _operationName;

}
-(void)run;
-(id)initWithAsset:(id)arg1 serialQueue:(id)arg2 downloadOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_transitionToInitialized;
-(void)_queue_run;
-(void)_queue_transitionToDownloadingAsset;
-(void)_queue_downloadAsset;
-(void)_queue_assignDownloadHandlerForAsset;
-(void)_queue_resumeAssetDownload;
-(void)_queue_assetStateUpdated;
-(void)_queue_transitionToState:(long long)arg1 ;
-(void)_queue_callCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_transitionToFailureWithError:(id)arg1 ;
-(void)_queue_transitionToCompleted;
@end

