/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKRing : NSObject {

	double _fillFraction;
	double _strokeWidth;
	double _backgroundRingAlpha;
	double _radius;
	long long _ringStyle;

}

@property (assign) double fillFraction;                     //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign) double strokeWidth;                      //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) double backgroundRingAlpha;              //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign) long long ringStyle;                     //@synthesize ringStyle=_ringStyle - In the implementation block
+(id)fillFractionStringForFillFraction:(float)arg1 ;
+(id)fillFractionStringWithSymbolForFillFraction:(float)arg1 ;
+(id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2 ;
-(id)init;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setFillFraction:(double)arg1 ;
-(double)fillFraction;
-(long long)ringStyle;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 ;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(id)ringImage;
-(id)initWithFillFraction:(double)arg1 style:(long long)arg2 radius:(double)arg3 strokeWidth:(double)arg4 ;
-(double)_validFillFraction:(double)arg1 ;
-(void)fillFraction:(double)arg1 ;
-(id)fillFractionString;
-(id)fillFractionStringWithSymbol;
-(void)setRingStyle:(long long)arg1 ;
-(double)strokeWidth;
@end

