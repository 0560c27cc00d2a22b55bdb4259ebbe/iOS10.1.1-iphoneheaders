/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@interface _INPBLocalizedProject : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBAppNames* _appNames;
	_INPBIntentVocabulary* _intentVocabulary;
	_INPBLanguageTag* _language;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) _INPBLanguageTag * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasAppNames; 
@property (nonatomic,retain) _INPBAppNames * appNames;                              //@synthesize appNames=_appNames - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentVocabulary; 
@property (nonatomic,retain) _INPBIntentVocabulary * intentVocabulary;              //@synthesize intentVocabulary=_intentVocabulary - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBLanguageTag *)language;
-(void)setLanguage:(_INPBLanguageTag *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLanguage;
-(void)setAppNames:(_INPBAppNames *)arg1 ;
-(void)setIntentVocabulary:(_INPBIntentVocabulary *)arg1 ;
-(BOOL)hasAppNames;
-(BOOL)hasIntentVocabulary;
-(_INPBAppNames *)appNames;
-(_INPBIntentVocabulary *)intentVocabulary;
@end

