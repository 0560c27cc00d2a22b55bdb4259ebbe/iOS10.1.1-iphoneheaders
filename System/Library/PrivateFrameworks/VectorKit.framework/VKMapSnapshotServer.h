/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKMapSnapshotServer : NSObject {

	NSObject*<OS_dispatch_queue> _homeQueue;

}
-(void)dealloc;
-(id)initWithHomeQueue:(id)arg1 ;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
