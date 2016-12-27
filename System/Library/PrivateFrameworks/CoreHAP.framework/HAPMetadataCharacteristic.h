/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, HAPMetadataCharacteristicValue;

@interface HAPMetadataCharacteristic : NSObject {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _uuidStr;
	NSNumber* _properties;
	NSString* _format;
	NSString* _units;
	HAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                                   //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                                          //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSNumber * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * format;                                           //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                            //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) HAPMetadataCharacteristicValue * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)format;
-(void)setProperties:(NSNumber *)arg1 ;
-(NSNumber *)properties;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(id)generateDictionary:(id)arg1 ;
-(HAPMetadataCharacteristicValue *)valueMetadata;
-(void)setValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5 ;
-(NSString *)uuidStr;
-(NSString *)chrDescription;
-(void)dump;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setChrDescription:(NSString *)arg1 ;
@end

