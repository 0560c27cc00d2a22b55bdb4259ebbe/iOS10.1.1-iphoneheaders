/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTPingService <NSObject>
@required
-(void)unsubscribeFromSectionID:(id)arg1;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3;
-(void)sendBulletinSummary:(id)arg1;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)subscribeWithMachServiceName:(id)arg1;

@end

