/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	SBNormalizedTransitionInterval _constrainedRange;

}

@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                       //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,readonly) SBNormalizedTransitionInterval constrainedRange;              //@synthesize constrainedRange=_constrainedRange - In the implementation block
+(id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(double)valueAtPercentage:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(SBNormalizedTransitionInterval)constrainedRange;
-(CAMediaTimingFunction *)timingFunction;
@end

