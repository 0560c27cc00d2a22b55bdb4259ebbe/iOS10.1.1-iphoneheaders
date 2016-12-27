/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM3 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM3 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM3 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM6 magneticField; 
+(BOOL)supportsSecureCoding;
-(SCD_Struct_CM3)userAcceleration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CMAttitude *)attitude;
-(SCD_Struct_CM6)magneticField;
-(SCD_Struct_CM3)gravity;
-(id)initWithDeviceMotion:(SCD_Struct_CM5)arg1 andTimestamp:(double)arg2 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(SCD_Struct_CM3)rotationRate;
@end

