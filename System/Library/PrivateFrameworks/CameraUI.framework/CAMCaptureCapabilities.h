/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMCaptureCapabilities : NSObject {

	BOOL _backCameraSupported;
	BOOL _frontCameraSupported;
	BOOL _backFlashSupported;
	BOOL _frontFlashSupported;
	BOOL _backTorchSupported;
	BOOL _frontTorchSupported;
	BOOL _backHDRSupported;
	BOOL _backAutomaticHDRSupported;
	BOOL _backHDROnSupported;
	BOOL _frontHDRSupported;
	BOOL _frontAutomaticHDRSupported;
	BOOL _frontHDROnSupported;
	BOOL _previewSupportedDuringHDR;
	BOOL _backIrisSupported;
	BOOL _frontIrisSupported;
	BOOL _liveFilteringSupported;
	BOOL _backBurstSupported;
	BOOL _frontBurstSupported;
	BOOL _squareModeSupported;
	BOOL _videoSupported;
	BOOL _stillDuringVideoSupported;
	BOOL _back4kVideoSupported;
	BOOL _front4kVideoSupported;
	BOOL _backSlomoSupported;
	BOOL _frontSlomoSupported;
	BOOL _back720p240Supported;
	BOOL _front720p240Supported;
	BOOL _back1080p120Supported;
	BOOL _front1080p120Supported;
	BOOL _back1080p240Supported;
	BOOL _front1080p240Supported;
	BOOL _backPanoramaSupported;
	BOOL _frontPanoramaSupported;
	BOOL _backTimelapseSupported;
	BOOL _frontTimelapseSupported;
	BOOL _backPortraitModeSupported;
	BOOL _frontPortraitModeSupported;
	BOOL _backTorchPatternSupported;
	BOOL _frontTorchPatternSupported;
	BOOL _pipelinedStillImageProcessingSupported;
	BOOL _hasSystemTelephonyOfAnyKind;
	BOOL _forceTouchSupported;
	BOOL _backTelephotoSupported;
	BOOL _frontTelephotoSupported;
	BOOL _backDuoSupported;
	BOOL _frontDuoSupported;
	BOOL _messagesApplication;
	BOOL _internalInstall;
	BOOL _lockButtonAppropriateForShutter;
	BOOL _lowEndHardware;
	BOOL _cameraApplication;
	long long _maximumRecordedFileSize;
	long long _back720pMaxFPS;
	long long _front720pMaxFPS;
	long long _back1080pMaxFPS;
	long long _front1080pMaxFPS;
	double __backPhotoModeMaximumZoomFactor;
	double __frontPhotoModeMaximumZoomFactor;
	double __backVideoModeMaximumZoomFactor;
	double __frontVideoModeMaximumZoomFactor;
	double __backDuoPhotoModeMaximumZoomFactor;
	double __backDuoVideoModeMaximumZoomFactor;
	double __frontDuoPhotoModeMaximumZoomFactor;
	double __frontDuoVideoModeMaximumZoomFactor;
	double __backCaptureInterval;
	double __frontCaptureInterval;

}

@property (getter=isCameraApplication,nonatomic,readonly) BOOL cameraApplication;                                                        //@synthesize cameraApplication=_cameraApplication - In the implementation block
@property (nonatomic,readonly) double _backPhotoModeMaximumZoomFactor;                                                                   //@synthesize _backPhotoModeMaximumZoomFactor=__backPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontPhotoModeMaximumZoomFactor;                                                                  //@synthesize _frontPhotoModeMaximumZoomFactor=__frontPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backVideoModeMaximumZoomFactor;                                                                   //@synthesize _backVideoModeMaximumZoomFactor=__backVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontVideoModeMaximumZoomFactor;                                                                  //@synthesize _frontVideoModeMaximumZoomFactor=__frontVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backDuoPhotoModeMaximumZoomFactor;                                                                //@synthesize _backDuoPhotoModeMaximumZoomFactor=__backDuoPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backDuoVideoModeMaximumZoomFactor;                                                                //@synthesize _backDuoVideoModeMaximumZoomFactor=__backDuoVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontDuoPhotoModeMaximumZoomFactor;                                                               //@synthesize _frontDuoPhotoModeMaximumZoomFactor=__frontDuoPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontDuoVideoModeMaximumZoomFactor;                                                               //@synthesize _frontDuoVideoModeMaximumZoomFactor=__frontDuoVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backCaptureInterval;                                                                              //@synthesize _backCaptureInterval=__backCaptureInterval - In the implementation block
@property (nonatomic,readonly) double _frontCaptureInterval;                                                                             //@synthesize _frontCaptureInterval=__frontCaptureInterval - In the implementation block
@property (getter=isBackCameraSupported,nonatomic,readonly) BOOL backCameraSupported;                                                    //@synthesize backCameraSupported=_backCameraSupported - In the implementation block
@property (getter=isFrontCameraSupported,nonatomic,readonly) BOOL frontCameraSupported;                                                  //@synthesize frontCameraSupported=_frontCameraSupported - In the implementation block
@property (getter=isBackFlashSupported,nonatomic,readonly) BOOL backFlashSupported;                                                      //@synthesize backFlashSupported=_backFlashSupported - In the implementation block
@property (getter=isFrontFlashSupported,nonatomic,readonly) BOOL frontFlashSupported;                                                    //@synthesize frontFlashSupported=_frontFlashSupported - In the implementation block
@property (getter=isBackTorchSupported,nonatomic,readonly) BOOL backTorchSupported;                                                      //@synthesize backTorchSupported=_backTorchSupported - In the implementation block
@property (getter=isFrontTorchSupported,nonatomic,readonly) BOOL frontTorchSupported;                                                    //@synthesize frontTorchSupported=_frontTorchSupported - In the implementation block
@property (getter=isBackHDRSupported,nonatomic,readonly) BOOL backHDRSupported;                                                          //@synthesize backHDRSupported=_backHDRSupported - In the implementation block
@property (getter=isBackAutomaticHDRSupported,nonatomic,readonly) BOOL backAutomaticHDRSupported;                                        //@synthesize backAutomaticHDRSupported=_backAutomaticHDRSupported - In the implementation block
@property (getter=isBackHDROnSupported,nonatomic,readonly) BOOL backHDROnSupported;                                                      //@synthesize backHDROnSupported=_backHDROnSupported - In the implementation block
@property (getter=isFrontHDRSupported,nonatomic,readonly) BOOL frontHDRSupported;                                                        //@synthesize frontHDRSupported=_frontHDRSupported - In the implementation block
@property (getter=isFrontAutomaticHDRSupported,nonatomic,readonly) BOOL frontAutomaticHDRSupported;                                      //@synthesize frontAutomaticHDRSupported=_frontAutomaticHDRSupported - In the implementation block
@property (getter=isFrontHDROnSupported,nonatomic,readonly) BOOL frontHDROnSupported;                                                    //@synthesize frontHDROnSupported=_frontHDROnSupported - In the implementation block
@property (getter=isPreviewDuringHDRSupported,nonatomic,readonly) BOOL previewSupportedDuringHDR;                                        //@synthesize previewSupportedDuringHDR=_previewSupportedDuringHDR - In the implementation block
@property (getter=isBackIrisSupported,nonatomic,readonly) BOOL backIrisSupported;                                                        //@synthesize backIrisSupported=_backIrisSupported - In the implementation block
@property (getter=isFrontIrisSupported,nonatomic,readonly) BOOL frontIrisSupported;                                                      //@synthesize frontIrisSupported=_frontIrisSupported - In the implementation block
@property (getter=isLiveFilteringSupported,nonatomic,readonly) BOOL liveFilteringSupported;                                              //@synthesize liveFilteringSupported=_liveFilteringSupported - In the implementation block
@property (getter=isBackBurstSupported,nonatomic,readonly) BOOL backBurstSupported;                                                      //@synthesize backBurstSupported=_backBurstSupported - In the implementation block
@property (getter=isFrontBurstSupported,nonatomic,readonly) BOOL frontBurstSupported;                                                    //@synthesize frontBurstSupported=_frontBurstSupported - In the implementation block
@property (getter=isSquareModeSupported,nonatomic,readonly) BOOL squareModeSupported;                                                    //@synthesize squareModeSupported=_squareModeSupported - In the implementation block
@property (getter=isVideoSupported,nonatomic,readonly) BOOL videoSupported;                                                              //@synthesize videoSupported=_videoSupported - In the implementation block
@property (getter=isStillDuringVideoSupported,nonatomic,readonly) BOOL stillDuringVideoSupported;                                        //@synthesize stillDuringVideoSupported=_stillDuringVideoSupported - In the implementation block
@property (nonatomic,readonly) long long maximumRecordedFileSize;                                                                        //@synthesize maximumRecordedFileSize=_maximumRecordedFileSize - In the implementation block
@property (nonatomic,readonly) long long back720pMaxFPS;                                                                                 //@synthesize back720pMaxFPS=_back720pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long front720pMaxFPS;                                                                                //@synthesize front720pMaxFPS=_front720pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long back1080pMaxFPS;                                                                                //@synthesize back1080pMaxFPS=_back1080pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long front1080pMaxFPS;                                                                               //@synthesize front1080pMaxFPS=_front1080pMaxFPS - In the implementation block
@property (getter=isBack4kVideoSupported,nonatomic,readonly) BOOL back4kVideoSupported;                                                  //@synthesize back4kVideoSupported=_back4kVideoSupported - In the implementation block
@property (getter=isFront4kVideoSupported,nonatomic,readonly) BOOL front4kVideoSupported;                                                //@synthesize front4kVideoSupported=_front4kVideoSupported - In the implementation block
@property (getter=isBackSlomoSupported,nonatomic,readonly) BOOL backSlomoSupported;                                                      //@synthesize backSlomoSupported=_backSlomoSupported - In the implementation block
@property (getter=isFrontSlomoSupported,nonatomic,readonly) BOOL frontSlomoSupported;                                                    //@synthesize frontSlomoSupported=_frontSlomoSupported - In the implementation block
@property (getter=isBack720p240Supported,nonatomic,readonly) BOOL back720p240Supported;                                                  //@synthesize back720p240Supported=_back720p240Supported - In the implementation block
@property (getter=isFront720p240Supported,nonatomic,readonly) BOOL front720p240Supported;                                                //@synthesize front720p240Supported=_front720p240Supported - In the implementation block
@property (getter=isBack1080p120Supported,nonatomic,readonly) BOOL back1080p120Supported;                                                //@synthesize back1080p120Supported=_back1080p120Supported - In the implementation block
@property (getter=isFront1080p120Supported,nonatomic,readonly) BOOL front1080p120Supported;                                              //@synthesize front1080p120Supported=_front1080p120Supported - In the implementation block
@property (getter=isBack1080p240Supported,nonatomic,readonly) BOOL back1080p240Supported;                                                //@synthesize back1080p240Supported=_back1080p240Supported - In the implementation block
@property (getter=isFront1080p240Supported,nonatomic,readonly) BOOL front1080p240Supported;                                              //@synthesize front1080p240Supported=_front1080p240Supported - In the implementation block
@property (getter=isBackPanoramaSupported,nonatomic,readonly) BOOL backPanoramaSupported;                                                //@synthesize backPanoramaSupported=_backPanoramaSupported - In the implementation block
@property (getter=isFrontPanoramaSupported,nonatomic,readonly) BOOL frontPanoramaSupported;                                              //@synthesize frontPanoramaSupported=_frontPanoramaSupported - In the implementation block
@property (getter=isBackTimelapseSupported,nonatomic,readonly) BOOL backTimelapseSupported;                                              //@synthesize backTimelapseSupported=_backTimelapseSupported - In the implementation block
@property (getter=isFrontTimelapseSupported,nonatomic,readonly) BOOL frontTimelapseSupported;                                            //@synthesize frontTimelapseSupported=_frontTimelapseSupported - In the implementation block
@property (getter=isBackPortraitModeSupported,nonatomic,readonly) BOOL backPortraitModeSupported;                                        //@synthesize backPortraitModeSupported=_backPortraitModeSupported - In the implementation block
@property (getter=isFrontPortraitModeSupported,nonatomic,readonly) BOOL frontPortraitModeSupported;                                      //@synthesize frontPortraitModeSupported=_frontPortraitModeSupported - In the implementation block
@property (getter=isBackTorchPatternSupported,nonatomic,readonly) BOOL backTorchPatternSupported;                                        //@synthesize backTorchPatternSupported=_backTorchPatternSupported - In the implementation block
@property (getter=isFrontTorchPatternSupported,nonatomic,readonly) BOOL frontTorchPatternSupported;                                      //@synthesize frontTorchPatternSupported=_frontTorchPatternSupported - In the implementation block
@property (getter=isPipelinedStillImageProcessingSupported,nonatomic,readonly) BOOL pipelinedStillImageProcessingSupported;              //@synthesize pipelinedStillImageProcessingSupported=_pipelinedStillImageProcessingSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemTelephonyOfAnyKind;                                                                         //@synthesize hasSystemTelephonyOfAnyKind=_hasSystemTelephonyOfAnyKind - In the implementation block
@property (getter=isForceTouchSupported,nonatomic,readonly) BOOL forceTouchSupported;                                                    //@synthesize forceTouchSupported=_forceTouchSupported - In the implementation block
@property (getter=isBackTelephotoSupported,nonatomic,readonly) BOOL backTelephotoSupported;                                              //@synthesize backTelephotoSupported=_backTelephotoSupported - In the implementation block
@property (getter=isFrontTelephotoSupported,nonatomic,readonly) BOOL frontTelephotoSupported;                                            //@synthesize frontTelephotoSupported=_frontTelephotoSupported - In the implementation block
@property (getter=isBackDuoSupported,nonatomic,readonly) BOOL backDuoSupported;                                                          //@synthesize backDuoSupported=_backDuoSupported - In the implementation block
@property (getter=isFrontDuoSupported,nonatomic,readonly) BOOL frontDuoSupported;                                                        //@synthesize frontDuoSupported=_frontDuoSupported - In the implementation block
@property (getter=isMessagesApplication,nonatomic,readonly) BOOL messagesApplication;                                                    //@synthesize messagesApplication=_messagesApplication - In the implementation block
@property (getter=isInternalInstall,nonatomic,readonly) BOOL internalInstall;                                                            //@synthesize internalInstall=_internalInstall - In the implementation block
@property (getter=isLockButtonAppropriateForShutter,nonatomic,readonly) BOOL lockButtonAppropriateForShutter;                            //@synthesize lockButtonAppropriateForShutter=_lockButtonAppropriateForShutter - In the implementation block
@property (getter=isLowEndHardware,nonatomic,readonly) BOOL lowEndHardware;                                                              //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
+(id)capabilities;
-(id)init;
-(BOOL)isInternalInstall;
-(BOOL)isSupportedVideoConfiguration:(long long)arg1 forMode:(long long)arg2 device:(long long)arg3 ;
-(BOOL)isTorchSupportedForDevice:(long long)arg1 ;
-(BOOL)isIrisSupportedForDevice:(long long)arg1 ;
-(double)maximumZoomFactorForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isBackIrisSupported;
-(BOOL)isFrontIrisSupported;
-(BOOL)isBackDuoSupported;
-(BOOL)isFrontDuoSupported;
-(BOOL)isBackCameraSupported;
-(BOOL)isFrontFlashSupported;
-(BOOL)isBackFlashSupported;
-(BOOL)isFrontAutomaticHDRSupported;
-(BOOL)isBackAutomaticHDRSupported;
-(BOOL)isFrontHDRSupported;
-(BOOL)isBackHDRSupported;
-(BOOL)isFrontPortraitModeSupported;
-(BOOL)isBackPortraitModeSupported;
-(BOOL)isCameraSupportedForDevice:(long long)arg1 ;
-(BOOL)isSupportedMode:(long long)arg1 withDevice:(long long)arg2 ;
-(BOOL)isFrontTorchSupported;
-(BOOL)isBackTorchSupported;
-(BOOL)isLiveFilteringSupported;
-(BOOL)isForceTouchSupported;
-(BOOL)isMessagesApplication;
-(BOOL)isBurstSupportedForDevice:(long long)arg1 ;
-(BOOL)isFlashSupportedForDevice:(long long)arg1 ;
-(BOOL)isHDRSupportedForDevice:(long long)arg1 ;
-(BOOL)isTorchPatternSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontCameraSupported;
-(BOOL)isLockButtonAppropriateForShutter;
-(BOOL)isBackBurstSupported;
-(BOOL)isFrontBurstSupported;
-(BOOL)isStillDuringVideoSupported;
-(BOOL)isBackTelephotoSupported;
-(BOOL)isFrontTelephotoSupported;
-(BOOL)isBackPanoramaSupported;
-(BOOL)isFrontPanoramaSupported;
-(BOOL)isTelephotoSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)shouldAllowTelephotoToggleForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isAutomaticHDRSupportedForDevice:(long long)arg1 ;
-(BOOL)isHDROnSupportedForDevice:(long long)arg1 ;
-(double)captureIntervalForDevice:(long long)arg1 ;
-(BOOL)shouldUseDuoForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isBackTimelapseSupported;
-(BOOL)isFrontTimelapseSupported;
-(BOOL)isBackSlomoSupported;
-(BOOL)isFrontSlomoSupported;
-(BOOL)isVideoSupported;
-(BOOL)isSquareModeSupported;
-(BOOL)isLowEndHardware;
-(BOOL)hasSystemTelephonyOfAnyKind;
-(long long)maximumRecordedFileSize;
-(BOOL)isPipelinedStillImageProcessingSupported;
-(BOOL)isBackHDROnSupported;
-(BOOL)isFrontHDROnSupported;
-(double)_backCaptureInterval;
-(double)_frontCaptureInterval;
-(BOOL)isBack4kVideoSupported;
-(BOOL)isFront4kVideoSupported;
-(BOOL)isTimelapseSupportedForDevice:(long long)arg1 ;
-(BOOL)isSlomoSupportedForDevice:(long long)arg1 ;
-(BOOL)isPanoramaSupportedForDevice:(long long)arg1 ;
-(BOOL)isPortraitModeSupportedForDevice:(long long)arg1 ;
-(long long)back1080pMaxFPS;
-(long long)front1080pMaxFPS;
-(long long)back720pMaxFPS;
-(long long)front720pMaxFPS;
-(BOOL)is4kVideoSupportedForDevice:(long long)arg1 ;
-(BOOL)is720p240SupportedForDevice:(long long)arg1 ;
-(BOOL)is1080p120SupportedForDevice:(long long)arg1 ;
-(BOOL)isBack720p240Supported;
-(BOOL)isFront720p240Supported;
-(BOOL)isFront1080p120Supported;
-(BOOL)isFront1080p240Supported;
-(BOOL)isBackTorchPatternSupported;
-(BOOL)isFrontTorchPatternSupported;
-(BOOL)isDuoSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isDuoSupportedForDevicePosition:(long long)arg1 ;
-(double)_backDuoPhotoModeMaximumZoomFactor;
-(double)_frontDuoPhotoModeMaximumZoomFactor;
-(double)_backPhotoModeMaximumZoomFactor;
-(double)_frontPhotoModeMaximumZoomFactor;
-(double)_backDuoVideoModeMaximumZoomFactor;
-(double)_frontDuoVideoModeMaximumZoomFactor;
-(double)_backVideoModeMaximumZoomFactor;
-(double)_frontVideoModeMaximumZoomFactor;
-(BOOL)is1080p240SupportedForDevice:(long long)arg1 ;
-(BOOL)isPreviewDuringHDRSupported;
-(BOOL)isBack1080p120Supported;
-(BOOL)isBack1080p240Supported;
-(BOOL)isCameraApplication;
@end

