/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOListResultItem : PBCodable <NSCopying> {

	unsigned long long _businessId;
	long long _latency;
	int _resultType;
	int _tappedCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_LO18 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible;                      //@synthesize initiallyVisible=_initiallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible;                     //@synthesize eventuallyVisible=_eventuallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) long long latency;                          //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL hasTappedCount; 
@property (assign,nonatomic) int tappedCount;                            //@synthesize tappedCount=_tappedCount - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessId; 
@property (assign,nonatomic) unsigned long long businessId;              //@synthesize businessId=_businessId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(long long)latency;
-(void)setLatency:(long long)arg1 ;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(int)tappedCount;
-(void)setTappedCount:(int)arg1 ;
-(void)setHasTappedCount:(BOOL)arg1 ;
-(BOOL)hasTappedCount;
-(void)setBusinessId:(unsigned long long)arg1 ;
-(void)setHasBusinessId:(BOOL)arg1 ;
-(BOOL)hasBusinessId;
-(BOOL)initiallyVisible;
-(BOOL)eventuallyVisible;
-(unsigned long long)businessId;
-(void)setResultType:(int)arg1 ;
@end

