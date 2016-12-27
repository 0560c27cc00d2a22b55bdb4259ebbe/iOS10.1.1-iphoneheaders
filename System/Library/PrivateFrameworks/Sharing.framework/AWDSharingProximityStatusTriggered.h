/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingProximityStatusTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioSourceCount;
	unsigned _audioState;
	unsigned _caseBatteryLevel;
	unsigned _caseBatteryPercent;
	unsigned _deviceRole;
	unsigned _deviceSide;
	NSString* _model;
	unsigned _myBatteryLevel;
	unsigned _myBatteryPercent;
	unsigned _otherBatteryLevel;
	unsigned _otherBatteryPercent;
	unsigned _primaryLocation;
	int _rssi;
	unsigned _secondaryLocation;
	NSString* _sessionUUID;
	int _smoothedRSSI;
	BOOL _caseBatteryCharging;
	BOOL _myBatteryCharging;
	BOOL _otherBatteryCharging;
	BOOL _otherDeviceInCase;
	BOOL _outOfBoxMode;
	BOOL _paired;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRSSI; 
@property (assign,nonatomic) int smoothedRSSI;                          //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryLocation; 
@property (assign,nonatomic) unsigned primaryLocation;                  //@synthesize primaryLocation=_primaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryLocation; 
@property (assign,nonatomic) unsigned secondaryLocation;                //@synthesize secondaryLocation=_secondaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceSide; 
@property (assign,nonatomic) unsigned deviceSide;                       //@synthesize deviceSide=_deviceSide - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceRole; 
@property (assign,nonatomic) unsigned deviceRole;                       //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfBoxMode; 
@property (assign,nonatomic) BOOL outOfBoxMode;                         //@synthesize outOfBoxMode=_outOfBoxMode - In the implementation block
@property (assign,nonatomic) BOOL hasMyBatteryPercent; 
@property (assign,nonatomic) unsigned myBatteryPercent;                 //@synthesize myBatteryPercent=_myBatteryPercent - In the implementation block
@property (assign,nonatomic) BOOL hasOtherBatteryPercent; 
@property (assign,nonatomic) unsigned otherBatteryPercent;              //@synthesize otherBatteryPercent=_otherBatteryPercent - In the implementation block
@property (assign,nonatomic) BOOL hasCaseBatteryPercent; 
@property (assign,nonatomic) unsigned caseBatteryPercent;               //@synthesize caseBatteryPercent=_caseBatteryPercent - In the implementation block
@property (assign,nonatomic) BOOL hasAudioState; 
@property (assign,nonatomic) unsigned audioState;                       //@synthesize audioState=_audioState - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSourceCount; 
@property (assign,nonatomic) unsigned audioSourceCount;                 //@synthesize audioSourceCount=_audioSourceCount - In the implementation block
@property (assign,nonatomic) BOOL hasOtherDeviceInCase; 
@property (assign,nonatomic) BOOL otherDeviceInCase;                    //@synthesize otherDeviceInCase=_otherDeviceInCase - In the implementation block
@property (assign,nonatomic) BOOL hasMyBatteryLevel; 
@property (assign,nonatomic) unsigned myBatteryLevel;                   //@synthesize myBatteryLevel=_myBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMyBatteryCharging; 
@property (assign,nonatomic) BOOL myBatteryCharging;                    //@synthesize myBatteryCharging=_myBatteryCharging - In the implementation block
@property (assign,nonatomic) BOOL hasOtherBatteryLevel; 
@property (assign,nonatomic) unsigned otherBatteryLevel;                //@synthesize otherBatteryLevel=_otherBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL hasOtherBatteryCharging; 
@property (assign,nonatomic) BOOL otherBatteryCharging;                 //@synthesize otherBatteryCharging=_otherBatteryCharging - In the implementation block
@property (assign,nonatomic) BOOL hasCaseBatteryLevel; 
@property (assign,nonatomic) unsigned caseBatteryLevel;                 //@synthesize caseBatteryLevel=_caseBatteryLevel - In the implementation block
@property (assign,nonatomic) BOOL hasCaseBatteryCharging; 
@property (assign,nonatomic) BOOL caseBatteryCharging;                  //@synthesize caseBatteryCharging=_caseBatteryCharging - In the implementation block
@property (assign,nonatomic) BOOL hasPaired; 
@property (assign,nonatomic) BOOL paired;                               //@synthesize paired=_paired - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasModel;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(void)setModel:(NSString *)arg1 ;
-(unsigned)deviceRole;
-(void)setDeviceRole:(unsigned)arg1 ;
-(void)setSmoothedRSSI:(int)arg1 ;
-(void)setHasSmoothedRSSI:(BOOL)arg1 ;
-(BOOL)hasSmoothedRSSI;
-(int)smoothedRSSI;
-(void)setPrimaryLocation:(unsigned)arg1 ;
-(void)setHasPrimaryLocation:(BOOL)arg1 ;
-(BOOL)hasPrimaryLocation;
-(void)setSecondaryLocation:(unsigned)arg1 ;
-(void)setHasSecondaryLocation:(BOOL)arg1 ;
-(BOOL)hasSecondaryLocation;
-(void)setDeviceSide:(unsigned)arg1 ;
-(void)setHasDeviceSide:(BOOL)arg1 ;
-(BOOL)hasDeviceSide;
-(void)setHasDeviceRole:(BOOL)arg1 ;
-(BOOL)hasDeviceRole;
-(void)setOutOfBoxMode:(BOOL)arg1 ;
-(void)setHasOutOfBoxMode:(BOOL)arg1 ;
-(BOOL)hasOutOfBoxMode;
-(unsigned)primaryLocation;
-(unsigned)secondaryLocation;
-(unsigned)deviceSide;
-(BOOL)outOfBoxMode;
-(void)setMyBatteryPercent:(unsigned)arg1 ;
-(void)setHasMyBatteryPercent:(BOOL)arg1 ;
-(BOOL)hasMyBatteryPercent;
-(void)setOtherBatteryPercent:(unsigned)arg1 ;
-(void)setHasOtherBatteryPercent:(BOOL)arg1 ;
-(BOOL)hasOtherBatteryPercent;
-(void)setCaseBatteryPercent:(unsigned)arg1 ;
-(void)setHasCaseBatteryPercent:(BOOL)arg1 ;
-(BOOL)hasCaseBatteryPercent;
-(void)setHasAudioState:(BOOL)arg1 ;
-(BOOL)hasAudioState;
-(void)setAudioSourceCount:(unsigned)arg1 ;
-(void)setHasAudioSourceCount:(BOOL)arg1 ;
-(BOOL)hasAudioSourceCount;
-(void)setOtherDeviceInCase:(BOOL)arg1 ;
-(void)setHasOtherDeviceInCase:(BOOL)arg1 ;
-(BOOL)hasOtherDeviceInCase;
-(void)setMyBatteryLevel:(unsigned)arg1 ;
-(void)setHasMyBatteryLevel:(BOOL)arg1 ;
-(BOOL)hasMyBatteryLevel;
-(void)setMyBatteryCharging:(BOOL)arg1 ;
-(void)setHasMyBatteryCharging:(BOOL)arg1 ;
-(BOOL)hasMyBatteryCharging;
-(void)setOtherBatteryLevel:(unsigned)arg1 ;
-(void)setHasOtherBatteryLevel:(BOOL)arg1 ;
-(BOOL)hasOtherBatteryLevel;
-(void)setOtherBatteryCharging:(BOOL)arg1 ;
-(void)setHasOtherBatteryCharging:(BOOL)arg1 ;
-(BOOL)hasOtherBatteryCharging;
-(void)setCaseBatteryLevel:(unsigned)arg1 ;
-(void)setHasCaseBatteryLevel:(BOOL)arg1 ;
-(BOOL)hasCaseBatteryLevel;
-(void)setCaseBatteryCharging:(BOOL)arg1 ;
-(void)setHasCaseBatteryCharging:(BOOL)arg1 ;
-(BOOL)hasCaseBatteryCharging;
-(void)setHasPaired:(BOOL)arg1 ;
-(BOOL)hasPaired;
-(unsigned)myBatteryPercent;
-(unsigned)otherBatteryPercent;
-(unsigned)caseBatteryPercent;
-(unsigned)audioSourceCount;
-(BOOL)otherDeviceInCase;
-(unsigned)myBatteryLevel;
-(BOOL)myBatteryCharging;
-(unsigned)otherBatteryLevel;
-(BOOL)otherBatteryCharging;
-(unsigned)caseBatteryLevel;
-(BOOL)caseBatteryCharging;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setPaired:(BOOL)arg1 ;
-(unsigned)audioState;
-(void)setAudioState:(unsigned)arg1 ;
-(BOOL)paired;
@end

