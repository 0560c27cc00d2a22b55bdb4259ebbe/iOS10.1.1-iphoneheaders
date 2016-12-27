/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NPTunnelDelegate.h>
#import <libobjc.A.dylib/NPTunnelFlowDelegate.h>
#import <libobjc.A.dylib/NSPServerCommands.h>

@protocol OS_dispatch_source;
@class NSArray, NPTunnelTuscany, NETunnelProviderProtocol, NWPathEvaluator, NSMutableDictionary, NSTimer, NSDictionary, NSObject, NSString;

@interface NSPManager : NSObject <NPTunnelDelegate, NPTunnelFlowDelegate, NSPServerCommands> {

	NSArray* _appRules;
	BOOL _isIdle;
	BOOL _isObserving;
	BOOL _initialUpdate;
	NPTunnelTuscany* _tunnel;
	NETunnelProviderProtocol* _protocolConfiguration;
	NWPathEvaluator* _policyEvaluator;
	NWPathEvaluator* _pathEvaluator;
	NSMutableDictionary* _flowCache;
	NSTimer* _idleTimer;
	NSDictionary* _serviceProperties;
	NSObject*<OS_dispatch_source> _telemetryTimer;

}

@property (assign) BOOL isIdle;                                                   //@synthesize isIdle=_isIdle - In the implementation block
@property (retain) NPTunnelTuscany * tunnel;                                      //@synthesize tunnel=_tunnel - In the implementation block
@property (retain) NSMutableDictionary * flowCache;                               //@synthesize flowCache=_flowCache - In the implementation block
@property (retain) NSTimer * idleTimer;                                           //@synthesize idleTimer=_idleTimer - In the implementation block
@property (readonly) NSDictionary * serviceProperties;                            //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (assign) BOOL isObserving;                                              //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) BOOL initialUpdate;                                            //@synthesize initialUpdate=_initialUpdate - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> telemetryTimer;                  //@synthesize telemetryTimer=_telemetryTimer - In the implementation block
@property (retain) NSArray * appRules; 
@property (retain) NETunnelProviderProtocol * protocolConfiguration;              //@synthesize protocolConfiguration=_protocolConfiguration - In the implementation block
@property (readonly) NWPathEvaluator * policyEvaluator;                           //@synthesize policyEvaluator=_policyEvaluator - In the implementation block
@property (readonly) NWPathEvaluator * pathEvaluator;                             //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isObserving;
-(NWPathEvaluator *)pathEvaluator;
-(BOOL)isIdle;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(NETunnelProviderProtocol *)protocolConfiguration;
-(void)setProtocolConfiguration:(NETunnelProviderProtocol *)arg1 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(NSDictionary *)serviceProperties;
-(NWPathEvaluator *)policyEvaluator;
-(void)fetchConnectionInfoForFlow:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeCurrentConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NPTunnelTuscany *)tunnel;
-(id)tunnel:(id)arg1 openSessionToEndpoint:(id)arg2 fromEndpoint:(id)arg3 ;
-(long long)flowGetCurrentMTU;
-(void)flowDidClose:(id)arg1 ;
-(id)instantiateFlowWithInputHandler:(nw_protocol*)arg1 ;
-(BOOL)shouldTunnelFlowWithParameters:(id)arg1 ;
-(id)tunnel:(id)arg1 openConnectionToEndpoint:(id)arg2 enableTFO:(BOOL)arg3 initialData:(id)arg4 enableMultipath:(BOOL)arg5 enableTLS:(BOOL)arg6 TLSParameters:(id)arg7 TLSDelegate:(id)arg8 URL:(id)arg9 ;
-(void)tunnelDidConnect;
-(BOOL)tunnelGetIsNetworkCaptive;
-(BOOL)tunnelGetNetworkHasProxy;
-(long long)tunnelGetCurrentMTU:(id)arg1 ;
-(void)tunnelDidDisconnect;
-(void)sendKeyBag:(id)arg1 usageData:(id)arg2 ;
-(void)clearIdleTimer;
-(NSMutableDictionary *)flowCache;
-(void)resetTunnelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTunnel:(NPTunnelTuscany *)arg1 ;
-(void)setFlowCache:(NSMutableDictionary *)arg1 ;
-(void)setInitialUpdate:(BOOL)arg1 ;
-(void)setIsIdle:(BOOL)arg1 ;
-(void)setupServiceProperties;
-(NSObject*<OS_dispatch_source>)telemetryTimer;
-(void)setTelemetryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)resetIdleTimer;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(void)idleTimerFired:(id)arg1 ;
-(void)copyConnectionInfoForFlow:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)initializeTuscanyTunnel;
-(void)startWithConfiguration:(id)arg1 appRules:(id)arg2 ;
-(id)instantiateFlowWithAppProxyFlow:(id)arg1 ;
-(BOOL)initialUpdate;
@end

