/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXProviderHostProtocol.h>
#import <libobjc.A.dylib/CXProviderVendorProtocol.h>

@protocol OS_dispatch_queue, CXCallSourceDelegate;
@class NSObject, NSString, NSBundle;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol> {

	BOOL _connected;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallSourceDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallSourceDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CXProviderVendorProtocol> vendorProtocolDelegate; 
@property (assign,getter=isConnected,nonatomic) BOOL connected;                                              //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) int processIdentifier; 
@property (getter=isPermittedToUsePublicAPI,nonatomic,readonly) BOOL permittedToUsePublicAPI; 
@property (getter=isPermittedToUsePrivateAPI,nonatomic,readonly) BOOL permittedToUsePrivateAPI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CXCallSourceDelegate>)arg1 ;
-(NSString *)description;
-(id<CXCallSourceDelegate>)delegate;
-(NSString *)identifier;
-(NSBundle *)bundle;
-(NSString *)displayName;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)processIdentifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isConnected;
-(oneway void)commitTransaction:(id)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(id<CXProviderVendorProtocol>)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(oneway void)actionCompleted:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1 ;
-(oneway void)registerWithConfiguration:(id)arg1 ;
-(oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 ;
-(oneway void)reportAudioFinishedForCallWithUUID:(id)arg1 ;
-(oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

