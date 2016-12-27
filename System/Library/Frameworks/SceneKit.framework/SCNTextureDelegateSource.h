/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource {

	id _delegate;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 nextFrameTime:(double*)arg2 ;
-(void)__updateTextureWithDelegate:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
@end

