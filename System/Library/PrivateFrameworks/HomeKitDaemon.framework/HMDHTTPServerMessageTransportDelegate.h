/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDHTTPServerMessageTransportDelegate <NSObject>
@required
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(void)server:(id)arg1 didAddDevice:(id)arg2;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

