/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSURLSessionDataTask, NSURL;

@interface RUIImageLoad : NSObject {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)start;
-(BOOL)receivedValidResponse:(id)arg1 ;
@end

