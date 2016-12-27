/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYInitialSyncStateObserverDelegate.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class PSYInitialSyncStateObserver, ATDeviceService, NSObject, NSString;

@interface ATDevicePairedSyncManager : NSObject <PSYInitialSyncStateObserverDelegate, ATMessageLinkObserver, ATSessionObserver> {

	PSYInitialSyncStateObserver* _initialSyncStateObserver;
	ATDeviceService* _deviceService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activePairedDevicePairingId;
+(id)devicePairingId;
-(id)init;
-(void)deviceBecameActive:(id)arg1 ;
-(void)_cleanupSyncState;
-(void)_triggerInitialSync;
-(BOOL)hasRestriction;
-(void)handleDevicePairedNotification;
-(void)handleDeviceUnPairedNotification;
-(void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2 ;
@end

