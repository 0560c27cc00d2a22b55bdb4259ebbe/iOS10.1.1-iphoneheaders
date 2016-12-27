/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchBlurLayer : BLRetouchEffectLayer {

	BOOL _sharpen;
	int _radius;
	double _radiusScale;

}

@property (assign,nonatomic) int radius;                      //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double radiusScale;              //@synthesize radiusScale=_radiusScale - In the implementation block
@property (assign,nonatomic) BOOL sharpen;                    //@synthesize sharpen=_sharpen - In the implementation block
+(id)layerWithBlur:(int)arg1 ;
+(id)layerWithSharpen:(int)arg1 ;
-(void)setRadius:(int)arg1 ;
-(int)radius;
-(BOOL)hasAmount;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(double)arg3 ;
-(CGContextRef)newContextWithEffect:(CGContextRef)arg1 ;
-(BOOL)sharpen;
-(void)setSharpen:(BOOL)arg1 ;
-(int)radiusToApply;
-(double)radiusScale;
-(void)setRadiusScale:(double)arg1 ;
@end

