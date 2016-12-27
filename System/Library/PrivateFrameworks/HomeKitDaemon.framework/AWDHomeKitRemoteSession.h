/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitRemoteSession : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _closeReason;
	unsigned _deviceType;
	int _errorCode;
	unsigned _role;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) unsigned deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) unsigned role;                             //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasCloseReason; 
@property (assign,nonatomic) unsigned closeReason;                      //@synthesize closeReason=_closeReason - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)errorCode;
-(void)setDeviceType:(unsigned)arg1 ;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(BOOL)hasDeviceType;
-(void)setRole:(unsigned)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(void)setCloseReason:(unsigned)arg1 ;
-(void)setHasCloseReason:(BOOL)arg1 ;
-(BOOL)hasCloseReason;
-(unsigned)deviceType;
-(unsigned)role;
-(unsigned)closeReason;
@end

