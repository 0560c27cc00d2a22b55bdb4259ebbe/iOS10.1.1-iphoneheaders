/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCPreviewControllerObserver <NSObject>
@optional
-(void)previewControllerDidChangePreparingState:(id)arg1;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;

@required
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

@end

