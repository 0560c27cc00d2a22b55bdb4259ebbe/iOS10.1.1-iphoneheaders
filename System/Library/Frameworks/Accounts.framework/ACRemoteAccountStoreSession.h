/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	BOOL _hasConfiguredRemoteAccountStore;
	BOOL _xpcConnectionHasBeenInvalidated;
	BOOL _notificationsEnabled;
	NSString* _spoofedBundleID;

}

@property (nonatomic,copy) NSString * spoofedBundleID;               //@synthesize spoofedBundleID=_spoofedBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setSpoofedBundleID:(NSString *)arg1 ;
-(void)_configureConnection;
-(void)_configureRemoteAccountStoreIfNecessary;
-(NSString *)spoofedBundleID;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connect;
-(id)remoteObjectProxy;
-(void)disconnect;
-(id)_connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(BOOL)notificationsEnabled;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
@end

