/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraStreamControlManager.h>
#import <libobjc.A.dylib/HMDStreamingManagerDelegate.h>
#import <libobjc.A.dylib/HMDCameraIDSSessionReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraIDSDeviceConnectionReceiverDelegate.h>
#import <libobjc.A.dylib/HMDCameraIDSDeviceConnectionSenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamControlManagerProtocol.h>

@class NSUUID, HMDCameraResidentMessageHandler, HMDRemoteStreamSession, HMDCameraMediaConfigGenerator, NSString;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol> {

	NSUUID* _profileUniqueIdentifier;
	HMDCameraResidentMessageHandler* _residentMessageHandler;
	HMDRemoteStreamSession* _streamSession;
	HMDCameraMediaConfigGenerator* _configGenerator;

}

@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                                      //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraResidentMessageHandler * residentMessageHandler;              //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (nonatomic,retain) HMDRemoteStreamSession * streamSession;                                       //@synthesize streamSession=_streamSession - In the implementation block
@property (nonatomic,retain) HMDCameraMediaConfigGenerator * configGenerator;                              //@synthesize configGenerator=_configGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)startStream:(id)arg1 ;
-(void)_startStream:(id)arg1 ;
-(void)stopStream;
-(void)updateAudioSetting:(unsigned long long)arg1 ;
-(void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3 ;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 ;
-(void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2 ;
-(void)streamingManagerDidNetworkImprove:(id)arg1 ;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg1 ;
-(void)streamingManagerDidUpdateConfiguration:(id)arg1 ;
-(void)deviceConnectionReceiver:(id)arg1 didSetup:(id)arg2 ;
-(void)deviceConnectionReceiver:(id)arg1 didEndSession:(id)arg2 ;
-(void)setStreamSession:(HMDRemoteStreamSession *)arg1 ;
-(void)_stopCurrentStreamSession;
-(HMDRemoteStreamSession *)streamSession;
-(void)_negotiateStream;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(NSUUID *)profileUniqueIdentifier;
-(void)_setParametersSelected:(id)arg1 ;
-(void)_idsSessionCreatedAndConfigNegotiated;
-(void)_cleanUpStreamSession;
-(void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2 ;
-(HMDCameraMediaConfigGenerator *)configGenerator;
-(void)_streamStarted;
-(void)_reconfigureStream:(id)arg1 ;
-(void)_dispatchReconfigureToResident:(id)arg1 ;
-(void)_remoteSetup:(id)arg1 ;
-(void)_sendStopMessageToResident;
-(void)_relaySessionStarted:(id)arg1 ;
-(void)stopStreamAsIDSHasStopped;
-(void)_reconfigureStreams;
-(void)_sendUpdatedConfiguration;
-(void)sessionReceiver:(id)arg1 didSetup:(id)arg2 ;
-(void)sessionReceiver:(id)arg1 didEndSession:(id)arg2 ;
-(void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2 ;
-(void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2 ;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1 ;
-(void)remoteSetup:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 ;
-(void)setConfigGenerator:(HMDCameraMediaConfigGenerator *)arg1 ;
@end
