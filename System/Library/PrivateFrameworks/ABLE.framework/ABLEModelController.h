/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEEvents.h>

@class NSDate, NSDictionary;

@interface ABLEModelController : NSObject <ABLEEvents> {

	BOOL valid;
	unsigned long long _priority;

}

@property (readonly) BOOL expires; 
@property (readonly) NSDate * expiryDate; 
@property (assign) BOOL valid; 
@property (readonly) NSDictionary * currentState; 
@property (assign) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
@property (readonly) BOOL enabled; 
-(void)resetModel;
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(void)expireImmediately;
-(NSDate *)expiryDate;
-(id)init;
-(BOOL)enabled;
-(NSDictionary *)currentState;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)valid;
-(void)updateConfiguration:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)expires;
@end

