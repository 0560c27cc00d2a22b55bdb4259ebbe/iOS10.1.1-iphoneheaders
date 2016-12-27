/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	void* _contextKey;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)queue;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(BOOL)isQueueCurrent;
-(void)assertQueueIsCurrent;
-(id)initWithName:(char*)arg1 contextKey:(void*)arg2 ;
@end

