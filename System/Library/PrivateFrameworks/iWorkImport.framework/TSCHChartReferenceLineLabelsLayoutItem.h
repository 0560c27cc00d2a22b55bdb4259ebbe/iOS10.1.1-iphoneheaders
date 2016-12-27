/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem {

	TSCHChartAxisID* mAxisID;

}

@property (nonatomic,retain,readonly) TSCHChartAxisID * axisID; 
-(TSCHChartAxisID *)axisID;
-(CGRect)p_drawingRectForModel:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(id)initWithParent:(id)arg1 axisID:(id)arg2 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)p_areaLayoutItem;
-(void)dealloc;
@end

