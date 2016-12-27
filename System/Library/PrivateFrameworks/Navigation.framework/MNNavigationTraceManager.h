/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerObserver.h>
#import <libobjc.A.dylib/MNLocationProvider.h>
#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol MNNavigationTraceManagerDelegate, MNLocationProviderDelegate, GEOMotionContextProviderDelegate;
@class NSBundle, NSString, MNTracePlayer, MNTraceRecorder;

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, MNLocationProvider, GEOMotionContextProvider> {

	MNTracePlayer* _tracePlayer;
	MNTraceRecorder* _traceRecorder;
	int _navigationType;
	id<MNNavigationTraceManagerDelegate> _traceManagerDelegate;
	id<MNLocationProviderDelegate> _locationProviderDelegate;
	id<GEOMotionContextProviderDelegate> _motionContextProviderDelegate;

}

@property (assign,nonatomic,__weak) id<MNNavigationTraceManagerDelegate> traceManagerDelegate;                                             //@synthesize traceManagerDelegate=_traceManagerDelegate - In the implementation block
@property (nonatomic,readonly) MNTracePlayer * tracePlayer;                                                                                //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (nonatomic,readonly) MNTraceRecorder * traceRecorder;                                                                            //@synthesize traceRecorder=_traceRecorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize locationProviderDelegate=_locationProviderDelegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;                                                   //@synthesize motionContextProviderDelegate=_motionContextProviderDelegate - In the implementation block
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNLocationProviderDelegate>)delegate;
-(long long)activityType;
-(void)close;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(BOOL)isSimulation;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(double)desiredAccuracy;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(int)headingOrientation;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(BOOL)usesCLMapCorrection;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setActivityType:(long long)arg1 ;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
-(void)resetForActiveTileGroupChanged;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)openWithRoutePlanningDetails:(id)arg1 ;
-(BOOL)_isNavigating;
-(unsigned long long)_startIndexForNavigation;
-(id<MNNavigationTraceManagerDelegate>)traceManagerDelegate;
-(void)setTraceManagerDelegate:(id<MNNavigationTraceManagerDelegate>)arg1 ;
-(MNTracePlayer *)tracePlayer;
-(MNTraceRecorder *)traceRecorder;
@end

