/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSTStrokeSidecar, TSTCellRegion, NSIndexSet, TSTStrokeLayer;

@interface TSTStrokeSidecarLookupMap : NSObject {

	TSTStrokeSidecar* _strokeSidecar;
	TSTCellRegion* _region;
	NSIndexSet* _columnIndiciesInRow;
	TSTStrokeLayer* _topStrokeLayer;
	TSTStrokeLayer* _bottomStrokeLayer;

}

@property (nonatomic,retain) TSTStrokeSidecar * strokeSidecar;                //@synthesize strokeSidecar=_strokeSidecar - In the implementation block
@property (nonatomic,retain) TSTCellRegion * region;                          //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSIndexSet * columnIndiciesInRow;                //@synthesize columnIndiciesInRow=_columnIndiciesInRow - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * topStrokeLayer;                 //@synthesize topStrokeLayer=_topStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * bottomStrokeLayer;              //@synthesize bottomStrokeLayer=_bottomStrokeLayer - In the implementation block
-(TSTStrokeSidecar *)strokeSidecar;
-(void)setColumnIndiciesInRow:(NSIndexSet *)arg1 ;
-(NSIndexSet *)columnIndiciesInRow;
-(id)initWithStrokeSidecar:(id)arg1 region:(id)arg2 ;
-(void)setIteratorToRow:(unsigned short)arg1 ;
-(BOOL)anyCellBordersInThisRow;
-(BOOL)cellBorderAtColumn:(unsigned char)arg1 ;
-(void)setStrokeSidecar:(TSTStrokeSidecar *)arg1 ;
-(TSTStrokeLayer *)topStrokeLayer;
-(void)setTopStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(TSTStrokeLayer *)bottomStrokeLayer;
-(void)setBottomStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(void)dealloc;
-(void)setRegion:(TSTCellRegion *)arg1 ;
-(TSTCellRegion *)region;
@end

