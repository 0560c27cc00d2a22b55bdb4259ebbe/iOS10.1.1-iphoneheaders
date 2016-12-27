/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSString;

@interface E911LocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	CLLocation* _goodEnoughLocation;
	BOOL _locationRequested;
	BOOL _locationAvailable;
	BOOL _locationServiceDenied;
	BOOL _locationServiceAuthorized;
	ImsE911Location* _delegate;
	unsigned _desiredIntegrity;
	double _desiredLocationAccuracy;

}

@property (copy) CLLocation * location;                                   //@synthesize location=_location - In the implementation block
@property (copy) CLLocation * goodEnoughLocation;                         //@synthesize goodEnoughLocation=_goodEnoughLocation - In the implementation block
@property (assign,nonatomic) BOOL locationRequested;                      //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) BOOL locationAvailable;                      //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (assign,nonatomic) BOOL locationServiceAuthorized;              //@synthesize locationServiceAuthorized=_locationServiceAuthorized - In the implementation block
@property (assign) double desiredLocationAccuracy;                        //@synthesize desiredLocationAccuracy=_desiredLocationAccuracy - In the implementation block
@property (assign) unsigned desiredIntegrity;                             //@synthesize desiredIntegrity=_desiredIntegrity - In the implementation block
@property (assign,nonatomic) ImsE911Location* delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(ImsE911Location*)arg1 ;
-(void)dealloc;
-(ImsE911Location*)delegate;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)stopLocationUpdates;
-(BOOL)isLocationServiceEnabled;
-(BOOL)locationRequested;
-(void)setLocationRequested:(BOOL)arg1 ;
-(void)shouldUpdateLocation:(BOOL)arg1 ;
-(CLLocation *)goodEnoughLocation;
-(unsigned)desiredIntegrity;
-(double)desiredLocationAccuracy;
-(void)setGoodEnoughLocation:(CLLocation *)arg1 ;
-(void)setLocationServiceAuthorized:(BOOL)arg1 ;
-(void)startLocationUpdates;
-(id)copyLastKnownLocation;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceAuthorized;
-(BOOL)locationServiceAuthorized;
-(BOOL)locationAvailable;
-(void)setLocationAvailable:(BOOL)arg1 ;
-(void)setDesiredLocationAccuracy:(double)arg1 ;
-(void)setDesiredIntegrity:(unsigned)arg1 ;
@end

