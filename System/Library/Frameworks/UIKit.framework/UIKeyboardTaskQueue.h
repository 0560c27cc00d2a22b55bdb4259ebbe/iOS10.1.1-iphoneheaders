/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext, UIKeyboardTaskEntry, NSArray;

@interface UIKeyboardTaskQueue : NSObject {

	BOOL _executingOnMainThread;
	NSConditionLock* _lock;
	NSMutableArray* _tasks;
	NSMutableArray* _deferredTasks;
	UIKeyboardTaskExecutionContext* _executionContext;
	UIKeyboardTaskEntry* _mainThreadContinuation;
	NSArray* _activeOriginator;

}

@property (nonatomic,retain) UIKeyboardTaskExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,retain) NSArray * activeOriginator;                                     //@synthesize activeOriginator=_activeOriginator - In the implementation block
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)performSingleTask:(/*^block*/id)arg1 ;
-(BOOL)isMainThreadExecutingTask;
-(void)waitUntilAllTasksAreFinished;
-(void)addTask:(/*^block*/id)arg1 ;
-(void)addDeferredTask:(/*^block*/id)arg1 ;
-(void)performTask:(/*^block*/id)arg1 ;
-(id)scheduleTask:(/*^block*/id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 ;
-(UIKeyboardTaskExecutionContext *)executionContext;
-(void)setExecutionContext:(UIKeyboardTaskExecutionContext *)arg1 ;
-(void)finishExecution;
-(void)performTaskOnMainThread:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(NSArray *)activeOriginator;
-(void)continueExecutionOnMainThread;
-(BOOL)tryLockWhenReadyForMainThread;
-(void)setActiveOriginator:(NSArray *)arg1 ;
-(void)performDeferredTaskIfIdle;
-(void)lockWhenReadyForMainThread;
-(void)promoteDeferredTaskIfIdle;
-(id)addAndReturnTask:(/*^block*/id)arg1 ;
-(void)waitUntilTaskIsFinished:(id)arg1 ;
@end

