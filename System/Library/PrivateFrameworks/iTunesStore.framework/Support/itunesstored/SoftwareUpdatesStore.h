/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SoftwareUpdatesStore : NSObject
+(void)observeXPCServer:(id)arg1 ;
+(void)hideAppstoredPendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadAppstoredUpdatesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)clearExpiredHistoryWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)hidePendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)migrateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)modifyStoreWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeAllUpdatesBulletinsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)showPendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultStore;
-(void)postBulletinForInstalledUpdates;
-(void)verifyPendingUpdates;
-(void)hidePendingUpdatesBadge;
-(void)noteUpdatesStateChanged;
-(void)reloadWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldPerformAutomaticUpdates;
-(void)showPendingUpdatesBadge;
-(id)init;
-(void)stop;
-(void)start;
-(void)removeAllBulletins;
@end

