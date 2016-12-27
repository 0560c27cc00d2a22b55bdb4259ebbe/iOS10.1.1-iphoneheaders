/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {

	int _entryStandardDeviation;
	int _exitStandardDeviation;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasEntryStandardDeviation; 
@property (assign,nonatomic) int entryStandardDeviation;                  //@synthesize entryStandardDeviation=_entryStandardDeviation - In the implementation block
@property (assign,nonatomic) BOOL hasExitStandardDeviation; 
@property (assign,nonatomic) int exitStandardDeviation;                   //@synthesize exitStandardDeviation=_exitStandardDeviation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEntryStandardDeviation:(int)arg1 ;
-(void)setHasEntryStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasEntryStandardDeviation;
-(void)setExitStandardDeviation:(int)arg1 ;
-(void)setHasExitStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasExitStandardDeviation;
-(int)entryStandardDeviation;
-(int)exitStandardDeviation;
@end

