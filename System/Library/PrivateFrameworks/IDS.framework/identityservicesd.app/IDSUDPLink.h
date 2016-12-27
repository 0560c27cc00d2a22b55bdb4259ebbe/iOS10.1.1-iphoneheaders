/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>

@protocol IDSLinkDelegate;
@class IDSSockAddrWrapper, NSDictionary, NSString;

@interface IDSUDPLink : NSObject <IDSLink> {

	int _socket;
	int _addressFamily;
	IDSSockAddrWrapper* _localAddress;
	IDSSockAddrWrapper* _destinationAddress;
	BOOL _hasFixedDestination;
	NSDictionary* _destinationAddressToDeviceIDMap;
	unsigned short _port;
	BOOL _wantsAWDL;
	BOOL _wantsWiFi;
	BOOL _wantsCellular;
	BOOL _needToConnect;
	BOOL _hasTemporaryError;
	BOOL _isInvalidated;
	double _lastDestinationSent;
	double _lastDestinationReceived;
	SCD_Struct_ID11* _incomingPacketBuffer;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;

}

@property (assign) unsigned short port;                                            //@synthesize port=_port - In the implementation block
@property (readonly) int socket;                                                   //@synthesize socket=_socket - In the implementation block
@property (readonly) BOOL isInvalidated;                                           //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (assign) double lastDestinationSent;                                     //@synthesize lastDestinationSent=_lastDestinationSent - In the implementation block
@property (readonly) double lastDestinationReceived;                               //@synthesize lastDestinationReceived=_lastDestinationReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID11*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(id)copyCurrentNetworkInterfaces;
-(BOOL)setDestinationAddress:(id)arg1 isFixedDestination:(BOOL)arg2 fromAddress:(id)arg3 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 destinationAddress:(const sockaddr*)arg3 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)removeSocket;
-(void)_processIncomingPacket;
-(id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 clientUUID:(unsigned char)arg5 ;
-(unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 localInterfaceIndex:(int)arg3 localAddress:(const sockaddr*)arg4 destinationAddress:(const sockaddr*)arg5 trafficClass:(unsigned short)arg6 ;
-(BOOL)setDestinationAddressToDeviceIDMap:(id)arg1 ;
-(void)reconnectWithLocalAddress:(id)arg1 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID11*)arg1 destination:(id)arg2 toDeviceID:(id)arg3 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID11*)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4 ;
-(double)lastDestinationSent;
-(void)setLastDestinationSent:(double)arg1 ;
-(double)lastDestinationReceived;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)invalidate;
-(unsigned short)port;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(BOOL)isInvalidated;
-(void)setPort:(unsigned short)arg1 ;
-(int)socket;
@end

