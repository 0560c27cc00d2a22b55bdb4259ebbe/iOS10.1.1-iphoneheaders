/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, CLLocation, NSData;

@interface EKTravelEngineOriginalEvent : NSObject {

	BOOL _locationIsAConferenceRoom;
	BOOL _automaticGeocodingAllowed;
	BOOL _hasPredictedLocation;
	BOOL _isOnSharedCalendar;
	int _transportTypeOverride;
	NSString* _eventExternalURL;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _locationString;
	CLLocation* _geoLocation;
	NSData* _locationMapKitHandle;

}

@property (nonatomic,retain) NSString * eventExternalURL;                 //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) int transportTypeOverride;                   //@synthesize transportTypeOverride=_transportTypeOverride - In the implementation block
@property (nonatomic,retain) NSString * locationString;                   //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                    //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * locationMapKitHandle;               //@synthesize locationMapKitHandle=_locationMapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL locationIsAConferenceRoom;              //@synthesize locationIsAConferenceRoom=_locationIsAConferenceRoom - In the implementation block
@property (assign,nonatomic) BOOL automaticGeocodingAllowed;              //@synthesize automaticGeocodingAllowed=_automaticGeocodingAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasPredictedLocation;                   //@synthesize hasPredictedLocation=_hasPredictedLocation - In the implementation block
@property (assign,nonatomic) BOOL isOnSharedCalendar;                     //@synthesize isOnSharedCalendar=_isOnSharedCalendar - In the implementation block
-(id)description;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(BOOL)hasPredictedLocation;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(CLLocation *)geoLocation;
-(BOOL)locationIsAConferenceRoom;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(void)setTransportTypeOverride:(int)arg1 ;
-(void)setLocationIsAConferenceRoom:(BOOL)arg1 ;
-(void)setLocationMapKitHandle:(NSData *)arg1 ;
-(void)setAutomaticGeocodingAllowed:(BOOL)arg1 ;
-(void)setHasPredictedLocation:(BOOL)arg1 ;
-(void)setIsOnSharedCalendar:(BOOL)arg1 ;
-(NSString *)eventExternalURL;
-(int)transportTypeOverride;
-(NSData *)locationMapKitHandle;
-(BOOL)automaticGeocodingAllowed;
-(BOOL)isEqualToOriginalEvent:(id)arg1 ;
-(BOOL)isOnSharedCalendar;
@end

