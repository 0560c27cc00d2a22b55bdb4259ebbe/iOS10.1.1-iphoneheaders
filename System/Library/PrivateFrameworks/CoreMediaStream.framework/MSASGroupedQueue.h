/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MSASServerSideModel, NSObject, MSTimerGate;

@interface MSASGroupedQueue : NSObject {

	BOOL _isShuttingDown;
	BOOL _isAssertingBusyAssertion;
	int _maxGroupedCallbackEventBatchCount;
	MSASServerSideModel* _model;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;
	double _maxGroupedCallbackEventIdleInterval;
	double _maxGroupedCallbackEventStaleness;
	MSTimerGate* _idleTimerGate;
	MSTimerGate* _stalenessTimerGate;

}

@property (nonatomic,retain) MSTimerGate * idleTimerGate;                             //@synthesize idleTimerGate=_idleTimerGate - In the implementation block
@property (nonatomic,retain) MSTimerGate * stalenessTimerGate;                        //@synthesize stalenessTimerGate=_stalenessTimerGate - In the implementation block
@property (assign,nonatomic,__weak) MSASServerSideModel * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) int maxGroupedCallbackEventBatchCount;                   //@synthesize maxGroupedCallbackEventBatchCount=_maxGroupedCallbackEventBatchCount - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventIdleInterval;              //@synthesize maxGroupedCallbackEventIdleInterval=_maxGroupedCallbackEventIdleInterval - In the implementation block
@property (assign,nonatomic) double maxGroupedCallbackEventStaleness;                 //@synthesize maxGroupedCallbackEventStaleness=_maxGroupedCallbackEventStaleness - In the implementation block
@property (nonatomic,readonly) BOOL isAssertingBusyAssertion;                         //@synthesize isAssertingBusyAssertion=_isAssertingBusyAssertion - In the implementation block
@property (assign,nonatomic) BOOL isShuttingDown;                                     //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
-(id)init;
-(void)dealloc;
-(MSASServerSideModel *)model;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)maxGroupedCallbackEventBatchCount;
-(void)setMaxGroupedCallbackEventBatchCount:(int)arg1 ;
-(double)maxGroupedCallbackEventIdleInterval;
-(void)setMaxGroupedCallbackEventIdleInterval:(double)arg1 ;
-(double)maxGroupedCallbackEventStaleness;
-(void)setMaxGroupedCallbackEventStaleness:(double)arg1 ;
-(void)shutDownFlush:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEnqueuedItems;
-(void)flushQueueCompletionBlock:(/*^block*/id)arg1 ;
-(void)setIsShuttingDown:(BOOL)arg1 ;
-(BOOL)isShuttingDown;
-(void)workQueueFlushQueue;
-(void)workQueueDidEnqueueFirstItem;
-(void)workQueueDidEnqueueSubsequentItem;
-(void)assertBusyAssertion;
-(void)deassertBusyAssertion;
-(void)workQueueAssertBusyAssertion;
-(void)workQueueDeassertBusyAssertion;
-(BOOL)memberQueueIsAssertingBusyAssertion;
-(void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1 ;
-(void)workQueueClearIdleTimer;
-(void)workQueueClearStalenessTimer;
-(MSTimerGate *)idleTimerGate;
-(void)setIdleTimerGate:(MSTimerGate *)arg1 ;
-(MSTimerGate *)stalenessTimerGate;
-(void)setStalenessTimerGate:(MSTimerGate *)arg1 ;
-(void)workQueueRestartStalenessTimer;
-(void)workQueueRestartIdleTimer;
-(BOOL)isAssertingBusyAssertion;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setModel:(MSASServerSideModel *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

