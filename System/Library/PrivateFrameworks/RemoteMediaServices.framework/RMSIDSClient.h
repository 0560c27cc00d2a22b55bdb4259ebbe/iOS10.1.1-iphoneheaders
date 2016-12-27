/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, IDSService, NSObject, NSString;

@interface RMSIDSClient : NSObject <IDSServiceDelegate> {

	NSMutableDictionary* _messageRecords;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _idsDispatchQueue;
	NSObject*<OS_dispatch_queue> _idsOutgoingQueue;
	BOOL _companionAvailable;

}

@property (assign,getter=isCompanionAvailable,nonatomic) BOOL companionAvailable;              //@synthesize companionAvailable=_companionAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(BOOL)isCompanionAvailable;
-(void)setCompanionAvailable:(BOOL)arg1 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)beginDiscoverySessionWithDiscoveryTypes:(int)arg1 pairedNetworkNames:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePairedNetworkNames:(id)arg1 sessionIdentifier:(int)arg2 ;
-(void)endDiscoverySession:(int)arg1 ;
-(void)sendHeartbeatWithSessionIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAvailableServicesDidUpdate:(id)arg1 ;
-(void)_handleNowPlayingInfoDidUpdate:(id)arg1 ;
-(void)_handleNowPlayingArtworkAvailable:(id)arg1 ;
-(void)_handleAudioRoutesDidUpdate:(id)arg1 ;
-(void)_handleVolumeDidUpdate:(id)arg1 ;
-(void)_handlePairingDidSucceed:(id)arg1 ;
-(void)_handlePairingDidFail:(id)arg1 ;
-(void)_handleSessionDidEnd:(id)arg1 ;
-(void)_handleWifiAvailabilityDidChange:(id)arg1 ;
-(void)_handleBeginDiscoverySessionResponse:(id)arg1 ;
-(void)_handleConnectToServiceResponse:(id)arg1 ;
-(void)_handleNowPlayingArtworkDataResponse:(id)arg1 ;
-(void)_handleBeginPairingSessionResponse:(id)arg1 ;
-(void)_handleHeartbeatResponse:(id)arg1 ;
-(void)_handlePickAudioRouteResponse:(id)arg1 ;
-(void)_handleSetLikedStateResponse:(id)arg1 ;
-(void)_handleBeginObservingNowPlayingResponse:(id)arg1 ;
-(void)_updateCompanionAvailability;
-(void)_sendMessage:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 priority:(long long)arg5 responseBlock:(id)arg6 ;
-(void)_invokeBeginDiscoveryResponseBlock:(id)arg1 success:(BOOL)arg2 session:(int)arg3 ;
-(void)_handleResponseCodeMessage:(id)arg1 ;
-(void)_invokeConnectToServiceResponseBlock:(id)arg1 responseCode:(long long)arg2 controlInterface:(id)arg3 session:(int)arg4 ;
-(void)_invokeArtworkDataResponseBlock:(id)arg1 artworkData:(id)arg2 ;
-(void)_invokeBeginPairingResponseBlock:(id)arg1 responseCode:(long long)arg2 session:(int)arg3 ;
-(void)endPairingSession:(int)arg1 ;
-(void)_handleTimeoutForMessageWithIdentifier:(id)arg1 ;
-(void)_invokeResponseCodeResponseBlock:(id)arg1 responseCode:(long long)arg2 ;
-(BOOL)_isCompanionAvailable;
-(void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logoutWithSessionIdentifier:(int)arg1 ;
-(void)sendPlaybackCommand:(long long)arg1 sessionIdentifier:(int)arg2 ;
-(void)setVolume:(float)arg1 sessionIdentifier:(int)arg2 ;
-(void)pickAudioRouteWithMacAddress:(unsigned long long)arg1 sessionIdentifier:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)seekToPlaybackTime:(int)arg1 sessionIdentifier:(int)arg2 ;
-(void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 sessionIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 sessionIdentifier:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleAddToWishlistResponse:(id)arg1 ;
-(void)beginObservingNowPlayingWithSessionIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)endObservingNowPlayingWithSessionIdentifier:(int)arg1 ;
-(void)requestArtworkDataForNowPlayingInfo:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 compressionQuality:(float)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 sessionIdentifier:(int)arg3 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned)arg2 sessionIdentifier:(int)arg3 ;
-(void)sendNavigationCommand:(long long)arg1 sessionIdentifier:(int)arg2 ;
-(void)beginPairingSessionWithPasscode:(id)arg1 appName:(id)arg2 deviceName:(id)arg3 deviceModel:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

