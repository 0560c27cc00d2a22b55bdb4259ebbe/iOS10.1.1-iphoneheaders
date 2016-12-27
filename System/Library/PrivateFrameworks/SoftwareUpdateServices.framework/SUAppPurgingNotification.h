/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUAppPurgingNotification.h>

@protocol SUAppPurgingNotification <NSObject>
@optional
+(void)postAppPurgingNotificationWithAppsToPurge:(id)arg1 completion:(/*^block*/id)arg2;

@end


@class NSString;

@interface SUAppPurgingNotification : NSObject <SUAppPurgingNotification>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)postAppPurgingNotificationWithAppsToPurge:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

