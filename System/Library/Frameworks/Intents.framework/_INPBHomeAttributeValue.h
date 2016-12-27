/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBDouble, _INPBString;

@interface _INPBHomeAttributeValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBDouble* _doubleValue;
	_INPBString* _stringValue;
	int _valueType;
	BOOL _booleanValue;
	SCD_Struct_IN3 _has;

}

@property (assign,nonatomic) BOOL hasValueType; 
@property (assign,nonatomic) int valueType;                                  //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) BOOL hasBooleanValue; 
@property (assign,nonatomic) BOOL booleanValue;                              //@synthesize booleanValue=_booleanValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDoubleValue; 
@property (nonatomic,retain) _INPBDouble * doubleValue;                      //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) _INPBString * stringValue;                      //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_INPBDouble *)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_INPBString *)stringValue;
-(void)setStringValue:(_INPBString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStringValue;
-(int)valueType;
-(void)setDoubleValue:(_INPBDouble *)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)booleanValue;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(BOOL)hasBooleanValue;
-(void)setBooleanValue:(BOOL)arg1 ;
-(void)setHasBooleanValue:(BOOL)arg1 ;
-(void)setHasValueType:(BOOL)arg1 ;
@end

