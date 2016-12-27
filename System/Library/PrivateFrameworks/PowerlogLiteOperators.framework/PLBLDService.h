/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBatteryBreakdownService.h>

@class PLXPCResponderOperatorComposition;

@interface PLBLDService : PLBatteryBreakdownService {

	PLXPCResponderOperatorComposition* _batteryBreakdownResponder;
	PLXPCResponderOperatorComposition* _logBUIResultsResponder;

}

@property (retain) PLXPCResponderOperatorComposition * batteryBreakdownResponder;              //@synthesize batteryBreakdownResponder=_batteryBreakdownResponder - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * logBUIResultsResponder;                 //@synthesize logBUIResultsResponder=_logBUIResultsResponder - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventPointBLD;
-(id)init;
-(void)initOperatorDependancies;
-(id)batteryBreakdownWithPayload:(id)arg1 ;
-(void)setBatteryBreakdownResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(id)bldEntryWithBatteryBreakdown:(id)arg1 ;
-(PLXPCResponderOperatorComposition *)batteryBreakdownResponder;
-(PLXPCResponderOperatorComposition *)logBUIResultsResponder;
-(void)setLogBUIResultsResponder:(PLXPCResponderOperatorComposition *)arg1 ;
@end

