/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CLKNotificationCenter : NSObject {

	NSMutableDictionary* _registrationsByNotificationName;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
+(id)defaultCenter;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 ;
-(void)removeObserver:(id)arg1 notificationName:(id)arg2 ;
-(void)_handleNotification:(id)arg1 ;
-(void)_queue_registerObserver:(id)arg1 selector:(SEL)arg2 forNotificationName:(id)arg3 ;
-(void)_queue_unregisterObserver:(id)arg1 forNotificationName:(id)arg2 cleanupIfLastObserver:(BOOL)arg3 ;
@end

