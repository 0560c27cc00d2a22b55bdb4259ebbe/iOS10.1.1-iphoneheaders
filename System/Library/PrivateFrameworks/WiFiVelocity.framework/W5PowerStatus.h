/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding> {

	int _batteryWarningLevel;
	long long _powerSourceType;

}

@property (assign,nonatomic) long long powerSourceType;              //@synthesize powerSourceType=_powerSourceType - In the implementation block
@property (assign,nonatomic) int batteryWarningLevel;                //@synthesize batteryWarningLevel=_batteryWarningLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)powerSourceType;
-(int)batteryWarningLevel;
-(BOOL)isEqualToPowerStatus:(id)arg1 ;
-(void)setPowerSourceType:(long long)arg1 ;
-(void)setBatteryWarningLevel:(int)arg1 ;
@end

