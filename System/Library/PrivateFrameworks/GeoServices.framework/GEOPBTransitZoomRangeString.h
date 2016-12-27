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

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {

	NSString* _labelLanguage;
	NSString* _labelText;
	unsigned _minZoom;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) unsigned minZoom;                      //@synthesize minZoom=_minZoom - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelLanguage; 
@property (nonatomic,retain) NSString * labelLanguage;              //@synthesize labelLanguage=_labelLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelText; 
@property (nonatomic,retain) NSString * labelText;                  //@synthesize labelText=_labelText - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMinZoom:(unsigned)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)hasMinZoom;
-(BOOL)hasLabelLanguage;
-(BOOL)hasLabelText;
-(unsigned)minZoom;
-(NSString *)labelLanguage;
-(void)setLabelLanguage:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
@end

