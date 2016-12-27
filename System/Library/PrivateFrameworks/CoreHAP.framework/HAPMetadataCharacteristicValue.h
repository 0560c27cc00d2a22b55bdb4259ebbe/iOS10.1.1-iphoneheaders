/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSArray;

@interface HAPMetadataCharacteristicValue : NSObject {

	NSNumber* _minValue;
	NSNumber* _maxValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) NSArray * validValues;              //@synthesize validValues=_validValues - In the implementation block
+(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSNumber *)minValue;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSNumber *)maxLength;
-(NSNumber *)maxValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(void)setMinLength:(NSNumber *)arg1 ;
-(id)initWithMinLength:(id)arg1 maxLength:(id)arg2 ;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4 ;
-(NSNumber *)minLength;
-(NSArray *)validValues;
-(id)generateDictionary;
-(void)dump;
@end

