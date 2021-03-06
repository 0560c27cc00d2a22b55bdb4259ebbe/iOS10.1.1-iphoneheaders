/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationTrackerDelegate <NSObject>
@required
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)locationTracker:(id)arg1 ignoredLocation:(id)arg2;
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2;
-(void)locationTracker:(id)arg1 failedWithErrorCode:(long long)arg2;
-(void)locationTracker:(id)arg1 startingStepIndex:(unsigned long long)arg2;
-(void)locationTrackerDidArrive:(id)arg1;
-(void)locationTrackerDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
-(void)locationTracker:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)locationTracker:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)locationTracker:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(GEOJunctionElement*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9 maneuverStepIndex:(unsigned long long)arg10 isSynthetic:(BOOL)arg11;
-(void)locationTracker:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)locationTracker:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(GEOJunctionElement*)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shieldType:(int)arg7 shieldText:(id)arg8 drivingSide:(int)arg9;
-(void)locationTrackerHideSecondaryStep:(id)arg1;
-(void)locationTracker:(id)arg1 didEnableGuidance:(BOOL)arg2;
-(void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
-(void)locationTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 updatePointOfInterest:(SCD_Struct_MN3)arg2 focusStyle:(int)arg3;
-(void)locationTrackerWillReroute:(id)arg1;
-(void)locationTrackerDidCancelReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3 request:(id)arg4 response:(id)arg5;
-(void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
-(void)locationTrackerWillPause:(id)arg1;
-(void)locationTrackerWillResumeFromPause:(id)arg1;
-(void)locationTracker:(id)arg1 didUpdateETA:(id)arg2 forRoute:(id)arg3;
-(void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4;

@end

