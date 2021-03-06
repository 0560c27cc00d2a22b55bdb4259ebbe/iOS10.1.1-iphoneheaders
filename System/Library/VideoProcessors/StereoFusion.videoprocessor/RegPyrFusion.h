/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/StereoFusion.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLRenderPipelineState, MTLComputePipelineState;
#import <StereoFusion.videoprocessor/StereoFusion.videoprocessor-Structs.h>
@class MetalContext, PyramidStorage, RegPyrFusionResources;

@interface RegPyrFusion : NSObject {

	MetalContext* _metal;
	PyramidStorage* _refPyramid;
	PyramidStorage* _nonRefPyramid;
	id<MTLBuffer> _pyrHomographyTeleIsRef[20];
	id<MTLBuffer> _pyrHomographyWideIsRef[20];
	RegPyrFusionResources* _resources;
	SCD_Struct_Ca6* _teleIsRefCalibData;
	SCD_Struct_Ca6* _wideIsRefCalibData;
	id<MTLRenderPipelineState> _initialDownScalePipelineState;
	id<MTLRenderPipelineState> _bilinearScalePipelineState;
	id<MTLComputePipelineState> _derivPipelineState;
	id<MTLRenderPipelineState> _derivSobelPipelineState;
	id<MTLRenderPipelineState> _basicSearchPipelineState;
	id<MTLRenderPipelineState> _basicSearchLumaPipelineState;
	id<MTLRenderPipelineState> _fusionXPipelineState;
	id<MTLRenderPipelineState> _fusionXLumaPipelineState;
	id<MTLRenderPipelineState> _fusionYPipelineState;
	id<MTLRenderPipelineState> _fusionYLumaPipelineState;
	id<MTLRenderPipelineState> _smoothPipelineState;
	id<MTLRenderPipelineState> _selectionPipelineState;
	id<MTLRenderPipelineState> _selectionLumaPipelineState;
	id<MTLRenderPipelineState> _confidenceStageOne;
	id<MTLRenderPipelineState> _confidenceErode;
	id<MTLRenderPipelineState> _confidenceDilate;
	id<MTLBuffer> _pyrScaleParamLevel0[2];
	id<MTLBuffer> _pyrRoiScaleLevel0[2];
	id<MTLBuffer> _pyrScaleParams[10];

}

@property (nonatomic,readonly) id<MTLTexture> shiftMap; 
@property (nonatomic,readonly) id<MTLTexture> confidenceMap; 
-(id<MTLTexture>)confidenceMap;
-(int)setResourcesWithRefPyramid:(id)arg1 nonRefPyramid:(id)arg2 resources:(id)arg3 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)registerImagesWithReferenceCam:(int)arg1 calibInfo:(SCD_Struct_Re15*)arg2 ;
-(id<MTLTexture>)shiftMap;
-(id)createPipelineStateWithMetal:(id)arg1 vFunction:(id)arg2 fShaderName:(id)arg3 outputColorMetalFormat:(id)arg4 ;
-(void)scaleHomographyUsingCalib:(SCD_Struct_Ca6*)arg1 to:(id*)arg2 ;
-(int)setupPyramidScalersUsingCalib;
-(int)initialDownScaleWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTex:(id)arg3 nonRefTex:(id)arg4 refTexOut:(id)arg5 nonRefTexOut:(id)arg6 refCamType:(int)arg7 ;
-(int)bilinearScaleWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTexIn:(id)arg3 refTexOut:(id)arg4 nonRefTexIn:(id)arg5 nonRefTexOut:(id)arg6 pyrLevel:(int)arg7 ;
-(int)clearTextureWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 outputTex:(id)arg3 ;
-(int)generateDerivativesWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 inputTex:(id)arg3 sobelOutput:(id)arg4 derivInput:(id)arg5 outputTex:(id)arg6 ;
-(int)basicSearchWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refDerivTex:(id)arg3 nonRefDerivTex:(id)arg4 prevShiftMap:(id)arg5 nextShiftMap:(id)arg6 homography:(id)arg7 pyrLevel:(int)arg8 ;
-(int)smoothShiftMapWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 input:(id)arg3 output:(id)arg4 ;
-(int)selectionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refDerivTex:(id)arg3 nonRefDerivTex:(id)arg4 prevShiftMap:(id)arg5 nextShiftMap:(id)arg6 homography:(id)arg7 pyrLevel:(int)arg8 ;
-(int)fusionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 refTex:(id)arg3 refDerivTex:(id)arg4 nonRefDerivTex:(id)arg5 prevShiftMap:(id)arg6 shiftMapWeight:(id)arg7 nextShiftMap:(id)arg8 homography:(id)arg9 pyrLevel:(int)arg10 ;
-(int)confidenceMapWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 prevShiftMap:(id)arg3 confidenceOut:(id)arg4 confidenceErodeIn:(id)arg5 confidenceErodeOut:(id)arg6 confidenceDilateIn:(id)arg7 confidenceDilateOut:(id)arg8 ;
-(void)dumpIntermediateTex:(id)arg1 lvl:(unsigned)arg2 name:(id)arg3 ;
-(BOOL)debugLoadData;
-(void)debugDumpData;
@end

