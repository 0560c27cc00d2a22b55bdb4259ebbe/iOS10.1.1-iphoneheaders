/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	BOOL inputAvailable;
	BOOL outputAvailable;
	BOOL online;
	BOOL available;
	BOOL changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) BOOL inputAvailable; 
@property (assign) BOOL outputAvailable; 
@property (getter=isOnline) BOOL online; 
@property (getter=isChangingState) BOOL changingState; 
@property (getter=isAvailable) BOOL available; 
-(BOOL)canConnect;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)connect;
-(BOOL)disconnect;
-(NSString *)uuid;
-(BOOL)hidden;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
-(void)setLastSeen:(double)arg1 ;
-(BOOL)isChangingState;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(BOOL)arg1 ;
-(void)setOutputAvailable:(BOOL)arg1 ;
-(BOOL)updateAvailableStateChanged;
-(void)setChangingState:(BOOL)arg1 ;
-(double)lastSeen;
-(CBPeripheral *)peripheral;
-(BOOL)isOnline;
-(void)setOnline:(BOOL)arg1 ;
@end

