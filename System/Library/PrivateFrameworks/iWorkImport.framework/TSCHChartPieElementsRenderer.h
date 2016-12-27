/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@class NSIndexSet;

@interface TSCHChartPieElementsRenderer : TSCHRenderer {

	CGPoint mHitPoint;
	unsigned long long mHitSeries;
	float mHitStartAngle;
	float mHitRadius;
	float mHitExplosion;
	BOOL mDidMoveDuringTouchIfNotThenRotateChartForDemo;
	NSIndexSet* mPartialRenderingSeriesIndexSet;
	BOOL mPartialRenderingInclusionFlag;

}
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(int)chunkPlane;
-(CGLayerRef)p_newCGLayerForUserSpaceRect:(CGRect)arg1 inContext:(CGContextRef)arg2 outUserSpaceLayerBounds:(CGRect*)arg3 ;
-(void)p_drawWedgePathIntoContext:(CGContextRef)arg1 path:(CGPathRef)arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5 ;
-(BOOL)p_shouldRenderSeriesIndex:(unsigned long long)arg1 ;
-(CGLayerRef)p_newPreRenderedImageWithContext:(CGContextRef)arg1 path:(CGPathRef)arg2 fill:(id)arg3 stroke:(id)arg4 shadow:(id)arg5 outUserSpaceLayerBounds:(CGRect*)arg6 ;
-(void)p_drawOnlyShadow:(id)arg1 forImage:(CGLayerRef)arg2 intoRect:(CGRect)arg3 intoContext:(CGContextRef)arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7 ;
-(void)p_drawOnlyShapeImage:(CGLayerRef)arg1 intoRect:(CGRect)arg2 intoContext:(CGContextRef)arg3 usingBlendMode:(int)arg4 opacity:(double)arg5 ;
-(CGRect)chartLayoutSpaceRenderingRect;
-(void)drawOnlySeriesIndicies:(id)arg1 ;
-(void)drawAllButSeriesIndicies:(id)arg1 ;
-(void)drawAll;
-(void)dealloc;
@end

