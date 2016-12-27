/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying> {

	NSString* _activeKeyboard;
	NSMutableArray* _enabledKeyboards;
	NSString* _languageCode;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionCode; 
@property (nonatomic,retain) NSString * regionCode;                          //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledKeyboards;              //@synthesize enabledKeyboards=_enabledKeyboards - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveKeyboard; 
@property (nonatomic,retain) NSString * activeKeyboard;                      //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)activeKeyboard;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(void)setEnabledKeyboards:(NSMutableArray *)arg1 ;
-(void)setActiveKeyboard:(NSString *)arg1 ;
-(void)addEnabledKeyboards:(id)arg1 ;
-(unsigned long long)enabledKeyboardsCount;
-(void)clearEnabledKeyboards;
-(id)enabledKeyboardsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRegionCode;
-(BOOL)hasActiveKeyboard;
-(NSString *)regionCode;
-(NSMutableArray *)enabledKeyboards;
@end

