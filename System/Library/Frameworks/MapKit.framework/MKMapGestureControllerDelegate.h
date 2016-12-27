/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapGestureControllerDelegate <NSObject>
@optional
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

@required
-(void)gestureControllerWillStartUserInteraction:(id)arg1;
-(void)gestureControllerDidStopUserInteraction:(id)arg1;
-(void)gestureControllerWillStartPanning:(id)arg1;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(BOOL)arg3;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
-(void)gestureControllerWillStartRotating:(id)arg1;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
-(void)gestureControllerWillStartTilting:(id)arg1;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2 tiltDirection:(long long)arg3;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
-(BOOL)gestureController:(id)arg1 shouldReceiveTouch:(id)arg2;
-(CGRect*)gestureControllerSignificantViewFrame:(id)arg1;
-(CGPoint*)gestureController:(id)arg1 focusPointForPoint:(CGPoint)arg2 gestureKind:(long long)arg3;

@end

