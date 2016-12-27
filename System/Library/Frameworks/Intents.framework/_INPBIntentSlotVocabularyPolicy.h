/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _intentSlotNames;
	NSMutableArray* _intentSlotVocabularyConcepts;

}

@property (nonatomic,retain) NSMutableArray * intentSlotNames;                           //@synthesize intentSlotNames=_intentSlotNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * intentSlotVocabularyConcepts;              //@synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)intentSlotNamesType;
+(Class)intentSlotVocabularyConceptsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addIntentSlotNames:(id)arg1 ;
-(void)addIntentSlotVocabularyConcepts:(id)arg1 ;
-(void)clearIntentSlotNames;
-(unsigned long long)intentSlotNamesCount;
-(id)intentSlotNamesAtIndex:(unsigned long long)arg1 ;
-(void)clearIntentSlotVocabularyConcepts;
-(unsigned long long)intentSlotVocabularyConceptsCount;
-(id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)intentSlotNames;
-(void)setIntentSlotNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)intentSlotVocabularyConcepts;
-(void)setIntentSlotVocabularyConcepts:(NSMutableArray *)arg1 ;
@end

