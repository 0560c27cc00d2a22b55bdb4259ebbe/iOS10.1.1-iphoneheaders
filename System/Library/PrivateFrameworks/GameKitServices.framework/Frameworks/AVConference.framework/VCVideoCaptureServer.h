/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, VideoCaptureProtocol, AVConferencePreviewDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, VideoAttributes, VCImageQueue;

@interface VCVideoCaptureServer : NSObject {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int previewFrameCount;
	int captureFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	unsigned currentCameraID;
	BOOL firstPreviewFrame;
	int snapshotRequestCount;
	NSMutableArray* cameraClients;
	NSMutableArray* screenCaptureClients;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> captureServerQueue;
	NSObject*<OS_dispatch_queue> captureClientQueue;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> variablesQueue;
	NSObject*<OS_dispatch_queue> snapshotQueue;
	NSObject*<VideoCaptureProtocol> avCapture;
	NSObject*<VideoCaptureProtocol> screenCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	BOOL resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	VCImageQueue* frontQueue;
	VCImageQueue* backQueue;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;
	BOOL _isPreviewRunning;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
+(id)VCVideoCaptureServerSingleton;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)stopPreview;
-(void)pausePreview;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setLocalScreenAttributes:(id)arg1 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(BOOL)arg6 ;
-(BOOL)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 ;
-(BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(void)setFrameRatePercentage:(id)arg1 percentage:(double)arg2 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(void)registerBlocksForServer;
-(id)localVideoAttributes;
-(BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4 ;
-(BOOL)setCaptureCamera:(unsigned)arg1 ;
-(unsigned)captureCamera;
-(BOOL)setLocalVideoAttributes:(id)arg1 ;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)handleAVCaptureError:(int)arg1 error:(id)arg2 ;
-(void)stopCapture;
-(void)sendSnapshotFromFrame:(CVBufferRef)arg1 ;
-(CVBufferRef)resizeFrame:(CVBufferRef)arg1 ;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_VC21)arg3 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)setFrameRatePercentage:(double)arg1 ;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg1 ;
-(void)reconnectClientLayerFront:(BOOL)arg1 ;
-(int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4 ;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4 ;
-(void)handleVideoCaptureEvent:(id)arg1 ;
-(void)handleScreenCaptureEvent:(id)arg1 ;
-(BOOL)onCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC21)arg2 preview:(BOOL)arg3 droppedFrames:(int)arg4 isSwitching:(BOOL)arg5 cameraType:(int)arg6 ;
-(BOOL)screenCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC21)arg2 droppedFrames:(int)arg3 orientation:(int)arg4 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2 ;
-(BOOL)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2 ;
-(id)copyLocalVideoAttributes;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
@end

