/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BBDataProviderConnectionClientEndpoint.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSXPCConnection, BBDataProviderConnection, NSString;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint> {

	NSXPCListener* _wakeupListener;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connectionToServer;
	int _listeningToken;
	BBDataProviderConnection* _dataProviderConnection;

}

@property (assign,nonatomic,__weak) BBDataProviderConnection * dataProviderConnection;              //@synthesize dataProviderConnection=_dataProviderConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolverForConnection:(id)arg1 ;
+(id)xpcInterface;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)ping:(/*^block*/id)arg1 ;
-(void)_registerForPublicationNotification;
-(void)_queue_registerWithServer:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(BBDataProviderConnection *)dataProviderConnection;
-(void)setDataProviderConnection:(BBDataProviderConnection *)arg1 ;
@end

