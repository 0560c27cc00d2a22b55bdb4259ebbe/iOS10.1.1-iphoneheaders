/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <UIKit/_UIViewServiceDeputyManagerDelegate.h>
#import <UIKit/_UIViewServiceViewControllerOperatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, _UIViewServiceDeputyManager, _UIAsyncInvocation, NSString;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	_UIViewServiceDeputyManager* _deputyManager;
	_UIAsyncInvocation* _invalidationInvocation;
	/*^block*/id _terminationHandler;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,copy) id terminationHandler;                   //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2 ;
-(void)unregisterDeputyClass:(Class)arg1 ;
-(void)registerDeputyClass:(Class)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2 ;
-(void)setTerminationHandler:(id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)deputy:(id)arg1 didFailWithError:(id)arg2 ;
-(id)terminationHandler;
@end

