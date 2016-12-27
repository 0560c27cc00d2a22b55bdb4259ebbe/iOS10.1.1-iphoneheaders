/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction

@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(long long)UIActionType;
-(NSDictionary *)payload;
-(void)sendResponse:(id)arg1 ;
-(NSString *)action;
-(NSDictionary *)userResponse;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

