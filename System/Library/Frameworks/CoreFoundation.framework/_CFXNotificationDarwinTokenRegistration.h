/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration {

	int _notifyToken;

}

@property (readonly) int notifyToken;              //@synthesize notifyToken=_notifyToken - In the implementation block
-(id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)invalidate;
-(int)notifyToken;
@end
