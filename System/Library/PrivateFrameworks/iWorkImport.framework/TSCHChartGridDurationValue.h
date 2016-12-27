/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartGridValue.h>

@class NSString;

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue> {

	double mDuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int chartGridValueType; 
+(id)durationValueWithDouble:(double)arg1 ;
-(int)chartGridValueType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDouble:(double)arg1 ;
@end

