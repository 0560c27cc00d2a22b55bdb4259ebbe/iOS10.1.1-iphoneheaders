/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSTimeZone, NSUserActivity, NSURL, NSData, EKTravelEngineHypothesis;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {

	BOOL _allDay;
	BOOL _tentative;
	BOOL _acknowledged;
	BOOL _refiring;
	BOOL _isOffsetFromTravelTimeStart;
	BOOL _isPseudoEvent;
	BOOL _hasGeoLocationCoordinates;
	BOOL _hasOrganizerThatIsNotCurrentUser;
	BOOL _isSuggestedLocation;
	BOOL _isOnSharedCalendar;
	BOOL _hasDisplayedLeaveByMessage;
	BOOL _hasDisplayedLeaveNowMessage;
	BOOL _hasDisplayedRunningLateMessage;
	NSString* _publisherBulletinID;
	NSString* _title;
	NSString* _location;
	NSDate* _eventDate;
	NSDate* _endDate;
	NSTimeZone* _eventTimeZone;
	NSUserActivity* _appLink;
	NSURL* _action;
	NSURL* _entityID;
	long long _proximity;
	NSString* _externalID;
	NSString* _dismissalID;
	NSString* _alarmID;
	NSData* _mapKitHandle;
	NSString* _organizerEmailAddress;
	NSString* _startLocationRouting;
	NSString* _locationAddress;
	EKTravelEngineHypothesis* _latestHypothesis;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;
	NSDate* _lastTimeBulletinAdded;
	NSDate* _fireDate;
	CLLocationCoordinate2D _geoLocationCoordinates;

}

@property (nonatomic,readonly) NSString * recordID; 
@property (nonatomic,readonly) NSString * publisherBulletinID;                              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                                         //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate;                                          //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * eventTimeZone;                                  //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,readonly) NSUserActivity * appLink;                                    //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,readonly) NSURL * action;                                              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSURL * entityID;                                            //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) BOOL tentative;                                              //@synthesize tentative=_tentative - In the implementation block
@property (nonatomic,readonly) long long proximity;                                         //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                                       //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) BOOL acknowledged;                                           //@synthesize acknowledged=_acknowledged - In the implementation block
@property (nonatomic,readonly) NSString * dismissalID;                                      //@synthesize dismissalID=_dismissalID - In the implementation block
@property (nonatomic,readonly) NSString * alarmID;                                          //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL refiring;                                               //@synthesize refiring=_refiring - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                            //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (nonatomic,readonly) BOOL isPseudoEvent;                                          //@synthesize isPseudoEvent=_isPseudoEvent - In the implementation block
@property (nonatomic,retain) NSData * mapKitHandle;                                         //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL hasGeoLocationCoordinates;                                //@synthesize hasGeoLocationCoordinates=_hasGeoLocationCoordinates - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D geoLocationCoordinates;                 //@synthesize geoLocationCoordinates=_geoLocationCoordinates - In the implementation block
@property (assign,nonatomic) BOOL hasOrganizerThatIsNotCurrentUser;                         //@synthesize hasOrganizerThatIsNotCurrentUser=_hasOrganizerThatIsNotCurrentUser - In the implementation block
@property (nonatomic,retain) NSString * organizerEmailAddress;                              //@synthesize organizerEmailAddress=_organizerEmailAddress - In the implementation block
@property (nonatomic,retain) NSString * startLocationRouting;                               //@synthesize startLocationRouting=_startLocationRouting - In the implementation block
@property (nonatomic,retain) NSString * locationAddress;                                    //@synthesize locationAddress=_locationAddress - In the implementation block
@property (nonatomic,retain) EKTravelEngineHypothesis * latestHypothesis;                   //@synthesize latestHypothesis=_latestHypothesis - In the implementation block
@property (nonatomic,retain) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeBulletinAdded;                                //@synthesize lastTimeBulletinAdded=_lastTimeBulletinAdded - In the implementation block
@property (assign,nonatomic) BOOL isSuggestedLocation;                                      //@synthesize isSuggestedLocation=_isSuggestedLocation - In the implementation block
@property (assign,nonatomic) BOOL isOnSharedCalendar;                                       //@synthesize isOnSharedCalendar=_isOnSharedCalendar - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedLeaveByMessage;                               //@synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedLeaveNowMessage;                              //@synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedRunningLateMessage;                           //@synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                                             //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) BOOL isPurelyATimeToLeaveAlert; 
-(NSURL *)entityID;
-(NSTimeZone *)eventTimeZone;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSURL *)action;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)location;
-(NSDate *)fireDate;
-(NSString *)recordID;
-(NSUserActivity *)appLink;
-(NSDate *)eventDate;
-(BOOL)allDay;
-(NSString *)publisherBulletinID;
-(NSString *)dismissalID;
-(BOOL)tentative;
-(NSString *)externalID;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(long long)proximity;
-(NSDate *)endDate;
-(BOOL)acknowledged;
-(EKTravelEngineHypothesis *)latestHypothesis;
-(void)setIsOnSharedCalendar:(BOOL)arg1 ;
-(NSString *)alarmID;
-(BOOL)refiring;
-(BOOL)isOffsetFromTravelTimeStart;
-(BOOL)isPseudoEvent;
-(BOOL)hasGeoLocationCoordinates;
-(CLLocationCoordinate2D)geoLocationCoordinates;
-(BOOL)hasOrganizerThatIsNotCurrentUser;
-(NSString *)organizerEmailAddress;
-(NSString *)startLocationRouting;
-(NSString *)locationAddress;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
-(NSDate *)lastTimeBulletinAdded;
-(BOOL)hasDisplayedLeaveByMessage;
-(BOOL)hasDisplayedLeaveNowMessage;
-(BOOL)hasDisplayedRunningLateMessage;
-(id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 appLink:(id)arg10 action:(id)arg11 proximity:(long long)arg12 externalID:(id)arg13 acknowledged:(BOOL)arg14 dismissalID:(id)arg15 alarmID:(id)arg16 isOffsetFromTravelTimeStart:(BOOL)arg17 refiring:(BOOL)arg18 pseudoEvent:(BOOL)arg19 ;
-(void)setHasGeoLocationCoordinates:(BOOL)arg1 ;
-(void)setGeoLocationCoordinates:(CLLocationCoordinate2D)arg1 ;
-(void)setHasOrganizerThatIsNotCurrentUser:(BOOL)arg1 ;
-(void)setOrganizerEmailAddress:(NSString *)arg1 ;
-(void)setStartLocationRouting:(NSString *)arg1 ;
-(void)setLocationAddress:(NSString *)arg1 ;
-(void)setLatestHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg1 ;
-(void)setLastTimeBulletinAdded:(NSDate *)arg1 ;
-(void)setHasDisplayedLeaveByMessage:(BOOL)arg1 ;
-(void)setHasDisplayedLeaveNowMessage:(BOOL)arg1 ;
-(void)setHasDisplayedRunningLateMessage:(BOOL)arg1 ;
-(BOOL)isOnSharedCalendar;
-(BOOL)isPurelyATimeToLeaveAlert;
-(void)resetTimeToLeaveDisplayState;
-(BOOL)isSuggestedLocation;
-(void)setIsSuggestedLocation:(BOOL)arg1 ;
@end

