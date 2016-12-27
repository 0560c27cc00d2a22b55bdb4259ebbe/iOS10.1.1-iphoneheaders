/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAReceiver.h>
#import <useractivityd/SFActivityScannerDelegate.h>

@class NSMutableSet, UADispatchScheduler, SFPeerDevice, NSTimer, NSSet, NSString;

@interface UASharingReceiver : UAReceiver <SFActivityScannerDelegate> {

	NSMutableSet* _sfActivityScanners;
	NSMutableSet* _receivedItems;
	NSMutableSet* _activeDevices;
	BOOL _forceScanning;
	UADispatchScheduler* _periodicCleanup;
	SFPeerDevice* _lastSeenPasteboardDevice;
	long long _lastSeenPasteboardVersionBit;
	NSTimer* _remotePboardTimer;

}

@property (retain,readonly) NSSet * activeDevices; 
@property (retain,readonly) UADispatchScheduler * periodicCleanup;              //@synthesize periodicCleanup=_periodicCleanup - In the implementation block
@property (assign) BOOL forceScanning;                                          //@synthesize forceScanning=_forceScanning - In the implementation block
@property (retain) SFPeerDevice * lastSeenPasteboardDevice;                     //@synthesize lastSeenPasteboardDevice=_lastSeenPasteboardDevice - In the implementation block
@property (assign) long long lastSeenPasteboardVersionBit;                      //@synthesize lastSeenPasteboardVersionBit=_lastSeenPasteboardVersionBit - In the implementation block
@property (retain) NSTimer * remotePboardTimer;                                 //@synthesize remotePboardTimer=_remotePboardTimer - In the implementation block
@property (copy,readonly) NSSet * sfActivityScanners; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)receivedItems;
-(BOOL)receiving;
-(BOOL)addSFActivityScanner:(id)arg1 ;
-(void)setScanningForTypes:(id)arg1 ;
-(BOOL)removeSFActivityScanner:(id)arg1 ;
-(void)lostDeviceWithUUID:(id)arg1 ;
-(void)periodicCleanupFunc;
-(NSSet *)sfActivityScanners;
-(UADispatchScheduler *)periodicCleanup;
-(void)foundDevice:(id)arg1 ;
-(NSSet *)activeDevices;
-(void)lostDevice:(id)arg1 ;
-(void)removeAllFromDevice:(id)arg1 ;
-(SFPeerDevice *)lastSeenPasteboardDevice;
-(void)setLastSeenPasteboardDevice:(SFPeerDevice *)arg1 ;
-(NSTimer *)remotePboardTimer;
-(void)setRemotePboardTimer:(NSTimer *)arg1 ;
-(void)receiveAdvertisement:(id)arg1 scanner:(id)arg2 ;
-(long long)lastSeenPasteboardVersionBit;
-(void)setLastSeenPasteboardVersionBit:(long long)arg1 ;
-(void)clearRemotePasteboardAvalible:(id)arg1 ;
-(id)sharingBTLESuggestedItemForAdvertisementPayload:(id)arg1 forDevice:(id)arg2 ;
-(id)sfActivityScanner;
-(BOOL)forceScanning;
-(void)setForceScanning:(BOOL)arg1 ;
-(BOOL)suspend;
-(BOOL)removeItem:(id)arg1 ;
-(BOOL)active;
-(BOOL)resume;
-(BOOL)_addItem:(id)arg1 ;
-(BOOL)addItem:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(void)activityScanner:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(void)activityScanner:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(void)activityScanner:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(BOOL)terminate;
@end

