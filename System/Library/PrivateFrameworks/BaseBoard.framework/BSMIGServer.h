/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class NSString;

@interface BSMIGServer : NSObject {

	NSString* _portName;
	unsigned _port;
	opaque_pthread_t* _thread;
	mig_subsystem* _subsystem;
	CFRunLoopObserverRef _entryObserver;
	CFRunLoopObserverRef _exitObserver;

}

@property (assign,nonatomic) int threadPriority; 
@property (nonatomic,readonly) NSString * threadName; 
-(int)threadPriority;
-(void)setThreadName:(NSString *)arg1 ;
-(unsigned)_createPortNamed:(id)arg1 ;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(BOOL)arg3 ;
-(NSString *)threadName;
-(id)init;
-(void)dealloc;
-(void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)arg1 ;
-(void*)_start;
-(unsigned)port;
-(void)setThreadPriority:(int)arg1 ;
@end

