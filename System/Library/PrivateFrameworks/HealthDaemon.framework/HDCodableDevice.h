/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableDevice : PBCodable <NSCopying> {

	double _creationDate;
	NSString* _fDAUDI;
	NSString* _firmwareVersion;
	NSString* _hardwareVersion;
	NSString* _localIdentifier;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _softwareVersion;
	NSData* _uuid;
	SCD_Struct_HD32 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareVersion; 
@property (nonatomic,retain) NSString * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSoftwareVersion; 
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalIdentifier; 
@property (nonatomic,retain) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFDAUDI; 
@property (nonatomic,retain) NSString * fDAUDI;                       //@synthesize fDAUDI=_fDAUDI - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)hasUuid;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(void)setFDAUDI:(NSString *)arg1 ;
-(BOOL)hasHardwareVersion;
-(BOOL)hasFirmwareVersion;
-(BOOL)hasSoftwareVersion;
-(BOOL)hasLocalIdentifier;
-(BOOL)hasFDAUDI;
-(NSString *)hardwareVersion;
-(NSString *)firmwareVersion;
-(NSString *)softwareVersion;
-(NSString *)fDAUDI;
@end

