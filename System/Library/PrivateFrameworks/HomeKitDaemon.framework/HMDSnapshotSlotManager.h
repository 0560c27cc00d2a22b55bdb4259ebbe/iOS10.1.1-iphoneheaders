/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDSnapshotFile, NSMapTable, CAContext, HMDAccessory, NSString, NSObject, HMFMessageDispatcher, NSMutableArray, HMDNotificationRegistration;

@interface HMDSnapshotSlotManager : NSObject <HMFLogging> {

	NSUUID* _uniqueIdentifier;
	HMDSnapshotFile* _mostRecentSnapshot;
	NSMapTable* _snapshotSlots;
	CAContext* _snapshotContext;
	HMDAccessory* _accessory;
	NSString* _logID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSString* _imageCacheDirectory;
	NSMutableArray* _filesToCleanup;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (nonatomic,readonly) NSMapTable * snapshotSlots;                                                 //@synthesize snapshotSlots=_snapshotSlots - In the implementation block
@property (nonatomic,retain) CAContext * snapshotContext;                                                  //@synthesize snapshotContext=_snapshotContext - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                            //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                           //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                         //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;                                             //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * filesToCleanup;                                            //@synthesize filesToCleanup=_filesToCleanup - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;                     //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * mostRecentSnapshot;                                         //@synthesize mostRecentSnapshot=_mostRecentSnapshot - In the implementation block
@property (getter=isMostRecentSnapshotValid,nonatomic,readonly) BOOL mostRecentSnapshotValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(CAContext *)snapshotContext;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSString *)logID;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)handleForegroundAppsNotification:(id)arg1 ;
-(void)registerForMessages;
-(void)setSnapshotContext:(CAContext *)arg1 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6 ;
-(void)handleReleaseSnapshot:(id)arg1 ;
-(NSString *)imageCacheDirectory;
-(id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 updateGenerationCounter:(BOOL)arg3 ;
-(HMDSnapshotFile *)mostRecentSnapshot;
-(id)payloadForSnapshotFile:(id)arg1 ;
-(BOOL)isMostRecentSnapshotValid;
-(id)addReferenceToMostRecentSnapshotFileForMessage:(id)arg1 ;
-(void)findMostRecentSnapshot;
-(void)setupMostRecentSnapshot;
-(NSMutableArray *)filesToCleanup;
-(void)setMostRecentSnapshot:(HMDSnapshotFile *)arg1 ;
-(NSMapTable *)snapshotSlots;
-(void)_updateMostRecentSnapshot:(id)arg1 updateGenerationCounter:(BOOL)arg2 ;
@end
