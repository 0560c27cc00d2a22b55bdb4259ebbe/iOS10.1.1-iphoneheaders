/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _anyPositiveHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan10mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan200mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan20mHistogram;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _lessThan55mHistogram;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan10mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan10mHistogram;               //@synthesize lessThan10mHistogram=_lessThan10mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan20mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan20mHistogram;               //@synthesize lessThan20mHistogram=_lessThan20mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan55mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan55mHistogram;               //@synthesize lessThan55mHistogram=_lessThan55mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasLessThan200mHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * lessThan200mHistogram;              //@synthesize lessThan200mHistogram=_lessThan200mHistogram - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyPositiveHistogram; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * anyPositiveHistogram;               //@synthesize anyPositiveHistogram=_anyPositiveHistogram - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setLessThan10mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan20mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan55mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setLessThan200mHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setAnyPositiveHistogram:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(BOOL)hasLessThan10mHistogram;
-(BOOL)hasLessThan20mHistogram;
-(BOOL)hasLessThan55mHistogram;
-(BOOL)hasLessThan200mHistogram;
-(BOOL)hasAnyPositiveHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan10mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan20mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan55mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)lessThan200mHistogram;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)anyPositiveHistogram;
@end

