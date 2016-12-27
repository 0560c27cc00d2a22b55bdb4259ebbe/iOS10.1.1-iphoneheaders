/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, HMDHomeManager, HMDAccessoryBrowser, HMDXpcServer, HMDCentralMessageDispatcher, HMFMessageDispatcher, HMDCloudDataSyncManager, HMDMessageFilterChain, HMDRemoteIdentityRegistry;

@interface HMDMainDriver : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	HMDAccessoryBrowser* _accessoryBrowser;
	HMDXpcServer* _xpcServer;
	HMDCentralMessageDispatcher* _messageDispatcher;
	HMFMessageDispatcher* _notificationRelayDispatcher;
	HMDCloudDataSyncManager* _cloudDataSyncManager;
	HMDMessageFilterChain* _msgFilterChain;
	HMDRemoteIdentityRegistry* _identityRegistry;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDHomeManager * homeManager;                                    //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMDAccessoryBrowser * accessoryBrowser;                          //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) HMDXpcServer * xpcServer;                                        //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,retain) HMDCentralMessageDispatcher * messageDispatcher;                 //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * notificationRelayDispatcher;              //@synthesize notificationRelayDispatcher=_notificationRelayDispatcher - In the implementation block
@property (nonatomic,retain) HMDCloudDataSyncManager * cloudDataSyncManager;                  //@synthesize cloudDataSyncManager=_cloudDataSyncManager - In the implementation block
@property (nonatomic,retain) HMDMessageFilterChain * msgFilterChain;                          //@synthesize msgFilterChain=_msgFilterChain - In the implementation block
@property (nonatomic,retain) HMDRemoteIdentityRegistry * identityRegistry;                    //@synthesize identityRegistry=_identityRegistry - In the implementation block
+(id)driver;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)executeBTAJob:(const char*)arg1 withXPCDict:(id)arg2 ;
-(void)logError:(id)arg1 component:(id)arg2 ;
-(void)setNotificationRelayDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setMsgFilterChain:(HMDMessageFilterChain *)arg1 ;
-(void)setIdentityRegistry:(HMDRemoteIdentityRegistry *)arg1 ;
-(HMDRemoteIdentityRegistry *)identityRegistry;
-(HMDMessageFilterChain *)msgFilterChain;
-(HMFMessageDispatcher *)notificationRelayDispatcher;
-(void)setMessageDispatcher:(HMDCentralMessageDispatcher *)arg1 ;
-(void)setXpcServer:(HMDXpcServer *)arg1 ;
-(HMDCentralMessageDispatcher *)messageDispatcher;
-(HMDXpcServer *)xpcServer;
-(void)setAccessoryBrowser:(HMDAccessoryBrowser *)arg1 ;
-(HMDAccessoryBrowser *)accessoryBrowser;
-(void)initBackgroundTaskAgent;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(HMDCloudDataSyncManager *)cloudDataSyncManager;
-(void)setCloudDataSyncManager:(HMDCloudDataSyncManager *)arg1 ;
@end

