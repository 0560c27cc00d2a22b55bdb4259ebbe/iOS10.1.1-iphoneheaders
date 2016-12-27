/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface SPXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _eventQueue;
	BOOL _ownsQueue;
	/*^block*/id _messageHandler;
	/*^block*/id _disconnectHandler;
	id _context;
	NSString* _bundleID;

}

@property (__weak,readonly) NSString * serviceName; 
@property (__weak,readonly) NSString * bundleID; 
@property (nonatomic,copy) id messageHandler;                    //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                 //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,retain) id context;                         //@synthesize context=_context - In the implementation block
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)context;
-(id)eventQueue;
-(void)setContext:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(void)_setEventHandlerOnConnection:(id)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleXPCMessage:(id)arg1 ;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)sendMessage:(id)arg1 ;
-(void)shutdown;
-(NSString *)bundleID;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(NSString *)serviceName;
-(void)barrier:(/*^block*/id)arg1 ;
@end

