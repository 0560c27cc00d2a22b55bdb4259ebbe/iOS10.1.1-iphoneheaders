/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSData;

@interface CRVehicle : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _vehicleName;
	NSSet* _accessoryProtocols;
	NSData* _certificateSerialNumber;
	unsigned long long _pairingStatus;
	NSString* _bluetoothAddress;
	NSString* _carplayWiFiUUID;

}

@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;              //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * vehicleName;                        //@synthesize vehicleName=_vehicleName - In the implementation block
@property (assign,nonatomic) unsigned long long pairingStatus;              //@synthesize pairingStatus=_pairingStatus - In the implementation block
@property (nonatomic,retain) NSString * bluetoothAddress;                   //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * carplayWiFiUUID;                    //@synthesize carplayWiFiUUID=_carplayWiFiUUID - In the implementation block
@property (nonatomic,retain) NSSet * accessoryProtocols;                    //@synthesize accessoryProtocols=_accessoryProtocols - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
+(BOOL)supportsSecureCoding;
+(id)vehicleForVehicleAccessory:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)displayName;
-(NSString *)carplayWiFiUUID;
-(NSString *)vehicleName;
-(NSData *)certificateSerialNumber;
-(id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setCarplayWiFiUUID:(NSString *)arg1 ;
-(void)setAccessoryProtocols:(NSSet *)arg1 ;
-(id)_pairingDebugDescription;
-(void)mergeAttributesFromVehicle:(id)arg1 ;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(void)setPairingStatus:(unsigned long long)arg1 ;
-(unsigned long long)pairingStatus;
-(BOOL)isPaired;
-(NSSet *)accessoryProtocols;
@end

