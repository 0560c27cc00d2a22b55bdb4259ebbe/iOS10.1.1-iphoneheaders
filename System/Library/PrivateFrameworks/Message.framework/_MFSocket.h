/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSCondition, MFStream, NSString, NSInvocation, NSArray, NSData;

@interface _MFSocket : NSObject {

	NSCondition* _condition;
	MFStream* _stream;
	NSString* _protocol;
	NSString* _host;
	NSString* _service;
	CFStringRef _connectionServiceType;
	NSInvocation* _eventHandler;
	NSArray* _clientCertificates;
	int _lowThroughputCounter;
	int _numTimeoutSecs;
	BOOL _allowsTrustPrompt;
	BOOL _usesOpportunisticSockets;
	BOOL _socketCanRead;
	BOOL _socketCanWrite;
	BOOL _disableEphemeralDiffieHellmanCiphers;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) int timeout;                                             //@synthesize numTimeoutSecs=_numTimeoutSecs - In the implementation block
@property (assign,nonatomic) BOOL allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
@property (assign,nonatomic) BOOL usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;               //@synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                            //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * serverCertificates; 
@property (nonatomic,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) unsigned remotePortNumber; 
@property (nonatomic,readonly) NSData * sourceIPAddress; 
@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isValid; 
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)setTimeout:(int)arg1 ;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(BOOL)isCellularConnection;
-(void)setConnectionServiceType:(CFStringRef)arg1 ;
-(BOOL)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(BOOL)arg1 ;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(id)securityProtocol;
-(BOOL)setSecurityProtocol:(id)arg1 ;
-(NSString *)remoteHostname;
-(NSData *)sourceIPAddress;
-(BOOL)_certificateIsTrustedForAccount:(id)arg1 ;
-(void)_setCertificateIsTrusted:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)_waitForSocketOpenAndFlag:(BOOL*)arg1 ;
-(BOOL)_evaluateTrust:(SecTrustRef)arg1 errorPtr:(id*)arg2 ;
-(id)_negotiatedProtocolVersion;
-(BOOL)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id*)arg2 ;
-(unsigned)_bufferedByteCount;
-(NSArray *)serverCertificates;
-(BOOL)connectToHost:(id)arg1 withPort:(unsigned)arg2 service:(id)arg3 ;
-(long long)writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(long long)readBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned)remotePortNumber;
-(BOOL)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(BOOL)arg1 ;
-(BOOL)disableEphemeralDiffieHellmanCiphers;
-(void)setDisableEphemeralDiffieHellmanCiphers:(BOOL)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(int)timeout;
-(BOOL)isWritable;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isReadable;
-(void)abort;
@end

