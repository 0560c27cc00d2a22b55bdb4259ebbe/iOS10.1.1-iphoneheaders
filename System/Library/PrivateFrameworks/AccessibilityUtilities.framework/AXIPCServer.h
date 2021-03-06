/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject {

	/*^block*/id _defaultHandler;
	CFRunLoopSourceRef _serverRunLoopSource;
	CFRunLoopSourceRef _clientInvalidationSource;
	unsigned _serverPort;
	unsigned _clientInvalidationPort;
	NSMutableDictionary* _validSecurityTokens;
	NSMutableSet* _connectedClients;
	/*^block*/id _clientInvalidationHandler;
	NSMutableDictionary* _entitlements;
	unsigned _assignedServerPort;
	unsigned _customQueueSize;
	BOOL _running;
	BOOL _perPidService;
	NSString* _serviceName;
	NSMutableDictionary* _handlers;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;               //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,copy) id defaultHandler; 
@property (assign,nonatomic) BOOL perPidService;                          //@synthesize perPidService=_perPidService - In the implementation block
@property (nonatomic,readonly) unsigned machPort;                         //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,copy) id clientInvalidationCallback; 
-(void)dealloc;
-(id)description;
-(BOOL)isRunning;
-(void)setQueueSize:(unsigned)arg1 ;
-(unsigned)machPort;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 ;
-(void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(void)removeAllHandlersForTarget:(id)arg1 ;
-(BOOL)stopServerWithError:(id*)arg1 ;
-(id)initWithPort:(unsigned)arg1 serviceRunLoopSource:(CFRunLoopSourceRef)arg2 ;
-(BOOL)startServerWithError:(id*)arg1 ;
-(void)setPerPidService:(BOOL)arg1 ;
-(id)initWithServiceName:(id)arg1 perPidService:(BOOL)arg2 ;
-(void)setDefaultHandler:(id)arg1 ;
-(void)_startServerThread;
-(BOOL)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2 ;
-(void)removeHandlerForKey:(int)arg1 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4 ;
-(void)_registerContext:(id)arg1 forKey:(int)arg2 ;
-(void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg1 first:(id)arg2 vothers:(char*)arg3 ;
-(id)_clientIdentificationForAuditToken:(SCD_Struct_AX4)arg1 ;
-(void)_applyCustomQueueSize;
-(BOOL)perPidService;
-(BOOL)_clientWithPort:(unsigned)arg1 auditToken:(SCD_Struct_AX4)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3 ;
-(void)_handleClientRegistration:(id)arg1 ;
-(id)defaultHandler;
-(void)setServiceRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(id)clientInvalidationCallback;
-(void)setClientInvalidationCallback:(id)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forKey:(int)arg2 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4 possibleRequiredEntitlements:(id)arg5 ;
-(void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(void)_handleClientInvalidation:(unsigned)arg1 ;
-(void)_handleIncomingMessage:(id)arg1 securityToken:(SCD_Struct_AX11)arg2 auditToken:(SCD_Struct_AX4)arg3 clientPort:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
@end

