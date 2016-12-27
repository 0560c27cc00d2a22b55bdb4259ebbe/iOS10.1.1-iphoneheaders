/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushKeepAliveSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	NSString* _guid;
	unsigned _keepAliveACKDuration;
	int _linkQuality;
	unsigned _nextKeepAliveInterval;
	unsigned _timeSinceLastKeepAlive;
	SCD_Struct_AW11 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                      //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                              //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastKeepAlive; 
@property (assign,nonatomic) unsigned timeSinceLastKeepAlive;              //@synthesize timeSinceLastKeepAlive=_timeSinceLastKeepAlive - In the implementation block
@property (assign,nonatomic) BOOL hasNextKeepAliveInterval; 
@property (assign,nonatomic) unsigned nextKeepAliveInterval;               //@synthesize nextKeepAliveInterval=_nextKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL hasKeepAliveACKDuration; 
@property (assign,nonatomic) unsigned keepAliveACKDuration;                //@synthesize keepAliveACKDuration=_keepAliveACKDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                    //@synthesize dualChannelState=_dualChannelState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
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
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(unsigned)dualChannelState;
-(void)setTimeSinceLastKeepAlive:(unsigned)arg1 ;
-(void)setHasTimeSinceLastKeepAlive:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastKeepAlive;
-(void)setNextKeepAliveInterval:(unsigned)arg1 ;
-(void)setHasNextKeepAliveInterval:(BOOL)arg1 ;
-(BOOL)hasNextKeepAliveInterval;
-(void)setKeepAliveACKDuration:(unsigned)arg1 ;
-(void)setHasKeepAliveACKDuration:(BOOL)arg1 ;
-(BOOL)hasKeepAliveACKDuration;
-(unsigned)timeSinceLastKeepAlive;
-(unsigned)nextKeepAliveInterval;
-(unsigned)keepAliveACKDuration;
@end

