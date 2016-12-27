/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemStorage, NSString;

@interface MSPPlaceDisplay : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _placeMapItemStorage;
	NSString* _supersededSearchIdentifier;

}

@property (nonatomic,readonly) BOOL hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;              //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasSupersededSearchIdentifier; 
@property (nonatomic,retain) NSString * supersededSearchIdentifier;                //@synthesize supersededSearchIdentifier=_supersededSearchIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPlaceMapItemStorage;
-(BOOL)hasSupersededSearchIdentifier;
-(GEOMapItemStorage *)placeMapItemStorage;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(NSString *)supersededSearchIdentifier;
-(void)setSupersededSearchIdentifier:(NSString *)arg1 ;
@end

