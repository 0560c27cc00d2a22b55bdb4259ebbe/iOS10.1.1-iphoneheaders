/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, UNSKeyedObservable, NSObject, NSString;

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(void)markAsHavingReceivedLocation;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setMonitoredRegions:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)initWithObservable:(id)arg1 ;
-(void)_triggerDidFireForRegion:(id)arg1 ;
@end

