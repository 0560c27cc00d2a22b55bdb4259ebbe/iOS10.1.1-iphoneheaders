/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOABConfigValue;

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _abConfigKey;
	GEOABConfigValue* _abConfigValue;
	int _abConfigValueType;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasAbConfigKey; 
@property (nonatomic,retain) NSString * abConfigKey;                         //@synthesize abConfigKey=_abConfigKey - In the implementation block
@property (assign,nonatomic) BOOL hasAbConfigValueType; 
@property (assign,nonatomic) int abConfigValueType;                          //@synthesize abConfigValueType=_abConfigValueType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbConfigValue; 
@property (nonatomic,retain) GEOABConfigValue * abConfigValue;               //@synthesize abConfigValue=_abConfigValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasAbConfigKey;
-(int)abConfigValueType;
-(void)setAbConfigValueType:(int)arg1 ;
-(void)setHasAbConfigValueType:(BOOL)arg1 ;
-(BOOL)hasAbConfigValueType;
-(id)abConfigValueTypeAsString:(int)arg1 ;
-(int)StringAsAbConfigValueType:(id)arg1 ;
-(BOOL)hasAbConfigValue;
-(NSString *)abConfigKey;
-(void)setAbConfigKey:(NSString *)arg1 ;
-(GEOABConfigValue *)abConfigValue;
-(void)setAbConfigValue:(GEOABConfigValue *)arg1 ;
@end

