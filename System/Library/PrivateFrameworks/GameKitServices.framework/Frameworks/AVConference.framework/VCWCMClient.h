/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;
@class NSObject;

@interface VCWCMClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSObject*<OS_dispatch_queue> connectionQueue;
	NSObject*<WCMClientDelegate> wcmClientDelegate;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSObject*<OS_dispatch_queue> connectionQueue; 
@property (nonatomic,retain) id<WCMClientDelegate> wcmClientDelegate; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(void)setWcmClientDelegate:(id<WCMClientDelegate>)arg1 ;
-(void)startWCMClient;
-(void)stopWCMClient;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(id<WCMClientDelegate>)wcmClientDelegate;
@end

