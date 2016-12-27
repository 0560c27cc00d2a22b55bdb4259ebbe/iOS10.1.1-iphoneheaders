/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSBaseXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BSActionListener : BSBaseXPCServer {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _queue_portToContextMap;

}
-(void)_queue_cleanupContext:(SCD_Struct_BS4*)arg1 withResponse:(id)arg2 ;
-(SCD_Struct_BS5)listenForResponseWithHandler:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)clearListenerForTokens:(SCD_Struct_BS5*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
@end

