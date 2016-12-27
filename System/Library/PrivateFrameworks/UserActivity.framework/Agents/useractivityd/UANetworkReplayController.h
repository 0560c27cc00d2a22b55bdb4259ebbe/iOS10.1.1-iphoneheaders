/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAActivityReplay.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSMutableData, NSString, NSUUID;

@interface UANetworkReplayController : UAActivityReplay <NSStreamDelegate> {

	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _readBuffer;
	NSMutableData* _writeBuffer;
	NSString* _peerName;
	NSUUID* _peerUUID;

}

@property (retain) NSInputStream * inputStream;                     //@synthesize inputStream=_inputStream - In the implementation block
@property (retain) NSOutputStream * outputStream;                   //@synthesize outputStream=_outputStream - In the implementation block
@property (retain) NSMutableData * readBuffer;                      //@synthesize readBuffer=_readBuffer - In the implementation block
@property (retain) NSMutableData * writeBuffer;                     //@synthesize writeBuffer=_writeBuffer - In the implementation block
@property (copy) NSString * peerName;                               //@synthesize peerName=_peerName - In the implementation block
@property (copy) NSUUID * peerUUID;                                 //@synthesize peerUUID=_peerUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)createConnection:(id)arg1 host:(id)arg2 port:(long long)arg3 ;
-(BOOL)processCommand:(id)arg1 ;
-(id)initWithManager:(id)arg1 service:(id)arg2 ;
-(id)initWithManager:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 name:(id)arg4 ;
-(void)setPeerName:(NSString *)arg1 ;
-(NSString *)peerName;
-(NSMutableData *)writeBuffer;
-(void)setWriteBuffer:(NSMutableData *)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)sendResponse:(id)arg1 ;
-(NSMutableData *)readBuffer;
-(void)setReadBuffer:(NSMutableData *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSOutputStream *)outputStream;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(id)statusString;
-(BOOL)terminate;
-(NSInputStream *)inputStream;
@end

