/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBinarySample.h>

@class NSString, _HKStringSampleType;

@interface _HKStringSample : _HKBinarySample {

	NSString* _stringValue;

}

@property (readonly) _HKStringSampleType * stringType; 
@property (readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)stringSampleWithType:(id)arg1 stringValue:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)payload;
-(NSString *)stringValue;
-(_HKStringSampleType *)stringType;
-(void)_setPayload:(id)arg1 ;
@end

