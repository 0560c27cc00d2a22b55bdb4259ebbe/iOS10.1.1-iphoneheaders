/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsFragmentRenderCommandEncoder.h>

@protocol MTLDevice, MTLRenderPipelineState, MTLDepthStencilState;
@class MTLRenderPassDescriptor, MTLDepthStencilDescriptor;

@interface MTLDebugFragmentRenderCommandEncoder : MTLToolsFragmentRenderCommandEncoder {

	SCD_Struct_MT17 _fragmentBuffers[31];
	SCD_Struct_MT17 _fragmentTextures[31];
	SCD_Struct_MT17 _fragmentSamplers[16];
	const SCD_Struct_MT7* _limits;
	unsigned _unknownStoreActions;
	unsigned _encoderState;
	ResourceTrackingDeferredAttachments _deferredAttachments;
	float _depthBias;
	float _depthBiasSlopeScale;
	float _depthBiasClamp;
	unsigned _frontStencilRef;
	unsigned _backStencilRef;
	float _blendColorRed;
	float _blendColorGreen;
	float _blendColorBlue;
	float _blendColorAlpha;
	id<MTLDevice> _cachedDevice;
	MTLRenderPassDescriptor* _descriptor;
	id<MTLRenderPipelineState> _renderPipelineState;
	id<MTLDepthStencilState> _depthStencilState;
	MTLDepthStencilDescriptor* _defaultDepthStencilDescriptor;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_MT50 _scissorRect;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;                                             //@synthesize cachedDevice=_cachedDevice - In the implementation block
@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;                              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) float depthBias;                                                        //@synthesize depthBias=_depthBias - In the implementation block
@property (nonatomic,readonly) float depthBiasSlopeScale;                                              //@synthesize depthBiasSlopeScale=_depthBiasSlopeScale - In the implementation block
@property (nonatomic,readonly) float depthBiasClamp;                                                   //@synthesize depthBiasClamp=_depthBiasClamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT50 scissorRect;                                            //@synthesize scissorRect=_scissorRect - In the implementation block
@property (nonatomic,readonly) id<MTLRenderPipelineState> renderPipelineState;                         //@synthesize renderPipelineState=_renderPipelineState - In the implementation block
@property (nonatomic,readonly) id<MTLDepthStencilState> depthStencilState;                             //@synthesize depthStencilState=_depthStencilState - In the implementation block
@property (nonatomic,readonly) MTLDepthStencilDescriptor * defaultDepthStencilDescriptor;              //@synthesize defaultDepthStencilDescriptor=_defaultDepthStencilDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned frontStencilRef;                                               //@synthesize frontStencilRef=_frontStencilRef - In the implementation block
@property (nonatomic,readonly) unsigned backStencilRef;                                                //@synthesize backStencilRef=_backStencilRef - In the implementation block
@property (nonatomic,readonly) float blendColorRed;                                                    //@synthesize blendColorRed=_blendColorRed - In the implementation block
@property (nonatomic,readonly) float blendColorGreen;                                                  //@synthesize blendColorGreen=_blendColorGreen - In the implementation block
@property (nonatomic,readonly) float blendColorBlue;                                                   //@synthesize blendColorBlue=_blendColorBlue - In the implementation block
@property (nonatomic,readonly) float blendColorAlpha;                                                  //@synthesize blendColorAlpha=_blendColorAlpha - In the implementation block
@property (readonly) unsigned long long width;                                                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                                                        //@synthesize height=_height - In the implementation block
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char*)arg3 triangleCount:(unsigned long long)arg4 ;
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char*)arg5 triangleCount:(unsigned long long)arg6 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)width;
-(unsigned long long)height;
-(MTLRenderPassDescriptor *)descriptor;
-(void)endEncoding;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setScissorRect:(SCD_Struct_MT50)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setDepthStencilState:(id<MTLDepthStencilState>)arg1 ;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(id<MTLDevice>)cachedDevice;
-(id)initWithFragmentRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)_validateAllFunctionArguments;
-(void)validateFramebufferWithRenderPipelineState:(id)arg1 ;
-(void)_resourceTrackingRecordDrawAccesses;
-(void)_resourceTrackingRecordBoundResourceAccesses;
-(void)enumerateFragmentBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFragmentSamplersUsingBlock:(/*^block*/id)arg1 ;
-(float)depthBias;
-(float)depthBiasSlopeScale;
-(float)depthBiasClamp;
-(SCD_Struct_MT50)scissorRect;
-(id<MTLRenderPipelineState>)renderPipelineState;
-(id<MTLDepthStencilState>)depthStencilState;
-(MTLDepthStencilDescriptor *)defaultDepthStencilDescriptor;
-(unsigned)frontStencilRef;
-(unsigned)backStencilRef;
-(float)blendColorRed;
-(float)blendColorGreen;
-(float)blendColorBlue;
-(float)blendColorAlpha;
-(void)_setDefaults;
@end

