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

@interface KCellularLtePagingCycle : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _earfcn;
	unsigned _nbMs;
	unsigned _pagingCycleMs;
	unsigned _phyCellId;
	SCD_Struct_PS9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEarfcn; 
@property (assign,nonatomic) unsigned earfcn;                           //@synthesize earfcn=_earfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPhyCellId; 
@property (assign,nonatomic) unsigned phyCellId;                        //@synthesize phyCellId=_phyCellId - In the implementation block
@property (assign,nonatomic) BOOL hasNbMs; 
@property (assign,nonatomic) unsigned nbMs;                             //@synthesize nbMs=_nbMs - In the implementation block
@property (assign,nonatomic) BOOL hasPagingCycleMs; 
@property (assign,nonatomic) unsigned pagingCycleMs;                    //@synthesize pagingCycleMs=_pagingCycleMs - In the implementation block
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
-(void)setEarfcn:(unsigned)arg1 ;
-(void)setHasEarfcn:(BOOL)arg1 ;
-(BOOL)hasEarfcn;
-(void)setPhyCellId:(unsigned)arg1 ;
-(void)setHasPhyCellId:(BOOL)arg1 ;
-(BOOL)hasPhyCellId;
-(void)setNbMs:(unsigned)arg1 ;
-(void)setHasNbMs:(BOOL)arg1 ;
-(BOOL)hasNbMs;
-(void)setPagingCycleMs:(unsigned)arg1 ;
-(void)setHasPagingCycleMs:(BOOL)arg1 ;
-(BOOL)hasPagingCycleMs;
-(unsigned)earfcn;
-(unsigned)phyCellId;
-(unsigned)nbMs;
-(unsigned)pagingCycleMs;
@end

