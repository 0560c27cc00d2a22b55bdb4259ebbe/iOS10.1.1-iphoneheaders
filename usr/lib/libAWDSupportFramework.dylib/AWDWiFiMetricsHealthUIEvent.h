/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {

	unsigned long long _healthIssues;
	unsigned long long _timestamp;
	unsigned _eventType;
	NSString* _hashCode;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasHealthIssues; 
@property (assign,nonatomic) unsigned long long healthIssues;              //@synthesize healthIssues=_healthIssues - In the implementation block
@property (nonatomic,readonly) BOOL hasHashCode; 
@property (nonatomic,retain) NSString * hashCode;                          //@synthesize hashCode=_hashCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)eventType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setHashCode:(NSString *)arg1 ;
-(void)setHealthIssues:(unsigned long long)arg1 ;
-(void)setHasHealthIssues:(BOOL)arg1 ;
-(BOOL)hasHealthIssues;
-(BOOL)hasHashCode;
-(unsigned long long)healthIssues;
-(NSString *)hashCode;
@end

