/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSMutableSet, NSObject, NSDictionary;

@interface _HKMobileAssetDownloadManager : NSObject {

	NSString* _mobileAssetTypeName;
	NSMutableArray* _pendingOperations;
	NSMutableSet* _downloadedPredicateFormats;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _retainedSelf;
	BOOL _shouldQueryLocalAssetsFirst;
	BOOL _shouldAutoDownloadRemoteAssets;
	NSDictionary* _downloadOptions;
	/*^block*/id _downloadCompletionHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL shouldQueryLocalAssetsFirst;                 //@synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoDownloadRemoteAssets;              //@synthesize shouldAutoDownloadRemoteAssets=_shouldAutoDownloadRemoteAssets - In the implementation block
@property (nonatomic,retain) NSDictionary * downloadOptions;                   //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,copy) id downloadCompletionHandler;                       //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                    //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(NSDictionary *)downloadOptions;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)downloadAssetsWithPredicate:(id)arg1 forceDownload:(BOOL)arg2 ;
-(void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg1 shouldRequery:(BOOL)arg2 predicate:(id)arg3 ;
-(void)_queue_fetchAssetsWithPredicate:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_downloadAssets:(id)arg1 completionOverride:(/*^block*/id)arg2 ;
-(void)_callErrorHandlerWithError:(id)arg1 ;
-(void)_callDownloadCompletionHandlerWithAssets:(id)arg1 ;
-(id)initWithMobileAssetTypeName:(id)arg1 ;
-(void)downloadAssetsWithPredicate:(id)arg1 ;
-(void)fetchAssetsWithPredicate:(id)arg1 onlyLocal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldQueryLocalAssetsFirst;
-(void)setShouldQueryLocalAssetsFirst:(BOOL)arg1 ;
-(BOOL)shouldAutoDownloadRemoteAssets;
-(void)setShouldAutoDownloadRemoteAssets:(BOOL)arg1 ;
-(void)setDownloadOptions:(NSDictionary *)arg1 ;
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(id)downloadCompletionHandler;
@end

