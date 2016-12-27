/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup {

	double _scale;
	cuiniproperties _imageProperties;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long imageType; 
@property (nonatomic,readonly) psdGradientColor edgeInsets; 
@property (nonatomic,readonly) long long resizingMode; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) psdGradientColor alignmentEdgeInsets; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) BOOL hasSliceInformation; 
@property (nonatomic,readonly) BOOL hasAlignmentInformation; 
@property (nonatomic,readonly) BOOL isVectorBased; 
@property (nonatomic,readonly) BOOL isTemplate; 
@property (nonatomic,readonly) long long templateRenderingMode; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,readonly) BOOL isFlippable; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
@property (nonatomic,readonly) CGImageRef croppedImage; 
-(id)imageObj;
-(id)traitCollection;
-(id)UIImage;
-(BOOL)isVectorBased;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(double)positionOfSliceBoundary:(unsigned)arg1 ;
-(BOOL)_cacheRenditionProperties;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(long long)resizingModeWithSubtype:(long long)arg1 ;
-(BOOL)hasAlignmentInformation;
-(long long)memoryClass;
-(long long)graphicsClass;
-(CGSize)size;
-(id)description;
-(unsigned long long)subtype;
-(CGImageRef)image;
-(double)scale;
-(psdGradientColor)edgeInsets;
-(long long)resizingMode;
-(int)exifOrientation;
-(BOOL)hasSliceInformation;
-(psdGradientColor)alignmentEdgeInsets;
-(long long)templateRenderingMode;
-(id)baseKey;
-(long long)layoutDirection;
-(long long)displayGamut;
-(double)opacity;
-(long long)idiom;
-(BOOL)isTemplate;
-(int)blendMode;
-(BOOL)isFlippable;
-(long long)imageType;
-(BOOL)isStructured;
-(BOOL)isAlphaCropped;
-(CGSize)originalUncroppedSize;
-(CGRect)alphaCroppedRect;
-(CGImageRef)croppedImage;
@end

