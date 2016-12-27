/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CDPStateUIProviderInternal, CDPDCircleDelegate, CDPDCircleProxy;
@class CDPDCircleStateObserver, NSObject;

@interface CDPDCircleController : NSObject {

	CDPDCircleStateObserver* _circleJoinObserver;
	NSObject*<OS_dispatch_queue> _requestSynchronizationQueue;
	id<CDPStateUIProviderInternal> _uiProvider;
	NSObject*<CDPDCircleDelegate> _delegate;
	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                  //@synthesize uiProvider=_uiProvider - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CDPDCircleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                            //@synthesize circleProxy=_circleProxy - In the implementation block
-(id)peerID;
-(void)setDelegate:(NSObject*<CDPDCircleDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<CDPDCircleDelegate>)delegate;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3 ;
-(void)useCircleInfoToUpdateNameForDevices:(id)arg1 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)applyToJoinCircleWithJoinHandler:(/*^block*/id)arg1 ;
-(void)cancelApplicationToJoinCircle;
-(void)prepareCircleStateForRecovery;
-(void)joinCircleAfterRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)synchronizeCircleViews;
-(int)circleStatus;
-(void)joinCDPCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_joinCDPCircleIgnoringBackups:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(int)authenticatedCircleStatus:(id*)arg1 ;
-(unsigned long long)_peerCount;
-(void)_requestToJoinAndWaitForSuccessWithHandler:(/*^block*/id)arg1 ;
-(void)_resetCicleToResolvePendingAfterRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(id)_peerDeviceNamesByPeerID;
-(void)_requestToJoinWithObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestToJoinWithRequestBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)joinCDPCircleWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(/*^block*/id)arg1 ;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
@end

