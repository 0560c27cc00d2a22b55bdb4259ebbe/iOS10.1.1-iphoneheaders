/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, _HKBaseDimension;

@interface HKBaseUnit : HKUnit <_HKFactor> {

	NSString* _unitString;
	NSString* _prefix;
	NSString* _root;
	BOOL _uniqued;
	double _proportionalSize;

}

@property (nonatomic,readonly) double proportionalSize;                   //@synthesize proportionalSize=_proportionalSize - In the implementation block
@property (nonatomic,readonly) _HKBaseDimension * dimension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_uniquedUnitWithPrefix:(id)arg1 rootUnit:(id)arg2 ;
+(id)_uniquedRootUnit:(id)arg1 ;
+(id)_uniquedUnitWithPrefix:(id)arg1 conversionConstant:(id)arg2 rootUnit:(id)arg3 ;
+(id)_uniquedRootUnitFromDefinition:(SCD_Struct_HK10)arg1 ;
+(id)_rootUnitWithDefinition:(SCD_Struct_HK10)arg1 ;
+(id)unitFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(_HKBaseDimension *)dimension;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(double)proportionalSize;
-(id)_unitByPrefixing:(id)arg1 withConversionConstant:(id)arg2 ;
-(id)_initWithUnitString:(id)arg1 proportionalSize:(double)arg2 scaleOffset:(double)arg3 ;
-(id)unitString;
@end

