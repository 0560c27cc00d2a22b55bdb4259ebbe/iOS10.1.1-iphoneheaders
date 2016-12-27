/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {

	float mBlendFactor;
	TSCH3DGLFramebuffer* mBlendTexture;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * blendTexture; 
@property (assign,nonatomic) float blendFactor; 
+(id)effectsArray;
-(void)setBlendTexture:(TSCH3DGLFramebuffer *)arg1 ;
-(void)setBlendFactor:(float)arg1 ;
-(void)updateShaderEffectsStates;
-(TSCH3DGLFramebuffer *)blendTexture;
-(void)dealloc;
-(float)blendFactor;
@end

