/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol AXIDCRemoteControllerDelegate;
@class AXIDCPacket, NSNetService, NSMutableArray, NSInputStream, NSOutputStream, NSMutableData, AXIDCMessage, NSString;

@interface AXIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {

	AXIDCPacket* _currentPacket;
	id<AXIDCRemoteControllerDelegate> _delegate;
	NSNetService* _service;
	NSMutableArray* _outputDataQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _inputBuffer;
	AXIDCMessage* _currentMessageInFlight;
	NSMutableData* _outputBuffer;

}

@property (nonatomic,retain) NSMutableData * inputBuffer;                             //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) AXIDCMessage * currentMessageInFlight;                   //@synthesize currentMessageInFlight=_currentMessageInFlight - In the implementation block
@property (nonatomic,retain) NSNetService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDataQueue;                        //@synthesize outputDataQueue=_outputDataQueue - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                             //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                           //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                            //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (assign,nonatomic) id<AXIDCRemoteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)init;
-(void)setDelegate:(id<AXIDCRemoteControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<AXIDCRemoteControllerDelegate>)delegate;
-(id)name;
-(BOOL)isConnected;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(void)acceptConnection:(int)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)setOutputDataQueue:(NSMutableArray *)arg1 ;
-(void)setInputBuffer:(NSMutableData *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSOutputStream *)outputStream;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setCurrentMessageInFlight:(AXIDCMessage *)arg1 ;
-(void)setupStream:(id)arg1 ;
-(void)setSecuritySettingsForStream:(id)arg1 ;
-(NSMutableArray *)outputDataQueue;
-(void)finishedSending:(id)arg1 ;
-(id)nextMessageInQueue;
-(void)enqueueData:(id)arg1 ;
-(void)didCommunicate;
-(AXIDCMessage *)currentMessageInFlight;
-(NSMutableData *)outputBuffer;
-(void)sendDataChunk;
-(BOOL)outputStreamReady;
-(void)messageWasAcked:(id)arg1 ;
-(void)clearMessageQueue;
-(BOOL)sendObject:(id)arg1 ;
-(NSMutableData *)inputBuffer;
-(BOOL)isConnecting;
-(void)resetConnection;
-(id)initWithService:(id)arg1 ;
-(void)setService:(NSNetService *)arg1 ;
-(NSNetService *)service;
-(NSInputStream *)inputStream;
@end

