/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate, SKUIMediaSocialProfile, NSOperationQueue, NSMutableArray;

@interface SKUIMediaSocialProfileCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _lastAuthenticationAttempt;
	SKUIMediaSocialProfile* _lastKnownProfile;
	NSDate* _lastRequestDate;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _profileBlocks;
	BOOL _waitingForAuthentication;

}
+(id)sharedCoordinator;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)getProfileWithOptions:(id)arg1 profileBlock:(/*^block*/id)arg2 ;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(void)_queueProfileBlock:(/*^block*/id)arg1 ;
-(void)_requestProfile;
-(void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2 ;
-(void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
@end

