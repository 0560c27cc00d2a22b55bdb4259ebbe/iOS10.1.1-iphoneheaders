/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCWaveformSelectionOverlayDelegate <NSObject>
@required
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(SCD_Struct_RC4*)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC4)arg2 isTracking:(BOOL)arg3;
-(double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
-(double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2;
-(double)waveformSelectionOverlayGetCurrentTime:(id)arg1;

@end

