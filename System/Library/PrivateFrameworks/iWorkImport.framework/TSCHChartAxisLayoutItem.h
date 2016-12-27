/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID, TSCHChartAxisTitleLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisLineLayoutItem, TSCHChartReferenceLineLabelPaddingLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem {

	TSCHChartAxisID* mAxisID;
	int mAxisPosition;
	TSCHChartAxisTitleLayoutItem* mAxisTitle;
	TSCHChartAxisPaddingLayoutItem* mAxisPadding;
	TSCHChartAxisTickMarksLayoutItem* mTickMarks;
	TSCHChartAxisLineLayoutItem* mAxisLine;
	TSCHChartReferenceLineLabelPaddingLayoutItem* mRefLineLabelPadding;
	TSCHChartReferenceLineLabelsLayoutItem* mRefLineLabels;
	CGSize mChartBodySize;
	TSCHChartAxisID* mReferenceLineLabelAxisID;

}

@property (assign,nonatomic) CGSize chartBodySize; 
@property (nonatomic,retain) TSCHChartAxisID * axisID; 
@property (nonatomic,readonly) int axisPosition; 
@property (nonatomic,readonly) TSCHChartAxisTitleLayoutItem * axisTitleLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisPaddingLayoutItem * axisPaddingLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisTickMarksLayoutItem * axisTickMarksLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisLineLayoutItem * axisLineLayoutItem; 
@property (nonatomic,readonly) TSCHChartReferenceLineLabelPaddingLayoutItem * refLineLabelPadding; 
@property (nonatomic,readonly) TSCHChartReferenceLineLabelsLayoutItem * refLineLabels; 
@property (nonatomic,retain) TSCHChartAxisID * referenceLineLabelAxisID; 
-(TSCHChartAxisID *)axisID;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(void)setAxisID:(TSCHChartAxisID *)arg1 ;
-(TSCHChartAxisTitleLayoutItem *)axisTitleLayoutItem;
-(TSCHChartAxisLineLayoutItem *)axisLineLayoutItem;
-(TSCHChartAxisTickMarksLayoutItem *)axisTickMarksLayoutItem;
-(id)renderersWithRep:(id)arg1 ;
-(void)setChartBodySize:(CGSize)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(id)p_description;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
-(id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1 ;
-(id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1 ;
-(id)initWithParent:(id)arg1 axisPosition:(int)arg2 ;
-(TSCHChartAxisPaddingLayoutItem *)axisPaddingLayoutItem;
-(CGSize)chartBodySize;
-(TSCHChartReferenceLineLabelPaddingLayoutItem *)refLineLabelPadding;
-(TSCHChartReferenceLineLabelsLayoutItem *)refLineLabels;
-(TSCHChartAxisID *)referenceLineLabelAxisID;
-(void)setReferenceLineLabelAxisID:(TSCHChartAxisID *)arg1 ;
-(void)dealloc;
-(int)axisPosition;
@end

