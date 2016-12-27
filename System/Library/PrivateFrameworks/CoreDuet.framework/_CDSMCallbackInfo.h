/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _CDSMCallbackInfo : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (nonatomic,copy) id handler;                                               //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithCallbackHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

