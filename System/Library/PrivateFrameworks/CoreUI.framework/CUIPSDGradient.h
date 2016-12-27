/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {

	CUIPSDGradientEvaluator* evaluator;
	double drawingAngle;
	unsigned gradientStyle;

}

@property (retain) CUIPSDGradientEvaluator * evaluator; 
@property (assign) double drawingAngle; 
@property (assign) unsigned gradientStyle; 
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 style:(unsigned)arg5 ;
+(id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3 ;
+(id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(BOOL)arg5 ;
-(CUIPSDGradientEvaluator *)evaluator;
-(unsigned)gradientStyle;
-(double)drawingAngle;
-(id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned)arg3 ;
-(void)setEvaluator:(CUIPSDGradientEvaluator *)arg1 ;
-(void)setDrawingAngle:(double)arg1 ;
-(void)setGradientStyle:(unsigned)arg1 ;
-(void)dealloc;
@end
