/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <SiriCore/SiriCoreStreamProvider.h>

@protocol SiriCoreStreamProviderDelegate, OS_dispatch_queue;
@class NSURL, NSInputStream, NSOutputStream, SAConnectionPolicyRoute, SiriCoreConnectionType, NSString, NSURLSession, NSOperationQueue, AFWatchdogTimer, NSObject;

@interface SiriCoreNetworkStreamProvider : NSObject <NSURLSessionDelegate, SiriCoreStreamProvider> {

	id<SiriCoreStreamProviderDelegate> _delegate;
	NSURL* _url;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	SAConnectionPolicyRoute* _route;
	BOOL _prefersWWAN;
	BOOL _connectByPOPEnabled;
	SiriCoreConnectionType* _connectionType;
	int _interfaceIndex;
	NSString* _interfaceName;
	BOOL _isCanceled;
	NSURLSession* _urlSession;
	NSOperationQueue* _opQueue;
	/*^block*/id _completion_block;
	AFWatchdogTimer* _streamCaptureTimer;
	NSString* _resolvedHost;
	NSString* _connectionId;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)close;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)connectionType;
-(id)headerData;
-(id)analysisInfo;
-(id)_siriCoreConnectionErrorWithCode:(long long)arg1 ;
-(void)_getConfiguredStreamPair:(/*^block*/id)arg1 ;
-(void)setConnectByPOPMethod:(BOOL)arg1 ;
-(void)openStreamPairForURL:(id)arg1 withConnectionId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldFallbackQuickly;
-(void)getRemoteMetrics:(/*^block*/id)arg1 ;
-(BOOL)isPeerConnectionError:(id)arg1 ;
-(BOOL)shouldFallbackFromError:(id)arg1 ;
-(id)getResolvedHost;
-(void)setPolicyRoute:(id)arg1 ;
-(void)setPrefersWWAN:(BOOL)arg1 ;
@end

