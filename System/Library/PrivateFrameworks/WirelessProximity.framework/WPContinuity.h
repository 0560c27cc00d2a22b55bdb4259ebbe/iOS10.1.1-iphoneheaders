/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPContinuityDelegate;
@class NSMutableDictionary;

@interface WPContinuity : WPClient {

	long long _btBandwidthState;
	id<WPContinuityDelegate> _delegate;
	NSMutableDictionary* _transfers;

}

@property (assign,nonatomic,__weak) id<WPContinuityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long btBandwidthState;                                      //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (retain) NSMutableDictionary * transfers;                                 //@synthesize transfers=_transfers - In the implementation block
+(unsigned char)clientTypeFromContinuityType:(long long)arg1 ;
+(long long)continuityTypeFromClientType:(unsigned char)arg1 ;
-(id)init;
-(void)setDelegate:(id<WPContinuityDelegate>)arg1 ;
-(id<WPContinuityDelegate>)delegate;
-(void)invalidate;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 ;
-(void)setBtBandwidthState:(long long)arg1 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)transfers;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
-(long long)btBandwidthState;
-(void)stopScanningForType:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

