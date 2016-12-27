/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CalMemorySensor : NSObject {

	unsigned long long _interval;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _usage;
	/*^block*/id _fireBlock;

}

@property (nonatomic,copy) id fireBlock;                              //@synthesize fireBlock=_fireBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long usage;              //@synthesize usage=_usage - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)usage;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(id)initWithMonitorInterval:(unsigned long long)arg1 ;
-(void)_monitorMemory;
-(void)stopMonitoringMemory;
-(void)startMonitoringMemory;
-(void)defaultMessageTraceForApp:(id)arg1 ;
-(void)_setupTimer;
@end

