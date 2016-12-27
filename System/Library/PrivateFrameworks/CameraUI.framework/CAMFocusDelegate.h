/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMFocusDelegate <NSObject>
@optional
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;

@required
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;

@end
