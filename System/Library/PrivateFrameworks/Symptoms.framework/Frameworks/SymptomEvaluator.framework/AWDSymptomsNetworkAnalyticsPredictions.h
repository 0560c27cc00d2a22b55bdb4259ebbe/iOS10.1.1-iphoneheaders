/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsPredictions : PBCodable <NSCopying> {

	unsigned long long _lifetimeOldestItemSecs;
	unsigned long long _modelGraphPullups;
	unsigned long long _modelRecalls;
	unsigned long long _predictionQueries;
	unsigned long long _timeSinceLastTrainedSecs;
	unsigned long long _timestamp;
	unsigned long long _uniquePredictionClients;
	unsigned _calendarTypeMarker;
	unsigned _dayAlikeGroups;
	int _networkType;
	unsigned _predictionErrorOver24hr1000;
	unsigned _timeZoneMarker;
	int _trainingCompletionCode;
	unsigned _trainingProgress1000;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                          //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastTrainedSecs; 
@property (assign,nonatomic) unsigned long long timeSinceLastTrainedSecs;              //@synthesize timeSinceLastTrainedSecs=_timeSinceLastTrainedSecs - In the implementation block
@property (assign,nonatomic) BOOL hasTrainingCompletionCode; 
@property (assign,nonatomic) int trainingCompletionCode;                               //@synthesize trainingCompletionCode=_trainingCompletionCode - In the implementation block
@property (assign,nonatomic) BOOL hasLifetimeOldestItemSecs; 
@property (assign,nonatomic) unsigned long long lifetimeOldestItemSecs;                //@synthesize lifetimeOldestItemSecs=_lifetimeOldestItemSecs - In the implementation block
@property (assign,nonatomic) BOOL hasTrainingProgress1000; 
@property (assign,nonatomic) unsigned trainingProgress1000;                            //@synthesize trainingProgress1000=_trainingProgress1000 - In the implementation block
@property (assign,nonatomic) BOOL hasPredictionErrorOver24hr1000; 
@property (assign,nonatomic) unsigned predictionErrorOver24hr1000;                     //@synthesize predictionErrorOver24hr1000=_predictionErrorOver24hr1000 - In the implementation block
@property (assign,nonatomic) BOOL hasUniquePredictionClients; 
@property (assign,nonatomic) unsigned long long uniquePredictionClients;               //@synthesize uniquePredictionClients=_uniquePredictionClients - In the implementation block
@property (assign,nonatomic) BOOL hasPredictionQueries; 
@property (assign,nonatomic) unsigned long long predictionQueries;                     //@synthesize predictionQueries=_predictionQueries - In the implementation block
@property (assign,nonatomic) BOOL hasModelRecalls; 
@property (assign,nonatomic) unsigned long long modelRecalls;                          //@synthesize modelRecalls=_modelRecalls - In the implementation block
@property (assign,nonatomic) BOOL hasModelGraphPullups; 
@property (assign,nonatomic) unsigned long long modelGraphPullups;                     //@synthesize modelGraphPullups=_modelGraphPullups - In the implementation block
@property (assign,nonatomic) BOOL hasTimeZoneMarker; 
@property (assign,nonatomic) unsigned timeZoneMarker;                                  //@synthesize timeZoneMarker=_timeZoneMarker - In the implementation block
@property (assign,nonatomic) BOOL hasCalendarTypeMarker; 
@property (assign,nonatomic) unsigned calendarTypeMarker;                              //@synthesize calendarTypeMarker=_calendarTypeMarker - In the implementation block
@property (assign,nonatomic) BOOL hasDayAlikeGroups; 
@property (assign,nonatomic) unsigned dayAlikeGroups;                                  //@synthesize dayAlikeGroups=_dayAlikeGroups - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(int)networkType;
-(void)setTimeSinceLastTrainedSecs:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastTrainedSecs:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastTrainedSecs;
-(int)trainingCompletionCode;
-(void)setTrainingCompletionCode:(int)arg1 ;
-(void)setHasTrainingCompletionCode:(BOOL)arg1 ;
-(BOOL)hasTrainingCompletionCode;
-(id)trainingCompletionCodeAsString:(int)arg1 ;
-(int)StringAsTrainingCompletionCode:(id)arg1 ;
-(void)setLifetimeOldestItemSecs:(unsigned long long)arg1 ;
-(void)setHasLifetimeOldestItemSecs:(BOOL)arg1 ;
-(BOOL)hasLifetimeOldestItemSecs;
-(void)setTrainingProgress1000:(unsigned)arg1 ;
-(void)setHasTrainingProgress1000:(BOOL)arg1 ;
-(BOOL)hasTrainingProgress1000;
-(void)setPredictionErrorOver24hr1000:(unsigned)arg1 ;
-(void)setHasPredictionErrorOver24hr1000:(BOOL)arg1 ;
-(BOOL)hasPredictionErrorOver24hr1000;
-(void)setUniquePredictionClients:(unsigned long long)arg1 ;
-(void)setHasUniquePredictionClients:(BOOL)arg1 ;
-(BOOL)hasUniquePredictionClients;
-(void)setPredictionQueries:(unsigned long long)arg1 ;
-(void)setHasPredictionQueries:(BOOL)arg1 ;
-(BOOL)hasPredictionQueries;
-(void)setModelRecalls:(unsigned long long)arg1 ;
-(void)setHasModelRecalls:(BOOL)arg1 ;
-(BOOL)hasModelRecalls;
-(void)setModelGraphPullups:(unsigned long long)arg1 ;
-(void)setHasModelGraphPullups:(BOOL)arg1 ;
-(BOOL)hasModelGraphPullups;
-(void)setTimeZoneMarker:(unsigned)arg1 ;
-(void)setHasTimeZoneMarker:(BOOL)arg1 ;
-(BOOL)hasTimeZoneMarker;
-(void)setCalendarTypeMarker:(unsigned)arg1 ;
-(void)setHasCalendarTypeMarker:(BOOL)arg1 ;
-(BOOL)hasCalendarTypeMarker;
-(void)setDayAlikeGroups:(unsigned)arg1 ;
-(void)setHasDayAlikeGroups:(BOOL)arg1 ;
-(BOOL)hasDayAlikeGroups;
-(unsigned long long)timeSinceLastTrainedSecs;
-(unsigned long long)lifetimeOldestItemSecs;
-(unsigned)trainingProgress1000;
-(unsigned)predictionErrorOver24hr1000;
-(unsigned long long)uniquePredictionClients;
-(unsigned long long)predictionQueries;
-(unsigned long long)modelRecalls;
-(unsigned long long)modelGraphPullups;
-(unsigned)timeZoneMarker;
-(unsigned)calendarTypeMarker;
-(unsigned)dayAlikeGroups;
@end

