/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlaySlideshowSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _clientModel;
	NSString* _clientVersion;
	unsigned _repeat;
	NSString* _sessionUUID;
	unsigned _slideMs;
	int _status;
	NSString* _theme;
	NSString* _transition;
	unsigned _transportType;
	SCD_Struct_AP13 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                    //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTheme; 
@property (nonatomic,retain) NSString * theme;                          //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL hasTransition; 
@property (nonatomic,retain) NSString * transition;                     //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeat; 
@property (assign,nonatomic) unsigned repeat;                           //@synthesize repeat=_repeat - In the implementation block
@property (assign,nonatomic) BOOL hasSlideMs; 
@property (assign,nonatomic) unsigned slideMs;                          //@synthesize slideMs=_slideMs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTransition:(NSString *)arg1 ;
-(NSString *)transition;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(NSString *)theme;
-(void)setTheme:(NSString *)arg1 ;
-(BOOL)hasClientModel;
-(NSString *)clientModel;
-(void)setClientModel:(NSString *)arg1 ;
-(BOOL)hasTheme;
-(void)setHasRepeat:(BOOL)arg1 ;
-(BOOL)hasRepeat;
-(void)setSlideMs:(unsigned)arg1 ;
-(void)setHasSlideMs:(BOOL)arg1 ;
-(BOOL)hasSlideMs;
-(unsigned)slideMs;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(unsigned)repeat;
-(void)setRepeat:(unsigned)arg1 ;
-(BOOL)hasTransition;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(BOOL)hasClientVersion;
@end

