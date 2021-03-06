/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class EAAccessory, EASession, NSRecursiveLock;

@interface EAOutputStream : NSOutputStream {

	id _delegate;
	int _sock;
	EAAccessory* _accessory;
	EASession* _session;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	CFSocketRef _cfSocket;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasSpaceAvailableEventSent;
	BOOL _hasSpaceAvailable;
	BOOL _isAtEndEventSent;
	unsigned long long _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	CFRunLoopSourceRef _socketRunLoopSource;

}
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)open;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(void)endStream;
-(void)_streamWriteable;
-(unsigned long long)streamStatus;
-(id)streamError;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

