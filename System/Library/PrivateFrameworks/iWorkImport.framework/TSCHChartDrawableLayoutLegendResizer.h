/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSCHChartDrawableLayoutLegendResizer : NSObject {

	int mAnchoringStates[2];
	double mAnchoringPosition[2];
	BOOL mShouldUpdateConfinedPushableAnchoring;
	NSArray* mLegendConfinementBounds;

}

@property (assign,nonatomic) BOOL p_shouldUpdateConfinedPushableAnchoring; 
@property (nonatomic,copy) NSArray * p_legendConfinementBounds; 
+(double)p_sideIntersectionLengthForChartAreaRange:(TSCHLegendAnchorRange)arg1 ;
+(double)p_sideIntersectionLengthForChartAreaFrame:(CGRect)arg1 ;
+(CGRect)innerAnchoringFrameFromChartAreaFrame:(CGRect)arg1 ;
+(CGRect)outerAnchoringFrameFromChartAreaFrame:(CGRect)arg1 ;
+(CGRect)snappedLegendFrame:(CGRect)arg1 forChartAreaFrame:(CGRect)arg2 ;
+(id)legendResizerWithInitialFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 ;
-(id)initWithInitialFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 ;
-(void)p_initializeAnchoringStateForFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 ;
-(int)p_anchoringStateForLegendFrame:(CGRect)arg1 chartAreaFrame:(CGRect)arg2 dimension:(long long)arg3 returningAnchoringPosition:(double*)arg4 ;
-(BOOL)p_isInFrontOfLine:(TSCHLegendAnchorLine)arg1 forRect:(CGRect)arg2 ;
-(void)setP_legendConfinementBounds:(NSArray *)arg1 ;
-(BOOL)p_shouldUpdateConfinedPushableAnchoring;
-(void)setP_shouldUpdateConfinedPushableAnchoring:(BOOL)arg1 ;
-(void)p_updateLegendConfinementBoundsForChartAreaFrame:(CGRect)arg1 legendFrame:(CGRect)arg2 ;
-(NSArray *)p_legendConfinementBounds;
-(void)p_updateLegendConfinementBoundsForFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 ;
-(BOOL)p_isLegendAnchoredForFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningLegendLocation:(double*)arg3 ;
-(BOOL)p_hasConfinedLocationWithinConfinementBoundsForLocation:(double)arg1 dimension:(long long)arg2 returningConfinedLocation:(double*)arg3 ;
-(void)p_updateStateForIsIndirectResizing:(BOOL)arg1 ;
-(TSCHLegendAnchorRange)p_pushedLegendForFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 returningIsConfined:(BOOL*)arg3 ;
-(TSCHLegendAnchorRange)p_resizedLegendForFrames:(TSCHChartDrawableLayoutLegendResizerFrames)arg1 dimension:(long long)arg2 ;
-(BOOL)p_isConfinedPushableAnchoring;
-(id)resizedLegendGeometry:(id)arg1 forLastChartAreaFrame:(CGRect)arg2 newChartAreaFrame:(CGRect)arg3 isIndirectResizing:(BOOL)arg4 ;
-(void)dealloc;
@end

