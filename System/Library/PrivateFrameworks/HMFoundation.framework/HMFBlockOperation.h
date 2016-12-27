/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSError;

@interface HMFBlockOperation : NSBlockOperation {

	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> finishedSemaphore;              //@synthesize finishedSemaphore=_finishedSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long dispatchTimeout; 
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)start;
-(void)_cancelWithError:(id)arg1 ;
-(void)finish;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)_error;
-(void)_setError:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)finishedSemaphore;
-(void)setFinishedSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned long long)dispatchTimeout;
-(id)_finishedSemaphore;
-(void)_setFinishedSemaphore:(id)arg1 ;
-(void)_finish;
@end

