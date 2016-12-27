/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock, NSOperationQueue, NSMutableDictionary, CPDistributedMessagingCallout;

@interface CPDistributedMessagingCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	unsigned _sendPort;
	NSOperationQueue* _asyncQueue;
	CFRunLoopSourceRef _serverSource;
	NSString* _requiredEntitlement;
	NSMutableDictionary* _callouts;
	unsigned _parkedServerPort;
	CPDistributedMessagingCallout* _currentCallout;
	unsigned _replyPort;
	BOOL _portPassing;
	BOOL _delayedReply;
	BOOL _requireLookupByPID;
	int _targetPID;

}
+(id)_centerNamed:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
+(id)pidRestrictedCenterNamed:(id)arg1 ;
+(id)centerNamed:(id)arg1 ;
-(id)_initWithServerName:(id)arg1 ;
-(id)_initWithServerName:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
-(void)_setSendPort:(unsigned)arg1 ;
-(void)_setupInvalidationSource;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 ;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(BOOL)arg8 ;
-(BOOL)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(BOOL)arg5 receiveReply:(id*)arg6 nonBlocking:(BOOL)arg7 error:(id*)arg8 ;
-(unsigned)_sendPort;
-(id)_initAnonymousServer;
-(void)_sendReplyMessage:(id)arg1 portPassing:(BOOL)arg2 onMachPort:(unsigned)arg3 ;
-(id)_initClientWithPort:(unsigned)arg1 ;
-(BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2 ;
-(void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5 ;
-(void)unregisterForMessageName:(id)arg1 ;
-(void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(SCD_Struct_CP4*)arg4 ;
-(BOOL)_isTaskEntitled:(SCD_Struct_CP4*)arg1 ;
-(id)_requiredEntitlement;
-(void)dealloc;
-(id)name;
-(unsigned)_serverPort;
-(void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1 ;
-(BOOL)doesServerExist;
-(void)setTargetPID:(int)arg1 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 ;
-(void)runServerOnCurrentThread;
-(void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)delayReply;
-(void)sendDelayedReply:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(void)stopServer;
@end

