/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCHChartSeries, TSURegressionModel, TSUBezierPath, NSString;

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent> {

	TSCHChartSeries* mSeries;
	int mLineType;
	BOOL mShowTrendLine;
	TSURegressionModel* mRegression;
	double mMaxYValue;
	double mMinYValue;
	double mMaxXValue;
	double mMinXValue;
	int mInputAxisType;
	int mOutputAxisType;
	BOOL mTrendLineInvalid;
	TSUBezierPath* mCachedTrendLinePath;
	CGRect mCachedChartFrame;
	double mOffsetInBody;
	BOOL mCachedChartVertical;

}

@property (nonatomic,readonly) BOOL showTrendLine; 
@property (nonatomic,readonly) BOOL showTrendLineLegendText; 
@property (nonatomic,readonly) BOOL showEquation; 
@property (nonatomic,readonly) BOOL showRSquared; 
@property (nonatomic,readonly) NSString * trendLineLegendText; 
@property (nonatomic,readonly) NSString * rSquaredText; 
@property (nonatomic,readonly) float equationTextOpacity; 
@property (nonatomic,readonly) float rSquaredTextOpacity; 
-(void)clearParent;
-(id)initWithSeries:(id)arg1 ;
-(BOOL)showTrendLineLegendText;
-(NSString *)trendLineLegendText;
-(void)invalidateData;
-(BOOL)showTrendLineForAxisID:(id)arg1 ;
-(double)minValueForAxisID:(id)arg1 ;
-(double)maxValueForAxisID:(id)arg1 ;
-(void)p_releaseCache;
-(void)p_updateTrendLineData;
-(id)p_linePathFromPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
-(void)trendLineUnitSpacePoints:(/*function pointer*/void**)arg1 count:(unsigned long long*)arg2 drawCurve:(BOOL*)arg3 maxPoints:(unsigned long long)arg4 ;
-(CGSize)p_unitPoint:(CGSize)arg1 toScreenFrame:(CGRect)arg2 offset:(double)arg3 vertical:(BOOL)arg4 ;
-(void)p_addPathToTrendLinePathWithPoints:(CGSize*)arg1 count:(unsigned long long)arg2 curved:(BOOL)arg3 curveFitter:(id)arg4 ;
-(id)p_dataPointValues;
-(unsigned long long)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3 ;
-(void)p_calcMARegression:(unsigned long long)arg1 xData:(id)arg2 yData:(id)arg3 ;
-(void)p_calcBoundsForMovingAverage;
-(unsigned long long)p_fillArrayX:(double*)arg1 andY:(double*)arg2 fromPoints:(id)arg3 hasNegativeX:(BOOL*)arg4 ;
-(void)p_calcRegression:(unsigned long long)arg1 xData:(double*)arg2 yData:(double*)arg3 ;
-(void)p_calcBounds;
-(int)p_getTrendLineType;
-(void)p_generateRegression;
-(BOOL)showEquation;
-(BOOL)showRSquared;
-(NSString *)rSquaredText;
-(float)equationTextOpacity;
-(float)rSquaredTextOpacity;
-(CFAttributedStringRef)newEquationAttributedString;
-(id)trendLinePathForChartRect:(CGRect)arg1 offsetInBody:(double)arg2 vertical:(BOOL)arg3 ;
-(BOOL)showTrendLine;
-(void)dealloc;
-(void)updateIfNeeded;
@end

