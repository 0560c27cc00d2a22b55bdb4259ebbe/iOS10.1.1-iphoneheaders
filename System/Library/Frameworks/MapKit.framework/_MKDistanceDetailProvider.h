/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class MKMapItem, NSString;

@interface _MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {

	MKMapItem* _mapItem;
	NSString* _distanceToPlace;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	/*^block*/id _updateHandler;

}

@property (copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (retain) MKMapItem * mapItem;                             //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)infoAvailable;
-(void)dealloc;
-(void)endUpdates;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)beginUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(void)_updateDistanceToPlace;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

