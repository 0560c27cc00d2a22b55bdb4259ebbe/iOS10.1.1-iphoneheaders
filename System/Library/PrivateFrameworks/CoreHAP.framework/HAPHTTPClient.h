/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate;
#import <CoreHAP/CoreHAP-Structs.h>
@class NSString, NSObject;

@interface HAPHTTPClient : NSObject {

	HTTPClientPrivateRef _httpClient;
	BOOL _invalidateRequested;
	NSString* _dnsName;
	unsigned long long _port;
	NSObject*<OS_dispatch_queue> _queue;
	id<HAPHTTPClientDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HAPHTTPClientDebugDelegate> _debugDelegate;
	NSObject*<OS_dispatch_queue> _debugDelegateQueue;

}

@property (nonatomic,copy) NSString * dnsName;                                                    //@synthesize dnsName=_dnsName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPHTTPClientDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPHTTPClientDebugDelegate> debugDelegate;                 //@synthesize debugDelegate=_debugDelegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> debugDelegateQueue;              //@synthesize debugDelegateQueue=_debugDelegateQueue - In the implementation block
@property (assign,nonatomic) BOOL invalidateRequested;                                            //@synthesize invalidateRequested=_invalidateRequested - In the implementation block
@property (nonatomic,readonly) unsigned long long port;                                           //@synthesize port=_port - In the implementation block
-(void)setDelegate:(id<HAPHTTPClientDelegate>)arg1 ;
-(id<HAPHTTPClientDelegate>)delegate;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)port;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithDNSName:(id)arg1 queue:(id)arg2 ;
-(void)setDebugDelegate:(id)arg1 queue:(id)arg2 ;
-(void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char)arg1 writeKey:(unsigned char)arg2 error:(id*)arg3 ;
-(int)_initializeCoreUtilsHTTPClient;
-(void)setDebugDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)dnsName;
-(void)setInvalidateRequested:(BOOL)arg1 ;
-(void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_handleHTTPResponseForMessage:(HTTPMessagePrivate*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeUAPJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_deserializeUAPJSONData:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)debugDelegateQueue;
-(void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_debugDelegateRespondsToSelector:(SEL)arg1 ;
-(void)setDnsName:(NSString *)arg1 ;
-(BOOL)invalidateRequested;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(id<HAPHTTPClientDebugDelegate>)debugDelegate;
-(void)setDebugDelegate:(id<HAPHTTPClientDebugDelegate>)arg1 ;
@end

