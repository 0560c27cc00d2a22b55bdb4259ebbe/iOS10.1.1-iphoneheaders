/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKConnection, NSString;

@interface GKSession : NSObject {

	id _session;

}

@property (assign) id<GKSessionPrivateDelegate> privateDelegate; 
@property (getter=isBusy) BOOL busy; 
@property (assign) BOOL wifiEnabled; 
@property (readonly) GKConnection * connection; 
@property (assign) id<GKSessionDelegate> delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) int sessionMode; 
@property (readonly) NSString * peerID; 
@property (getter=isAvailable) BOOL available; 
@property (assign) double disconnectTimeout; 
+(void)initialize;
-(NSString *)peerID;
-(void)setDelegate:(id<GKSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<GKSessionDelegate>)delegate;
-(BOOL)isBusy;
-(void)setPrivateDelegate:(id<GKSessionPrivateDelegate>)arg1 ;
-(NSString *)displayName;
-(GKConnection *)connection;
-(id<GKSessionPrivateDelegate>)privateDelegate;
-(NSString *)sessionID;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(BOOL)wifiEnabled;
-(BOOL)isAvailable;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(id)displayNameForPeer:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(void)disconnectFromAllPeers;
-(id)peersWithConnectionState:(int)arg1 ;
-(int)sessionMode;
-(BOOL)isPeerBusy:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
-(id)privateImpl;
-(void)setBusy:(BOOL)arg1 ;
@end

