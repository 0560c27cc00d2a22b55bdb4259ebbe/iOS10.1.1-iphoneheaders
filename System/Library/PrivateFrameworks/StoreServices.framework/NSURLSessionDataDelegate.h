/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

