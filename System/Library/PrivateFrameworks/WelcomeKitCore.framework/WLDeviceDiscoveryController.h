/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WLDeviceDiscoverySocketHandlerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, NSArray;

@interface WLDeviceDiscoveryController : NSObject <WLDeviceDiscoverySocketHandlerDelegate> {

	int _listenerSocket;
	NSObject*<OS_dispatch_source> _incomingConnSource;
	NSMutableArray* _socketHandlers;
	NSMutableArray* _sourceDevices;
	unsigned long long _countOfPairingAttemptsWithCurrentSecret;
	NSString* _pairingSecret;
	NSObject*<OS_dispatch_queue> _discoveryRequestSerialQueue;
	/*^block*/id _nextIncomingConnectionHandler;
	NSString* _allowedAddress;

}

@property (nonatomic,copy,readonly) NSArray * sourceDevices; 
+(id)sharedInstance;
-(id)init;
-(void)setNextIncomingConnectionHandler:(/*^block*/id)arg1 ;
-(void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithSourceDevice:(id)arg2 error:(id)arg3 ;
-(void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2 ;
-(void)_queue_startDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldForceDiscoveryError;
-(void)_allowConnectionsFromAnyAddress;
-(id)_generatePairingSecret;
-(void)_postSourceDevicesDidChangeNotification;
-(id)_ssidWithSecret:(id)arg1 ;
-(id)_legacyPairingWifiPskWithSecret:(id)arg1 ;
-(int)createListenerSocketOnPort:(unsigned long long)arg1 ;
-(int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(BOOL)arg2 ;
-(id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)_queue_stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)sourceDevices;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptDirectConnectionToAddress:(id)arg1 ;
@end

