/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSettingsControlManagerDelegate;
@class NSDictionary, NSObject, HMFMessageDispatcher, HMDAccessory, HMDService, NSUUID, NSString, NSArray, HMDNotificationRegistration;

@interface HMDCameraSettingsControlManager : NSObject <HMFMessageReceiver, HMFLogging> {

	NSDictionary* _characteristicsValues;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HMDCameraSettingsControlManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDAccessory* _accessory;
	HMDService* _streamService;
	NSUUID* _uniqueIdentifier;
	NSString* _logID;
	NSArray* _characteristicsList;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSettingsControlManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                               //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                       //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDService * streamService;                                               //@synthesize streamService=_streamService - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                         //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) NSArray * characteristicsList;                                            //@synthesize characteristicsList=_characteristicsList - In the implementation block
@property (nonatomic,retain) NSDictionary * characteristicsValues;                                       //@synthesize characteristicsValues=_characteristicsValues - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;                   //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSettingsControlManagerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDAccessory *)accessory;
-(HMDService *)streamService;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(NSString *)logID;
-(id)initWithWorkQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 accessory:(id)arg4 streamService:(id)arg5 characteristicsList:(id)arg6 msgDispatcher:(id)arg7 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)registerForMessages;
-(NSDictionary *)characteristicsValues;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(void)updateValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(NSArray *)characteristicsList;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(void)_readCharacteristicValues;
-(void)_characteristicsUpdated:(id)arg1 ;
-(BOOL)_getCharacteristic:(id*)arg1 characteristicType:(id)arg2 ;
-(void)_updateValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)setCharacteristicsValues:(NSDictionary *)arg1 ;
-(void)_callDelegate;
@end

