/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/VisualAlerts.bundle/VisualAlerts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXCameraTorchManager.h>

@class AVCaptureDevice, NSString;

@interface AXSystemCameraTorchManager : NSObject <AXCameraTorchManager> {

	AVCaptureDevice* _captureDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
@end
