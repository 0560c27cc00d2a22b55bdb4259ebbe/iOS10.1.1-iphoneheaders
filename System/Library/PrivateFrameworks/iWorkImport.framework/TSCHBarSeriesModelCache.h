/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartSeries, TSCHChartValueAxis, TSCHChartAxis, TSWPParagraphStyle, TSDShadow, TSDStroke;

@interface TSCHBarSeriesModelCache : NSObject {

	TSCHChartSeries* mSeries;
	TSCHChartValueAxis* mValueAxis;
	TSCHChartAxis* mGroupAxis;
	TSWPParagraphStyle* mParagraphStyle;
	unsigned long long mSeriesIndex;
	BOOL mValueLabelsOn;
	double mBarWidthRatio;
	double mBarGroupGapRatio;
	double mBarGapRatio;
	double mUnitSpaceIntercept;
	unsigned mLabelPosition;
	TSDShadow* mShadow;
	TSDStroke* mStroke;
	id mFill;
	double mOpacity;

}

@property (readonly) TSCHChartSeries * series; 
@property (readonly) TSCHChartValueAxis * valueAxis; 
@property (readonly) TSCHChartAxis * groupAxis; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) unsigned long long seriesIndex; 
@property (readonly) BOOL valueLabelsOn; 
@property (readonly) double unitSpaceIntercept; 
@property (readonly) unsigned labelPosition; 
@property (readonly) double barWidthRatio; 
@property (readonly) double barGroupGapRatio; 
@property (readonly) double barGapRatio; 
@property (readonly) TSDShadow * shadow; 
@property (readonly) TSDStroke * stroke; 
@property (readonly) id fill; 
@property (readonly) double opacity; 
-(TSCHChartValueAxis *)valueAxis;
-(double)unitSpaceIntercept;
-(BOOL)valueLabelsOn;
-(TSCHChartAxis *)groupAxis;
-(double)barWidthRatio;
-(double)barGroupGapRatio;
-(double)barGapRatio;
-(id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)fill;
-(TSDStroke *)stroke;
-(double)opacity;
-(TSDShadow *)shadow;
-(TSCHChartSeries *)series;
-(TSWPParagraphStyle *)paragraphStyle;
-(unsigned)labelPosition;
-(unsigned long long)seriesIndex;
@end

