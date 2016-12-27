/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationRecorder <NSObject>
@required
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordLocationUpdateResume;
-(void)recordLocationUpdatePause;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
-(void)recordError:(id)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordInitialCourse:(double)arg1;

@end

