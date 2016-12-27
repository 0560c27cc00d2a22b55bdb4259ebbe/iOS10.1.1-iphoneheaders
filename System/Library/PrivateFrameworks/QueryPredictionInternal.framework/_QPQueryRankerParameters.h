/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPredictionInternal/_QPParameters.h>

@class NSString, NSNumber, NSDate;

@interface _QPQueryRankerParameters : _QPParameters {

	NSString* _modelName;
	NSNumber* _resultLimit;
	NSNumber* _minimumTermFrequency;
	NSNumber* _scoreThreshold;
	NSDate* _referenceDate;
	NSNumber* _eventWindow;
	NSNumber* _timeHalfLife;
	NSNumber* _timeOfDayHalfLife;
	NSNumber* _timeOfWeekHalfLife;
	NSNumber* _timeWeight;
	NSNumber* _timeOfDayWeight;
	NSNumber* _timeOfWeekWeight;
	NSNumber* _durationWeight;
	NSNumber* _engagementWeight;
	NSNumber* _renderWeight;
	NSNumber* _offset;
	NSNumber* _sameWeekPeriodWeight;
	NSNumber* _diffWeekPeriodWeight;
	NSString* _aggregationFunction;

}

@property (retain) NSNumber * resultLimit;                         //@synthesize resultLimit=_resultLimit - In the implementation block
@property (retain) NSNumber * minimumTermFrequency;                //@synthesize minimumTermFrequency=_minimumTermFrequency - In the implementation block
@property (readonly) NSString * modelName;                         //@synthesize modelName=_modelName - In the implementation block
@property (readonly) NSNumber * scoreThreshold;                    //@synthesize scoreThreshold=_scoreThreshold - In the implementation block
@property (readonly) NSDate * referenceDate;                       //@synthesize referenceDate=_referenceDate - In the implementation block
@property (readonly) NSNumber * eventWindow;                       //@synthesize eventWindow=_eventWindow - In the implementation block
@property (readonly) NSNumber * timeHalfLife;                      //@synthesize timeHalfLife=_timeHalfLife - In the implementation block
@property (readonly) NSNumber * timeOfDayHalfLife;                 //@synthesize timeOfDayHalfLife=_timeOfDayHalfLife - In the implementation block
@property (readonly) NSNumber * timeOfWeekHalfLife;                //@synthesize timeOfWeekHalfLife=_timeOfWeekHalfLife - In the implementation block
@property (readonly) NSNumber * timeWeight;                        //@synthesize timeWeight=_timeWeight - In the implementation block
@property (readonly) NSNumber * timeOfDayWeight;                   //@synthesize timeOfDayWeight=_timeOfDayWeight - In the implementation block
@property (readonly) NSNumber * timeOfWeekWeight;                  //@synthesize timeOfWeekWeight=_timeOfWeekWeight - In the implementation block
@property (readonly) NSNumber * durationWeight;                    //@synthesize durationWeight=_durationWeight - In the implementation block
@property (readonly) NSNumber * engagementWeight;                  //@synthesize engagementWeight=_engagementWeight - In the implementation block
@property (readonly) NSNumber * renderWeight;                      //@synthesize renderWeight=_renderWeight - In the implementation block
@property (readonly) NSNumber * offset;                            //@synthesize offset=_offset - In the implementation block
@property (readonly) NSNumber * sameWeekPeriodWeight;              //@synthesize sameWeekPeriodWeight=_sameWeekPeriodWeight - In the implementation block
@property (readonly) NSNumber * diffWeekPeriodWeight;              //@synthesize diffWeekPeriodWeight=_diffWeekPeriodWeight - In the implementation block
@property (readonly) NSString * aggregationFunction;               //@synthesize aggregationFunction=_aggregationFunction - In the implementation block
+(id)parametersForModel:(unsigned long long)arg1 ;
-(NSNumber *)offset;
-(void)setResultLimit:(NSNumber *)arg1 ;
-(NSNumber *)resultLimit;
-(NSNumber *)timeHalfLife;
-(NSNumber *)timeOfDayHalfLife;
-(NSNumber *)timeOfWeekHalfLife;
-(NSNumber *)timeWeight;
-(NSNumber *)timeOfDayWeight;
-(NSNumber *)timeOfWeekWeight;
-(NSNumber *)sameWeekPeriodWeight;
-(NSNumber *)diffWeekPeriodWeight;
-(NSString *)modelName;
-(NSDate *)referenceDate;
-(id)defaultValues;
-(NSNumber *)minimumTermFrequency;
-(NSNumber *)scoreThreshold;
-(NSNumber *)eventWindow;
-(NSNumber *)durationWeight;
-(NSNumber *)engagementWeight;
-(NSNumber *)renderWeight;
-(NSString *)aggregationFunction;
-(void)setMinimumTermFrequency:(NSNumber *)arg1 ;
@end

