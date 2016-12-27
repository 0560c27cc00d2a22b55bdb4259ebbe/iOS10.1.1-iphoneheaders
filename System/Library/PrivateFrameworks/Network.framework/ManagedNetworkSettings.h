/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ManagedNetworkSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedMNS;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reloadNetworkdSettings;
-(void)reloadMNS;
-(BOOL)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3 ;
-(void)reloadCarrierSettings:(BOOL)arg1 ;
@end

