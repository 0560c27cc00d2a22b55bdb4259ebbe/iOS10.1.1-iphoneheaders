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

@class NSString;

@interface AWDCoreRoutineMagicalMomentsFeatureAddon : PBCodable <NSCopying> {

	NSString* _name;
	int _value;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) int value;                    //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)value;
-(void)setValue:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
@end

