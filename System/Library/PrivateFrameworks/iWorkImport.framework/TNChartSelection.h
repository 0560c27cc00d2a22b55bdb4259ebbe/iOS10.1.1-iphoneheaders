/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableSelection.h>

@class TSCHChartDrawableInfo;

@interface TNChartSelection : TSDDrawableSelection {

	TSCHChartDrawableInfo* mChart;
	SCD_Struct_TS413* mReference;

}

@property (nonatomic,readonly) SCD_Struct_TS360* reference; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * chart; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(ChartSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 ;
-(id)initFromArchive:(const ChartSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)returnChartFrameForAutoscroll;
-(id)initWithChartInfo:(id)arg1 reference:(SCD_Struct_TS360*)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_TS360*)reference;
-(TSCHChartDrawableInfo *)chart;
-(void)setReference:(SCD_Struct_TS360*)arg1 ;
@end

