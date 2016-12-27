/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface LOGMSGEVENTLogMsgEventRideBookedSession : PBCodable <NSCopying> {

	NSString* _rideAppId;
	NSString* _rideBookedSessionId;
	BOOL _bookedUsingMaps;
	BOOL _cancelled;
	BOOL _contactedDriver;
	BOOL _tappedProactiveTrayItem;
	BOOL _viewedDetails;
	BOOL _viewedInProactiveTray;
	SCD_Struct_LO18 _has;

}

@property (assign,nonatomic) BOOL hasBookedUsingMaps; 
@property (assign,nonatomic) BOOL bookedUsingMaps;                         //@synthesize bookedUsingMaps=_bookedUsingMaps - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                               //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasContactedDriver; 
@property (assign,nonatomic) BOOL contactedDriver;                         //@synthesize contactedDriver=_contactedDriver - In the implementation block
@property (assign,nonatomic) BOOL hasViewedInProactiveTray; 
@property (assign,nonatomic) BOOL viewedInProactiveTray;                   //@synthesize viewedInProactiveTray=_viewedInProactiveTray - In the implementation block
@property (assign,nonatomic) BOOL hasTappedProactiveTrayItem; 
@property (assign,nonatomic) BOOL tappedProactiveTrayItem;                 //@synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem - In the implementation block
@property (assign,nonatomic) BOOL hasViewedDetails; 
@property (assign,nonatomic) BOOL viewedDetails;                           //@synthesize viewedDetails=_viewedDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasRideAppId; 
@property (nonatomic,retain) NSString * rideAppId;                         //@synthesize rideAppId=_rideAppId - In the implementation block
@property (nonatomic,readonly) BOOL hasRideBookedSessionId; 
@property (nonatomic,retain) NSString * rideBookedSessionId;               //@synthesize rideBookedSessionId=_rideBookedSessionId - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBookedUsingMaps:(BOOL)arg1 ;
-(void)setHasBookedUsingMaps:(BOOL)arg1 ;
-(BOOL)hasBookedUsingMaps;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setContactedDriver:(BOOL)arg1 ;
-(void)setHasContactedDriver:(BOOL)arg1 ;
-(BOOL)hasContactedDriver;
-(void)setViewedInProactiveTray:(BOOL)arg1 ;
-(void)setHasViewedInProactiveTray:(BOOL)arg1 ;
-(BOOL)hasViewedInProactiveTray;
-(void)setTappedProactiveTrayItem:(BOOL)arg1 ;
-(void)setHasTappedProactiveTrayItem:(BOOL)arg1 ;
-(BOOL)hasTappedProactiveTrayItem;
-(void)setViewedDetails:(BOOL)arg1 ;
-(void)setHasViewedDetails:(BOOL)arg1 ;
-(BOOL)hasViewedDetails;
-(BOOL)hasRideAppId;
-(BOOL)hasRideBookedSessionId;
-(BOOL)bookedUsingMaps;
-(BOOL)contactedDriver;
-(BOOL)viewedInProactiveTray;
-(BOOL)tappedProactiveTrayItem;
-(BOOL)viewedDetails;
-(NSString *)rideAppId;
-(void)setRideAppId:(NSString *)arg1 ;
-(NSString *)rideBookedSessionId;
-(void)setRideBookedSessionId:(NSString *)arg1 ;
@end

