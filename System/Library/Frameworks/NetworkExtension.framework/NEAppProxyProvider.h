/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NETunnelProvider.h>

@interface NEAppProxyProvider : NETunnelProvider
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelProxyWithError:(id)arg1 ;
@end

