/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@class NSDictionary;

@interface VCScreenCapture : NSObject <VideoCaptureProtocol> {

	NSDictionary* _options;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueVTImageRotationSessionRef _rotationSession;
	CVPixelBufferPoolRef _rotationBufferPool;
	void* _frameCallbackData;
	/*function pointer*/void* _frameCallback;
	void* _videoCaptureEventCallbackData;
	/*function pointer*/void* _videoCaptureEventCallback;
	opaque_pthread_mutex_t _screenCaptureLock;
	BOOL _isPreviewing;
	BOOL _isCapturing;
	int _captureWidth;
	int _captureHeight;
	int _captureFramerate;

}
-(void)dealloc;
-(int)startPreview;
-(void)callbackWithEventString:(id)arg1 ;
-(int)_startCapture;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(int)getCameraType:(int*)arg1 ;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(void)capturedScreen:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 desRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(id)initWithFrameCallbackData:(void*)arg1 frameCallback:(/*function pointer*/void*)arg2 videoCaptureEventCallbackData:(void*)arg3 videoCaptureEventCallback:(/*function pointer*/void*)arg4 width:(int)arg5 height:(int)arg6 frameRate:(int)arg7 withError:(int*)arg8 ;
-(int)stop:(BOOL)arg1 ;
-(int)setCameraType:(int)arg1 ;
@end

