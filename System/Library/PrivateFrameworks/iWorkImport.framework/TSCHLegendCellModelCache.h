/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, NSString, TSDStroke;

@interface TSCHLegendCellModelCache : NSObject {

	int mLegendCellType;
	int mBadgeType;
	unsigned long long mSeriesIndex;
	TSCHChartSeries* mSeries;
	NSString* mLabelString;
	TSDStroke* mStroke;
	TSDStroke* mSymbolStroke;
	int mSymbolType;
	int mLineType;
	CGSize mCellSize;
	double mEffectiveStrokeWidth;
	double mEffectiveSymbolStrokeWidth;
	CGRect mBadgeFrame;
	CGRect mLabelFrame;
	CGRect mBadgeFillFrame;

}

@property (readonly) int cellType; 
@property (readonly) int badgeType; 
@property (readonly) unsigned long long seriesIndex; 
@property (readonly) TSCHChartSeries * series; 
@property (readonly) NSString * labelString; 
@property (readonly) CGSize size; 
@property (readonly) CGRect badgeFrame; 
@property (readonly) CGRect labelFrame; 
@property (readonly) CGRect badgeFillFrame; 
@property (readonly) TSDStroke * stroke; 
@property (readonly) id fill; 
@property (readonly) TSDStroke * symbolStroke; 
@property (readonly) id symbolFill; 
@property (readonly) double effectiveStrokeWidth; 
@property (readonly) double effectiveSymbolStrokeWidth; 
@property (readonly) int symbolType; 
@property (readonly) int lineType; 
-(TSDStroke *)symbolStroke;
-(id)symbolFill;
-(double)effectiveStrokeWidth;
-(CGRect)badgeFillFrame;
-(CGRect)badgeFrame;
-(id)initWithChartModel:(id)arg1 cellType:(int)arg2 seriesIndex:(unsigned long long)arg3 withMetrics:(id)arg4 overrideLabel:(id)arg5 ;
-(double)effectiveSymbolStrokeWidth;
-(CGSize)size;
-(void)dealloc;
-(id)fill;
-(TSDStroke *)stroke;
-(CGRect)labelFrame;
-(NSString *)labelString;
-(int)lineType;
-(TSCHChartSeries *)series;
-(int)badgeType;
-(int)symbolType;
-(unsigned long long)seriesIndex;
-(int)cellType;
@end

