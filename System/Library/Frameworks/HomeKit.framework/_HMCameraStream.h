/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraSource.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class NSUUID, NSString;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver> {

	unsigned long long _audioStreamSetting;

}

@property (assign,nonatomic) unsigned long long audioStreamSetting;                           //@synthesize audioStreamSetting=_audioStreamSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 error:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 audioStreamSetting:(unsigned long long)arg8 ;
-(unsigned long long)audioStreamSetting;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

