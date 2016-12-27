/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_nexus;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSObject, NSMutableDictionary, IDSNexusAgent, NWNetworkAgentRegistration;

@interface IDSClientChannelManager : NSObject {

	NSObject*<OS_nw_nexus> _nexus;
	NEVirtualInterface_sRef _vifRef;
	NSMutableDictionary* _clientChannelRegistrations;
	NSMutableDictionary* _clientChannels;
	IDSNexusAgent* _agent;
	NWNetworkAgentRegistration* _registration;
	nexus_controllerRef _osNexusController;
	unsigned char _osNexusName[64];
	unsigned char _osNexusUUID[16];

}
+(id)sharedInstance;
-(BOOL)connectTransportThreadForClient:(id)arg1 ;
-(BOOL)connectProtocolHandlerForClient:(id)arg1 ;
-(BOOL)registerClientChannelDestination:(id)arg1 connectHandler:(/*^block*/id)arg2 ;
-(BOOL)unregisterClientChannelDestination:(id)arg1 ;
-(id)init;
-(BOOL)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

