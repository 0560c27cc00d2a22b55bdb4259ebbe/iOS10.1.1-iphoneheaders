/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMFuture.h>

@protocol FMScheduler, OS_dispatch_queue;
@class NSObject;

@interface _FMLazyFuture : FMFuture {

	BOOL _started;
	/*^block*/id _block;
	id<FMScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<FMScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)_runIfNecessary;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(BOOL)started;
-(id<FMScheduler>)scheduler;
-(void)setScheduler:(id<FMScheduler>)arg1 ;
@end

