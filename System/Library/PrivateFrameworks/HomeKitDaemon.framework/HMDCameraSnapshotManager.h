/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDCameraSnapshotLocalDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelaySenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelayReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteStreamSenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteStreamReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelayStreamDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotHandlerDelegate.h>

@protocol OS_dispatch_queue, HMDSnapshotRequestHandlerProtocol;
@class NSObject, HMFMessageDispatcher, HMDSnapshotLocalSession, NSMutableDictionary, HMDAccessory, NSUUID, NSString, HMDCameraSnapshotMonitorEvents, HMDSnapshotCacheRequestHandler, HMDSnapshotSlotManager, HMDCameraStreamSnapshotHandler, NSMutableArray, HMDNotificationRegistration, HMFNetMonitor, HMDCameraResidentMessageHandler;

@interface HMDCameraSnapshotManager : NSObject <HMFMessageReceiver, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMFTimerDelegate, HMFLogging, HMDCameraStreamSnapshotHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDSnapshotLocalSession* _currentLocalSession;
	NSMutableDictionary* _currentRemoteSessions;
	HMDAccessory* _accessory;
	NSUUID* _uniqueIdentifier;
	NSString* _imageCacheDirectory;
	NSString* _logID;
	HMDCameraSnapshotMonitorEvents* _monitorServicesManager;
	id<HMDSnapshotRequestHandlerProtocol> _snapshotRequestHandler;
	HMDSnapshotCacheRequestHandler* _snapshotCacheRequestHandler;
	HMDSnapshotSlotManager* _snapshotSlotManager;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	NSMutableArray* _pendingSnapshotRequestDuringStreamSetup;
	NSMutableArray* _pendingRemoteSnapshotRequestDuringStreamSetup;
	HMDNotificationRegistration* _notificationRegistration;
	HMFNetMonitor* _networkMonitor;
	HMDCameraResidentMessageHandler* _residentMessageHandler;

}

@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDSnapshotLocalSession * currentLocalSession;                                 //@synthesize currentLocalSession=_currentLocalSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentRemoteSessions;                                   //@synthesize currentRemoteSessions=_currentRemoteSessions - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                             //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;                                              //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                            //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotMonitorEvents * monitorServicesManager;                     //@synthesize monitorServicesManager=_monitorServicesManager - In the implementation block
@property (nonatomic,readonly) id<HMDSnapshotRequestHandlerProtocol> snapshotRequestHandler;                //@synthesize snapshotRequestHandler=_snapshotRequestHandler - In the implementation block
@property (nonatomic,readonly) HMDSnapshotCacheRequestHandler * snapshotCacheRequestHandler;                //@synthesize snapshotCacheRequestHandler=_snapshotCacheRequestHandler - In the implementation block
@property (nonatomic,readonly) HMDSnapshotSlotManager * snapshotSlotManager;                                //@synthesize snapshotSlotManager=_snapshotSlotManager - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                      //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSnapshotRequestDuringStreamSetup;                    //@synthesize pendingSnapshotRequestDuringStreamSetup=_pendingSnapshotRequestDuringStreamSetup - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRemoteSnapshotRequestDuringStreamSetup;              //@synthesize pendingRemoteSnapshotRequestDuringStreamSetup=_pendingRemoteSnapshotRequestDuringStreamSetup - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;                      //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,retain) HMFNetMonitor * networkMonitor;                                                //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,readonly) HMDCameraResidentMessageHandler * residentMessageHandler;                    //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(void)auditSnapshotDirectories:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)monitorForEventsForServices:(id)arg1 ;
-(void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(id<HMDSnapshotRequestHandlerProtocol>)snapshotRequestHandler;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(NSString *)logID;
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)handleAccessoryIsNotReachable:(id)arg1 ;
-(void)registerForMessages;
-(HMFNetMonitor *)networkMonitor;
-(void)setNetworkMonitor:(HMFNetMonitor *)arg1 ;
-(void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)takeSnapshot:(id)arg1 ;
-(void)releaseSnapshot:(id)arg1 ;
-(void)_removeAllPendingRequests:(id)arg1 ;
-(void)_handleSnapshotRequest:(id)arg1 ;
-(void)_handleSnapshotRemoteRequest:(id)arg1 ;
-(void)_handleSnapshotReceived:(id)arg1 ;
-(void)_handleSnapshotSendFailure:(id)arg1 ;
-(void)_handleReleaseSnapshot:(id)arg1 ;
-(void)_handleCreateSnapshotFromBulletinContext:(id)arg1 ;
-(HMDCameraSnapshotMonitorEvents *)monitorServicesManager;
-(HMDSnapshotSlotManager *)snapshotSlotManager;
-(HMDSnapshotLocalSession *)currentLocalSession;
-(NSMutableDictionary *)currentRemoteSessions;
-(void)setCurrentLocalSession:(HMDSnapshotLocalSession *)arg1 ;
-(NSMutableArray *)pendingSnapshotRequestDuringStreamSetup;
-(NSMutableArray *)pendingRemoteSnapshotRequestDuringStreamSetup;
-(NSString *)imageCacheDirectory;
-(HMDSnapshotCacheRequestHandler *)snapshotCacheRequestHandler;
-(void)_sendStreamSnapshotRequest:(id)arg1 ;
-(void)_sendSnapshotRequestLocal:(id)arg1 ;
-(void)_message:(id)arg1 errored:(long long)arg2 ;
-(void)_sendSnapshotRequestRelayReceiver:(id)arg1 ;
-(void)_sendSnapshotRequestStreamReceiver:(id)arg1 ;
-(void)_sendSnapshotRequestRelayInitiator:(id)arg1 ;
-(void)_sendSnapshotRequestStreamInitiator:(id)arg1 ;
-(void)_sendSnapshotRequestRelayStream:(id)arg1 ;
-(void)_issueGetSnapshot:(id)arg1 ;
-(void)_sendResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(id)_findSessionWithID:(id)arg1 ;
-(void)_endSession:(id)arg1 ;
-(void)_startedGettingImageFor:(id)arg1 error:(id)arg2 ;
-(void)_sendRemoteResponse:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 logID:(id)arg5 msgDispatcher:(id)arg6 networkMonitor:(id)arg7 residentMessageHandler:(id)arg8 ;
-(id)getMostRecentSnapshotRequest;
-(void)setCurrentRemoteSessions:(NSMutableDictionary *)arg1 ;
@end

