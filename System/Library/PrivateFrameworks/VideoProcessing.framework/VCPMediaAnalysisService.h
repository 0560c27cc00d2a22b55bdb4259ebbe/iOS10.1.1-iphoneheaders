/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCPMediaAnalysisClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableDictionary* _progressBlocks;
	int _nextRequestID;

}
+(id)errorWithDescription:(id)arg1 ;
+(id)sharedAnalysisService;
-(id)init;
-(void)invalidate;
-(id)connection;
-(void)cancelRequest:(int)arg1 ;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(void)cancelAllRequests;
-(int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(BOOL)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

