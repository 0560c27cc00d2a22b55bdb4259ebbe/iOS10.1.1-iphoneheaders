/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, _DECExpertManager, _DECServerResponder, _DECInternalConsumerManager, _DECDailyTrainingScheduler, NSString;

@interface _DECDaemon : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	_DECExpertManager* _expertManager;
	_DECServerResponder* _serverResponder;
	_DECInternalConsumerManager* _consumerManager;
	_DECDailyTrainingScheduler* _trainingScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_getServerResponder;
-(void)_runDelayedInitializationOperations;
@end

