/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _localNetworkConnection;
	unsigned _onLockScreen;
	unsigned _relayConnectDuration;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                      //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                            //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                       //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                        //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                 //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                         //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setHasRemoteNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasRemoteNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setHasLocalNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasLocalNetworkConnection;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setHasUsesRelay:(BOOL)arg1 ;
-(BOOL)hasUsesRelay;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setHasCurrentNatType:(BOOL)arg1 ;
-(BOOL)hasCurrentNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setHasRemoteNatType:(BOOL)arg1 ;
-(BOOL)hasRemoteNatType;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasRelayConnectDuration:(BOOL)arg1 ;
-(BOOL)hasRelayConnectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(unsigned)relayConnectDuration;
-(void)setIsVideo:(unsigned)arg1 ;
-(unsigned)connectDuration;
-(void)setConnectDuration:(unsigned)arg1 ;
@end

