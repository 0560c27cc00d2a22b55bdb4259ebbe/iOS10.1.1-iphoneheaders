/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {

	double _progress;
	unsigned _state;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) double progress;               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double)progress;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)setHasProgress:(BOOL)arg1 ;
-(BOOL)hasProgress;
@end

