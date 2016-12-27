/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PStat : PBCodable <NSCopying> {

	unsigned _activeDurMs;
	unsigned _ident;
	unsigned _inactiveDurMs;
	unsigned _sleepBlockCount;
	unsigned _toActiveCount;
	SCD_Struct_PS9 _has;

}

@property (assign,nonatomic) BOOL hasIdent; 
@property (assign,nonatomic) unsigned ident;                        //@synthesize ident=_ident - In the implementation block
@property (assign,nonatomic) BOOL hasActiveDurMs; 
@property (assign,nonatomic) unsigned activeDurMs;                  //@synthesize activeDurMs=_activeDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasInactiveDurMs; 
@property (assign,nonatomic) unsigned inactiveDurMs;                //@synthesize inactiveDurMs=_inactiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasToActiveCount; 
@property (assign,nonatomic) unsigned toActiveCount;                //@synthesize toActiveCount=_toActiveCount - In the implementation block
@property (assign,nonatomic) BOOL hasSleepBlockCount; 
@property (assign,nonatomic) unsigned sleepBlockCount;              //@synthesize sleepBlockCount=_sleepBlockCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIdent:(unsigned)arg1 ;
-(void)setHasIdent:(BOOL)arg1 ;
-(BOOL)hasIdent;
-(void)setActiveDurMs:(unsigned)arg1 ;
-(void)setHasActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasActiveDurMs;
-(void)setInactiveDurMs:(unsigned)arg1 ;
-(void)setHasInactiveDurMs:(BOOL)arg1 ;
-(BOOL)hasInactiveDurMs;
-(void)setToActiveCount:(unsigned)arg1 ;
-(void)setHasToActiveCount:(BOOL)arg1 ;
-(BOOL)hasToActiveCount;
-(void)setSleepBlockCount:(unsigned)arg1 ;
-(void)setHasSleepBlockCount:(BOOL)arg1 ;
-(BOOL)hasSleepBlockCount;
-(unsigned)ident;
-(unsigned)activeDurMs;
-(unsigned)inactiveDurMs;
-(unsigned)toActiveCount;
-(unsigned)sleepBlockCount;
@end

