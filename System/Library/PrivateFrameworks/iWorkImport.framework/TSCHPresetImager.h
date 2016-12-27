/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCHPresetImager : NSObject
+(id)presetImagerForChartType:(id)arg1 ;
+(void)drawGenericImageIntoContext:(CGContextRef)arg1 size:(CGSize)arg2 preset:(id)arg3 usingRepresentativeSpecificSeriesFillProperties:(id)arg4 outShouldCache:(BOOL*)arg5 ;
-(id)initWithChartType:(id)arg1 ;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL*)arg7 ;
-(UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1 ;
-(id)p_init;
-(CGContextRef)p_newContextOfSize:(CGSize)arg1 ;
-(BOOL)p_preserveAspectRatio;
-(CGSize)p_nativeSize;
-(id)p_shadow;
-(void)p_drawShadowedContentIntoContext:(CGContextRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(BOOL*)arg5 ;
-(void)p_drawUnshadowedContentIntoContext:(CGContextRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(BOOL*)arg5 ;
-(id)p_objectFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3 ;
-(CGSize)p_drawAndOffsetMultiDataSliderIntoContext:(CGContextRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 ;
-(id)p_chartType;
-(void)p_fillPath:(CGPathRef)arg1 withFill:(id)arg2 inContext:(CGContextRef)arg3 ;
-(id)p_strokeFromStyle:(id)arg1 specific:(int)arg2 default:(int)arg3 ;
-(id)init;
@end

