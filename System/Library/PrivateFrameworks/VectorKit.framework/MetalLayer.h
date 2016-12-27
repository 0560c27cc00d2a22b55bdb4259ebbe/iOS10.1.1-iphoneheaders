/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <QuartzCore/CAMetalLayer.h>
#import <libobjc.A.dylib/GGLLayer.h>

@protocol GGLLayerDelegate;
@interface MetalLayer : CAMetalLayer <GGLLayer> {

	id<GGLLayerDelegate> _delegate;
	shared_ptr<ggl::MetalDevice>* _device;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _texture;
	CGSize _backingSize;

}

@property (nonatomic,readonly) CGSize backingSize;                   //@synthesize backingSize=_backingSize - In the implementation block
@property (assign) id<GGLLayerDelegate> renderDelegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int backingFormat; 
-(void)layoutSublayers;
-(void)onTimerFired:(double)arg1 ;
-(void)setRenderDelegate:(id<GGLLayerDelegate>)arg1 ;
-(id<GGLLayerDelegate>)renderDelegate;
-(CGSize)backingSize;
-(int)backingFormat;
-(void)_createTexture;
-(id)_updateDrawable;
-(id)initWithDevice:(shared_ptr<ggl::MetalDevice>*)arg1 ;
-(void)didEnterBackground;
@end

