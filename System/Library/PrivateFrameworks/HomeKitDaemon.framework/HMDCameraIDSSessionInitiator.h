/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamSenderProtocol.h>
#import <libobjc.A.dylib/HMDCameraPowerAssertionProtocol.h>

@protocol HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;
@class NSNumber, HMDCameraSessionID, NSObject, NSString, HMDCameraNetworkConfig, AVCPacketRelay, HAPOSTransaction;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol, HMDCameraPowerAssertionProtocol> {

	id<HMDCameraIDSSessionInitiatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _destinationID;
	HMDCameraNetworkConfig* _localNetworkConfig;
	AVCPacketRelay* _packetRelay;
	HAPOSTransaction* _packetRelayTransaction;

}

@property (nonatomic,__weak,readonly) id<HMDCameraIDSSessionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationID;                                         //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                           //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (nonatomic,retain) AVCPacketRelay * packetRelay;                                            //@synthesize packetRelay=_packetRelay - In the implementation block
@property (nonatomic,retain) HAPOSTransaction * packetRelayTransaction;                               //@synthesize packetRelayTransaction=_packetRelayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * mtu; 
@property (nonatomic,readonly) HMDCameraSessionID * sessionID; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraIDSSessionInitiatorDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)destinationID;
-(id)logIdentifier;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(NSNumber *)mtu;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(AVCPacketRelay *)packetRelay;
-(void)setPacketRelay:(AVCPacketRelay *)arg1 ;
-(void)setPacketRelayTransaction:(HAPOSTransaction *)arg1 ;
-(void)_sendInvitation;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6 ;
-(void)_callSessionStarted:(id)arg1 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 ;
-(HAPOSTransaction *)packetRelayTransaction;
@end

