/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KCellularLteCdrxConfig : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _cdrxConfigStatus;
	unsigned _cellStatus;
	unsigned _drxInactivityMs;
	unsigned _drxRetxTimerMs;
	unsigned _drxShortCycleNum;
	unsigned _longDrxCycleMs;
	unsigned _onDurationMs;
	int _rrcState;
	unsigned _shortDrxCycleMs;
	unsigned _transmissionMode;
	SCD_Struct_KC36 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCellStatus; 
@property (assign,nonatomic) unsigned cellStatus;                       //@synthesize cellStatus=_cellStatus - In the implementation block
@property (assign,nonatomic) BOOL hasOnDurationMs; 
@property (assign,nonatomic) unsigned onDurationMs;                     //@synthesize onDurationMs=_onDurationMs - In the implementation block
@property (assign,nonatomic) BOOL hasDrxInactivityMs; 
@property (assign,nonatomic) unsigned drxInactivityMs;                  //@synthesize drxInactivityMs=_drxInactivityMs - In the implementation block
@property (assign,nonatomic) BOOL hasDrxRetxTimerMs; 
@property (assign,nonatomic) unsigned drxRetxTimerMs;                   //@synthesize drxRetxTimerMs=_drxRetxTimerMs - In the implementation block
@property (assign,nonatomic) BOOL hasLongDrxCycleMs; 
@property (assign,nonatomic) unsigned longDrxCycleMs;                   //@synthesize longDrxCycleMs=_longDrxCycleMs - In the implementation block
@property (assign,nonatomic) BOOL hasShortDrxCycleMs; 
@property (assign,nonatomic) unsigned shortDrxCycleMs;                  //@synthesize shortDrxCycleMs=_shortDrxCycleMs - In the implementation block
@property (assign,nonatomic) BOOL hasDrxShortCycleNum; 
@property (assign,nonatomic) unsigned drxShortCycleNum;                 //@synthesize drxShortCycleNum=_drxShortCycleNum - In the implementation block
@property (assign,nonatomic) BOOL hasRrcState; 
@property (assign,nonatomic) int rrcState;                              //@synthesize rrcState=_rrcState - In the implementation block
@property (assign,nonatomic) BOOL hasCdrxConfigStatus; 
@property (assign,nonatomic) unsigned cdrxConfigStatus;                 //@synthesize cdrxConfigStatus=_cdrxConfigStatus - In the implementation block
@property (assign,nonatomic) BOOL hasTransmissionMode; 
@property (assign,nonatomic) unsigned transmissionMode;                 //@synthesize transmissionMode=_transmissionMode - In the implementation block
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
-(void)setRrcState:(int)arg1 ;
-(void)setHasRrcState:(BOOL)arg1 ;
-(BOOL)hasRrcState;
-(int)rrcState;
-(void)setCellStatus:(unsigned)arg1 ;
-(void)setHasCellStatus:(BOOL)arg1 ;
-(BOOL)hasCellStatus;
-(void)setOnDurationMs:(unsigned)arg1 ;
-(void)setHasOnDurationMs:(BOOL)arg1 ;
-(BOOL)hasOnDurationMs;
-(void)setDrxInactivityMs:(unsigned)arg1 ;
-(void)setHasDrxInactivityMs:(BOOL)arg1 ;
-(BOOL)hasDrxInactivityMs;
-(void)setDrxRetxTimerMs:(unsigned)arg1 ;
-(void)setHasDrxRetxTimerMs:(BOOL)arg1 ;
-(BOOL)hasDrxRetxTimerMs;
-(void)setLongDrxCycleMs:(unsigned)arg1 ;
-(void)setHasLongDrxCycleMs:(BOOL)arg1 ;
-(BOOL)hasLongDrxCycleMs;
-(void)setShortDrxCycleMs:(unsigned)arg1 ;
-(void)setHasShortDrxCycleMs:(BOOL)arg1 ;
-(BOOL)hasShortDrxCycleMs;
-(void)setDrxShortCycleNum:(unsigned)arg1 ;
-(void)setHasDrxShortCycleNum:(BOOL)arg1 ;
-(BOOL)hasDrxShortCycleNum;
-(void)setCdrxConfigStatus:(unsigned)arg1 ;
-(void)setHasCdrxConfigStatus:(BOOL)arg1 ;
-(BOOL)hasCdrxConfigStatus;
-(void)setTransmissionMode:(unsigned)arg1 ;
-(void)setHasTransmissionMode:(BOOL)arg1 ;
-(BOOL)hasTransmissionMode;
-(unsigned)cellStatus;
-(unsigned)onDurationMs;
-(unsigned)drxInactivityMs;
-(unsigned)drxRetxTimerMs;
-(unsigned)longDrxCycleMs;
-(unsigned)shortDrxCycleMs;
-(unsigned)drxShortCycleNum;
-(unsigned)cdrxConfigStatus;
-(unsigned)transmissionMode;
@end

