/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CKFlowControl : NSObject {

	unsigned long long _budgetCap;
	double _regenerationPerSecond;
	unsigned long long _totalSamples;
	double _totalCost;
	double _budget;
	double _maximumThrottleTime;
	NSDate* _lastRegeneration;

}

@property (assign) double budget;                                     //@synthesize budget=_budget - In the implementation block
@property (retain) NSDate * lastRegeneration;                         //@synthesize lastRegeneration=_lastRegeneration - In the implementation block
@property (assign) unsigned long long budgetCap;                      //@synthesize budgetCap=_budgetCap - In the implementation block
@property (assign) double regenerationPerSecond;                      //@synthesize regenerationPerSecond=_regenerationPerSecond - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;              //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
+(id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(id)description;
-(void)setBudget:(double)arg1 ;
-(void)setLastRegeneration:(NSDate *)arg1 ;
-(id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(void)regenerate;
-(double)_secondsUntilBudgetLimitationRemovedNoRegen;
-(NSDate *)lastRegeneration;
-(BOOL)attemptBudgetedExpenditureWithCost:(double)arg1 ;
-(id)CKPropertiesDescription;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(double)maximumThrottleTime;
-(double)secondsUntilBudgetLimitationRemoved;
-(BOOL)isLimited;
-(void)expendWithCost:(double)arg1 ;
-(double)budget;
-(double)regenerationPerSecond;
-(unsigned long long)budgetCap;
-(void)setBudgetCap:(unsigned long long)arg1 ;
-(void)setRegenerationPerSecond:(double)arg1 ;
@end

