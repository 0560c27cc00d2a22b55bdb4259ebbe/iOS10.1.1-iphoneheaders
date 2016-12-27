/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPKiss : PBCodable <NSCopying> {

	NSData* _angles;
	NSData* _delays;
	NSData* _points;

}

@property (nonatomic,readonly) BOOL hasDelays; 
@property (nonatomic,retain) NSData * delays;               //@synthesize delays=_delays - In the implementation block
@property (nonatomic,readonly) BOOL hasPoints; 
@property (nonatomic,retain) NSData * points;               //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasAngles; 
@property (nonatomic,retain) NSData * angles;               //@synthesize angles=_angles - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)points;
-(void)setPoints:(NSData *)arg1 ;
-(BOOL)hasPoints;
-(void)setDelays:(NSData *)arg1 ;
-(void)setAngles:(NSData *)arg1 ;
-(BOOL)hasDelays;
-(BOOL)hasAngles;
-(NSData *)delays;
-(NSData *)angles;
@end

