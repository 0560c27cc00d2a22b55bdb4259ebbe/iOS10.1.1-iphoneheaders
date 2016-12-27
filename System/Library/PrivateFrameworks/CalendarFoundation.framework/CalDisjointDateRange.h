/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _distinctRanges;

}

@property (nonatomic,copy) NSMutableSet * distinctRanges;              //@synthesize distinctRanges=_distinctRanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)disjointRangeWithDistinctRanges:(id)arg1 ;
+(id)disjointRangeWithSingleRange:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsRange:(id)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)initWithDistinctRanges:(id)arg1 ;
-(id)sortedDistinctRanges;
-(id)addDisjointRange:(id)arg1 ;
-(id)subtractDisjointRange:(id)arg1 ;
-(id)intersectionWithDisjointRange:(id)arg1 ;
-(void)setDistinctRanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)distinctRanges;
-(id)subtractRange:(id)arg1 ;
-(id)addRange:(id)arg1 ;
-(double)totalDuration;
-(BOOL)intersectsRange:(id)arg1 ;
@end

