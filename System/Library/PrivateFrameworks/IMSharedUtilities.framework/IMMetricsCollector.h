/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface IMMetricsCollector : NSObject {

	NSObject*<OS_dispatch_queue> _metricsQueue;
	NSSet* _allowedEvents;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)trackEvent:(id)arg1 ;
-(BOOL)trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(BOOL)_isAllowedEvent:(id)arg1 ;
-(void)_trackEvent:(id)arg1 ;
-(void)_trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(void*)_ADClientAddValueForScalarKeyApiInit;
-(void*)_ADClientPushValueForDistributionKeyApiInit;
@end

