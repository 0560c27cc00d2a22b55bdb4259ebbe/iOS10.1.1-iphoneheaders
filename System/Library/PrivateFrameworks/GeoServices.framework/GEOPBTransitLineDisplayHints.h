/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {

	BOOL _showVehicleNumber;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasShowVehicleNumber; 
@property (assign,nonatomic) BOOL showVehicleNumber;                 //@synthesize showVehicleNumber=_showVehicleNumber - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)showVehicleNumber;
-(void)setShowVehicleNumber:(BOOL)arg1 ;
-(void)setHasShowVehicleNumber:(BOOL)arg1 ;
-(BOOL)hasShowVehicleNumber;
@end

