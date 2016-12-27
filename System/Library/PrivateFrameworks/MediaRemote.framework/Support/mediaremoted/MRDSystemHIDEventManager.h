/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDHIDEventManager.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MRDSystemHIDEventManager : MRDHIDEventManager {

	IOHIDEventSystemClientRef _hidSystemClient;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)dispatchHIDEvent:(IOHIDEventRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

