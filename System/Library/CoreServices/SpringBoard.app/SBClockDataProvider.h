/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@class BBDataProviderProxy, NSMutableDictionary, NSString;

@interface SBClockDataProvider : NSObject <BBRemoteDataProvider> {

	BBDataProviderProxy* _dataProviderProxy;
	NSMutableDictionary* _snoozedAlarmRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_handleClockNotificationUpdate:(id)arg1 ;
-(void)_deviceFirstUnlocked;
-(void)_publishBulletinForNotification:(id)arg1 ;
-(void)_scheduledClockPendingNotificationRequestsDidChange:(id)arg1 ;
-(void)_handleNotificationDidDeliver:(id)arg1 ;
-(void)_interruptAudioAndLockDeviceForNotification:(id)arg1 ;
-(BOOL)_isAlarmNotification:(id)arg1 ;
-(id)_bulletinRequestForAlarmNotification:(id)arg1 ;
-(BOOL)_isTimerNotification:(id)arg1 ;
-(id)_bulletinRequestForTimerNotification:(id)arg1 ;
-(BOOL)_isBedtimeNotification:(id)arg1 ;
-(id)_bulletinRequestForBedtimeNotification:(id)arg1 ;
-(id)_bulletinRequestForAlarmSnoozeNotificationRequest:(id)arg1 ;
-(id)_actionWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)_alarmIDFromNotificationRequest:(id)arg1 ;
-(id)_bulletinSoundWithAlertType:(long long)arg1 notificationSound:(id)arg2 ;
-(id)_timerIDFromNotificationRequest:(id)arg1 ;
-(BOOL)_isWakeNotificationRequest:(id)arg1 ;
-(id)_recordIDFromNotificationRequest:(id)arg1 ;
-(BOOL)_isAlarmNotificationRequest:(id)arg1 ;
-(BOOL)_isBedtimeNotificationRequest:(id)arg1 ;
-(void)_handleBulletinAlarmDismissResponse:(id)arg1 ;
-(void)_handleBulletinAlarmSnoozeResponse:(id)arg1 ;
-(void)_handleBulletinSnoozeStopResponse:(id)arg1 ;
-(void)_handleBulletinBedtimeSnoozeResponse:(id)arg1 ;
-(void)_handleBulletinBedtimeStopResponse:(id)arg1 ;
-(void)_handleBulletinBedtimeDismissResponse:(id)arg1 ;
-(id)_notificationRequestFromActionResponse:(id)arg1 ;
-(void)_saveTimeInBedSamples;
-(void)_removeSnoozeBulletinForResponse:(id)arg1 ;
-(id)_notificationRequestFromData:(id)arg1 ;
-(BOOL)_isWakeNotification:(id)arg1 ;
-(id)_recordIDFromNotification:(id)arg1 ;
-(id)_vibrationPatternForVibrationName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)sectionParameters;
-(void)handleBulletinActionResponse:(id)arg1 ;
@end

