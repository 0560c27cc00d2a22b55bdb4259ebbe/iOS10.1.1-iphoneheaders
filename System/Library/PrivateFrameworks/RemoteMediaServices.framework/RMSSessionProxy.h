/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface RMSSessionProxy : NSObject {

	NSTimer* _heartbeatTimer;
	double _sessionTimeout;
	double _lastHeartbeatTime;
	BOOL _isPaused;
	int _sessionIdentifier;

}

@property (assign,nonatomic) int sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(int)sessionIdentifier;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)beginHeartbeat;
-(void)endHeartbeat;
-(BOOL)sessionMatchesNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(int)heartbeatTime;
-(void)_sendHeartbeat:(id)arg1 ;
@end

