/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface CXCallDirectoryManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)firstIdentificationEntriesForPhoneNumbers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIdentificationEntryForPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPrioritizedExtensionIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataForExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

