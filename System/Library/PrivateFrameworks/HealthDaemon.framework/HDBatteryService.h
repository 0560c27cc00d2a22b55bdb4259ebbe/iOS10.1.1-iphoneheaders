/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@class HDHealthServicePropertyManager, CBCharacteristic;

@interface HDBatteryService : HDHealthService {

	HDHealthServicePropertyManager* _propertyManager;
	CBCharacteristic* _batteryCharacteristic;

}

@property (assign,nonatomic,__weak) HDHealthServicePropertyManager * propertyManager;              //@synthesize propertyManager=_propertyManager - In the implementation block
@property (nonatomic,retain) CBCharacteristic * batteryCharacteristic;                             //@synthesize batteryCharacteristic=_batteryCharacteristic - In the implementation block
+(long long)serviceType;
+(id)implementedProperties;
+(id)serviceUUID;
-(id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3 ;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(HDHealthServicePropertyManager *)propertyManager;
-(void)setPropertyManager:(HDHealthServicePropertyManager *)arg1 ;
-(id)handleBatteryLevel:(id)arg1 ;
-(CBCharacteristic *)batteryCharacteristic;
-(void)setBatteryCharacteristic:(CBCharacteristic *)arg1 ;
@end

