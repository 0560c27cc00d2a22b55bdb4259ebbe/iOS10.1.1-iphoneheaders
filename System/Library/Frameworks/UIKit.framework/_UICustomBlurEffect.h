/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBlurEffect.h>

@class _UIBackdropViewSettings, UIColor;

@interface _UICustomBlurEffect : UIBlurEffect {

	_UIBackdropViewSettings* _blurEffect;

}

@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) BOOL darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom; 
+(id)effectWithStyle:(long long)arg1 ;
-(id)init;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(void)setScale:(double)arg1 ;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setColorTintAlpha:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(double)saturationDeltaFactor;
-(double)grayscaleTintAlpha;
-(double)grayscaleTintLevel;
-(UIColor *)colorTint;
-(double)colorTintAlpha;
-(double)darkeningTintAlpha;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(id)effectSettings;
-(BOOL)lightenGrayscaleWithSourceOver;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(double)colorBurnTintLevel;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(double)colorBurnTintAlpha;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(double)darkeningTintHue;
-(void)setDarkeningTintHue:(double)arg1 ;
-(double)darkeningTintSaturation;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(BOOL)darkenWithSourceOver;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
@end

