/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingService.h>

@protocol OS_dispatch_queue, BLTBulletinDistributorSubscriberDelegate, BLTPingSubscribing;
@class NSMutableDictionary, NSObject, NSString, NSXPCConnection, NSSet;

@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService> {

	NSMutableDictionary* _subscriptions;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTBulletinDistributorSubscriberDelegate> _delegate;
	NSString* _machServiceName;
	id<BLTPingSubscribing> _client;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) id<BLTPingSubscribing> client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * machServiceName;                                           //@synthesize machServiceName=_machServiceName - In the implementation block
@property (__weak) id<BLTBulletinDistributorSubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * sectionIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<BLTBulletinDistributorSubscriberDelegate>)arg1 ;
-(id<BLTBulletinDistributorSubscriberDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_connectIfNecessary;
-(id<BLTPingSubscribing>)client;
-(NSString *)machServiceName;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setClient:(id<BLTPingSubscribing>)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(NSSet *)sectionIDs;
@end

