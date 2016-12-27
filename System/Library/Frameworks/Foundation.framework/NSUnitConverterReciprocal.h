/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding> {

	double _reciprocalValue;

}

@property (readonly) double reciprocalValue;              //@synthesize reciprocalValue=_reciprocalValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(double)reciprocalValue;
-(id)initWithReciprocalValue:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

