/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBSelectionItem, NSString;

@interface _INPBRefinementItem : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBSelectionItem* _item;
	NSString* _subKeyPath;

}

@property (nonatomic,readonly) BOOL hasSubKeyPath; 
@property (nonatomic,retain) NSString * subKeyPath;                          //@synthesize subKeyPath=_subKeyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasItem; 
@property (nonatomic,retain) _INPBSelectionItem * item;                      //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_INPBSelectionItem *)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(_INPBSelectionItem *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSubKeyPath:(NSString *)arg1 ;
-(BOOL)hasSubKeyPath;
-(BOOL)hasItem;
-(NSString *)subKeyPath;
@end

