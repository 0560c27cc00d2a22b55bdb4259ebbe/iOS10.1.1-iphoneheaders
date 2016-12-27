/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSArray, NSObject, NSUUID;

@interface HMCharacteristicMetadata : NSObject <HFPrettyDescription, NSSecureCoding, HMObjectMerge> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSArray* _validValues;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSNumber * hf_effectiveStepValue; 
@property (nonatomic,readonly) BOOL hf_isNumeric; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;                                 //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;                                 //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                                    //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                                    //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * units;                                          //@synthesize units=_units - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;                        //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                                     //@synthesize validValues=_validValues - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)hf_effectiveStepValue;
-(id)hf_percentageForCharacteristicValue:(id)arg1 ;
-(id)hf_characteristicValueForPercentage:(double)arg1 ;
-(BOOL)hf_isValidValue:(id)arg1 ;
-(id)hf_normalizedValueForValue:(id)arg1 ;
-(BOOL)hf_isNumeric;
-(BOOL)hf_isEqualToMetadata:(id)arg1 ;
-(id)hf_prettyDescription;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)format;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(NSNumber *)maxLength;
-(void)setFormat:(NSString *)arg1 ;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)validValues;
-(NSString *)manufacturerDescription;
-(void)setValidValues:(NSArray *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

