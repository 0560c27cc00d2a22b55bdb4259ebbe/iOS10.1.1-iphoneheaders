/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSMutableSet, NSObject;

@interface PHIntervalTimer : NSObject {

	double _interval;
	NSTimer* _timer;
	NSMutableSet* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) double interval;                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)oneSecondTimer;
-(void)_createTimerIfNecessary;
-(void)_invalidateTimerIfNecessary;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_postNotification;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(id)initWithInterval:(double)arg1 ;
@end

