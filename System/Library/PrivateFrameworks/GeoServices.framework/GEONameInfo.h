/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _phoneticName;
	int _phoneticType;
	NSString* _shield;
	int _shieldType;
	int _signType;
	SCD_Struct_GE20 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;              //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield;                    //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType;                       //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) BOOL hasPhoneticType; 
@property (assign,nonatomic) int phoneticType;                     //@synthesize phoneticType=_phoneticType - In the implementation block
@property (assign,nonatomic) BOOL hasSignType; 
@property (assign,nonatomic) int signType;                         //@synthesize signType=_signType - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                    //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(BOOL)hasShield;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(BOOL)hasLocale;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(BOOL)hasShieldType;
-(int)phoneticType;
-(void)setPhoneticType:(int)arg1 ;
-(void)setHasPhoneticType:(BOOL)arg1 ;
-(BOOL)hasPhoneticType;
-(id)phoneticTypeAsString:(int)arg1 ;
-(int)StringAsPhoneticType:(id)arg1 ;
-(int)signType;
-(void)setSignType:(int)arg1 ;
-(void)setHasSignType:(BOOL)arg1 ;
-(BOOL)hasSignType;
-(id)signTypeAsString:(int)arg1 ;
-(int)StringAsSignType:(id)arg1 ;
-(int)shieldType;
@end

