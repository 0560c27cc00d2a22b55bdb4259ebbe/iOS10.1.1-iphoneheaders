/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV2 time; 
@property (assign,nonatomic) SCD_Struct_AV2 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)keyPathsForValuesAffectingIdentifier;
+(id)metadataItem;
-(SCD_Struct_AV2)duration;
-(id)key;
-(NSString *)identifier;
-(void)setDuration:(SCD_Struct_AV2)arg1 ;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setKey:(id)arg1 ;
-(id)languageCode;
-(SCD_Struct_AV2)time;
-(void)setTime:(SCD_Struct_AV2)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(NSString *)extendedLanguageTag;
-(void)setKeySpace:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(id)startDate;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)dataType;
@end

