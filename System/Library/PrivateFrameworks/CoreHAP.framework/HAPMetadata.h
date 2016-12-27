/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSArray, NSMutableArray;

@interface HAPMetadata : NSObject {

	NSNumber* _version;
	NSNumber* _schemaVersion;
	NSString* _hapBaseUUIDSuffix;
	NSArray* _hapValueUnits;
	NSArray* _hapProperties;
	NSArray* _hapCharacteristics;
	NSArray* _hapServices;
	NSArray* _hapSupportsAuthDataTuples;
	NSMutableArray* _parsedUUIDs;

}

@property (nonatomic,retain) NSNumber * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSNumber * schemaVersion;                         //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * hapBaseUUIDSuffix;                     //@synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix - In the implementation block
@property (nonatomic,retain) NSMutableArray * parsedUUIDs;                     //@synthesize parsedUUIDs=_parsedUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * hapValueUnits;                          //@synthesize hapValueUnits=_hapValueUnits - In the implementation block
@property (nonatomic,retain) NSArray * hapProperties;                          //@synthesize hapProperties=_hapProperties - In the implementation block
@property (nonatomic,retain) NSArray * hapCharacteristics;                     //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * hapServices;                            //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSArray * hapSupportsAuthDataTuples;              //@synthesize hapSupportsAuthDataTuples=_hapSupportsAuthDataTuples - In the implementation block
+(id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2 ;
+(id)getBuiltinInstance;
+(id)getSharedInstance;
+(BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(id)btleToServiceType:(id)arg1 ;
-(BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2 ;
-(id)getDefaultCharacteristicProperties:(id)arg1 ;
-(id)getDefaultServiceProperties:(id)arg1 ;
-(void)setParsedUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)parseVersion:(id)arg1 ;
-(BOOL)parseMetadata:(id)arg1 ;
-(NSMutableArray *)parsedUUIDs;
-(id)parseCharacteristicValue:(id)arg1 ;
-(id)parseServiceCharacteristics:(id)arg1 ;
-(void)setHapBaseUUIDSuffix:(NSString *)arg1 ;
-(id)parseUnits:(id)arg1 ;
-(id)parseProperties:(id)arg1 ;
-(id)parseCharacteristics:(id)arg1 ;
-(id)parseServices:(id)arg1 ;
-(id)serviceTypeToBTLE:(id)arg1 ;
-(id)getDefaultCharacteristicMetadata:(id)arg1 ;
-(NSNumber *)schemaVersion;
-(void)setSchemaVersion:(NSNumber *)arg1 ;
-(id)shouldFilterServiceOfType:(id)arg1 ;
-(id)generateDictionary;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSArray *)hapValueUnits;
-(void)setHapValueUnits:(NSArray *)arg1 ;
-(NSArray *)hapProperties;
-(void)setHapProperties:(NSArray *)arg1 ;
-(NSArray *)hapCharacteristics;
-(void)setHapCharacteristics:(NSArray *)arg1 ;
-(NSArray *)hapServices;
-(void)setHapServices:(NSArray *)arg1 ;
-(NSArray *)hapSupportsAuthDataTuples;
-(void)setHapSupportsAuthDataTuples:(NSArray *)arg1 ;
-(id)characteristicTypeFromUTI:(id)arg1 ;
-(BOOL)isStandardHAPServiceName:(id)arg1 ;
-(BOOL)isStandardHAPUnitName:(id)arg1 ;
-(BOOL)isStandardHAPCharacteristicName:(id)arg1 ;
-(id)parseCharacteristicServiceTuples:(id)arg1 ;
-(id)serviceUTIFromType:(id)arg1 ;
-(id)characteristicUTIFromType:(id)arg1 ;
-(id)generateHAPMetadataTuplesDictionary:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2 ;
-(BOOL)isStandardHAPService:(id)arg1 ;
-(BOOL)allowAssociatedService:(id)arg1 ;
-(BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2 ;
-(id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6 ;
-(NSString *)hapBaseUUIDSuffix;
-(BOOL)isStandardHAPCharacteristic:(id)arg1 ;
-(id)descriptionFromServiceType:(id)arg1 ;
-(id)descriptionFromCharacteristicType:(id)arg1 ;
@end

