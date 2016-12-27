/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_source;
@class NSUUID, HMFMessageDispatcher, NSObject, HMFTimer, NSDate, HMDHomeManager, NSString;

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMFMessageReceiver, HMFTimerDelegate> {

	BOOL _decryptionFailed;
	BOOL _keychainSyncEnabled;
	BOOL _keychainSyncRequiredPopShown;
	BOOL _iCloudSwitchRequiredPopShown;
	BOOL _iCloudAccountActive;
	BOOL _cloudDataSyncCompleted;
	BOOL _serverTokenAvailable;
	BOOL _iCloudSwitchStateEnabled;
	BOOL _localDataDecryptionFailed;
	BOOL _networkConnectivityAvailable;
	BOOL _resetConfigDisplayTimeHasElapsed;
	BOOL _keychainSyncPeerAvailable;
	BOOL _cloudDataSyncPeerAvailable;
	int _circleNotificationToken;
	NSUUID* _uuid;
	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_source> _popupTimer;
	NSObject*<OS_dispatch_source> _iCloudSwitchPopupTimer;
	long long _totalHomes;
	HMFTimer* _cloudDataSyncInProgressTimer;
	double _remainingDataSyncPeriod;
	NSDate* _dataSyncTimerStartTimestamp;
	HMFTimer* _resetConfigDisplayTimer;
	double _remainingResetConfigDisplayPeriod;
	NSDate* _resetConfigDisplayTimerStartTimestamp;
	HMDHomeManager* _homeManager;

}

@property (nonatomic,retain) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) int circleNotificationToken;                                                      //@synthesize circleNotificationToken=_circleNotificationToken - In the implementation block
@property (assign,nonatomic) BOOL keychainSyncEnabled;                                                         //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> popupTimer;                                         //@synthesize popupTimer=_popupTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> iCloudSwitchPopupTimer;                             //@synthesize iCloudSwitchPopupTimer=_iCloudSwitchPopupTimer - In the implementation block
@property (assign,nonatomic) BOOL keychainSyncRequiredPopShown;                                                //@synthesize keychainSyncRequiredPopShown=_keychainSyncRequiredPopShown - In the implementation block
@property (assign,nonatomic) BOOL iCloudSwitchRequiredPopShown;                                                //@synthesize iCloudSwitchRequiredPopShown=_iCloudSwitchRequiredPopShown - In the implementation block
@property (assign,nonatomic) BOOL iCloudAccountActive;                                                         //@synthesize iCloudAccountActive=_iCloudAccountActive - In the implementation block
@property (assign,nonatomic) BOOL cloudDataSyncCompleted;                                                      //@synthesize cloudDataSyncCompleted=_cloudDataSyncCompleted - In the implementation block
@property (assign,nonatomic) BOOL serverTokenAvailable;                                                        //@synthesize serverTokenAvailable=_serverTokenAvailable - In the implementation block
@property (assign,nonatomic) BOOL iCloudSwitchStateEnabled;                                                    //@synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled - In the implementation block
@property (assign,nonatomic) BOOL localDataDecryptionFailed;                                                   //@synthesize localDataDecryptionFailed=_localDataDecryptionFailed - In the implementation block
@property (assign,nonatomic) long long totalHomes;                                                             //@synthesize totalHomes=_totalHomes - In the implementation block
@property (assign,nonatomic) BOOL networkConnectivityAvailable;                                                //@synthesize networkConnectivityAvailable=_networkConnectivityAvailable - In the implementation block
@property (nonatomic,retain) HMFTimer * cloudDataSyncInProgressTimer;                                          //@synthesize cloudDataSyncInProgressTimer=_cloudDataSyncInProgressTimer - In the implementation block
@property (assign,nonatomic) double remainingDataSyncPeriod;                                                   //@synthesize remainingDataSyncPeriod=_remainingDataSyncPeriod - In the implementation block
@property (nonatomic,retain) NSDate * dataSyncTimerStartTimestamp;                                             //@synthesize dataSyncTimerStartTimestamp=_dataSyncTimerStartTimestamp - In the implementation block
@property (nonatomic,retain) HMFTimer * resetConfigDisplayTimer;                                               //@synthesize resetConfigDisplayTimer=_resetConfigDisplayTimer - In the implementation block
@property (assign,nonatomic) double remainingResetConfigDisplayPeriod;                                         //@synthesize remainingResetConfigDisplayPeriod=_remainingResetConfigDisplayPeriod - In the implementation block
@property (nonatomic,retain) NSDate * resetConfigDisplayTimerStartTimestamp;                                   //@synthesize resetConfigDisplayTimerStartTimestamp=_resetConfigDisplayTimerStartTimestamp - In the implementation block
@property (assign,nonatomic) BOOL resetConfigDisplayTimeHasElapsed;                                            //@synthesize resetConfigDisplayTimeHasElapsed=_resetConfigDisplayTimeHasElapsed - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                              //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,getter=isKeychainSyncPeerAvailable,nonatomic) BOOL keychainSyncPeerAvailable;                //@synthesize keychainSyncPeerAvailable=_keychainSyncPeerAvailable - In the implementation block
@property (assign,getter=isCloudDataSyncPeerAvailable,nonatomic) BOOL cloudDataSyncPeerAvailable;              //@synthesize cloudDataSyncPeerAvailable=_cloudDataSyncPeerAvailable - In the implementation block
@property (assign,nonatomic) BOOL decryptionFailed;                                                            //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)isWhitelistedRemoteTransportMessage:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMDHomeManager *)homeManager;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)resetConfiguration;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)shouldCloudSyncData;
-(void)_updateCurrentAccount:(id)arg1 ;
-(void)_registerForCircleChangeNotifications;
-(int)circleNotificationToken;
-(void)_handleCircleChangedNotification;
-(void)_handleAccountStatusChanged:(id)arg1 ;
-(void)setCircleNotificationToken:(int)arg1 ;
-(BOOL)keychainSyncEnabled;
-(void)setKeychainSyncEnabled:(BOOL)arg1 ;
-(void)_startDataConfigResetTimers;
-(void)_stopDataConfigResetTimers;
-(BOOL)_cloudSyncinProgressCheck:(id)arg1 supressPopup:(BOOL)arg2 sendCanceledError:(BOOL*)arg3 dataSyncState:(unsigned long long*)arg4 ;
-(void)_updateKeychainSyncEnabled:(BOOL)arg1 ;
-(void)_postNotificationForDataSyncInProgress:(BOOL)arg1 dataSyncState:(unsigned long long)arg2 ;
-(void)_startCloudDataSyncTimer;
-(BOOL)resetConfigDisplayTimeHasElapsed;
-(void)_startResetConfigDisplayTimer;
-(void)_stopCloudDataSyncTimer;
-(void)_stopResetConfigDisplayTimer;
-(void)setNetworkConnectivityAvailable:(BOOL)arg1 ;
-(void)_stallCloudDataSyncTimer;
-(void)_stallResetConfigDisplayTimer;
-(HMFTimer *)cloudDataSyncInProgressTimer;
-(void)_resetCloudDataSyncTimer;
-(HMFTimer *)resetConfigDisplayTimer;
-(void)_clearResetConfigDisplayTimer;
-(void)setResetConfigDisplayTimeHasElapsed:(BOOL)arg1 ;
-(double)remainingDataSyncPeriod;
-(void)setRemainingDataSyncPeriod:(double)arg1 ;
-(void)setCloudDataSyncInProgressTimer:(HMFTimer *)arg1 ;
-(void)setDataSyncTimerStartTimestamp:(NSDate *)arg1 ;
-(NSDate *)dataSyncTimerStartTimestamp;
-(double)remainingResetConfigDisplayPeriod;
-(void)setRemainingResetConfigDisplayPeriod:(double)arg1 ;
-(void)setResetConfigDisplayTimer:(HMFTimer *)arg1 ;
-(void)setResetConfigDisplayTimerStartTimestamp:(NSDate *)arg1 ;
-(NSDate *)resetConfigDisplayTimerStartTimestamp;
-(void)setICloudAccountActive:(BOOL)arg1 ;
-(BOOL)iCloudAccountActive;
-(void)_updateCloudDataSyncState:(BOOL)arg1 ;
-(void)setPopupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)popupTimer;
-(void)_stopPopupTimer;
-(void)setKeychainSyncRequiredPopShown:(BOOL)arg1 ;
-(void)setICloudSwitchPopupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)iCloudSwitchPopupTimer;
-(void)_stopiCloudSwitchPopupTimer;
-(void)setICloudSwitchRequiredPopShown:(BOOL)arg1 ;
-(void)setTotalHomes:(long long)arg1 ;
-(BOOL)isKeychainSyncPeerAvailable;
-(void)setKeychainSyncPeerAvailable:(BOOL)arg1 ;
-(BOOL)isCloudDataSyncPeerAvailable;
-(void)setCloudDataSyncPeerAvailable:(BOOL)arg1 ;
-(long long)totalHomes;
-(BOOL)keychainSyncRequiredPopShown;
-(void)_startPopupTimer;
-(BOOL)cloudDataSyncCompleted;
-(BOOL)serverTokenAvailable;
-(BOOL)networkConnectivityAvailable;
-(BOOL)iCloudSwitchStateEnabled;
-(BOOL)iCloudSwitchRequiredPopShown;
-(void)updateiCloudSwitchState:(BOOL)arg1 ;
-(void)_startiCloudSwitchPopupTimer;
-(BOOL)localDataDecryptionFailed;
-(void)setCloudDataSyncCompleted:(BOOL)arg1 ;
-(void)setServerTokenAvailable:(BOOL)arg1 ;
-(void)setICloudSwitchStateEnabled:(BOOL)arg1 ;
-(void)setLocalDataDecryptionFailed:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 serverTokenAvailable:(BOOL)arg4 localDataDecryptionFailed:(BOOL)arg5 totalHomes:(long long)arg6 currentAccount:(id)arg7 ;
-(BOOL)decryptionFailed;
-(void)setDecryptionFailed:(BOOL)arg1 ;
-(void)updateNetworkConnectivity:(BOOL)arg1 ;
-(void)updateTotalHomes:(long long)arg1 ;
-(void)updateCurrentAccount:(id)arg1 ;
-(BOOL)dataSyncInProgressWithState:(unsigned long long*)arg1 ;
-(void)updateCloudDataSyncState:(BOOL)arg1 ;
-(void)updateServerTokenAvailable:(BOOL)arg1 ;
-(BOOL)isiCloudSwitchEnabled;
-(void)updateLocalDataDecryptionFailed:(BOOL)arg1 ;
-(BOOL)isLocalDataDecryptionFailed;
@end

