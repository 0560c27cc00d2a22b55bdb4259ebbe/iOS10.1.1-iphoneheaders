/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementSceneObject.h>

@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject
+(Class)propertiesClass;
+(void)setLowDetailedGeometriesForScene:(id)arg1 ;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4 ;
-(BOOL)shouldRenderEachValue;
-(void)updateElementEffectsStates:(const RenderElementInfo*)arg1 depthToWidthRatio:(float)arg2 ;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
-(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 scene:(id)arg2 ;
-(void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4 ;
-(tvec2<float>)p_valueLabelPaddingForLabelPosition:(unsigned)arg1 ;
-(void)updateTilingEffect:(TexCoordTilingShaderEffectState*)arg1 series:(id)arg2 properties:(id)arg3 textureTiling:(id)arg4 areaSize:(tvec3<float>*)arg5 element:(tvec2<int>*)arg6 ;
-(tvec3<float>)sortingPositionForElement:(const RenderElementInfo*)arg1 ;
@end

