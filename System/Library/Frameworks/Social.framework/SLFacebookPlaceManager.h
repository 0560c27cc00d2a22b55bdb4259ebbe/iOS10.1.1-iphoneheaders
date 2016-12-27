/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SLPlaceDataSource.h>

@protocol SLPlaceDataSourceDelegate;
@class CLLocationManager, NSMutableData, NSHTTPURLResponse, NSURLConnection, CLLocation, NSObject, ACAccount, NSString;

@interface SLFacebookPlaceManager : NSObject <CLLocationManagerDelegate, SLPlaceDataSource> {

	CLLocationManager* _locationManager;
	double _timeout;
	BOOL _isCanceled;
	BOOL _isUpdatingLocation;
	BOOL _disableTimeout;
	NSMutableData* _placeData;
	NSHTTPURLResponse* _urlResponse;
	NSURLConnection* _urlConnection;
	/*^block*/id _queuedSearchRequest;
	CLLocation* _currentLocation;
	NSObject*<SLPlaceDataSourceDelegate> _delegate;
	ACAccount* _account;

}

@property (retain) CLLocation * currentLocation;                               //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) double currentLocationAccuracy; 
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) ACAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(NSObject*<SLPlaceDataSourceDelegate>)arg1 ;
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)locationDidTimeout;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
-(double)distanceFromCurrentLocationToPlace:(id)arg1 ;
-(id)_placesArrayWithPlacesData:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 account:(id)arg2 desiredAccuracy:(double)arg3 timeout:(double)arg4 ;
-(double)currentLocationAccuracy;
-(ACAccount *)account;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

