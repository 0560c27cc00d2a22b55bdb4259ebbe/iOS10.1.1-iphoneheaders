/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAccessibility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libAccessibility.dylib/libAccessibility.dylib-Structs.h>
@class NSUserDefaults, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface AXSupportDefaultsObserver : NSObject {

	NSUserDefaults* _axDomain;
	NSMutableSet* _observedPrefs;
	NSMutableArray* _actions;
	NSMutableDictionary* _actionLastNotifications;
	NSObject*<OS_dispatch_queue> _lastNotificationsQueue;

}
-(void)startObservingPreference:(CFStringRef)arg1 andBroadcastDarwinNotification:(CFStringRef)arg2 ;
-(void)startObservingPreference:(CFStringRef)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

