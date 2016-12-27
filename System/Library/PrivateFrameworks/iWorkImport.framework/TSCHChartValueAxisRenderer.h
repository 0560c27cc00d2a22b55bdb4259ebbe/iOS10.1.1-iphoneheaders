/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisRenderer.h>

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {

	unsigned long long mEditingLabelIndex;

}
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)labelsLayoutItem;
-(id)valueAxisLayoutItem;
@end

