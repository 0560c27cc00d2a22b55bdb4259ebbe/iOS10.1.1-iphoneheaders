/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ImageCapture/ImageCapture-Structs.h>
@class PTPTCPIPTransport, NSTimer, NSObject, NSMutableData;

@interface PTPTCPIPConnection : NSObject {

	PTPTCPIPTransport* _transport;
	NSTimer* _inactivityTimer;
	NSTimer* _receiveTimer;
	NSTimer* _transmitTimer;
	CFReadStreamRef _inStream;
	CFWriteStreamRef _outStream;
	NSObject*<OS_dispatch_semaphore> _receiveBufferSemaphore;
	NSMutableData* _recieveBuffer;
	unsigned _bytesReceived;
	NSObject*<OS_dispatch_semaphore> _transmitBufferSemaphore;
	NSMutableData* _transmitBuffer;
	unsigned _bytesSent;

}
-(void)dealloc;
-(void)close;
-(BOOL)open;
-(BOOL)writeData:(id)arg1 ;
-(void)handleCanAcceptBytes;
-(void)handleErrorOccurred:(SCD_Struct_PT2)arg1 ;
-(id)initWithNativeSocket:(int)arg1 transport:(id)arg2 ;
-(id)initWithSocketToHost:(id)arg1 port:(unsigned)arg2 transport:(id)arg3 ;
-(void)handleHasBytesAvailable;
-(void)handleEndEncountered;
-(void)inactivityTimerCallBack:(id)arg1 ;
@end

