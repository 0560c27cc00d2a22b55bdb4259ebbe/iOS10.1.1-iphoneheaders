/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTriggerBuilder.h>

@protocol HFTimerTriggerExecutionTime;
@class NSArray, NSTimeZone;

@interface HFTimerTriggerBuilder : HFTriggerBuilder {

	id<HFTimerTriggerExecutionTime> _executionTime;
	NSArray* _recurrences;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) id<HFTimerTriggerExecutionTime> executionTime;              //@synthesize executionTime=_executionTime - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                        //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                        //@synthesize timeZone=_timeZone - In the implementation block
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(id<HFTimerTriggerExecutionTime>)executionTime;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(void)setExecutionTime:(id<HFTimerTriggerExecutionTime>)arg1 ;
-(id)_executionTime;
-(id)_updateRecurrences;
-(BOOL)_hasWeekdayRecurrence;
-(id)_updateTimeZone;
@end

