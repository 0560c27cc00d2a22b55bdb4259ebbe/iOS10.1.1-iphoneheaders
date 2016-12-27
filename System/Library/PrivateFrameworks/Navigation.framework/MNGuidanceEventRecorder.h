/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNGuidanceManagerDelegate.h>

@class MNTraceRecorder, NSMutableArray, MNLocation, NSArray, NSString;

@interface MNGuidanceEventRecorder : NSObject <MNGuidanceManagerDelegate> {

	MNTraceRecorder* _traceRecorder;
	NSMutableArray* _events;
	unsigned long long _lastTrackedStepIndex;
	MNLocation* _lastTrackedLocation;
	double _timeAtStartOfRoute;
	NSArray* _lastInstructions;
	NSString* _lastAnnouncement;
	BOOL _isShowingSecondarySign;
	unsigned long long _numPendingAnnouncements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)stage;
-(id)location;
-(void)updateLocation:(id)arg1 ;
-(void)guidanceManager:(id)arg1 updatePointOfInterest:(SCD_Struct_MN3)arg2 focusStyle:(int)arg3 ;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4 ;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)guidanceManagerHideSecondaryStep:(id)arg1 ;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 stage:(unsigned long long)arg4 hasSecondaryManeuver:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(BOOL)guidanceManagerIsOffRoute:(id)arg1 location:(id)arg2 stepIndex:(unsigned long long)arg3 ;
-(void)guidanceManagerHasArrived:(id)arg1 announce:(id)arg2 ;
-(id)initWithTraceRecorder:(id)arg1 ;
-(id)GuidanceEvents;
-(double)distanceToStartOfManeuver;
-(double)timeSinceStartOfRoute;
-(void)recordGuidanceEventStartedRoute;
-(void)recordGuidanceEventRerouteRequested;
-(void)recordGuidanceEventRerouteReceived;
-(void)recordGuidanceEventChangedTransportType:(int)arg1 ;
@end

