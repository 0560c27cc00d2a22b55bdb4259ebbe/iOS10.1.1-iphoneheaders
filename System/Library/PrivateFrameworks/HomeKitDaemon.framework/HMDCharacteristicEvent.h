/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCharacteristic, NSUUID, NSNumber;

@interface HMDCharacteristicEvent : HMDEvent <NSSecureCoding> {

	HMDCharacteristic* _characteristic;
	id _eventValue;
	id _previousValue;
	NSUUID* _accessoryUUID;
	NSNumber* _serviceID;
	NSNumber* _characteristicInstanceID;

}

@property (nonatomic,retain) id eventValue;                                      //@synthesize eventValue=_eventValue - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                           //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * serviceID;                             //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,readonly) HMDCharacteristic * characteristic;               //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id previousValue;                                   //@synthesize previousValue=_previousValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)characteristicEventWithDictionary:(id)arg1 home:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dumpState;
-(NSUUID *)accessoryUUID;
-(HMDCharacteristic *)characteristic;
-(id)previousValue;
-(void)replaceCharacteristic:(id)arg1 ;
-(NSNumber *)serviceID;
-(NSNumber *)characteristicInstanceID;
-(void)setPreviousValue:(id)arg1 ;
-(id)eventValue;
-(void)setEventValue:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 eventValue:(id)arg2 ;
@end

