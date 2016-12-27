/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_os_log;
@class NSObject, CLLocationManager, NSDictionary, NSString;

@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate> {

	BOOL _awaitingLocationAfterDisabledAirplaneMode;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _updateTimer;
	unsigned long long _updateInterval;
	CLLocationManager* _manager;
	NSDictionary* _previousDataDictionary;
	SCPreferencesRef _radioPrefs;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;                   //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                           //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) CLLocationManager * manager;                                 //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDictionary * previousDataDictionary;                       //@synthesize previousDataDictionary=_previousDataDictionary - In the implementation block
@property (assign,nonatomic) BOOL awaitingLocationAfterDisabledAirplaneMode;              //@synthesize awaitingLocationAfterDisabledAirplaneMode=_awaitingLocationAfterDisabledAirplaneMode - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                     //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) SCPreferencesRef radioPrefs;                                 //@synthesize radioPrefs=_radioPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(void)unprotectedUpdateSunriseSunsetTime:(id)arg1 ;
-(void)respondToTimeChange:(id)arg1 ;
-(void)setContextValueWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2 ;
-(void)setPreviousDataDictionary:(NSDictionary *)arg1 ;
-(BOOL)previousSunrise:(id)arg1 differsSignificantlyFromCurrent:(id)arg2 ;
-(BOOL)isAirplaneModeEnabledWithPreferences:(SCPreferencesRef)arg1 ;
-(void)respondToAirplaneModeStatusChanged;
-(BOOL)currentEventMetadata:(id)arg1 differsFromPreviousEventMetadata:(id)arg2 byEpsilon:(double)arg3 ;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
-(SCPreferencesRef)radioPrefs;
-(NSDictionary *)previousDataDictionary;
-(BOOL)awaitingLocationAfterDisabledAirplaneMode;
-(void)setAwaitingLocationAfterDisabledAirplaneMode:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSObject*<OS_os_log>)log;
-(unsigned long long)updateInterval;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)authorizationStatus;
-(id)loadState;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)saveState;
-(BOOL)isAirplaneModeEnabled;
-(void)setAuthorizationStatus:(int)arg1 ;
-(CLLocationManager *)manager;
-(void)setManager:(CLLocationManager *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
@end
