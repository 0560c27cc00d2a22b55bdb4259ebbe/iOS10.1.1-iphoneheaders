/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@class BWFigExternalVideoCaptureDevice, BWNodeOutput, NSString, BWFigVideoCaptureDevice, BWFigVideoCaptureStream, NSDictionary;

@interface BWExternalCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	/*^block*/id _videoSBufHandler;
	/*^block*/id _stillImageSBufHandler;
	SCD_Struct_BW12 _outputDimensions;
	BWFigExternalVideoCaptureDevice* _captureDevice;
	int _stillImageCaptureFormatIndex;
	int _livePreviewFormatIndex;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BOOL _makeCurrentConfigurationLive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
+(void)initialize;
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 ;
-(void)dealloc;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(BWFigVideoCaptureStream *)captureStream;
-(void)setDetectedFacesOutputEnabled:(BOOL)arg1 ;
-(void)willStop;
-(BOOL)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(SCD_Struct_BW12)outputDimensions;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_resolveSensorFormatIndex;
-(void)_updateFormatRequirements;
-(void)setStillImageCaptureFormatIndex:(int)arg1 ;
-(int)stillImageCaptureFormatIndex;
-(void)setLivePreviewFormatIndex:(int)arg1 ;
-(int)livePreviewFormatIndex;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;
@end

