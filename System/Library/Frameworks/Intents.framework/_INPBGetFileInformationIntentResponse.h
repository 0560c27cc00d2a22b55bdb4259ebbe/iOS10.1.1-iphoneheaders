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

@class PBUnknownFields, _INPBString, _INPBFileProperty;

@interface _INPBGetFileInformationIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _entityName;
	_INPBFileProperty* _property;
	BOOL _success;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasProperty; 
@property (nonatomic,retain) _INPBFileProperty * property;                   //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setProperty:(_INPBFileProperty *)arg1 ;
-(BOOL)hasProperty;
-(void)setSuccess:(BOOL)arg1 ;
-(_INPBFileProperty *)property;
-(_INPBString *)entityName;
-(BOOL)success;
-(void)setEntityName:(_INPBString *)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasEntityName;
@end

