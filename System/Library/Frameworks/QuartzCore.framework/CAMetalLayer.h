/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (retain) id<MTLDevice> device; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) BOOL presentsWithTransaction; 
@property (assign) BOOL wantsExtendedDynamicRangeContent; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)presentsWithTransaction;
-(BOOL)lowLatency;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)isDrawableAvailable;
-(unsigned long long)maximumDrawableCount;
-(CGColorSpaceRef)colorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(CGSize)drawableSize;
-(BOOL)framebufferOnly;
-(id)newDrawable;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setLowLatency:(BOOL)arg1 ;
-(void)_display;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned long long)pixelFormat;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(id)nextDrawable;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)discardContents;
@end

