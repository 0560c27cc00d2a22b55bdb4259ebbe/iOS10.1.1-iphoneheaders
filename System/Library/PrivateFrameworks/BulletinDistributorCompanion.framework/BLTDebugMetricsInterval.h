/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface BLTDebugMetricsInterval : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSDate* _start;
	double _interval;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * start;                                   //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double interval;                                  //@synthesize interval=_interval - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(id)initWithStart:(double)arg1 interval:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)_cleanupTimer;
-(id)nextUpcomingIntervalDate;
@end
