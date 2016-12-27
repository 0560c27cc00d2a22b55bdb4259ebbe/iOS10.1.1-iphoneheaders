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

@interface KCellularCellPlmnSearchCount : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _durationMs;
	unsigned _gsmSearchCount;
	unsigned _lteSearchCount;
	unsigned _tdscdmaSearchCount;
	unsigned _umtsSearchCount;
	SCD_Struct_KC18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs;                       //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasGsmSearchCount; 
@property (assign,nonatomic) unsigned gsmSearchCount;                   //@synthesize gsmSearchCount=_gsmSearchCount - In the implementation block
@property (assign,nonatomic) BOOL hasUmtsSearchCount; 
@property (assign,nonatomic) unsigned umtsSearchCount;                  //@synthesize umtsSearchCount=_umtsSearchCount - In the implementation block
@property (assign,nonatomic) BOOL hasTdscdmaSearchCount; 
@property (assign,nonatomic) unsigned tdscdmaSearchCount;               //@synthesize tdscdmaSearchCount=_tdscdmaSearchCount - In the implementation block
@property (assign,nonatomic) BOOL hasLteSearchCount; 
@property (assign,nonatomic) unsigned lteSearchCount;                   //@synthesize lteSearchCount=_lteSearchCount - In the implementation block
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
-(void)setGsmSearchCount:(unsigned)arg1 ;
-(void)setHasGsmSearchCount:(BOOL)arg1 ;
-(BOOL)hasGsmSearchCount;
-(void)setUmtsSearchCount:(unsigned)arg1 ;
-(void)setHasUmtsSearchCount:(BOOL)arg1 ;
-(BOOL)hasUmtsSearchCount;
-(void)setTdscdmaSearchCount:(unsigned)arg1 ;
-(void)setHasTdscdmaSearchCount:(BOOL)arg1 ;
-(BOOL)hasTdscdmaSearchCount;
-(void)setLteSearchCount:(unsigned)arg1 ;
-(void)setHasLteSearchCount:(BOOL)arg1 ;
-(BOOL)hasLteSearchCount;
-(unsigned)gsmSearchCount;
-(unsigned)umtsSearchCount;
-(unsigned)tdscdmaSearchCount;
-(unsigned)lteSearchCount;
-(void)setDurationMs:(unsigned)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(unsigned)durationMs;
@end

