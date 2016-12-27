/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/RMSSessionManagerDelegate.h>
#import <libobjc.A.dylib/RMSDiscoverySessionDelegate.h>
#import <libobjc.A.dylib/RMSPairingSessionDelegate.h>
#import <libobjc.A.dylib/RMSDAAPControlSessionDelegate.h>

@class RMSSessionManager, NSMutableDictionary, IDSService, NSString;

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSSessionManagerDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSDAAPControlSessionDelegate> {

	RMSSessionManager* _sessionManager;
	NSMutableDictionary* _nowPlayingSessions;
	NSMutableDictionary* _pairingSessions;
	NSMutableDictionary* _touchRemoteSessions;
	IDSService* _idsService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)discoverySessionDidUpdateAvailableServices:(id)arg1 ;
-(void)discoverySessionNetworkAvailabilityDidChange:(id)arg1 ;
-(void)pairingSessionDidFail:(id)arg1 ;
-(void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3 ;
-(void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3 ;
-(void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2 ;
-(void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2 ;
-(void)controlSessionDidEnd:(id)arg1 ;
-(void)controlSession:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)_handleSessionHeartbeat:(id)arg1 ;
-(void)_handleBeginDiscovery:(id)arg1 ;
-(void)_handleEndDiscovery:(id)arg1 ;
-(void)_handleConnectToService:(id)arg1 ;
-(void)_handleLogout:(id)arg1 ;
-(void)_handlePlaybackCommand:(id)arg1 ;
-(void)_handlePickAudioRoute:(id)arg1 ;
-(void)_handleSetVolume:(id)arg1 ;
-(void)_handleTouchMove:(id)arg1 ;
-(void)_handleTouchEnd:(id)arg1 ;
-(void)_handleNavigationCommand:(id)arg1 ;
-(void)_handleBeginObservingNowPlaying:(id)arg1 ;
-(void)_handleEndObservingNowPlaying:(id)arg1 ;
-(void)_handleNowPlayingArtworkRequest:(id)arg1 ;
-(void)_handleBeginPairing:(id)arg1 ;
-(void)_handleEndPairing:(id)arg1 ;
-(void)_handleSetLikeState:(id)arg1 ;
-(void)_handleAddToWishlist:(id)arg1 ;
-(void)_handleSeekToPlaybackTime:(id)arg1 ;
-(void)_handleUpdatePairedNetworkNames:(id)arg1 ;
-(void)_cleanupStaleSessions:(id)arg1 ;
-(void)_sendData:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 inResponseTo:(id)arg5 ;
-(void)_sendData:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 timeout:(int)arg4 queueOneID:(id)arg5 inResponseTo:(id)arg6 ;
-(void)sessionManager:(id)arg1 sessionDidTimeout:(id)arg2 withIdentifier:(int)arg3 ;
@end

