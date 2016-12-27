/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDHealthServicesServerInterface.h>

@protocol HKClientInterface;
@class HDHealthServiceManager, HDIdentifierTable, NSMutableDictionary, NSMutableSet, NSUUID, NSString;

@interface HDHealthServicesServer : HDSubserver <HDHealthServicesServerInterface> {

	HDHealthServiceManager* _healthServiceManager;
	HDIdentifierTable* _healthServiceDiscoveryServerIDs;
	NSMutableDictionary* _healthServiceDiscoveryClientIDs;
	HDIdentifierTable* _healthDeviceSessionServerIDs;
	NSMutableDictionary* _healthServiceSessionClientIDs;
	NSMutableSet* _healthServiceClosedSessionServerIDs;
	NSMutableSet* _healthServiceClosedSessionClientIDs;
	NSUUID* _subserverUUID;
	id<HKClientInterface> _clientRemoteObjectProxy;

}

@property (nonatomic,retain) HDHealthServiceManager * healthServiceManager;                      //@synthesize healthServiceManager=_healthServiceManager - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * healthServiceDiscoveryServerIDs;                //@synthesize healthServiceDiscoveryServerIDs=_healthServiceDiscoveryServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healthServiceDiscoveryClientIDs;              //@synthesize healthServiceDiscoveryClientIDs=_healthServiceDiscoveryClientIDs - In the implementation block
@property (nonatomic,retain) HDIdentifierTable * healthDeviceSessionServerIDs;                   //@synthesize healthDeviceSessionServerIDs=_healthDeviceSessionServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * healthServiceSessionClientIDs;                //@synthesize healthServiceSessionClientIDs=_healthServiceSessionClientIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * healthServiceClosedSessionServerIDs;                 //@synthesize healthServiceClosedSessionServerIDs=_healthServiceClosedSessionServerIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * healthServiceClosedSessionClientIDs;                 //@synthesize healthServiceClosedSessionClientIDs=_healthServiceClosedSessionClientIDs - In the implementation block
@property (nonatomic,retain) NSUUID * subserverUUID;                                             //@synthesize subserverUUID=_subserverUUID - In the implementation block
@property (nonatomic,retain) id<HKClientInterface> clientRemoteObjectProxy;                      //@synthesize clientRemoteObjectProxy=_clientRemoteObjectProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithParentServer:(id)arg1 ;
-(HDHealthServiceManager *)healthServiceManager;
-(void)setHealthServiceManager:(HDHealthServiceManager *)arg1 ;
-(void)remote_endBluetoothStatusUpdates;
-(void)remote_endHealthServiceDiscovery:(unsigned long long)arg1 ;
-(void)remote_endHealthServiceSession:(unsigned long long)arg1 ;
-(unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)arg1 ;
-(void)_closeDiscoveryBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(BOOL)_isServerSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)arg1 ;
-(void)_closeSessionBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2 ;
-(BOOL)_isClientSessionValid:(unsigned long long)arg1 ;
-(unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)arg1 ;
-(void)remote_addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)arg1 ;
-(void)remote_beginBluetoothStatusUpdates:(/*^block*/id)arg1 client:(id)arg2 ;
-(void)remote_fetchSupportedServiceIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remote_startHealthServiceSession:(id)arg1 client:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remote_getHealthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)remote_removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_getSupportedPropertyNamesWithHandler:(/*^block*/id)arg1 ;
-(void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)remote_removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(HDIdentifierTable *)healthServiceDiscoveryServerIDs;
-(void)setHealthServiceDiscoveryServerIDs:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)healthServiceDiscoveryClientIDs;
-(void)setHealthServiceDiscoveryClientIDs:(NSMutableDictionary *)arg1 ;
-(HDIdentifierTable *)healthDeviceSessionServerIDs;
-(void)setHealthDeviceSessionServerIDs:(HDIdentifierTable *)arg1 ;
-(NSMutableDictionary *)healthServiceSessionClientIDs;
-(void)setHealthServiceSessionClientIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)healthServiceClosedSessionServerIDs;
-(void)setHealthServiceClosedSessionServerIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)healthServiceClosedSessionClientIDs;
-(void)setHealthServiceClosedSessionClientIDs:(NSMutableSet *)arg1 ;
-(NSUUID *)subserverUUID;
-(void)setSubserverUUID:(NSUUID *)arg1 ;
-(id<HKClientInterface>)clientRemoteObjectProxy;
-(void)setClientRemoteObjectProxy:(id<HKClientInterface>)arg1 ;
@end

