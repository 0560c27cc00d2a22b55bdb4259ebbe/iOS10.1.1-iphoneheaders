/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPLaplaceNoiseGenerator : NSObject {

	double _b;

}

@property (b,nonatomic,readonly) double b;              //@synthesize b=_b - In the implementation block
+(id)zeroMeanLaplaceNoiseGenerator:(double)arg1 ;
-(id)init;
-(id)description;
-(double)sample;
-(double)b;
-(id)initWithScale:(double)arg1 ;
@end

