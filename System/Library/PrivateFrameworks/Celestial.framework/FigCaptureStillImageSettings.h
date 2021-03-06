/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	int _payloadType;
	int _settingsProvider;
	unsigned _outputFormat;
	unsigned _rawOutputFormat;
	unsigned _outputWidth;
	unsigned _outputHeight;
	BOOL _squareCropEnabled;
	BOOL _outputMirroring;
	int _outputOrientation;
	BOOL _previewEnabled;
	unsigned _previewFormat;
	unsigned _previewWidth;
	unsigned _previewHeight;
	BOOL _previewMirroring;
	int _previewOrientation;
	BOOL _noiseReductionEnabled;
	float _scaleFactor;
	unsigned _shutterSound;
	int _flashMode;
	int _wideColorMode;
	int _HDRMode;
	BOOL _autoShallowDepthOfFieldEffectEnabled;
	BOOL _providesOriginalImage;
	int _SISMode;
	int _bravoImageFusionMode;
	NSDictionary* _vtCompressionProperties;
	int _bracketType;
	unsigned _bracketImageCount;
	BOOL _lensStabilizationDuringBracketEnabled;
	SCD_Struct_BW2* _exposureDurations;
	float* _ISOs;
	float* _exposureTargetBiases;
	long long _stillImageRequestTime;
	long long _stillImageCaptureStartTime;
	double _stillImageCaptureAbsoluteStartTime;
	NSString* _imageGroupIdentifier;

}

@property (assign,nonatomic) long long settingsID;                                       //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) int payloadType;                                            //@synthesize payloadType=_payloadType - In the implementation block
@property (assign,nonatomic) int settingsProvider;                                       //@synthesize settingsProvider=_settingsProvider - In the implementation block
@property (assign,nonatomic) unsigned outputFormat;                                      //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                   //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                       //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                      //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) BOOL squareCropEnabled;                                     //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) BOOL outputMirroring;                                       //@synthesize outputMirroring=_outputMirroring - In the implementation block
@property (assign,nonatomic) int outputOrientation;                                      //@synthesize outputOrientation=_outputOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputPixelBufferAttributes; 
@property (assign,nonatomic) BOOL previewEnabled;                                        //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) unsigned previewFormat;                                     //@synthesize previewFormat=_previewFormat - In the implementation block
@property (assign,nonatomic) unsigned previewWidth;                                      //@synthesize previewWidth=_previewWidth - In the implementation block
@property (assign,nonatomic) unsigned previewHeight;                                     //@synthesize previewHeight=_previewHeight - In the implementation block
@property (assign,nonatomic) BOOL previewMirroring;                                      //@synthesize previewMirroring=_previewMirroring - In the implementation block
@property (assign,nonatomic) int previewOrientation;                                     //@synthesize previewOrientation=_previewOrientation - In the implementation block
@property (nonatomic,readonly) NSDictionary * previewPixelBufferAttributes; 
@property (assign,nonatomic) BOOL noiseReductionEnabled;                                 //@synthesize noiseReductionEnabled=_noiseReductionEnabled - In the implementation block
@property (assign,nonatomic) float scaleFactor;                                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned shutterSound;                                      //@synthesize shutterSound=_shutterSound - In the implementation block
@property (assign,nonatomic) int flashMode;                                              //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) int wideColorMode;                                          //@synthesize wideColorMode=_wideColorMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) BOOL autoShallowDepthOfFieldEffectEnabled;                  //@synthesize autoShallowDepthOfFieldEffectEnabled=_autoShallowDepthOfFieldEffectEnabled - In the implementation block
@property (assign,nonatomic) BOOL providesOriginalImage;                                 //@synthesize providesOriginalImage=_providesOriginalImage - In the implementation block
@property (assign,setter=ISMode,nonatomic) int SISMode;                                  //@synthesize SISMode=_SISMode - In the implementation block
@property (assign,nonatomic) int bravoImageFusionMode;                                   //@synthesize bravoImageFusionMode=_bravoImageFusionMode - In the implementation block
@property (nonatomic,copy) NSDictionary * vtCompressionProperties;                       //@synthesize vtCompressionProperties=_vtCompressionProperties - In the implementation block
@property (nonatomic,readonly) int bracketType;                                          //@synthesize bracketType=_bracketType - In the implementation block
@property (nonatomic,readonly) unsigned bracketImageCount;                               //@synthesize bracketImageCount=_bracketImageCount - In the implementation block
@property (assign,nonatomic) BOOL lensStabilizationDuringBracketEnabled;                 //@synthesize lensStabilizationDuringBracketEnabled=_lensStabilizationDuringBracketEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2* exposureDurations;                        //@synthesize exposureDurations=_exposureDurations - In the implementation block
@property (nonatomic,readonly) float* ISOs;                                              //@synthesize ISOs=_ISOs - In the implementation block
@property (nonatomic,readonly) float* exposureTargetBiases;                              //@synthesize exposureTargetBiases=_exposureTargetBiases - In the implementation block
@property (assign,nonatomic) long long stillImageRequestTime;                            //@synthesize stillImageRequestTime=_stillImageRequestTime - In the implementation block
@property (assign,nonatomic) long long stillImageCaptureStartTime;                       //@synthesize stillImageCaptureStartTime=_stillImageCaptureStartTime - In the implementation block
@property (assign,nonatomic) double stillImageCaptureAbsoluteStartTime;                  //@synthesize stillImageCaptureAbsoluteStartTime=_stillImageCaptureAbsoluteStartTime - In the implementation block
@property (nonatomic,readonly) NSString * imageGroupIdentifier; 
+(BOOL)supportsSecureCoding;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(void)_teardownBracketStorage;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(void)setStillImageCaptureStartTime:(long long)arg1 ;
-(void)setStillImageCaptureAbsoluteStartTime:(double)arg1 ;
-(unsigned)previewFormat;
-(unsigned)previewWidth;
-(unsigned)previewHeight;
-(NSDictionary *)outputPixelBufferAttributes;
-(NSDictionary *)previewPixelBufferAttributes;
-(id)figCaptureIrisPreparedSettingsRepresentation;
-(int)settingsProvider;
-(unsigned)rawOutputFormat;
-(BOOL)previewMirroring;
-(BOOL)noiseReductionEnabled;
-(int)wideColorMode;
-(BOOL)autoShallowDepthOfFieldEffectEnabled;
-(int)SISMode;
-(int)bravoImageFusionMode;
-(NSDictionary *)vtCompressionProperties;
-(int)bracketType;
-(BOOL)lensStabilizationDuringBracketEnabled;
-(long long)stillImageRequestTime;
-(long long)stillImageCaptureStartTime;
-(double)stillImageCaptureAbsoluteStartTime;
-(BOOL)squareCropEnabled;
-(unsigned)shutterSound;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(void)setOutputMirroring:(BOOL)arg1 ;
-(void)setOutputOrientation:(int)arg1 ;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(BOOL)previewEnabled;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(void)setPreviewWidth:(unsigned)arg1 ;
-(void)setPreviewHeight:(unsigned)arg1 ;
-(void)setPreviewFormat:(unsigned)arg1 ;
-(BOOL)outputMirroring;
-(void)setPreviewMirroring:(BOOL)arg1 ;
-(int)outputOrientation;
-(void)setPreviewOrientation:(int)arg1 ;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setWideColorMode:(int)arg1 ;
-(void)setBravoImageFusionMode:(int)arg1 ;
-(void)setProvidesOriginalImage:(BOOL)arg1 ;
-(void)setSISMode:(int)arg1 ;
-(void)setVtCompressionProperties:(NSDictionary *)arg1 ;
-(void)setPayloadType:(int)arg1 ;
-(unsigned)bracketImageCount;
-(void)setLensStabilizationDuringBracketEnabled:(BOOL)arg1 ;
-(void)setBracketType:(int)arg1 imageCount:(unsigned)arg2 ;
-(SCD_Struct_BW2*)exposureDurations;
-(float*)ISOs;
-(float*)exposureTargetBiases;
-(void)setSettingsProvider:(int)arg1 ;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(BOOL)providesOriginalImage;
-(int)previewOrientation;
-(void)setFlashMode:(int)arg1 ;
-(int)flashMode;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(BOOL)arg1 ;
-(NSString *)imageGroupIdentifier;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(int)payloadType;
@end

