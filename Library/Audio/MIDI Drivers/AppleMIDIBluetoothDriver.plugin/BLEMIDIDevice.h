/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBPeripheral, BLEMIDIDataReceiver, NSString;

@interface BLEMIDIDevice : NSObject {

	CBPeripheral* peripheral;
	unsigned dev;
	unsigned inEndpoint;
	unsigned outEndpoint;
	BLEMIDIDataReceiver* dataReceiver;
	int usage;
	NSString* uuid;

}

@property (nonatomic,retain) CBPeripheral * peripheral; 
@property (assign,nonatomic) unsigned dev; 
@property (assign,nonatomic) unsigned inEndpoint; 
@property (assign,nonatomic) unsigned outEndpoint; 
@property (assign,nonatomic) BLEMIDIDataReceiver * dataReceiver; 
@property (assign,nonatomic) int usage; 
@property (assign,nonatomic) NSString * uuid; 
-(void)setDev:(unsigned)arg1 ;
-(void)setDataReceiver:(BLEMIDIDataReceiver *)arg1 ;
-(void)setInEndpoint:(unsigned)arg1 ;
-(void)setOutEndpoint:(unsigned)arg1 ;
-(BLEMIDIDataReceiver *)dataReceiver;
-(unsigned)outEndpoint;
-(unsigned)dev;
-(unsigned)inEndpoint;
-(id)init;
-(void)dealloc;
-(int)usage;
-(void)setUsage:(int)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setUUID:(char*)arg1 ;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
@end

