/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@class CUCaptureController, CAMCaptureRequestIntervalometer, NSString;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {

	CUCaptureController* _captureController;
	BOOL _hasOutstandingCapture;
	BOOL _nextCaptureIsMyLast;
	CAMCaptureRequestIntervalometer* _testIntervalometer;

}

@property (nonatomic,retain) CAMCaptureRequestIntervalometer * testIntervalometer;              //@synthesize testIntervalometer=_testIntervalometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)harnessWithTestName:(id)arg1 captureController:(id)arg2 ;
-(void)setTestIntervalometer:(CAMCaptureRequestIntervalometer *)arg1 ;
-(void)runConfiguredTest;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_finishAndCleanupConfiguredTest;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)intervalometerDidReachMaximumCount:(id)arg1 ;
-(id)initWithTestName:(id)arg1 captureController:(id)arg2 ;
-(CAMCaptureRequestIntervalometer *)testIntervalometer;
@end
