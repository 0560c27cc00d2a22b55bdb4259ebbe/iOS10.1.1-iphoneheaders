/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EABluetoothAccessoryPickerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, EABluetoothAccessoryPicker, NSTimer, NSObject, NSArray;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate> {

	NSMutableArray* _connectedAccessories;
	NSMutableArray* _sequesteredAccessories;
	NSString* _selectedBluetoothAddress;
	EABluetoothAccessoryPicker* _picker;
	/*^block*/id _pickerCompletion;
	BOOL _sequesterNewAccessories;
	NSTimer* _pickerTimer;
	NSObject*<OS_dispatch_queue> _pickerQueue;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (nonatomic,readonly) NSArray * connectedAccessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerCapabilities:(unsigned)arg1 ;
+(void)accessibilityStartListening;
+(void)accessibilityStopListening;
+(BOOL)isLoggingEnabled;
+(id)sharedAccessoryManager;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_cameraInfoUpdated:(id)arg1 ;
-(void)_externalAccessoryConnectedNotificationHandler:(id)arg1 ;
-(void)_externalAccessoryUpdated:(id)arg1 ;
-(void)_externalAccessoryDisconnected:(id)arg1 ;
-(void)_pointOfInterestStatusReceived:(id)arg1 ;
-(void)_OOBBTPairingCompletionStatusReceived:(id)arg1 ;
-(void)_iapServerDied:(id)arg1 ;
-(void)_externalAccessoryReconnected:(id)arg1 ;
-(void)_timeSyncInfoUpdated:(id)arg1 ;
-(void)_vehicleDataUpdated:(id)arg1 ;
-(id)_initFromSingletonCreationMethod;
-(void)_locationNmeaDataAvailable:(id)arg1 ;
-(void)_locationPointDataAvailable:(id)arg1 ;
-(void)_ephemerisURLAvailable:(id)arg1 ;
-(void)_nmeaFilteringSupportChanged:(id)arg1 ;
-(void)_gpsTimeRequested:(id)arg1 ;
-(void)_removeAllAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2 ;
-(void)_cleanUpForTaskSuspend;
-(void)_checkForConnectedAccessories:(BOOL)arg1 ;
-(id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1 ;
-(id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1 ;
-(void)_externalAccessoryConnected:(id)arg1 ;
-(void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1 ;
-(void)_integrateSequesteredAccessories;
-(NSArray *)connectedAccessories;
-(void)_handleAccessoryNotificationTimeout:(id)arg1 ;
-(void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3 ;
-(void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openCompleteForSession:(unsigned)arg1 connectionID:(unsigned)arg2 ;
-(void)endSession:(unsigned)arg1 forConnectionID:(unsigned)arg2 ;
-(void)wakeAccessoryWithToken:(id)arg1 ;
-(BOOL)appDeclaresProtocol:(id)arg1 ;
-(id)_connectedAccessories;
-(BOOL)shouldAllowInternalProtocols;
-(void)setShouldAllowInternalProtocols:(BOOL)arg1 ;
-(BOOL)shouldAllowCppRuntime;
-(void)setShouldAllowCppRuntime:(BOOL)arg1 ;
-(void)accessibilityAction:(id)arg1 ;
-(void)accessibilityContextChange:(id)arg1 ;
-(void)accessibilityItemPropertyRequest:(id)arg1 ;
-(void)accessibilitySystemPropertyChange:(id)arg1 ;
-(void)accessibilitySystemPropertyRequest:(id)arg1 ;
-(BOOL)areLocationAccessoriesEnabled;
-(void)setAreLocationAccessoriesEnabled:(BOOL)arg1 ;
-(void)pointOfInterestSelection:(id)arg1 ;
-(void)registerForLocalNotifications;
-(void)unregisterForLocalNotifications;
-(void)initiateConnectionToIPAccessory:(id)arg1 ;
-(void)disconnectIPAccessory:(id)arg1 ;
-(id)availableAccessories;
-(void)startIPAccessoryDiscovery;
-(void)stopIPAccessoryDiscovery;
@end

