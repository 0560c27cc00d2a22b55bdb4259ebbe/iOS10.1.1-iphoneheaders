/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEExtensionTunnelProviderContext.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol> {

	unsigned _delegateInterfaceIndex;
	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;

}

@property (retain) NSObject*<OS_dispatch_queue> flowQueue;              //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                          //@synthesize director=_director - In the implementation block
@property (assign) unsigned delegateInterfaceIndex;                     //@synthesize delegateInterfaceIndex=_delegateInterfaceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)cancelWithError:(id)arg1 ;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(BOOL)arg2 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)verifyAppWithPID:(long long)arg1 uuid:(id)arg2 matchesAppRule:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NEFlowDirectorRef)director;
-(unsigned)delegateInterfaceIndex;
-(void)flowDivertOpenControlSocket;
-(void)flowDivertMatchAppRulesWithFlow:(unsigned)arg1 pid:(int)arg2 uuid:(unsigned char)arg3 signingIdentifier:(CFStringRef)arg4 ;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
@end

