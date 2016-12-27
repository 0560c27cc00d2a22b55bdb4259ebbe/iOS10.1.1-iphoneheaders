/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBApplicationTerminationAssertionServiceDelegate;
@class NSMutableDictionary, NSObject, FBApplicationTerminationAssertionServiceServer;

@interface FBApplicationTerminationAssertionService : NSObject {

	NSMutableDictionary* _terminationAssertionsByBundleID;
	NSObject*<OS_dispatch_queue> _queue;
	FBApplicationTerminationAssertionServiceServer* _server;
	id<FBApplicationTerminationAssertionServiceDelegate> _delegate;

}

@property (assign,nonatomic) id<FBApplicationTerminationAssertionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDelegate:(id<FBApplicationTerminationAssertionServiceDelegate>)arg1 ;
-(void)dealloc;
-(id<FBApplicationTerminationAssertionServiceDelegate>)delegate;
-(id)_requestPluginHoldForAppInfo:(id)arg1 ;
-(void)_queue_continueAcquisition:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_addTerminationAssertion:(id)arg1 ;
-(void)_queue_removeTerminationAssertion:(id)arg1 ;
-(id)terminationAssertionsForBundleID:(id)arg1 ;
-(id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2 ;
-(void)canAcquireTerminationAssertion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addTerminationAssertion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTerminationAssertion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

