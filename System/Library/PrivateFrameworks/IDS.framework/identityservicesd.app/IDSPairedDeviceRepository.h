/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, IDSPairedDevicePersister;
@class NSMutableDictionary, NSObject;

@interface IDSPairedDeviceRepository : NSObject {

	NSMutableDictionary* _pairedDevices;
	NSObject*<OS_dispatch_semaphore> _pairedDevicesLock;
	id<IDSPairedDevicePersister> _persister;

}
-(long long)activatePairedDeviceWithCBUUID:(id)arg1 ;
-(id)activePairedDevice;
-(BOOL)loadPairedDevicesFromStorage;
-(BOOL)updatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(BOOL)purgeSecuredEncryptionKeysForAllPairedDevices;
-(id)allPairedDevices;
-(BOOL)containsPairedDeviceWithCBUUID:(id)arg1 ;
-(BOOL)addPairedDeviceWithCBUUID:(id)arg1 ;
-(id)pairedDeviceWithCBUUID:(id)arg1 ;
-(BOOL)removePairedDeviceWithCBUUID:(id)arg1 ;
-(id)pairedDevicesWithIsPairingValue:(BOOL)arg1 ;
-(BOOL)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(BOOL)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned)arg6 minCompatibilityVersion:(unsigned)arg7 maxCompatibilityVersion:(unsigned)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9 ;
-(void)_accessPairedDevicesInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(void)_criticalLoadPairedDeviceArray:(id)arg1 ;
-(id)_criticalPairedDeviceWithCBUUID:(id)arg1 ;
-(id)_criticalActivePairedDevice;
-(BOOL)_addPairedDevice:(id)arg1 ;
-(void)_criticalPutPairedDevice:(id)arg1 ;
-(BOOL)_criticalPersistState;
-(BOOL)_performTransactionInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_criticalRemovePairedDeviceWithCBUUID:(id)arg1 ;
-(id)_criticalAllPairedDevices;
-(long long)_criticalActivatePairedDeviceWithCBUUID:(id)arg1 ;
-(void)_criticalPerformPairedDeviceDeactivation;
-(long long)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1 ;
-(void)_criticalUpdatePairedDevice:(id)arg1 isActive:(BOOL)arg2 ;
-(BOOL)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;
-(BOOL)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(BOOL)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(BOOL)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned)arg6 minCompatibilityVersion:(unsigned)arg7 maxCompatibilityVersion:(unsigned)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9 ;
-(BOOL)_criticalPerformTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(void)deactivatePairedDevices;
-(id)initWithPersister:(id)arg1 ;
@end

