/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartBarElementsRenderer : TSCHRenderer {

	BOOL mVertical;
	BOOL mTouchInResize;
	BOOL mTouchInBody;
	unsigned long long mHitSeriesIndex;
	unsigned long long mHitValueIndex;
	double mHitFudgeOffset;
	BOOL mResizeIsOutsideBody;
	CGRect mLastDrawRect;

}
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(id)initWithChartRep:(id)arg1 layoutItem:(id)arg2 ;
-(SCD_Struct_TS494)p_valueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2 ;
-(CGRect)renderingElementFrameForBarElementFrame:(CGRect)arg1 groupIndex:(unsigned long long)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(SCD_Struct_TS495)arg6 returningFillRect:(CGRect*)arg7 strokeRect:(CGRect*)arg8 ;
-(void)p_drawBars:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)p_drawLabels:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(int)chunkPlane;
-(BOOL)supportsSeparateLabelsRenderPass;
-(CGRect)barElementFrameForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 ;
@end

