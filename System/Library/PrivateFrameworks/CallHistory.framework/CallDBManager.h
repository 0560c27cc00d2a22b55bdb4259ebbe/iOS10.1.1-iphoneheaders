/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DBManager;

@interface CallDBManager : NSObject {

	BOOL _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;
	id _deviceUnlockNotificationRef;

}

@property (retain) id deviceUnlockNotificationRef;                         //@synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef - In the implementation block
@property (retain) DBManager * dbManager;                                  //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) BOOL deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)modelURL;
+(id)getDBLocationIsSandboxed:(BOOL)arg1 isTemporary:(BOOL)arg2 error:(unsigned char*)arg3 ;
+(id)dataStoreName;
-(id)init;
-(void)dealloc;
-(id)createManagedObjectContext;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(DBManager *)dbManager;
-(BOOL)notifyDataStoreChanged;
-(unsigned char)notifyDataStoreChangeReason;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)handlePermanentCreated;
-(void)moveCallsFromTempDatabase;
-(void)createDataStore;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)handleTemporaryCreated;
-(BOOL)shouldCreatePermanent;
-(void)createPermanent;
-(BOOL)shouldCreateTemporary;
-(void)createTemporary;
-(void)setDeviceUnlockNotificationRef:(id)arg1 ;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(id)deviceUnlockNotificationRef;
-(void)reFetchState;
-(void)setDbManager:(DBManager *)arg1 ;
-(BOOL)deviceUnlocked;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(void)registerForNotifications;
@end
