/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDMerging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMDResidentDeviceManagerDelegate, OS_dispatch_queue;
@class NSMutableSet, HMDResidentDevice, HMFTimer, HMDHome, NSObject, HMFMessageDispatcher, HMDCentralMessageDispatcher, NSArray, NSString, NSUUID;

@interface HMDResidentDeviceManager : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDMerging, NSSecureCoding> {

	NSMutableSet* _residentDevices;
	BOOL _residentAvailable;
	BOOL _residentSupported;
	BOOL _confirming;
	HMDResidentDevice* _primaryResidentDevice;
	HMFTimer* _residentMonitorTimer;
	id<HMDResidentDeviceManagerDelegate> _delegate;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDCentralMessageDispatcher* _remoteMessageDispatcher;
	long long _lastAtHomeLevel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                           //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMDCentralMessageDispatcher * remoteMessageDispatcher;              //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (retain) HMFTimer * residentMonitorTimer;                                                //@synthesize residentMonitorTimer=_residentMonitorTimer - In the implementation block
@property (assign,getter=isConfirming,nonatomic) BOOL confirming;                                  //@synthesize confirming=_confirming - In the implementation block
@property (assign,nonatomic) long long lastAtHomeLevel;                                            //@synthesize lastAtHomeLevel=_lastAtHomeLevel - In the implementation block
@property (assign,getter=isResidentSupported,nonatomic) BOOL residentSupported;                    //@synthesize residentSupported=_residentSupported - In the implementation block
@property (__weak) id<HMDResidentDeviceManagerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,__weak,readonly) HMDResidentDevice * primaryResidentDevice;                   //@synthesize primaryResidentDevice=_primaryResidentDevice - In the implementation block
@property (nonatomic,copy,readonly) NSArray * residentDevices; 
@property (getter=isResidentAvailable,nonatomic,readonly) BOOL residentAvailable;                  //@synthesize residentAvailable=_residentAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HMDResidentDeviceManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDResidentDeviceManagerDelegate>)delegate;
-(void)_run;
-(id)shortDescription;
-(id)dumpState;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)_registerForMessages;
-(BOOL)isResidentSupported;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMDCentralMessageDispatcher *)remoteMessageDispatcher;
-(NSArray *)residentDevices;
-(void)removeResidentDevice:(id)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)isResidentAvailable;
-(HMDResidentDevice *)primaryResidentDevice;
-(void)addResidentDevice:(id)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(void)atHomeLevelChanged:(long long)arg1 ;
-(HMFTimer *)residentMonitorTimer;
-(void)handleBatteryStateChange:(id)arg1 ;
-(void)handleBatteryLevelChange:(id)arg1 ;
-(void)handleCurrentDeviceChanged:(id)arg1 ;
-(void)handleResidentDeviceIsReachable:(id)arg1 ;
-(void)handleResidentDeviceIsNotReachable:(id)arg1 ;
-(BOOL)isConfirming;
-(void)setResidentSupported:(BOOL)arg1 ;
-(void)handleCurrentDeviceUpdated:(id)arg1 ;
-(void)_handleResidentElectionParameters:(id)arg1 ;
-(void)_handleResidentDeviceUpdateEnabled:(id)arg1 ;
-(void)_electResidentDevice;
-(void)_setupSessionWithPrimaryResidentDevice;
-(id)ourSelf;
-(void)_startMonitoringResident;
-(void)_confirmAsResident;
-(void)_stopMonitoringResident;
-(void)_teardownSessionWithPrimaryResidentDevice;
-(void)notifyClientsOfUpdatedResidentDevice:(id)arg1 ;
-(void)notifyUpdatedPrimaryResident:(id)arg1 ;
-(void)updateResidentAvailability;
-(void)notifyClientsOfAddedResidentDevice:(id)arg1 ;
-(void)electResidentDevice;
-(void)notifyClientsOfRemovedResidentDevice:(id)arg1 ;
-(id)availableResidentDevices;
-(void)setResidentAvailable:(BOOL)arg1 ;
-(void)notifyResidentAvailable:(BOOL)arg1 ;
-(void)setPrimaryResidentDevice:(HMDResidentDevice *)arg1 ;
-(void)setConfirming:(BOOL)arg1 ;
-(long long)compareResidentDevice:(id)arg1 electionParameters:(id)arg2 ;
-(BOOL)_isAtHome;
-(long long)lastAtHomeLevel;
-(id)residentDeviceForDevice:(id)arg1 ;
-(void)_updateReachability:(BOOL)arg1 forResidentDevice:(id)arg2 ;
-(void)_updateDischargingTimer:(long long)arg1 ;
-(void)_updateChargingTimer;
-(void)setResidentDevices:(NSArray *)arg1 ;
-(void)_pingResident;
-(void)setLastAtHomeLevel:(long long)arg1 ;
-(void)setResidentMonitorTimer:(HMFTimer *)arg1 ;
@end

