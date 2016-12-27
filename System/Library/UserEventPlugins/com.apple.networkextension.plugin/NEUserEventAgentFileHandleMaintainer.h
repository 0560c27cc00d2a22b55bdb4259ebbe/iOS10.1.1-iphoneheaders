/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UserEventPlugins/com.apple.networkextension.plugin/com.apple.networkextension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandleMaintainer.h>

@interface NEUserEventAgentFileHandleMaintainer : NEFileHandleMaintainer {

	void* _provider;
	unsigned long long _eventToken;

}

@property (assign) void* provider;                             //@synthesize provider=_provider - In the implementation block
@property (assign) unsigned long long eventToken;              //@synthesize eventToken=_eventToken - In the implementation block
+(id)sharedEventAgentMaintainer;
-(void)startEventAgentModeWithEventName:(id)arg1 ;
-(unsigned long long)eventToken;
-(void)handleProviderAction:(long long)arg1 token:(unsigned long long)arg2 event:(id)arg3 ;
-(void)launchOwner;
-(void)setEventToken:(unsigned long long)arg1 ;
-(void*)provider;
-(void)setProvider:(void*)arg1 ;
@end

