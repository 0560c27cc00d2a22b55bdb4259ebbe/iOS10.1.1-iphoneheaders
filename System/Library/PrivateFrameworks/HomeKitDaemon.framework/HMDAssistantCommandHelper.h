/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDHome, NSObject, HMFMessageDispatcher, NSMutableArray, HMFTimer, NSArray, NSString;

@interface HMDAssistantCommandHelper : NSObject <HMFMessageReceiver, HMFTimerDelegate, HMFLogging> {

	/*^block*/id _responseHandler;
	NSUUID* _messageId;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _queue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uuid;
	NSMutableArray* _responses;
	unsigned long long _numErrors;
	HMFTimer* _actionTimer;
	NSArray* _requests;

}

@property (nonatomic,copy) id responseHandler;                                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSUUID * messageId;                                              //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * responses;                                      //@synthesize responses=_responses - In the implementation block
@property (assign,nonatomic) unsigned long long numErrors;                                    //@synthesize numErrors=_numErrors - In the implementation block
@property (nonatomic,retain) HMFTimer * actionTimer;                                          //@synthesize actionTimer=_actionTimer - In the implementation block
@property (nonatomic,retain) NSArray * requests;                                              //@synthesize requests=_requests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)responses;
-(void)setResponses:(NSMutableArray *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addReadRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeResponses:(id)arg1 ;
-(id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(void)setActionTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)actionTimer;
-(void)_reportResponses;
-(void)_resetActionTimer;
-(NSUUID *)messageId;
-(unsigned long long)numErrors;
-(void)setNumErrors:(unsigned long long)arg1 ;
-(void)setMessageId:(NSUUID *)arg1 ;
-(void)_register;
-(void)_startActionTimer;
@end

