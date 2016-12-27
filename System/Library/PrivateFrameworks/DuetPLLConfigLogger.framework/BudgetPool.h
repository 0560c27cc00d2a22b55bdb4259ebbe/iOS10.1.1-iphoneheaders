/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetPLLConfigLogger/DuetPLLConfigLogger-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@class NSMutableDictionary;

@interface BudgetPool : NSObject <DuetLoggerProtocol> {

	long long itemPoolLimit;
	long long globalPoolLimit;
	long long currentGlobalPool;
	int budgetMode;
	NSMutableDictionary* itemsDictionary;

}
-(id)findPoolResource:(id)arg1 ;
-(void)resetAllDiff;
-(long long)totalDiffBudget;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)resetAllPoolLimits;
-(id)init:(long long)arg1 andItemLimit:(long long)arg2 withBudgetMode:(int)arg3 ;
-(BOOL)hasBudgetAvailable:(id)arg1 ;
-(BOOL)hasGlobalPoolReachedLimit;
-(void)UpdateBudget:(id)arg1 withCost:(long long)arg2 ;
-(long long)totalBudget;
@end

