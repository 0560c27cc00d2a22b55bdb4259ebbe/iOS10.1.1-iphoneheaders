/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/__CMKCaptureControllerAccessibility_super.h>

@interface CMKCaptureControllerAccessibility : __CMKCaptureControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1 ;
-(void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2 ;
-(void)_sessionStopped:(id)arg1 ;
-(BOOL)capturePhotoUsingHDR:(BOOL)arg1 ;
-(void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_sessionStarted:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end

