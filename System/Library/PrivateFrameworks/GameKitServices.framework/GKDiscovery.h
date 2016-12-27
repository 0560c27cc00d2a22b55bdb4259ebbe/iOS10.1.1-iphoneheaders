/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKDiscoveryManager;

@interface GKDiscovery : NSObject {

	GKDiscoveryManager* _manager;

}

@property (nonatomic,retain) GKDiscoveryManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) id playerFoundHandler; 
@property (nonatomic,copy) id playerLostHandler; 
@property (nonatomic,copy) id receiveDataHandler; 
-(id)init;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 type:(id)arg2 ;
-(id)playerFoundHandler;
-(id)playerLostHandler;
-(id)receiveDataHandler;
-(void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setPlayerFoundHandler:(id)arg1 ;
-(void)setPlayerLostHandler:(id)arg1 ;
-(void)setReceiveDataHandler:(id)arg1 ;
-(id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2 ;
-(void)stopAdvertising;
-(void)startBrowsingLocalPlayer:(id)arg1 ;
-(void)forgetParticipant:(id)arg1 deviceID:(id)arg2 ;
-(void)stopBrowsing;
-(GKDiscoveryManager *)manager;
-(void)setManager:(GKDiscoveryManager *)arg1 ;
@end

