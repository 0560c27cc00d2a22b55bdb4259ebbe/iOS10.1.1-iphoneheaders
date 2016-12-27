/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>
#import <libobjc.A.dylib/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSString, ATConcreteMessageLink, NSObject;

@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler> {

	NSString* _dataClass;
	ATConcreteMessageLink* _messageLink;
	NSString* _linkIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * dataClass;                             //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,readonly) ATConcreteMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,readonly) NSString * linkIdentifier;                        //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)linkIdentifier;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(ATConcreteMessageLink *)messageLink;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 ;
-(NSString *)dataClass;
@end

