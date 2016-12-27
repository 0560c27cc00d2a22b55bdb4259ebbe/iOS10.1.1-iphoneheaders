/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class MetalContext, FuseRemixShaders, FusionRemixUniforms;

@interface FusionRemixStage : NSObject {

	FusionRemixStageUniformsSBP _arrayOfinputParams[8];
	AmbnrConfiguration _oisDenoiseConf[4];
	BOOL _isOISDenoiseParamsSet;
	BOOL _isFusionParamsSet;
	MetalContext* _metal;
	FuseRemixShaders* _fuseRemixShaders_u8;
	FuseRemixShaders* _fuseRemixShadersHDR_u8;
	FuseRemixShaders* _fuseRemixShadersHDR_fp16;
	FusionRemixUniforms* _uniforms[10];
	int _fusionType;
	int _numInputFrames;
	FusionRemixStageUniformsVertex _vertexUniforms;
	float _dcValue[12];
	CGRect _ROI;
	id<MTLTexture> _placeHolderTex;

}
+(id)getFragmentShader:(id)arg1 bandIndex:(int)arg2 isLuma:(BOOL)arg3 ;
-(id)initBandFusion:(id)arg1 ;
-(void)setROI:(CGRect)arg1 ;
-(int)runImageFusion:(id)arg1 frameOrder:(int*)arg2 fusionMode:(int)arg3 numberOfPyramids:(int)arg4 fusedPyramid:(id)arg5 fusedDenoisedPyramid:(id)arg6 preAllocatedBuffers:(FusionBuffers_s*)arg7 denoiser:(id)arg8 bilateralGrid:(id)arg9 registrationXforms:(float*)arg10 exposure:(exposureParameters*)arg11 tuningParams:(id)arg12 ;
-(void)computeFusionParams:(id)arg1 referenceFrameExposure:(exposureParameters*)arg2 ;
-(int)estimateDCValues:(int*)arg1 ambnrBuffers:(id)arg2 ;
-(int)runBandFusion:(int)arg1 frameOrder:(int*)arg2 prevFusedTex:(id)arg3 outputTex:(id)arg4 bandFusionParams:(FusionRemixStageUniformsSBP*)arg5 fragmentBufferIndex:(int)arg6 processLuma:(BOOL)arg7 processTopBand:(BOOL)arg8 computeSpecialMap:(int)arg9 hdrFusionMode:(int)arg10 ambnrBuffers:(id)arg11 simMapTex:(id)arg12 toneMapTex:(id)arg13 bilateralGridTex:(id)arg14 mismatchCoef:(float)arg15 ;
-(int)computeMismatchCoef:(CVBufferRef)arg1 morphologyBuffer:(char*)arg2 gain:(float)arg3 mismatchCoef:(float*)arg4 ;
-(void)setOISDenoiseConf:(AmbnrConfiguration*)arg1 ;
-(void)setArrayOfInputParams:(FusionRemixStageUniformsSBP*)arg1 ;
@end

