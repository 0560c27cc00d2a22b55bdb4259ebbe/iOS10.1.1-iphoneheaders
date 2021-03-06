/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsSuggestionsObject.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLLocationManager, CLLocation, NSString;

@interface MapsSuggestionsCurrentLocationUpdater : NSObject <MapsSuggestionsObject, CLLocationManagerDelegate> {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _running;
	CLLocationManager* _locationManagerForUpdating;
	CLLocationManager* _locationManagerForLeeching;
	CLLocation* _lastLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(void)load;
-(void)_initLocationManagers;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSString *)uniqueName;
-(void)_stop;
-(void)restart;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

