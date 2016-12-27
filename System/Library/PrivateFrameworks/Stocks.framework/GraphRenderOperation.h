/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GraphRenderOperationDelegate;
#import <Stocks/Stocks-Structs.h>
@class NSArray, StockGraphImageSet, StockChartDisplayMode;

@interface GraphRenderOperation : NSObject {

	BOOL _cancelled;
	BOOL _roundLineCaps;
	unsigned _volumeCount;
	CGPoint* _points;
	NSArray* _linePointCounts;
	NSArray* _dottedLinePositions;
	NSArray* _dottedLinePositionsForStyleOnly;
	SCD_Struct_St9* _volumeBars;
	double _volumeBarWidth;
	unsigned long long _maxVolume;
	id<GraphRenderOperationDelegate> _delegate;
	StockGraphImageSet* _graphImageSet;
	StockChartDisplayMode* _displayMode;
	CGSize _graphSize;
	CGSize _volumeGraphSize;
	UIEdgeInsets _graphInsets;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) CGPoint* points;                                               //@synthesize points=_points - In the implementation block
@property (nonatomic,retain) NSArray * linePointCounts;                                     //@synthesize linePointCounts=_linePointCounts - In the implementation block
@property (nonatomic,retain) NSArray * dottedLinePositions;                                 //@synthesize dottedLinePositions=_dottedLinePositions - In the implementation block
@property (nonatomic,retain) NSArray * dottedLinePositionsForStyleOnly;                     //@synthesize dottedLinePositionsForStyleOnly=_dottedLinePositionsForStyleOnly - In the implementation block
@property (assign,nonatomic) SCD_Struct_St9* volumeBars;                                    //@synthesize volumeBars=_volumeBars - In the implementation block
@property (assign,nonatomic) double volumeBarWidth;                                         //@synthesize volumeBarWidth=_volumeBarWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxVolume;                                  //@synthesize maxVolume=_maxVolume - In the implementation block
@property (assign,nonatomic) unsigned volumeCount;                                          //@synthesize volumeCount=_volumeCount - In the implementation block
@property (assign,nonatomic,__weak) id<GraphRenderOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize graphSize;                                              //@synthesize graphSize=_graphSize - In the implementation block
@property (assign,nonatomic) CGSize volumeGraphSize;                                        //@synthesize volumeGraphSize=_volumeGraphSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets graphInsets;                                      //@synthesize graphInsets=_graphInsets - In the implementation block
@property (nonatomic,retain) StockGraphImageSet * graphImageSet;                            //@synthesize graphImageSet=_graphImageSet - In the implementation block
@property (assign,nonatomic) BOOL roundLineCaps;                                            //@synthesize roundLineCaps=_roundLineCaps - In the implementation block
@property (nonatomic,retain) StockChartDisplayMode * displayMode;                           //@synthesize displayMode=_displayMode - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<GraphRenderOperationDelegate>)arg1 ;
-(id<GraphRenderOperationDelegate>)delegate;
-(BOOL)isCancelled;
-(StockChartDisplayMode *)displayMode;
-(CGPoint*)points;
-(void)setPoints:(CGPoint*)arg1 ;
-(void)render;
-(void)setDisplayMode:(StockChartDisplayMode *)arg1 ;
-(void)setGraphInsets:(UIEdgeInsets)arg1 ;
-(void)setGraphImageSet:(StockGraphImageSet *)arg1 ;
-(void)setLinePointCounts:(NSArray *)arg1 ;
-(void)setDottedLinePositions:(NSArray *)arg1 ;
-(void)setDottedLinePositionsForStyleOnly:(NSArray *)arg1 ;
-(void)setVolumeBars:(SCD_Struct_St9*)arg1 ;
-(void)setVolumeCount:(unsigned)arg1 ;
-(void)setVolumeBarWidth:(double)arg1 ;
-(void)setMaxVolume:(unsigned long long)arg1 ;
-(void)setGraphSize:(CGSize)arg1 ;
-(void)setVolumeGraphSize:(CGSize)arg1 ;
-(StockGraphImageSet *)graphImageSet;
-(UIEdgeInsets)graphInsets;
-(void)renderLineGraph;
-(void)renderVolumeGraph;
-(CGSize)lineGraphSize;
-(void)renderGraphLineInContext:(CGContextRef)arg1 withColor:(id)arg2 offset:(CGPoint)arg3 ;
-(NSArray *)linePointCounts;
-(NSArray *)dottedLinePositions;
-(NSArray *)dottedLinePositionsForStyleOnly;
-(SCD_Struct_St9*)volumeBars;
-(double)volumeBarWidth;
-(unsigned long long)maxVolume;
-(unsigned)volumeCount;
-(CGSize)graphSize;
-(CGSize)volumeGraphSize;
-(BOOL)roundLineCaps;
-(void)setRoundLineCaps:(BOOL)arg1 ;
@end

