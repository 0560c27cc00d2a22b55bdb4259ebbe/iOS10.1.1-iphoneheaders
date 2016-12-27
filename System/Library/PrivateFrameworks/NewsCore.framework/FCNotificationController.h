/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@class NSString, FCUserInfo, FCCommandQueue;

@interface FCNotificationController : NSObject <FCUserInfoObserving> {

	NSString* _notificationsUserID;
	NSString* _deviceToken;
	FCUserInfo* _userInfo;
	FCCommandQueue* _commandQueue;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) FCCommandQueue * commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,copy) NSString * notificationsUserID;               //@synthesize notificationsUserID=_notificationsUserID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                       //@synthesize deviceToken=_deviceToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(FCUserInfo *)userInfo;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(NSString *)deviceToken;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1 ;
-(FCCommandQueue *)commandQueue;
-(void)setCommandQueue:(FCCommandQueue *)arg1 ;
-(BOOL)registerNotificationsForTagID:(id)arg1 isPaid:(BOOL)arg2 ;
-(BOOL)unregisterNotificationsForTagID:(id)arg1 ;
-(BOOL)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 ;
-(NSString *)notificationsUserID;
-(id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 ;
-(void)_registerDeviceToken:(id)arg1 ;
-(void)setNotificationsUserID:(NSString *)arg1 ;
-(void)registerDeviceToken:(id)arg1 ;
@end

