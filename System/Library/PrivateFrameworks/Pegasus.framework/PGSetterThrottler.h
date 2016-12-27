/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PGSetterThrottler : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	id _value;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	id _throttledValue;
	BOOL _busy;
	BOOL _pending;

}

@property (nonatomic,retain) id value; 
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 usingQueue:(id)arg2 ;
-(void)_setValue;
@end

