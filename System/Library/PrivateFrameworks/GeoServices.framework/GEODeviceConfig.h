/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEODeviceConfig : PBCodable <NSCopying> {

	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;

}

@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion;                 //@synthesize deviceOsVersion=_deviceOsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier;              //@synthesize deviceHwIdentifier=_deviceHwIdentifier - In the implementation block
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
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasDeviceHwIdentifier;
-(NSString *)deviceOsVersion;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(NSString *)deviceHwIdentifier;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
@end

