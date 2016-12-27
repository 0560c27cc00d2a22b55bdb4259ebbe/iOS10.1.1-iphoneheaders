/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDAmenities : PBCodable <NSCopying> {

	GEOPDAmenityValue* _amenitys;
	unsigned long long _amenitysCount;
	unsigned long long _amenitysSpace;

}

@property (nonatomic,readonly) unsigned long long amenitysCount; 
@property (nonatomic,readonly) GEOPDAmenityValue* amenitys; 
+(id)amentiesForPlaceData:(id)arg1 ;
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
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(unsigned long long)amenitysCount;
-(GEOPDAmenityValue*)amenitys;
-(void)clearAmenitys;
-(void)addAmenity:(GEOPDAmenityValue)arg1 ;
-(GEOPDAmenityValue)amenityAtIndex:(unsigned long long)arg1 ;
-(void)setAmenitys:(GEOPDAmenityValue*)arg1 count:(unsigned long long)arg2 ;
@end

