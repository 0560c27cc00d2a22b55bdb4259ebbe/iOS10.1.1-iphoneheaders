/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionCamera/CompanionCamera-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol OS_dispatch_source, CCCameraConnectionDelegate;
@class CCCameraConnectionInternal, NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession, NSObject;

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	CCCameraConnectionInternal* _internal;
	NSXPCConnection* _xpc;
	id _orientationChangeObserver;
	NSString* _previewEndpoint;
	FigCameraViewfinder* _remoteViewfinder;
	FigCameraViewfinderSession* _remoteViewfinderSession;
	unsigned long long _desiredPreviewState;
	unsigned long long _currentPreviewState;
	unsigned long long _interruptionCount;
	NSObject*<OS_dispatch_source> _zoomTimer;
	float _pendingZoomAmount;
	float _lastSentZoomAmount;
	int _deviceConnectedNotificationToken;
	int _deviceDisconnectedNotificationToken;
	BOOL _burstInProgress;
	id<CCCameraConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCCameraConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<CCCameraConnectionDelegate>)delegate;
-(void)close;
-(int)_currentOrientation;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC0)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)open;
-(void)switchedMirroringMode:(BOOL)arg1 ;
-(void)_handleInvalidation;
-(BOOL)isOpen;
-(void)_handleInterruption;
-(int)_flashMode;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)countdownCanceled;
-(void)burstCaptureWillStart;
-(void)burstCaptureDidStop;
-(void)modeSelected:(unsigned long long)arg1 ;
-(void)captureDeviceDidChange;
-(void)flashModeDidChange;
-(void)hdrModeDidChange;
-(void)irisModeDidChange;
-(void)zoomDidChange:(double)arg1 ;
-(void)photoTaken:(id)arg1 ;
-(void)switchedOrientation:(long long)arg1 ;
-(void)_zoomTimerFired;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentState:(/*^block*/id)arg1 ;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_setZoom:(float)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFlashMode:(int)arg1 ;
-(oneway void)xpc_setHDRMode:(int)arg1 ;
-(oneway void)xpc_setIrisMode:(int)arg1 ;
-(oneway void)xpc_toggleCameraDevice;
-(void)_checkin;
-(void)closePreview;
-(BOOL)_shouldReportEvent;
-(int)_hdrMode;
-(int)_irisMode;
-(void)openPreview;
-(double)_zoomAmount;
-(int)_flashSupport;
-(int)_hdrSupport;
-(int)_irisSupport;
-(BOOL)_burstSupport;
-(void)_performPreviewStateTransitionsIfNeeded;
-(BOOL)isPreviewConnected;
@end

