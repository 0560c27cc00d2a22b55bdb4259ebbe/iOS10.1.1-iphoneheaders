/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, HMDHome, NSObject, HMFMessageDispatcher, HMDApplicationData;

@interface HMDRoom : NSObject <HMFMessageReceiver, HMFDumpState, NSSecureCoding> {

	NSString* _name;
	NSUUID* _uuid;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDApplicationData* _appData;

}

@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)url;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(void)_handleRenameRequest:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(NSString *)serializedIdentifier;
-(void)logDuetEvent;
-(void)_logDuetEvent:(id)arg1 ;
-(id)assistantObject;
@end

