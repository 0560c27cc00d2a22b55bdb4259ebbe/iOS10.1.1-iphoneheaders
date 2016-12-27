/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHomeManager, NSUUID, NSString;

@interface HMDKeyTransferAgent : NSObject <HMFLogging, HMFMessageReceiver> {

	BOOL _inProgress;
	unsigned long long _residentProvisioningStatus;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isInProgress,nonatomic) BOOL inProgress;                             //@synthesize inProgress=_inProgress - In the implementation block
@property (readonly) unsigned long long residentProvisioningStatus;                           //@synthesize residentProvisioningStatus=_residentProvisioningStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(id)minimumSupportedKeyTransferHomeKitVersion;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)logIdentifier;
-(id)initWithHomeManager:(id)arg1 ;
-(unsigned long long)residentProvisioningStatus;
-(void)resetConfig;
-(void)beginPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isInProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end

