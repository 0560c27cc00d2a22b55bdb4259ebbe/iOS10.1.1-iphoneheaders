/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class CALayer, KNAnimationRegistryWithFallbacks, TSDCapabilities;

@interface KNAnimationContext : NSObject {

	CGRect mSlideRect;
	CGRect mUnscaledSlideRect;
	double mViewScale;
	CALayer* mBaseLayer;
	double mFOVInRadians;
	CATransform3D mSlideProjectionMatrix;
	double mPixelAspectRatio;
	KNAnimationRegistryWithFallbacks* mRegistry;
	TSDCapabilities* mCapabilities;
	BOOL mBaseLayerVisible;
	CGColorSpaceRef mColorSpace;

}

@property (nonatomic,readonly) KNAnimationRegistryWithFallbacks * registry; 
@property (nonatomic,readonly) CGRect slideRect; 
@property (nonatomic,readonly) CGRect unscaledSlideRect; 
@property (nonatomic,readonly) CALayer * baseLayer; 
@property (getter=isBaseLayerVisible,nonatomic,readonly) BOOL baseLayerVisible; 
@property (nonatomic,readonly) double fieldOfViewInRadians; 
@property (nonatomic,readonly) CATransform3D slideProjectionMatrix; 
@property (assign,nonatomic) double pixelAspectRatio; 
@property (nonatomic,readonly) double viewScale; 
@property (nonatomic,readonly) double showScale; 
@property (nonatomic,readonly) TSDCapabilities * capabilities; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
-(double)viewScale;
-(id)initWithShowSize:(CGSize)arg1 viewScale:(double)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(BOOL)arg4 ;
-(double)showScale;
-(CGRect)unscaledSlideRect;
-(CALayer *)baseLayer;
-(void)updateGeometryToFitBaseLayerAtViewScale:(double)arg1 ;
-(double)fieldOfViewInRadians;
-(BOOL)isBaseLayerVisible;
-(void)setPixelAspectRatio:(double)arg1 ;
-(CATransform3D)slideProjectionMatrix;
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(double)pixelAspectRatio;
-(TSDCapabilities *)capabilities;
-(CGRect)slideRect;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(KNAnimationRegistryWithFallbacks *)registry;
@end

