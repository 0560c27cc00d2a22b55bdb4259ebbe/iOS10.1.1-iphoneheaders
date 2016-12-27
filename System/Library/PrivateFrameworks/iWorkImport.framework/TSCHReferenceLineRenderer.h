/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHReferenceLineRenderer : TSCHRenderer
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(BOOL)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(int)chunkPlane;
-(void)p_renderLabelsIntoContext:(CGContextRef)arg1 forRefLineLabelsLayout:(id)arg2 forSelection:(id)arg3 ;
-(void)p_renderLinesIntoContext:(CGContextRef)arg1 linesToRender:(id)arg2 ;
-(void)p_renderLabelsIntoContext:(CGContextRef)arg1 forRefLineLabelsLayout:(id)arg2 ;
@end

