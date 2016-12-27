/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	long long _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (assign,nonatomic) long long serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
-(void)dealloc;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)_startListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(NSArray *)activeAccounts;
-(id)logName;
-(void)setService:(IMServiceImpl *)arg1 ;
-(IMServiceImpl *)service;
@end

