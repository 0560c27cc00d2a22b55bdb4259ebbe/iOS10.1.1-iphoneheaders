/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CXCallObserver, NSString;

@interface _DKCallMonitor : _DKMonitor <CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _callHistoryQueue;
	BOOL _enabled;
	BOOL _callInProgress;
	CXCallObserver* _observer;
	CTServerConnectionRef _telephony;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCallInProgress:(BOOL)arg1 ;
+(BOOL)writeRepopulationCheckpoint:(id)arg1 ;
+(id)readRepopulationCheckpoint;
+(id)_eventWithState:(id)arg1 interaction:(id)arg2 ;
+(id)eventStream;
+(id)entitlements;
-(id)_initialCallHistoryLookbackDate;
-(void)_handleDistributedNotification:(id)arg1 ;
-(void)recordCallHistoryFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_recordCallHistoryFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)deleteCallHistory;
-(void)requestCallHistoryRepopulation;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)update;
-(void)synchronouslyReflectCurrentValue;
-(void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(CTServerConnectionRef)arg3 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
@end

