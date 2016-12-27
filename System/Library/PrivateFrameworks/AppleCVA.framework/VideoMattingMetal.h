/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLCommandQueue, MTLComputePipelineState, MTLBuffer, MTLTexture, OS_dispatch_semaphore, OS_dispatch_queue;
#import <AppleCVA/AppleCVA-Structs.h>
@class NSObject, MPSImageBox, MPSImageLanczosScale, MPSImageGaussianBlur;

@interface VideoMattingMetal : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLCommandQueue> _commandQueue;
	int _lastCommittedCommand;
	float _renderingShiftBlurRadius;
	float _renderingInvalidShiftFillValue;
	float _renderingLensFocalLength_mm;
	float _thresholdHardness;
	id<MTLComputePipelineState> _guidedFilterApplyKernel;
	id<MTLComputePipelineState> _guidedFilterApplyARGBKernel;
	id<MTLComputePipelineState> _guidedFilterApplyRGBAKernel;
	id<MTLComputePipelineState> _guidedFilterInvertKernel;
	id<MTLComputePipelineState> _guidedFilterMultiplyKernel;
	id<MTLComputePipelineState> _guidedFilterEmbedGuideKernel;
	id<MTLComputePipelineState> _guidedFilterPremultiplyKernel;
	id<MTLComputePipelineState> _guidedFilterSecondOrderProductsKernel;
	id<MTLComputePipelineState> _guidedFilterCovarianceKernel;
	id<MTLComputePipelineState> _guidedFilterRegressionKernel;
	id<MTLBuffer> _regressionConfig;
	id<MTLComputePipelineState> _integralHorizontalKernel;
	id<MTLComputePipelineState> _integralVerticalKernel;
	id<MTLComputePipelineState> _convolutionKernel;
	id<MTLComputePipelineState> _integralHorizontal_1Plane_Kernel;
	id<MTLComputePipelineState> _integralVertical_1Plane_Kernel;
	id<MTLComputePipelineState> _convolution_1Plane_Kernel;
	id<MTLComputePipelineState> _box_half_pass_horiz_kernel;
	id<MTLComputePipelineState> _box_half_pass_vert_kernel;
	id<MTLComputePipelineState> _box_half4_pass_horiz_kernel;
	id<MTLComputePipelineState> _box_half4_pass_vert_kernel;
	id<MTLComputePipelineState> _box_norm_half_pass_vert_kernel;
	id<MTLComputePipelineState> _box_norm_half4_pass_vert_kernel;
	id<MTLComputePipelineState> _box_normValid_half_pass_vert_kernel;
	id<MTLComputePipelineState> _box_normValid_half4_pass_vert_kernel;
	id<MTLComputePipelineState> _postProcessAlphaKernel;
	id<MTLComputePipelineState> _temporalCoefficientsFilterKernel;
	id<MTLBuffer> _distanceTransformConfig;
	id<MTLComputePipelineState> _distanceTransformVerticalWithForegroundMaskKernel;
	id<MTLComputePipelineState> _distanceTransformHorizontalWithWeightKernel;
	id<MTLComputePipelineState> _grayKernel;
	id<MTLComputePipelineState> _distanceTransformVerticalKernel;
	id<MTLComputePipelineState> _distanceTransformHorizontalKernel;
	id<MTLComputePipelineState> _shiftDecimateKernel;
	id<MTLComputePipelineState> _alphaFillKernel;
	id<MTLComputePipelineState> _renderingFgBgKernel_argb;
	id<MTLComputePipelineState> _renderingFgBgKernel_rgba;
	id<MTLComputePipelineState> _renderingFgMergeKernel;
	id<MTLComputePipelineState> _renderingShiftDeweightKernel;
	id<MTLBuffer> _shiftConfig;
	id<MTLComputePipelineState> _renderingShiftFillAndFilterKernel;
	id<MTLComputePipelineState> _renderingVariableBlurXKernel;
	id<MTLBuffer> _variableBlurConfig;
	id<MTLComputePipelineState> _renderingVariableBlurYKernel;
	id<MTLComputePipelineState> _renderingCompositeAndFixupKernel_argb;
	id<MTLComputePipelineState> _renderingCompositeAndFixupKernel_rgba;
	id<MTLComputePipelineState> _renderingCompositeAndFixupKernel_420f;
	id<MTLBuffer> _noiseConfig;
	id<MTLComputePipelineState> _renderingAddNoiseKernel;
	id<MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
	id<MTLComputePipelineState> _down2Kernel;
	id<MTLComputePipelineState> _cubicUpsampleKernel;
	id<MTLComputePipelineState> _maskedVariableBlurKernel;
	id<MTLComputePipelineState> _doubleUpsampler;
	id<MTLComputePipelineState> _halfDownSampler;
	id<MTLComputePipelineState> _doubleUpsamplerOneComponent;
	id<MTLComputePipelineState> _halfDownSamplerOneComponent;
	id<MTLTexture> _normInvNum;
	id<MTLTexture> _lowResMatte;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	id<MTLTexture> _srcTexture;
	id<MTLTexture> _rTexture;
	id<MTLTexture> _gTexture;
	id<MTLTexture> _bTexture;
	id<MTLBuffer> _rBuf;
	id<MTLBuffer> _gBuf;
	id<MTLBuffer> _bBuf;
	id<MTLTexture> _fg;
	id<MTLTexture> _fgBlurred;
	id<MTLTexture> _bg;
	id<MTLTexture> _blurredBg;
	id<MTLTexture> _deweightedShift;
	id<MTLTexture> _shift[2];
	id<MTLTexture> _blurredBgX;
	id<MTLTexture> _coc;
	id<MTLTexture> _fullResCoC;
	id<MTLTexture> _halfResCoC;
	MPSImageBox* _gfBoxKernel;
	MPSImageBox* _shiftBlurBoxKernel;
	MPSImageBox* _fgBlurBoxKernel;
	id<MTLTexture> _gfGuide;
	id<MTLTexture> _gfWeight;
	id<MTLTexture> _gfSrcWithGuide;
	id<MTLTexture> _gfMeanSrcWithGuide;
	id<MTLTexture> _gfSrcGuide;
	id<MTLTexture> _gfMeanSrcGuide;
	id<MTLTexture> _gfRRRGRB;
	id<MTLTexture> _gfGGGBBB;
	id<MTLTexture> _gfMeanRRRGRB;
	id<MTLTexture> _gfMeanGGGBBB;
	id<MTLTexture> _gfTmp;
	id<MTLTexture> _gfTmp2;
	id<MTLTexture> _gfWeightMulResult;
	id<MTLTexture> _gfMeanWeight;
	id<MTLTexture> _gfMeanNormalizationFactor;
	id<MTLTexture> _rCoeffTexture;
	id<MTLTexture> _gCoeffTexture;
	id<MTLTexture> _bCoeffTexture;
	id<MTLTexture> _aCoeffTexture;
	id<MTLTexture> _convolutedCoeff;
	id<MTLTexture> _upscaledCoeff;
	id<MTLTexture> _integralOutput;
	id<MTLTexture> _integralIntermediateTexture;
	id<MTLTexture> _boxIntermediateTexture_rgba;
	id<MTLTexture> _boxIntermediateTexture_r;
	id<MTLTexture> _filteredAlphaTexture;
	id<MTLTexture> _smoothedAlphaTexture;
	id<MTLTexture> _alphaTexture;
	id<MTLTexture> _scaledSource[2];
	_CVBuffer* _scaledSourceCV[2];
	id<MTLTexture> _coeffHistory[2];
	id<MTLTexture> _scaledGray;
	id<MTLTexture> _colorSim;
	id<MTLTexture> _tempFloatR32FloatTexture;
	id<MTLTexture> _hybridUpscalingIntermediateTexture;
	id<MTLTexture> _hybridDownsamplingIntermediateTexture;
	CVBufferRef _hybridDownsamplingIntermediateBuffer;
	id<MTLTexture> _hybridUpscalingIntermediateR32Texture;
	id<MTLTexture> _hybridDownsamplingIntermediateR32Texture;
	id<MTLTexture> _d1;
	id<MTLTexture> _d2;
	id<MTLTexture> _d3;
	id<MTLTexture> _d4;
	id<MTLTexture> _d5;
	id<MTLTexture> _d6;
	id<MTLTexture> _u1;
	id<MTLTexture> _u2;
	id<MTLTexture> _u3;
	id<MTLTexture> _u4;
	id<MTLTexture> _u5;
	id<MTLTexture> _u6;
	id<MTLTexture> _alphaLut;
	unsigned long long _frameIndex;
	MPSImageLanczosScale* _scaler;
	MPSImageGaussianBlur* _smoothFilter;
	IOSurfaceAcceleratorRef _hwScaler;
	CVBufferRef _msrIntermediateBuffer;
	NSObject*<OS_dispatch_queue> _synchronousRenderingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _renderingCallbackSemaphore;
	NSObject*<OS_dispatch_queue> _synchronousMattingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _mattingCallbackSemaphore;
	_sFILE* _scaledSourceFile;
	float _renderingShiftUpdateRate;

}

@property (assign) float renderingShiftUpdateRate;              //@synthesize renderingShiftUpdateRate=_renderingShiftUpdateRate - In the implementation block
-(void)dealloc;
-(float)getMaxCoCRadius:(float)arg1 withFocusAt:(float)arg2 withFNumber:(float)arg3 withXResolution:(float)arg4 ;
-(id)initWithMetalContext:(MetalContextRef)arg1 renderingShiftUpdateRate:(float)arg2 renderingShiftBlurRadius:(float)arg3 renderingInvalidShiftFillValue:(float)arg4 renderingLensFocalLength_mm:(float)arg5 ;
-(void)setNormInvNum:(Array<float, 2, 16>*)arg1 ;
-(void)setAlphaLut:(float*)arg1 ;
-(void)updateWithShift:(ArrayView<unsigned char, 2>*)arg1 filteredShift:(CVBufferRef)arg2 source:(CVBufferRef)arg3 coeff:(CVBufferRef)arg4 alpha:(CVBufferRef)arg5 fgMask:(CVBufferRef)arg6 weight2:(CVBufferRef)arg7 params:(SCD_Struct_Vi3*)arg8 callback:(/*^block*/id)arg9 ;
-(void)encodeBoxFilterToBuffer:(id)arg1 sourceCoeff:(id)arg2 destinationCoeff:(id)arg3 radius:(int)arg4 normalize:(long long)arg5 ;
-(void)encodeBoxHorizontalToCommandBuffer:(id)arg1 configBuffer:(id)arg2 source:(id)arg3 destination:(id)arg4 ;
-(void)encodeBoxVerticalToCommandBuffer:(id)arg1 configBuffer:(id)arg2 source:(id)arg3 destination:(id)arg4 normalize:(long long)arg5 ;
-(void)encodeIntegralFilterToBuffer:(id)arg1 sourceCoeff:(id)arg2 destinationCoeff:(id)arg3 ;
-(void)encodeIntegralHorizontalFilter1PlaneToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeIntegralHorizontalFilterToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeIntegralVerticalFilterToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeBoxConvolutionToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 kernelSize:(unsigned)arg4 ;
-(void)initSourceTexture:(CVBufferRef)arg1 ;
-(void)initCoeffTextureARGB:(vImage_Buffer*)arg1 texture:(id*)arg2 ;
-(void)initCoeffTexture:(Array<float, 2, 16>*)arg1 :(Array<float, 2, 16>*)arg2 :(Array<float, 2, 16>*)arg3 :(Array<float, 2, 16>*)arg4 to:(id*)arg5 :(id*)arg6 :(id*)arg7 :(id*)arg8 ;
-(void)upsaleCoeffWithCPU:(Array<float, 2, 16>*)arg1 :(Array<float, 2, 16>*)arg2 :(Array<float, 2, 16>*)arg3 :(Array<float, 2, 16>*)arg4 destination:(id*)arg5 width:(unsigned long long)arg6 height:(unsigned long long)arg7 ;
-(void)upscaleCoeffWithMPS:(id)arg1 sourceCoeff:(Array<float, 2, 16>*)arg2 :(Array<float, 2, 16>*)arg3 :(Array<float, 2, 16>*)arg4 :(Array<float, 2, 16>*)arg5 scaledCoeff:(id*)arg6 :(id*)arg7 :(id*)arg8 :(id*)arg9 width:(unsigned long long)arg10 height:(unsigned long long)arg11 ;
-(void)guidedFilterInjectColor:(CVBufferRef)arg1 ;
-(void)encodeGuidedFilterWithGuideToCommandBuffer:(id)arg1 src:(CVBufferRef)arg2 weight:(CVBufferRef)arg3 radius:(unsigned)arg4 epsilon:(double)arg5 dst:(CVBufferRef)arg6 ;
-(void)initGuidedFilterTexturesWithWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)encodeFilterApplyToBuffer:(id)arg1 coeff:(id)arg2 source:(id)arg3 destination:(id)arg4 ;
-(void)guidedFilterApply:(Array<float, 2, 16>*)arg1 :(Array<float, 2, 16>*)arg2 :(Array<float, 2, 16>*)arg3 :(Array<float, 2, 16>*)arg4 source:(CVBufferRef)arg5 destination:(ArrayView<float, 2>*)arg6 ;
-(void)encodeIntegralImageBoxConvolveToBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 kernelSize:(unsigned)arg4 ;
-(void)boxConvolve_1PlaneSource:(const ArrayView<float, 2>*)arg1 destination:(ArrayView<float, 2>*)arg2 kernelSize:(unsigned)arg3 ;
-(void)encodeGuidedFilterReconstructToCommandBuffer:(id)arg1 Source:(CVBufferRef)arg2 Coeff:(CVBufferRef)arg3 destination:(CVBufferRef)arg4 kernelSize:(unsigned)arg5 alphaMaxLaplacian:(float)arg6 similarityScaleFactor:(float)arg7 updateRate:(float)arg8 ;
-(void)encodeSmoothAlphaToCommandBuffer:(id)arg1 alpha:(id)arg2 ;
-(void)encodePostProcessAlphaToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 alphaMaxLaplacian:(float)arg4 ;
-(void)encodeFilterCoefficientToBuffer:(id)arg1 inputCoeff:(id)arg2 prevSource:(id)arg3 currSource:(id)arg4 prevCoeff:(id)arg5 outCoeff:(id)arg6 outColorSim:(id)arg7 similarityScaleFactor:(float)arg8 updateRate:(float)arg9 ;
-(void)encodeCreateGrayImageToCommandBuffer:(id)arg1 source:(id)arg2 ;
-(CVBufferRef)createCVBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned)arg3 ;
-(void)encodeScaleSourceToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 targetWidth:(unsigned long long)arg3 targetHeight:(unsigned long long)arg4 ;
-(char*)graySource;
-(void)encodeForegroundMaskToBuffer:(id)arg1 filteredShift:(id)arg2 weight:(id)arg3 foregroundMask:(id)arg4 shiftMin:(unsigned)arg5 hardness:(float)arg6 minDistToDeweight:(float)arg7 unconfidentWeight:(float)arg8 ;
-(void)encodeComputeForegroundMaskToCommandBuffer:(id)arg1 fgMask:(CVBufferRef)arg2 weight:(CVBufferRef)arg3 filteredShift:(CVBufferRef)arg4 shiftMin:(unsigned)arg5 hardness:(float)arg6 minDistToDeweight:(float)arg7 unconfidentWeight:(float)arg8 ;
-(void)encodeDistanceTransformToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)distanceTransformNonInitForeground:(Array<unsigned char, 2, 16>*)arg1 distromInitForeground:(Array<float, 2, 16>*)arg2 ;
-(void)encodeShiftDecimateToCommandBuffer:(id)arg1 shiftIn:(ArrayView<unsigned char, 2>*)arg2 shiftOut:(CVBufferRef)arg3 ;
-(void)renderContinuousWithSource:(const CVBufferRef)arg1 alpha:(const CVBufferRef)arg2 shift:(const CVBufferRef)arg3 shiftCropRect:(CGRect)arg4 shiftAtInf:(float)arg5 minShiftInFocus:(float)arg6 rawFocusShift:(float)arg7 fNumber:(float)arg8 noiseBits:(float)arg9 shiftUpdateRate:(float)arg10 dstColor:(CVBufferRef)arg11 withCallback:(/*^block*/id)arg12 ;
-(void)initRenderingTexturesWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 shiftWidth:(unsigned long long)arg3 shiftHeight:(unsigned long long)arg4 ;
-(void)encodeHybridUpSamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeHybridDownsamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encode420HybridDownsamplingToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)encodeBilinearScalingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mode:(long long)arg4 ;
-(void)encodeMaskedVariableBlurToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlur:(float)arg5 ;
-(void)setupTexturesForMaskedVaribleBlurWithSource:(id)arg1 ;
-(void)encodeDown2ToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeCubicUpScaleToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)downsampleWithHWScalerSource:(CVBufferRef)arg1 destination:(CVBufferRef)arg2 ;
-(void)cropFrame:(const CVBufferRef)arg1 destination:(CVBufferRef)arg2 rect:(CGRect)arg3 ;
-(void)encode420BilinearScalingToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)encode420ScalingByMPSToCommandBuffer:(id)arg1 source:(CVBufferRef)arg2 destination:(CVBufferRef)arg3 ;
-(void)reconstructAlpha:(CVBufferRef)arg1 destination:(CVBufferRef)arg2 alphaMaxLaplacian:(float)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)encodeFillAlphaToCommandBuffer:(id)arg1 alpha:(id)arg2 ;
-(void)dumpScaledSource:(CVBufferRef)arg1 ;
-(float)renderingShiftUpdateRate;
-(void)setRenderingShiftUpdateRate:(float)arg1 ;
@end

