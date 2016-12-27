/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNSKeyedObservable;

@interface UNSPendingNotificationRepository : NSObject {

	UNSKeyedObservable* _observable;

}
-(id)init;
-(id)_dateFormatter;
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)applicationStateDidRestore;
-(void)setLastLocalNotificationFireDate:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_pendingNotificationDictionariesForBundleIdentifier:(id)arg1 ;
-(void)_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)performMigrationForBundleIdentifier:(id)arg1 ;
-(void)performClockMigration;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)lastLocalNotificationFireDateForBundleIdentifier:(id)arg1 ;
-(void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

