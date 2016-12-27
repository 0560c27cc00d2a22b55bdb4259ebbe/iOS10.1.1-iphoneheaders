/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDaemonClientRegistrar.h>

@protocol RTDaemonClientRegistrarRoomPredictionProtocol, OS_dispatch_queue;
@class RTInvocationDispatcher, RTPredictedRoomManager, NSObject;

@interface RTDaemonClientRegistrarRoomPrediction : RTDaemonClientRegistrar {

	BOOL _registered;
	id<RTDaemonClientRegistrarRoomPredictionProtocol> _delegate;
	RTInvocationDispatcher* _dispatcher;
	RTPredictedRoomManager* _predictedRoomManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                            //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTPredictedRoomManager * predictedRoomManager;                                  //@synthesize predictedRoomManager=_predictedRoomManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<RTDaemonClientRegistrarRoomPredictionProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<RTDaemonClientRegistrarRoomPredictionProtocol>)arg1 ;
-(id<RTDaemonClientRegistrarRoomPredictionProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(BOOL)invocationsPending;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(long long)countOfPendingInvocations;
-(id)initWithPredictedRoomManager:(id)arg1 queue:(id)arg2 ;
-(void)startMonitoringForPredictedRooms;
-(void)stopMonitoringForPredictedRooms;
-(void)addPendingRoomPredictionBlock:(/*^block*/id)arg1 failBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(BOOL)registered;
-(RTPredictedRoomManager *)predictedRoomManager;
-(void)onPredictedRoomsNotification:(id)arg1 ;
-(void)setPredictedRoomManager:(RTPredictedRoomManager *)arg1 ;
@end

