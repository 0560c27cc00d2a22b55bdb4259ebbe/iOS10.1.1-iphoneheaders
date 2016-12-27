/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
#import <libobjc.A.dylib/SampleBufferProcessor.h>

@class NSMutableDictionary, NSDictionary, DenoiseFusePipeline, DeviceParameters, RegWarp, MetalContext, NSString;

@interface GNRProcessor : NSObject <SampleBufferProcessor> {

	NSMutableDictionary* _tuningParams;
	NSMutableDictionary* _tuningParamsPlist;
	/*^block*/id _callback;
	int _isAsynchronous;
	int _ctxCreateSynchronization;
	NSDictionary* _debugConfigurationOptions;
	BOOL _disableispDGainFactorFix;
	BOOL _hasBeenSetup;
	BOOL _isMultiFrameProcessing;
	int _aggregateErr;
	opaqueCMSampleBufferRef _errorRecoveryBuffer;
	exposureParameters _exposureOfErrorRecoveryBuffer;
	exposureParameters _exposureForSingleImageDenoising;
	DenoiseFusePipeline* _denoiseFusePipeline;
	CVBufferRef _outputPixelBuffer;
	opaqueCMSampleBuffer* _bracketSampleBuffers[4];
	int _cntBracketSampleBuffers;
	Mat3x3f _xforms3x3[3];
	BOOL _requestTuningParams;
	DeviceParameters* _deviceTuningParams;
	_CVBuffer* _extraPixelBuffer[2];
	RegWarp* _registrationPipeline;
	int _registrationOrder[4];
	MetalContext* _metal;
	unsigned _fusionOptions;
	CVPixelBufferPoolRef _outputPixelBufferPool;
	CGRect _ROI;
	BOOL _allowModifyingInputBuffers;
	int _processingType;
	int _referenceFrameIndex;

}

@property (assign,nonatomic) int processingType;                           //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL allowModifyingInputBuffers;              //@synthesize allowModifyingInputBuffers=_allowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) int referenceFrameIndex;                      //@synthesize referenceFrameIndex=_referenceFrameIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithOptions:(id)arg1 ;
-(int)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)resetState;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)getOptions:(id)arg1 ;
-(int)_multiFrameProcessing;
-(int)_prepareOutput:(opaqueCMSampleBufferRef)arg1 params:(id)arg2 ;
-(void)setProcessingType:(int)arg1 ;
-(int)setPropertyForReferenceFrameIndex:(int)arg1 ;
-(void)setAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)_saveErrorRecoveryBufferAndExposureParams:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 cfp:(frameProperties_t*)arg3 ;
-(void)_oneTimeSetup:(CVBufferRef)arg1 ;
-(int)_appendFrames:(opaqueCMSampleBufferRef)arg1 cfp:(frameProperties_t*)arg2 ;
-(int)_perFrameProcessing:(id)arg1 input:(opaqueCMSampleBufferRef)arg2 cfp:(frameProperties_t*)arg3 ;
-(float)_computeFusionEffectiveness:(unsigned)arg1 ;
-(int)_isValidProcessingType;
-(int)_registerImages:(int)arg1 estImageTransform:(id)arg2 outputTransforms:(Mat3x3f*)arg3 regOrder:(int*)arg4 ;
-(void)_attachDebugRFSOutput:(unsigned)arg1 ;
-(void)_attachDebugRegistrationXForms:(unsigned)arg1 ;
-(int)_fuseImages:(CVBufferRef)arg1 referenceExposure:(exposureParameters*)arg2 regOrder:(int*)arg3 ;
-(void)_createResources:(CVBufferRef)arg1 ;
-(int)_referenceFrameSelection:(opaqueCMSampleBuffer*)arg1 sharpestFrameIndex:(unsigned*)arg2 firstNFramesToUse:(unsigned)arg3 ;
-(int)processingType;
-(BOOL)allowModifyingInputBuffers;
-(int)referenceFrameIndex;
-(void)setReferenceFrameIndex:(int)arg1 ;
-(void)finishPendingProcessing;
-(void)onOutput:(/*^block*/id)arg1 ;
-(void)purgeResources;
-(int)processSequence;
@end

