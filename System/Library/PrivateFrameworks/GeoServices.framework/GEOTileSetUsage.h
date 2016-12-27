/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileSetUsage : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
@end

