/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {

	AVCaptureDeviceFormatInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) NSArray * videoSupportedFrameRateRanges; 
@property (nonatomic,readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,nonatomic,readonly) BOOL videoBinned; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL videoStabilizationSupported; 
@property (nonatomic,readonly) double videoMaxZoomFactor; 
@property (nonatomic,readonly) double videoZoomFactorUpscaleThreshold; 
@property (nonatomic,readonly) SCD_Struct_AV2 minExposureDuration; 
@property (nonatomic,readonly) SCD_Struct_AV2 maxExposureDuration; 
@property (nonatomic,readonly) float minISO; 
@property (nonatomic,readonly) float maxISO; 
@property (getter=isVideoHDRSupported,nonatomic,readonly) BOOL videoHDRSupported; 
@property (nonatomic,readonly) SCD_Struct_AV34 highResolutionStillImageDimensions; 
@property (nonatomic,readonly) long long autoFocusSystem; 
@property (nonatomic,readonly) NSArray * supportedColorSpaces; 
+(void)initialize;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(SCD_Struct_AV34)previewDimensions;
-(BOOL)isVideoStabilizationModeSupported:(long long)arg1 ;
-(SCD_Struct_AV2)lowestSupportedVideoFrameDuration;
-(SCD_Struct_AV2)highestSupportedVideoFrameDuration;
-(SCD_Struct_AV2)defaultActiveMinFrameDuration;
-(SCD_Struct_AV2)defaultActiveMaxFrameDuration;
-(BOOL)isPhotoFormat;
-(BOOL)isWideColorSupported;
-(BOOL)isDefaultActiveFormat;
-(id)AVCaptureSessionPresets;
-(SCD_Struct_AV2)minExposureDuration;
-(SCD_Struct_AV2)maxExposureDuration;
-(float)minISO;
-(float)maxISO;
-(id)initWithFigCaptureSourceFormat:(id)arg1 ;
-(BOOL)isSISSupported;
-(id)figCaptureSourceFormat;
-(SCD_Struct_AV34)sensorDimensions;
-(id)vtScalingMode;
-(BOOL)supportsHighProfileH264;
-(BOOL)isIrisVideoStabilizationSupported;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1 ;
-(BOOL)supportsHighResolutionStillImageOutput;
-(SCD_Struct_AV34)highResolutionStillImageDimensions;
-(float)videoFieldOfView;
-(BOOL)isVideoBinned;
-(int)supportedStabilizationMethod;
-(double)videoZoomFactorUpscaleThreshold;
-(BOOL)isExperimental;
-(id)_stringForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 frameRateRanges:(id)arg2 ;
-(BOOL)isIrisSupported;
-(BOOL)supportsDynamicCrop;
-(BOOL)isHighResPhotoFormat;
-(unsigned)supportedRawPixelFormat;
-(BOOL)supportsLowLightBoost;
-(int)rawBitDepth;
-(id)videoZoomSupportedDownscaleStages;
-(id)videoZoomSupportedUpscaleStages;
-(BOOL)needsPhotoPreviewDPCC;
-(int)supportedFormatsArrayIndex;
-(NSString *)mediaType;
-(BOOL)isVideoStabilizationSupported;
-(double)videoMaxZoomFactor;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)supportsQuadraHighResolutionStillImageOutput;
-(BOOL)isShallowDepthOfFieldEffectSupported;
-(BOOL)isVideoHDRSupported;
-(NSArray *)supportedColorSpaces;
-(long long)autoFocusSystem;
-(NSArray *)videoSupportedFrameRateRanges;
@end

