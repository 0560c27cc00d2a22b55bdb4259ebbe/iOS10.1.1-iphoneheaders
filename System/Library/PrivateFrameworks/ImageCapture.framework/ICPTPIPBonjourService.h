/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPBonjourService : NSObject {

	id _bonjourServiceProperties;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)releaseNetService;
-(void)releaseSocket;
-(CFNetServiceRef)publishedService;
-(BOOL)createSocket;
-(BOOL)createAndPublishNetService;
-(id)clientForAddress:(CFDataRef)arg1 ;
-(int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2 ;
-(int)createPTPDIPInstanceWithAddress:(CFDataRef)arg1 fileDescriptor:(int)arg2 ;
-(id)clientForPID:(unsigned long long)arg1 ;
-(id)initWithHostPort:(unsigned)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 ;
-(void)dispatchConnectionFromSocket:(int)arg1 withAddress:(CFDataRef)arg2 ;
-(int)destroyPTPDIPInstance:(id)arg1 ;
-(int)numClients;
-(void)clientTerminated:(id)arg1 ;
-(void)handleNetServiceError:(SCD_Struct_PT2*)arg1 ;
-(void)unlockDeviceForClient:(id)arg1 ;
-(void)disconnectClient:(id)arg1 ;
-(BOOL)startService;
@end

