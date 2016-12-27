/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying> {

	unsigned _activeCalories;
	unsigned _automotive;
	unsigned _briskMinutes;
	unsigned _cycling;
	unsigned _duration;
	unsigned _heartRate;
	unsigned _other;
	unsigned _running;
	unsigned _unknown;
	unsigned _walking;
	unsigned _workout;
	SCD_Struct_HD41 _has;

}

@property (assign,nonatomic) BOOL hasWalking; 
@property (assign,nonatomic) unsigned walking;                     //@synthesize walking=_walking - In the implementation block
@property (assign,nonatomic) BOOL hasAutomotive; 
@property (assign,nonatomic) unsigned automotive;                  //@synthesize automotive=_automotive - In the implementation block
@property (assign,nonatomic) BOOL hasCycling; 
@property (assign,nonatomic) unsigned cycling;                     //@synthesize cycling=_cycling - In the implementation block
@property (assign,nonatomic) BOOL hasRunning; 
@property (assign,nonatomic) unsigned running;                     //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL hasOther; 
@property (assign,nonatomic) unsigned other;                       //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) BOOL hasWorkout; 
@property (assign,nonatomic) unsigned workout;                     //@synthesize workout=_workout - In the implementation block
@property (assign,nonatomic) BOOL hasHeartRate; 
@property (assign,nonatomic) unsigned heartRate;                   //@synthesize heartRate=_heartRate - In the implementation block
@property (assign,nonatomic) BOOL hasActiveCalories; 
@property (assign,nonatomic) unsigned activeCalories;              //@synthesize activeCalories=_activeCalories - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) unsigned briskMinutes;                //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasUnknown; 
@property (assign,nonatomic) unsigned unknown;                     //@synthesize unknown=_unknown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setBriskMinutes:(unsigned)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(BOOL)hasBriskMinutes;
-(unsigned)briskMinutes;
-(unsigned)walking;
-(void)setWalking:(unsigned)arg1 ;
-(unsigned)automotive;
-(void)setAutomotive:(unsigned)arg1 ;
-(unsigned)cycling;
-(void)setCycling:(unsigned)arg1 ;
-(unsigned)running;
-(void)setRunning:(unsigned)arg1 ;
-(unsigned)other;
-(void)setOther:(unsigned)arg1 ;
-(unsigned)unknown;
-(void)setUnknown:(unsigned)arg1 ;
-(unsigned)workout;
-(void)setWorkout:(unsigned)arg1 ;
-(unsigned)heartRate;
-(void)setHeartRate:(unsigned)arg1 ;
-(unsigned)activeCalories;
-(void)setActiveCalories:(unsigned)arg1 ;
-(void)setHasWalking:(BOOL)arg1 ;
-(BOOL)hasWalking;
-(void)setHasAutomotive:(BOOL)arg1 ;
-(BOOL)hasAutomotive;
-(void)setHasCycling:(BOOL)arg1 ;
-(BOOL)hasCycling;
-(void)setHasRunning:(BOOL)arg1 ;
-(BOOL)hasRunning;
-(void)setHasOther:(BOOL)arg1 ;
-(BOOL)hasOther;
-(void)setHasWorkout:(BOOL)arg1 ;
-(BOOL)hasWorkout;
-(void)setHasHeartRate:(BOOL)arg1 ;
-(BOOL)hasHeartRate;
-(void)setHasActiveCalories:(BOOL)arg1 ;
-(BOOL)hasActiveCalories;
-(void)setHasUnknown:(BOOL)arg1 ;
-(BOOL)hasUnknown;
@end

