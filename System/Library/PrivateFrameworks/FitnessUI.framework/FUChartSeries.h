/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@protocol FUChartSeriesDataSource, FUChartSeriesDelegate;
@class NSDate, NSArray, NSNumber, FUChartDataSet;

@interface FUChartSeries : UIView {

	NSDate* _minXValue;
	NSDate* _maxXValue;
	NSArray* _dataPoints;
	float _animationDuration;
	NSNumber* _minYValue;
	NSNumber* _maxYValue;
	id<FUChartSeriesDataSource> _dataSource;
	id<FUChartSeriesDelegate> _delegate;
	FUChartDataSet* _dataSet;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic,__weak) id<FUChartSeriesDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FUChartSeriesDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FUChartDataSet * dataSet;                                   //@synthesize dataSet=_dataSet - In the implementation block
@property (assign,nonatomic) float animationDuration;                                    //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) NSNumber * minYValue;                                       //@synthesize minYValue=_minYValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxYValue;                                       //@synthesize maxYValue=_maxYValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setDataSource:(id<FUChartSeriesDataSource>)arg1 ;
-(void)setDelegate:(id<FUChartSeriesDelegate>)arg1 ;
-(id<FUChartSeriesDataSource>)dataSource;
-(id<FUChartSeriesDelegate>)delegate;
-(void)setAnimationDuration:(float)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)animate;
-(float)animationDuration;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setDataSet:(FUChartDataSet *)arg1 ;
-(FUChartDataSet *)dataSet;
-(void)refreshView;
-(float)_relativePositionForXPlaneValue:(id)arg1 ;
-(float)_relativePositionForYPlaneValue:(id)arg1 ;
-(void)setMinYValue:(NSNumber *)arg1 ;
-(void)setMaxYValue:(NSNumber *)arg1 ;
-(id)getPointsFromDataSet;
-(CGRect)insetBounds;
-(double)_getXValueForPointFromChartPoint:(id)arg1 ;
-(double)_getYValueForPointFromChartPoint:(id)arg1 ;
-(double)_getYValueForPointFromChartPointValue:(id)arg1 ;
-(id)getLabelsFromSet;
-(void)selectedPointIndexesUpdated:(id)arg1 selectionPoints:(id)arg2 ;
-(void)_reloadMinMaxValues;
-(id)getChartPointFromDataSetAtIndex:(long long)arg1 ;
-(CGPoint)getPointFromChartPoint:(id)arg1 ;
-(double)_getYValueForPointFromChartPoint:(id)arg1 key:(id)arg2 ;
-(id)_getMinXValue;
-(id)_getMaxXValue;
-(id)_getMinYValue;
-(id)_getMaxYValue;
-(CGPoint)getPointFromChartPoint:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
@end

