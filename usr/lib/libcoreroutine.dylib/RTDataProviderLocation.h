/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderDuet.h>

@class RTDeviceLocationPredictor, RTLocationManager, RTLocationTagger, RTVisitManager;

@interface RTDataProviderLocation : RTDataProviderDuet {

	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTLocationManager* _locationManager;
	RTLocationTagger* _locationTagger;
	RTVisitManager* _visitManager;

}

@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationTagger * locationTagger;                                //@synthesize locationTagger=_locationTagger - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
+(id)sharedInstance;
+(id)providerName;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)onMicroLocationUpdate:(id)arg1 ;
-(RTVisitManager *)visitManager;
-(void)onLowConfidenceVisitNotification:(id)arg1 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)onVisitManagerAvailable:(id)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(id)supportedEventClasses;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 ;
-(id)supportedEventStreams;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(RTLocationTagger *)locationTagger;
-(void)setLocationTagger:(RTLocationTagger *)arg1 ;
-(void)fetchCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)_processMicroLocationUpdate:(id)arg1 ;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 locationManager:(id)arg3 deviceLocationPredictor:(id)arg4 locationTagger:(id)arg5 visitManager:(id)arg6 ;
-(void)_processLowConfidenceVisit:(id)arg1 ;
-(void)_unregisterForVisitNotifications;
-(void)_unregisterForMicroLocationNotifications;
-(void)_registerForVisitNotifications;
-(void)_registerForMicroLocationNotifications;
-(void)_fetchLowConfidenceVisitIncident;
@end

