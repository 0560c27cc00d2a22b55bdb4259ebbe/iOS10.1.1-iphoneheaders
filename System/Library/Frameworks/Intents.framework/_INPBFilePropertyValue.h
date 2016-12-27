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

@class PBUnknownFields, _INPBDateTimeRange, _INPBContact, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBDateTimeRange* _dateTime;
	int _fileType;
	_INPBContact* _person;
	_INPBLong* _quantity;
	_INPBString* _value;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasPerson; 
@property (nonatomic,retain) _INPBContact * person;                          //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) BOOL hasDateTime; 
@property (nonatomic,retain) _INPBDateTimeRange * dateTime;                  //@synthesize dateTime=_dateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBString * value;                            //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasFileType; 
@property (assign,nonatomic) int fileType;                                   //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantity; 
@property (nonatomic,retain) _INPBLong * quantity;                           //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(void)setQuantity:(_INPBLong *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_INPBString *)value;
-(void)setValue:(_INPBString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)fileType;
-(void)setFileType:(int)arg1 ;
-(void)setPerson:(_INPBContact *)arg1 ;
-(_INPBContact *)person;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasValue;
-(_INPBLong *)quantity;
-(BOOL)hasDateTime;
-(void)setDateTime:(_INPBDateTimeRange *)arg1 ;
-(BOOL)hasPerson;
-(void)setHasFileType:(BOOL)arg1 ;
-(BOOL)hasFileType;
-(BOOL)hasQuantity;
-(_INPBDateTimeRange *)dateTime;
@end

