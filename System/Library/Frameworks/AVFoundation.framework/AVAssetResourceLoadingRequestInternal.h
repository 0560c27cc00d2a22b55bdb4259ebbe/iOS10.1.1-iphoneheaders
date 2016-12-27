/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSDictionary, NSMutableURLRequest, NSURLResponse, NSURLRequest, NSObject, NSMutableData, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest;

@interface AVAssetResourceLoadingRequestInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToResourceLoader;
	NSDictionary* requestDictionary;
	NSMutableURLRequest* URLRequest;
	NSURLResponse* response;
	NSURLRequest* redirect;
	NSObject*<OS_dispatch_queue> dataCachingQueue;
	NSMutableData* cachedData;
	NSDictionary* cachedContentInformation;
	AVAssetResourceLoadingContentInformationRequest* contentInformationRequest;
	AVAssetResourceLoadingDataRequest* dataRequest;
	int finished;
	int cancelled;
	int sentContentInfo;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	OpaqueFigAssetImageGeneratorRef figImageGenerator;
	OpaqueFigAssetRef figAsset;
	/*^block*/id streamingKeyRequestCompletionHandler;

}
@end

