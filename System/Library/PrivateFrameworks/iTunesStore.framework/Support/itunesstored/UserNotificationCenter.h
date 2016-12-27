/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSMutableArray;

@interface UserNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _userNotifications;

}
+(id)defaultCenter;
-(id)showDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelUserNotification:(id)arg1 ;
-(void)updateUserNotification:(id)arg1 withDialog:(id)arg2 ;
-(void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2 ;
-(void)cancelUserNotifications:(id)arg1 ;
-(void)_showPreparedNotification:(id)arg1 ;
-(id)showUserNotification:(CFDictionaryRef)arg1 withOptions:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateUserNotification:(id)arg1 withDictionary:(CFDictionaryRef)arg2 options:(unsigned long long)arg3 ;
-(id)prepareUserNotificationWithDialog:(id)arg1 ;
-(void)showPreparedNotification:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_finishUserNotification:(CFUserNotificationRef)arg1 withResponseFlags:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)showUserNotification:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

