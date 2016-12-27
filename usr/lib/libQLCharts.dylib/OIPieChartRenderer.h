/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libQLCharts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OIPieSliceRenderer;
#import <libQLCharts.dylib/libQLCharts.dylib-Structs.h>
@interface OIPieChartRenderer : NSObject {

	id<OIPieSliceRenderer> _sliceRenderer;
	OIChartRef _chart;

}

@property (retain) id<OIPieSliceRenderer> sliceRenderer;              //@synthesize sliceRenderer=_sliceRenderer - In the implementation block
@property (assign) OIChartRef chart;                                  //@synthesize chart=_chart - In the implementation block
-(void)dealloc;
-(void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(CFArrayRef)arg2 ;
-(void)setSliceRenderer:(id<OIPieSliceRenderer>)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 sliceRenderer:(id)arg2 ;
-(id<OIPieSliceRenderer>)sliceRenderer;
-(void)setChart:(OIChartRef)arg1 ;
-(OIChartRef)chart;
-(id)initWithChart:(OIChartRef)arg1 ;
@end

