/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableStrokeProviding, TSTTableInternalGeometryProviding;
@class NSPointerArray;

@interface TSTStrokeDefaultVendor : NSObject {

	BOOL _isValid;
	unsigned _headerSideBorderColumn;
	unsigned _headerColumnSeparatorColumn;
	unsigned _bodySideBorderColumn;
	unsigned _topBorderRow;
	unsigned _headerRowSeparatorRow;
	unsigned _footerRowSeparatorRow;
	unsigned _bottomBorderRow;
	id<TSTTableStrokeProviding> _strokeProvider;
	id<TSTTableInternalGeometryProviding> _internalGeometryProvider;
	NSPointerArray* _strokeTypeToLayerMap;

}

@property (assign,nonatomic) BOOL isValid;                                                                //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSPointerArray * strokeTypeToLayerMap;                                       //@synthesize strokeTypeToLayerMap=_strokeTypeToLayerMap - In the implementation block
@property (assign,nonatomic) unsigned headerSideBorderColumn;                                             //@synthesize headerSideBorderColumn=_headerSideBorderColumn - In the implementation block
@property (assign,nonatomic) unsigned headerColumnSeparatorColumn;                                        //@synthesize headerColumnSeparatorColumn=_headerColumnSeparatorColumn - In the implementation block
@property (assign,nonatomic) unsigned bodySideBorderColumn;                                               //@synthesize bodySideBorderColumn=_bodySideBorderColumn - In the implementation block
@property (assign,nonatomic) unsigned topBorderRow;                                                       //@synthesize topBorderRow=_topBorderRow - In the implementation block
@property (assign,nonatomic) unsigned headerRowSeparatorRow;                                              //@synthesize headerRowSeparatorRow=_headerRowSeparatorRow - In the implementation block
@property (assign,nonatomic) unsigned footerRowSeparatorRow;                                              //@synthesize footerRowSeparatorRow=_footerRowSeparatorRow - In the implementation block
@property (assign,nonatomic) unsigned bottomBorderRow;                                                    //@synthesize bottomBorderRow=_bottomBorderRow - In the implementation block
@property (assign,nonatomic) id<TSTTableStrokeProviding> strokeProvider;                                  //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (assign,nonatomic) id<TSTTableInternalGeometryProviding> internalGeometryProvider;              //@synthesize internalGeometryProvider=_internalGeometryProvider - In the implementation block
-(id)initWithStrokeProvider:(id)arg1 internalGeometryProvider:(id)arg2 ;
-(id)strokeLayerForColumn:(unsigned)arg1 ;
-(id)strokeLayerForRow:(unsigned)arg1 ;
-(void)setStrokeProvider:(id<TSTTableStrokeProviding>)arg1 ;
-(void)setInternalGeometryProvider:(id<TSTTableInternalGeometryProviding>)arg1 ;
-(void)setStrokeTypeToLayerMap:(NSPointerArray *)arg1 ;
-(NSPointerArray *)strokeTypeToLayerMap;
-(int)p_strokeTypeForColumn:(unsigned)arg1 ;
-(id)strokeLayerForStrokeType:(int)arg1 ;
-(int)p_strokeTypeForRow:(unsigned)arg1 ;
-(id<TSTTableInternalGeometryProviding>)internalGeometryProvider;
-(void)setHeaderSideBorderColumn:(unsigned)arg1 ;
-(unsigned)headerColumnSeparatorColumn;
-(void)setHeaderColumnSeparatorColumn:(unsigned)arg1 ;
-(unsigned)bodySideBorderColumn;
-(void)setBodySideBorderColumn:(unsigned)arg1 ;
-(void)setTopBorderRow:(unsigned)arg1 ;
-(unsigned)headerRowSeparatorRow;
-(void)setHeaderRowSeparatorRow:(unsigned)arg1 ;
-(unsigned)footerRowSeparatorRow;
-(void)setFooterRowSeparatorRow:(unsigned)arg1 ;
-(unsigned)bottomBorderRow;
-(void)setBottomBorderRow:(unsigned)arg1 ;
-(BOOL)validateGeometry;
-(void)p_updateStrokeLayer:(id)arg1 forColumnStrokeType:(int)arg2 ;
-(void)p_updateStrokeLayer:(id)arg1 forRowStrokeType:(int)arg2 ;
-(unsigned)headerSideBorderColumn;
-(unsigned)topBorderRow;
-(id<TSTTableStrokeProviding>)strokeProvider;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)validate;
-(void)setIsValid:(BOOL)arg1 ;
@end
