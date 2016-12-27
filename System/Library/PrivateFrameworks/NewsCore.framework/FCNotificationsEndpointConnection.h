/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCEndpointConnection.h>

@class NSString, FCFileCoordinatedNotificationDropbox;

@interface FCNotificationsEndpointConnection : FCEndpointConnection {

	NSString* _deviceType;
	FCFileCoordinatedNotificationDropbox* _fileCoordinatedNotificationDropbox;

}

@property (nonatomic,copy) NSString * deviceType;                                                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedNotificationDropbox * fileCoordinatedNotificationDropbox;              //@synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceType;
-(void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)appConfigurationDidChange:(id)arg1 ;
-(id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 ;
-(id)_deviceInfoWithDeviceToken:(id)arg1 ;
-(id)_notificationEntityWithChannelIDs:(id)arg1 isPaid:(BOOL)arg2 ;
-(FCFileCoordinatedNotificationDropbox *)fileCoordinatedNotificationDropbox;
-(id)initWithBaseURLString:(id)arg1 ;
-(void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setFileCoordinatedNotificationDropbox:(FCFileCoordinatedNotificationDropbox *)arg1 ;
@end

