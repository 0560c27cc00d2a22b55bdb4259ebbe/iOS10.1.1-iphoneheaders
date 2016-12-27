/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDIDSMessageTransport.h>

@class HMDWatchManager, HMDCompanionManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport {

	HMDWatchManager* _watchManager;
	HMDCompanionManager* _companionManager;

}

@property (nonatomic,readonly) HMDWatchManager * watchManager;                      //@synthesize watchManager=_watchManager - In the implementation block
@property (nonatomic,readonly) HMDCompanionManager * companionManager;              //@synthesize companionManager=_companionManager - In the implementation block
+(unsigned long long)restriction;
+(BOOL)transportSupportsDevice:(id)arg1 ;
-(BOOL)isSecure;
-(long long)qualityOfService;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(BOOL)isDeviceConnected:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(int)awdTransportType;
-(id)sendMessage:(id)arg1 destination:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)deviceForDestination:(id)arg1 ;
-(HMDWatchManager *)watchManager;
-(HMDCompanionManager *)companionManager;
-(id)idsDeviceForDevice:(id)arg1 ;
-(id)watchDeviceForDevice:(id)arg1 ;
@end
