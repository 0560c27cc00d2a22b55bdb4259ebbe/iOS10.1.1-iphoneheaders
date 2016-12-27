/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVCMNotificationDispatcher, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {

	AVWeakReference* _weakReferenceToSelf;
	AVCMNotificationDispatcher* _figNotificationDispatcher;
	void* _URLRequestOriginator;
	/*^block*/id _figAssetProvider;
	AVWeakReference* _weakReferenceToResourceLoader;

}

@property (nonatomic,copy) id figAssetProvider;                                          //@synthesize figAssetProvider=_figAssetProvider - In the implementation block
@property (nonatomic,retain) const void* URLRequestOriginator; 
@property (assign,nonatomic,__weak) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) const OpaqueFigAssetRef figAsset; 
-(id)init;
-(void)dealloc;
-(const OpaqueFigAssetRef)figAsset;
-(void)setFigAssetProvider:(id)arg1 ;
-(void)setURLRequestOriginator:(const void*)arg1 ;
-(void)_stopHandlingURLRequestsFromRequestOriginator:(void*)arg1 ;
-(void)_startHandlingURLRequestsFromRequestOriginator:(void*)arg1 ;
-(void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2 ;
-(const void*)URLRequestOriginator;
-(void)handleURLRequest:(id)arg1 ;
-(id)figAssetProvider;
-(AVAssetResourceLoader *)resourceLoader;
-(void)setResourceLoader:(AVAssetResourceLoader *)arg1 ;
-(void)finalize;
@end

