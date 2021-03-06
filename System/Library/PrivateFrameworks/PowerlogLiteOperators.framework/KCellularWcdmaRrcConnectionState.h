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

@interface KCellularWcdmaRrcConnectionState : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _establishmentCause;
	int _releaseCause;
	int _state;
	SCD_Struct_KC10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasEstablishmentCause; 
@property (assign,nonatomic) int establishmentCause;                    //@synthesize establishmentCause=_establishmentCause - In the implementation block
@property (assign,nonatomic) BOOL hasReleaseCause; 
@property (assign,nonatomic) int releaseCause;                          //@synthesize releaseCause=_releaseCause - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)establishmentCause;
-(void)setEstablishmentCause:(int)arg1 ;
-(void)setHasEstablishmentCause:(BOOL)arg1 ;
-(BOOL)hasEstablishmentCause;
-(int)releaseCause;
-(void)setReleaseCause:(int)arg1 ;
-(void)setHasReleaseCause:(BOOL)arg1 ;
-(BOOL)hasReleaseCause;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
@end

