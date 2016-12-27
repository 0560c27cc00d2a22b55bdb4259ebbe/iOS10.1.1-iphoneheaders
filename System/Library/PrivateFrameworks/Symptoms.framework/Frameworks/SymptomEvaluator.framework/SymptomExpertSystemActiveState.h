/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

@interface SymptomExpertSystemActiveState : SymptomExpertSystemState {

	NSDictionary* _triggeringSymptom;

}

@property (nonatomic,retain) NSDictionary * triggeringSymptom;              //@synthesize triggeringSymptom=_triggeringSymptom - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(void)createAndPostAWDMetric;
-(NSDictionary *)triggeringSymptom;
-(void)setTriggeringSymptom:(NSDictionary *)arg1 ;
@end

