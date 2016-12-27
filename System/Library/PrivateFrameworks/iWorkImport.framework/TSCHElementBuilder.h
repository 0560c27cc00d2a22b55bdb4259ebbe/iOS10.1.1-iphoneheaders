/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCHElementBuilder : NSObject
+(CGRect)clipRectForElementsDrawnByRenderState:(id)arg1 ;
+(double)referenceLineLabelTopAxisPadding;
+(double)referenceLineLabelRightAxisPadding;
+(CGRect)p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg1 returningItemCount:(unsigned long long*)arg2 ;
+(CGRect)elementsRectForElementsDrawnByRenderState:(id)arg1 ;
-(unsigned long long)countOfReferenceLineLabelsForAxisID:(id)arg1 model:(id)arg2 forRefLineLabelsLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRects:(CGRect*)arg6 outNewParagraphStyles:(id*)arg7 outNewStrings:(id*)arg8 outNewLabelTypes:(unsigned long long*)arg9 outReferenceLines:(id*)arg10 includeOutsideChartBodyBounds:(BOOL)arg11 outOutsideChartBodyBounds:(BOOL*)arg12 ;
-(unsigned long long)countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 outNewTransforms:(CGAffineTransform*)arg3 outNewElementSizes:(CGSize*)arg4 outNewClipRects:(CGRect*)arg5 outNewParagraphStyles:(id*)arg6 outNewStrings:(id*)arg7 outNewLabelTypes:(unsigned long long*)arg8 includeOutsideChartBodyBounds:(BOOL)arg9 outOutsideChartBodyBounds:(BOOL*)arg10 ;
-(unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRect:(CGRect*)arg6 outNewStrings:(id*)arg7 ;
-(unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned long long)countOfReferenceLinesForAxisID:(id)arg1 model:(id)arg2 forBodyLayout:(id)arg3 outClipRect:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewLineDescriptors:(/*function pointer*/void**)arg6 outReferenceLines:(id*)arg7 includeOutsideChartBodyBounds:(BOOL)arg8 outOutsideChartBodyBounds:(BOOL*)arg9 ;
-(CGAffineTransform)transformForRenderingLabelForReferenceLine:(id)arg1 ofType:(unsigned long long)arg2 range:(NSRange)arg3 inLayoutItem:(id)arg4 outElementSize:(CGSize*)arg5 outClipRect:(CGRect*)arg6 ;
-(unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(CGRect*)arg5 outNewErrorBarDescriptors:(/*function pointer*/void**)arg6 ;
-(void)trendlineElementForSeries:(id)arg1 forBodyLayout:(id)arg2 outElementBounds:(CGRect*)arg3 outElementClipRect:(CGRect*)arg4 outElementPath:(id*)arg5 ;
-(CGAffineTransform)transformForRenderingTrendlineTextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 outParagraphStyle:(id*)arg5 outNewString:(const _CFAttributedString*)arg6 ;
-(CGAffineTransform)transformForRenderingR2TextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 outParagraphStyle:(id*)arg5 outString:(id*)arg6 ;
-(CGPoint)labelPointForPosition:(unsigned)arg1 rect:(CGRect)arg2 stringSize:(CGSize)arg3 ;
-(CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 ;
-(long long)hitCheckPoint:(CGPoint)arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3 ;
-(unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const CGPath*)arg4 outSelectionKnobLocations:(id*)arg5 ;
-(unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(/*function pointer*/void**)arg4 ;
-(BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(CGAffineTransform*)arg3 outLine:(SCD_Struct_TS548*)arg4 ;
-(unsigned long long)p_countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 substringRange:(NSRange*)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRects:(CGRect*)arg6 outNewParagraphStyles:(id*)arg7 outNewStrings:(id*)arg8 outNewLabelTypes:(unsigned long long*)arg9 includeOutsideChartBodyBounds:(BOOL)arg10 outOutsideChartBodyBounds:(BOOL*)arg11 ;
-(void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL*)arg3 outOffsetInBody:(double*)arg4 ;
-(CGAffineTransform)p_transformForRenderingTrendlineTextNotR2:(BOOL)arg1 forSeries:(id)arg2 forAreaLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outParagraphStyle:(id*)arg6 outString:(const _CFAttributedString*)arg7 ;
@end

