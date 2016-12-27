/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCECalculationEngine;

@interface TSTUidRangeRef : NSObject <NSCopying> {

	CFUUIDRef _tableID;
	TSTCellUID _topLeft;
	TSTCellUID _bottomRight;
	unsigned char _stickyBits;
	TSCECalculationEngine* _calcEngine;
	TSCERangeCoordinate _geometricRangeCoord;

}

@property (nonatomic,readonly) CFUUIDRef tableID;                                  //@synthesize tableID=_tableID - In the implementation block
@property (nonatomic,readonly) unsigned char stickyBits;                           //@synthesize stickyBits=_stickyBits - In the implementation block
@property (nonatomic,readonly) TSTCellUID topLeftCellUID;                          //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) TSTCellUID bottomRightCellUID;                      //@synthesize bottomRight=_bottomRight - In the implementation block
@property (assign,nonatomic) TSCERangeCoordinate geometricRangeCoord;              //@synthesize geometricRangeCoord=_geometricRangeCoord - In the implementation block
@property (nonatomic,readonly) BOOL hasGeometricRangeCoord; 
@property (nonatomic,retain) TSCECalculationEngine * calcEngine;                   //@synthesize calcEngine=_calcEngine - In the implementation block
-(SCD_Struct_TS360*)rangeReference;
-(TSCECalculationEngine *)calcEngine;
-(unsigned char)stickyBits;
-(TSCERangeCoordinate)rangeCoordinate;
-(void)setRangeReference:(SCD_Struct_TS360*)arg1 stickyBits:(unsigned char)arg2 ;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(id)initWithCalcEngine:(id)arg1 rangeReference:(SCD_Struct_TS360*)arg2 stickyBits:(unsigned char)arg3 ;
-(TSTCellUID)topLeftCellUID;
-(TSTCellUID)bottomRightCellUID;
-(id)initWithCalcEngine:(id)arg1 tableID:(CFUUIDRef)arg2 topLeft:(TSTCellUID)arg3 bottomRight:(TSTCellUID)arg4 stickyBits:(unsigned char)arg5 ;
-(void)convertGeometricRangeToUID;
-(id)initWithCalcEngine:(id)arg1 tableID:(CFUUIDRef)arg2 rangeCoordinate:(TSCERangeCoordinate)arg3 stickyBits:(unsigned char)arg4 ;
-(BOOL)hasGeometricRangeCoord;
-(void)setRangeCoordinate:(TSCERangeCoordinate)arg1 stickyBits:(unsigned char)arg2 ;
-(TSCERangeCoordinate)geometricRangeCoord;
-(void)setGeometricRangeCoord:(TSCERangeCoordinate)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFUUIDRef)tableID;
@end

