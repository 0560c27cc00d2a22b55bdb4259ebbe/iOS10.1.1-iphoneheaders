/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSArray, NSSet, HMBulletinBoardNotification, NSUUID, NSObject, HMDelegateCaller, HMFMessageDispatcher, NSString;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging> {

	NSArray* _cameraProfiles;
	NSArray* _associatedServices;
	NSSet* _cameraProfileUUIDs;
	NSSet* _associatedServiceUUIDs;
	HMBulletinBoardNotification* _bulletinBoardNotification;
	NSUUID* _uniqueIdentifier;
	NSUUID* _targetUUID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _msgDispatcher;
	NSString* _logID;

}

@property (nonatomic,retain) NSSet * cameraProfileUUIDs;                                                    //@synthesize cameraProfileUUIDs=_cameraProfileUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * associatedServiceUUIDs;                                                //@synthesize associatedServiceUUIDs=_associatedServiceUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * cameraProfiles;                                                      //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,retain) NSArray * associatedServices;                                                  //@synthesize associatedServices=_associatedServices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                             //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                    //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logID;                                                       //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMBulletinBoardNotification * bulletinBoardNotification;              //@synthesize bulletinBoardNotification=_bulletinBoardNotification - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1 ;
-(void)handleConfigureNotification:(id)arg1 ;
-(void)_findObjects;
-(void)_callServiceGroupUpdate;
-(void)_requestServiceGroup;
-(void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSUUID *)targetUUID;
-(HMBulletinBoardNotification *)bulletinBoardNotification;
-(void)_registerNotificationHandlers;
-(NSSet *)cameraProfileUUIDs;
-(NSSet *)associatedServiceUUIDs;
-(NSArray *)cameraProfiles;
-(void)setAssociatedServiceUUIDs:(NSSet *)arg1 ;
-(void)setCameraProfileUUIDs:(NSSet *)arg1 ;
-(NSArray *)associatedServices;
-(void)setAssociatedServices:(NSArray *)arg1 ;
-(void)setCameraProfiles:(NSArray *)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)logID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

