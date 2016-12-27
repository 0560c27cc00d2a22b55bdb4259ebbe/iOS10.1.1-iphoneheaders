/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBEventObject, NSString, NSData;

@interface NTPBEvent : PBCodable <NSCopying> {

	long long _duration;
	long long _personalizationTreatmentId;
	long long _personalizedTreatmentId;
	long long _startTimestamp;
	int _cellularRadioAccessTechnology;
	int _deviceOrientation;
	NTPBEventObject* _eventObject;
	int _gestureType;
	int _interfaceOrientation;
	int _reachabilityStatus;
	NSString* _referringSource;
	NSString* _referringType;
	NSData* _sessionId;
	NSString* _userId;
	NSString* _userStorefrontId;
	NSString* _windowFrameInScreen;
	SCD_Struct_NT22 _has;

}

@property (nonatomic,readonly) BOOL hasEventObject; 
@property (nonatomic,retain) NTPBEventObject * eventObject;                      //@synthesize eventObject=_eventObject - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                                 //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                        //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) long long startTimestamp;                           //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) int deviceOrientation;                              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringType; 
@property (nonatomic,retain) NSString * referringType;                           //@synthesize referringType=_referringType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSource; 
@property (nonatomic,retain) NSString * referringSource;                         //@synthesize referringSource=_referringSource - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowFrameInScreen; 
@property (nonatomic,retain) NSString * windowFrameInScreen;                     //@synthesize windowFrameInScreen=_windowFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasGestureType; 
@property (assign,nonatomic) int gestureType;                                    //@synthesize gestureType=_gestureType - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceOrientation; 
@property (assign,nonatomic) int interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasReachabilityStatus; 
@property (assign,nonatomic) int reachabilityStatus;                             //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                  //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;               //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizedTreatmentId; 
@property (assign,nonatomic) long long personalizedTreatmentId;                  //@synthesize personalizedTreatmentId=_personalizedTreatmentId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)duration;
-(int)interfaceOrientation;
-(void)setDuration:(long long)arg1 ;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)gestureType;
-(int)deviceOrientation;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setSessionId:(NSData *)arg1 ;
-(BOOL)hasSessionId;
-(NSData *)sessionId;
-(void)setHasDuration:(BOOL)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(long long)startTimestamp;
-(void)setStartTimestamp:(long long)arg1 ;
-(BOOL)hasUserId;
-(void)setReachabilityStatus:(int)arg1 ;
-(int)reachabilityStatus;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(long long)personalizationTreatmentId;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasReachabilityStatus;
-(id)reachabilityStatusAsString:(int)arg1 ;
-(int)StringAsReachabilityStatus:(id)arg1 ;
-(void)setEventObject:(NTPBEventObject *)arg1 ;
-(void)setReferringType:(NSString *)arg1 ;
-(void)setReferringSource:(NSString *)arg1 ;
-(void)setWindowFrameInScreen:(NSString *)arg1 ;
-(BOOL)hasEventObject;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)setDeviceOrientation:(int)arg1 ;
-(void)setHasDeviceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceOrientation;
-(BOOL)hasReferringType;
-(BOOL)hasReferringSource;
-(BOOL)hasWindowFrameInScreen;
-(void)setGestureType:(int)arg1 ;
-(void)setHasGestureType:(BOOL)arg1 ;
-(BOOL)hasGestureType;
-(void)setHasInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasInterfaceOrientation;
-(void)setPersonalizedTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizedTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizedTreatmentId;
-(NTPBEventObject *)eventObject;
-(NSString *)referringType;
-(NSString *)referringSource;
-(NSString *)windowFrameInScreen;
-(long long)personalizedTreatmentId;
@end

