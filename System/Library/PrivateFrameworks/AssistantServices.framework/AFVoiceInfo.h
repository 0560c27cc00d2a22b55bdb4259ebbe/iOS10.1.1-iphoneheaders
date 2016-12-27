/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCustom;
	BOOL _wasInitalizedFromDictionaryRepresentation;
	NSString* _languageCode;
	long long _footprint;
	NSString* _name;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;
	long long _gender;

}

@property (assign,nonatomic) long long gender;                                              //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) BOOL wasInitalizedFromDictionaryRepresentation;              //@synthesize wasInitalizedFromDictionaryRepresentation=_wasInitalizedFromDictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                     //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL isCustom;                                                 //@synthesize isCustom=_isCustom - In the implementation block
@property (nonatomic,readonly) long long footprint;                                         //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;                                   //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;                                  //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)VSSpeechGender;
-(long long)VSSpeechFootprint;
-(BOOL)isMatchForVoiceAsset:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)languageCode;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(NSString *)masteredVersion;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7 ;
-(id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3 ;
-(id)genderString;
-(id)footprintString;
-(void)setIsCustom:(BOOL)arg1 ;
-(BOOL)wasInitalizedFromDictionaryRepresentation;
-(long long)footprint;
-(NSNumber *)contentVersion;
-(BOOL)isCustom;
@end

