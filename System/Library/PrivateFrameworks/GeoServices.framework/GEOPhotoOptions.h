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

@interface GEOPhotoOptions : PBCodable <NSCopying> {

	SCD_Struct_GE1* _photoSizes;
	int _maxPhotos;
	int _photoType;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) int maxPhotos;                                     //@synthesize maxPhotos=_maxPhotos - In the implementation block
@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType;                                     //@synthesize photoType=_photoType - In the implementation block
@property (nonatomic,readonly) unsigned long long photoSizesCount; 
@property (nonatomic,readonly) int* photoSizes; 
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
-(int)photoType;
-(void)setPhotoType:(int)arg1 ;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(BOOL)hasPhotoType;
-(id)photoTypeAsString:(int)arg1 ;
-(int)StringAsPhotoType:(id)arg1 ;
-(unsigned long long)photoSizesCount;
-(int*)photoSizes;
-(void)clearPhotoSizes;
-(void)addPhotoSize:(int)arg1 ;
-(int)photoSizeAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoSizes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)photoSizesAsString:(int)arg1 ;
-(int)StringAsPhotoSizes:(id)arg1 ;
-(int)maxPhotos;
-(void)setMaxPhotos:(int)arg1 ;
@end

