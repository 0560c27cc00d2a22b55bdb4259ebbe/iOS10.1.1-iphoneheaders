/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSData;

@interface IDSPairedDevice : NSObject {

	NSDictionary* _properties;
	NSNumber* _pairingProtocolVersion;
	NSNumber* _minCompatibilityVersion;
	NSNumber* _maxCompatibilityVersion;
	NSNumber* _serviceMinCompatibilityVersion;
	NSNumber* _capabilityFlags;

}

@property (nonatomic,readonly) NSString * cbuuid; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSData * publicClassAKey; 
@property (nonatomic,readonly) NSData * publicClassCKey; 
@property (nonatomic,readonly) NSData * publicClassDKey; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDictionary * privateData; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) unsigned pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned serviceMinCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long capabilityFlags; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) BOOL hasAllPublicKeys; 
@property (nonatomic,readonly) BOOL hasCapabilityFlags; 
@property (nonatomic,readonly) BOOL isPairing; 
@property (nonatomic,readonly) NSString * shortDescription; 
-(NSString *)cbuuid;
-(unsigned long long)capabilityFlags;
-(id)persistedProperties;
-(id)initWithPairedDevice:(id)arg1 isActive:(BOOL)arg2 ;
-(BOOL)hasCapabilityFlags;
-(NSData *)publicClassDKey;
-(NSData *)publicClassAKey;
-(NSData *)publicClassCKey;
-(BOOL)hasAllPublicKeys;
-(id)initWithProperties:(id)arg1 pairingProtocolVersion:(id)arg2 minCompatibilityVersion:(id)arg3 maxCompatibilityVersion:(id)arg4 serviceMinCompatibilityVersion:(id)arg5 capabilityFlags:(id)arg6 ;
-(id)initWithCBUUID:(id)arg1 ;
-(id)initWithPairedDevice:(id)arg1 deviceUniqueID:(id)arg2 pairingProtocolVersion:(unsigned)arg3 minCompatibilityVersion:(unsigned)arg4 maxCompatibilityVersion:(unsigned)arg5 serviceMinCompatibilityVersion:(unsigned short)arg6 privateData:(id)arg7 ;
-(id)initWithPairedDevice:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(id)initWithPairedDevice:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(id)pairedDeviceWithoutSecuredEncryptionKeys;
-(id)description;
-(BOOL)isActive;
-(NSString *)buildVersion;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)shortDescription;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)productName;
-(unsigned)serviceMinCompatibilityVersion;
-(NSString *)uniqueID;
-(BOOL)isPairing;
-(NSData *)pushToken;
-(NSString *)productVersion;
-(unsigned)pairingProtocolVersion;
-(unsigned)minCompatibilityVersion;
-(unsigned)maxCompatibilityVersion;
-(NSDictionary *)privateData;
@end

