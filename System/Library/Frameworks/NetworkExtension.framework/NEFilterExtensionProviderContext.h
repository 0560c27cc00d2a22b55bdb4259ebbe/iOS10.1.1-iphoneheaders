/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _description;
	long long _onceToken;

}

@property (retain) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2 ;
-(void)updateConfiguration:(id)arg1 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

