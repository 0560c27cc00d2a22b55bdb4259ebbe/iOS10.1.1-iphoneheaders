/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPCPlayerQueueRequest;


@protocol MPCPlayerQueueRequestOperation <NSObject>
@property (nonatomic,copy) MPCPlayerQueueRequest * request; 
@property (nonatomic,copy) id responseHandler; 
@required
-(MPCPlayerQueueRequest *)request;
-(void)setRequest:(id)arg1;
-(id)responseHandler;
-(void)setResponseHandler:(/*^block*/id)arg1;

@end
