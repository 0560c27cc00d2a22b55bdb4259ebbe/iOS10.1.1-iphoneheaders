/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSUUID;

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle {

	NSNumber* _sessionType;
	NSUUID* _configurationIdentifier;
	NSUUID* _agentUUID;

}

@property (readonly) NSNumber * sessionType;                        //@synthesize sessionType=_sessionType - In the implementation block
@property (readonly) NSUUID * configurationIdentifier;              //@synthesize configurationIdentifier=_configurationIdentifier - In the implementation block
@property (readonly) NSUUID * agentUUID;                            //@synthesize agentUUID=_agentUUID - In the implementation block
-(id)description;
-(id)dictionary;
-(unsigned long long)type;
-(id)initFromDictionary:(id)arg1 ;
-(NSUUID *)agentUUID;
-(NSUUID *)configurationIdentifier;
-(id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4 ;
-(NSNumber *)sessionType;
@end

