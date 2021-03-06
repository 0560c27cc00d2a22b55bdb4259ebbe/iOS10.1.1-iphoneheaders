/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICPredictionSource.h>

@class PEXQuickTypeBroker;

@interface _ICPEXPredictionSource : NSObject <_ICPredictionSource> {

	PEXQuickTypeBroker* _pexBroker;

}

@property (nonatomic,retain) PEXQuickTypeBroker * pexBroker;              //@synthesize pexBroker=_pexBroker - In the implementation block
-(id)init;
-(id)initForTesting;
-(void)namesWithContactsLimit:(unsigned long long)arg1 withFoundLimit:(unsigned long long)arg2 timeout:(float)arg3 handler:(/*^block*/id)arg4 ;
-(void)peoplePredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(/*^block*/id)arg5 ;
-(void)eventPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(/*^block*/id)arg5 ;
-(void)connectionsPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(/*^block*/id)arg5 ;
-(id)_pexKeyForLMKey:(id)arg1 ;
-(id)buildPeopleRequestWithTrigger:(id)arg1 ;
-(void)addSearchContext:(id)arg1 toDictionary:(id)arg2 ;
-(BOOL)isFirstPersonTrigger:(id)arg1 ;
-(id)buildEventRequestWithTrigger:(id)arg1 ;
-(id)_pexTagForTITextContentTag:(id)arg1 ;
-(id)buildConnnectionsRequestWithTrigger:(id)arg1 ;
-(id)buildConnnectionsLinguisticRequestWithTrigger:(id)arg1 ;
-(void)resetBrokerForTesting;
-(PEXQuickTypeBroker *)pexBroker;
-(void)setPexBroker:(PEXQuickTypeBroker *)arg1 ;
@end

