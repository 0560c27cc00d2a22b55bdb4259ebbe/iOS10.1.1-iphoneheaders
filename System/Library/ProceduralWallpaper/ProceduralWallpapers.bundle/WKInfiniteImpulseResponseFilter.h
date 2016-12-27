/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WKInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
-(void)dealloc;
-(double)output;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(double)filterWithInput:(double)arg1 ;
-(double)outputGradient;
-(BOOL)zeroGradient;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
-(void)setZeroGradientThreshold:(double)arg1 ;
@end

