/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <MIME/MIME-Structs.h>
@class NSObject;

@interface MFCoalescer : NSObject {

	/*^block*/id _coalescerAction;
	os_unfair_lock_s _lock;
	id _coalescedValue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _coalescer;

}
-(id)init;
-(void)dealloc;
-(void)_handleCoalesceEvent;
-(id)initWithCoalescingAction:(/*^block*/id)arg1 ;
-(void)coalesceValue:(id)arg1 ;
@end

