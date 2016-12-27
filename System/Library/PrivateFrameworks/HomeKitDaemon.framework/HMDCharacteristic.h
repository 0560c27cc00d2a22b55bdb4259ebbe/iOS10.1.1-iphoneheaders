/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class HMDAccessory, HMDService, NSNumber, NSData, NSMutableSet, NSString, NSDate, HMDCharacteristicMetadata, NSDictionary, NSUUID;

@interface HMDCharacteristic : NSObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState> {

	BOOL _notificationRegisteredWithRemoteGateway;
	HMDAccessory* _accessory;
	HMDService* _service;
	NSNumber* _stateNumber;
	NSData* _authorizationData;
	NSMutableSet* _hapCharacteristicTuples;
	NSString* _characteristicType;
	id _lastKnownValue;
	NSDate* _lastKnownValueUpdateTime;
	NSNumber* _characteristicInstanceID;
	long long _characteristicProperties;
	HMDCharacteristicMetadata* _characteristicMetadata;
	NSMutableSet* _notificationRegistrations;
	NSDate* _notificationEnabledTime;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSMutableSet * hapCharacteristicTuples;                          //@synthesize hapCharacteristicTuples=_hapCharacteristicTuples - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSString * characteristicType;                                   //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,retain) id lastKnownValue;                                               //@synthesize lastKnownValue=_lastKnownValue - In the implementation block
@property (nonatomic,retain) NSDate * lastKnownValueUpdateTime;                               //@synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime - In the implementation block
@property (nonatomic,retain) NSNumber * characteristicInstanceID;                             //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (assign,nonatomic) long long characteristicProperties;                              //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) HMDCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationRegistrations;                        //@synthesize notificationRegistrations=_notificationRegistrations - In the implementation block
@property (nonatomic,retain) NSDate * notificationEnabledTime;                                //@synthesize notificationEnabledTime=_notificationEnabledTime - In the implementation block
@property (assign,nonatomic) BOOL notificationRegisteredWithRemoteGateway;                    //@synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                               //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * instanceID; 
@property (nonatomic,readonly) long long properties; 
@property (nonatomic,copy,readonly) id value; 
@property (setter=setStateNumber:,nonatomic,copy) NSNumber * stateNumber;                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) HMDCharacteristicMetadata * metadata; 
@property (nonatomic,copy) NSData * authorizationData;                                        //@synthesize authorizationData=_authorizationData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(id)value;
-(NSString *)contextID;
-(long long)properties;
-(HMDCharacteristicMetadata *)metadata;
-(HMDService *)service;
-(NSDictionary *)bulletinContext;
-(id)dumpState;
-(NSUUID *)contextSPIUniqueIdentifier;
-(HMDAccessory *)accessory;
-(NSNumber *)instanceID;
-(NSMutableSet *)notificationRegistrations;
-(void)setNotificationRegistrations:(NSMutableSet *)arg1 ;
-(BOOL)supportsNotification;
-(BOOL)isNonHomeNotificationsEnabled;
-(NSString *)characteristicType;
-(BOOL)isClientNotificationEnabled;
-(void)setNotificationEnabled:(BOOL)arg1 forClientIdentifier:(id)arg2 ;
-(BOOL)isNotificationEnabled;
-(BOOL)isNonClientNotificationEnabled;
-(void)unconfigure;
-(NSDate *)lastKnownValueUpdateTime;
-(NSNumber *)stateNumber;
-(BOOL)value:(id)arg1 differentThan:(id)arg2 ;
-(NSData *)authorizationData;
-(BOOL)notificationRegisteredWithRemoteGateway;
-(id)lastKnownValue;
-(BOOL)isValueUpdatedFromHAPCharacteristic:(id)arg1 ;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(NSString *)serializedIdentifier;
-(NSNumber *)characteristicInstanceID;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(id)characteristicForHAPAccessory:(id)arg1 ;
-(void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
-(void)setNotificationEnabledTime:(NSDate *)arg1 ;
-(void)setNotificationRegisteredWithRemoteGateway:(BOOL)arg1 ;
-(NSDate *)notificationEnabledTime;
-(BOOL)deregisterNotificationForClientIdentifier:(id)arg1 ;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(void)updateLastKnownValue;
-(void)updateService:(id)arg1 accessory:(id)arg2 ;
-(long long)characteristicProperties;
-(id)characteristicTypeDescription;
-(id)shortTypeDescription;
-(NSMutableSet *)hapCharacteristicTuples;
-(void)setLastKnownValue:(id)arg1 ;
-(void)setLastKnownValueUpdateTime:(NSDate *)arg1 ;
-(id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(HMDCharacteristicMetadata *)characteristicMetadata;
-(void)unconfigureAll;
-(id)characteristicForServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(BOOL)isNotificationEnabledForClientIdentifierPrefix:(id)arg1 ;
-(void)setHapCharacteristicTuples:(NSMutableSet *)arg1 ;
-(void)setCharacteristicInstanceID:(NSNumber *)arg1 ;
-(void)setCharacteristicProperties:(long long)arg1 ;
-(void)setCharacteristicMetadata:(HMDCharacteristicMetadata *)arg1 ;
@end

