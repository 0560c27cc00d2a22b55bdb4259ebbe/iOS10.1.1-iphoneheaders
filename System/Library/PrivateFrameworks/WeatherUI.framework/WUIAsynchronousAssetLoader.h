/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, WAAssetLoaderDelegate;
@class NSObject, NSCache, NSTimer;

@interface WUIAsynchronousAssetLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _caml_parsing_queue;
	id<WAAssetLoaderDelegate> _delegate;
	NSCache* _resourceCache;
	NSCache* _dataCache;
	NSCache* _caDataCache;
	NSTimer* _opportunityTimer;

}

@property (nonatomic,retain) NSCache * resourceCache;                                //@synthesize resourceCache=_resourceCache - In the implementation block
@property (nonatomic,retain) NSCache * dataCache;                                    //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) NSCache * caDataCache;                                  //@synthesize caDataCache=_caDataCache - In the implementation block
@property (nonatomic,retain) NSTimer * opportunityTimer;                             //@synthesize opportunityTimer=_opportunityTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WAAssetLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAssetLoader;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id<WAAssetLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<WAAssetLoaderDelegate>)delegate;
-(id)queue;
-(void)beginLoading;
-(NSCache *)resourceCache;
-(void)setResourceCache:(NSCache *)arg1 ;
-(void)_asynchronouslyPreheatCADataForCity:(id)arg1 ;
-(id)caml_parsing_queue;
-(id)filenameForCondition:(long long)arg1 isDay:(BOOL)arg2 ;
-(void)loadRootLayerForFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_primeOpportunisticLoad;
-(void)_opportunisticallyLoad;
-(void)setResource:(id)arg1 forKey:(id)arg2 ;
-(void)didReceivedMemoryWarning;
-(NSCache *)dataCache;
-(void)setDataCache:(NSCache *)arg1 ;
-(NSCache *)caDataCache;
-(void)setCaDataCache:(NSCache *)arg1 ;
-(NSTimer *)opportunityTimer;
-(void)setOpportunityTimer:(NSTimer *)arg1 ;
-(void)cancelLoading;
@end

