/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_semaphore;
@class CLLocationManager, CLLocation, NSError, NSObject, NSString;

@interface MCMDMLostDeviceLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSError* _currentError;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                     //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocation * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) NSError * currentError;                                  //@synthesize currentError=_currentError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(NSError *)currentError;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)clearLastLocationRequestedDate;
-(id)lastLocationRequestedDateMessageForServer:(id)arg1 ;
-(id)currentDeviceLocation;
-(void)_getCurrentDeviceLocation;
-(void)setCurrentError:(NSError *)arg1 ;
@end

