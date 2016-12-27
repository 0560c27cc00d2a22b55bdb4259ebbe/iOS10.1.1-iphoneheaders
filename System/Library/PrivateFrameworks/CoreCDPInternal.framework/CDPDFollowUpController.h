/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FLFollowUpController;

@interface CDPDFollowUpController : NSObject {

	NSString* _networkObserverToken;
	FLFollowUpController* _followUpController;

}
+(id)sharedInstance;
+(id)contextToIdentifierMap;
-(id)init;
-(void)start;
-(void)_networkReachabilityDidChangeWithIsReachable:(BOOL)arg1 ;
-(void)_postReminderNotifications;
-(void)postFollowUpItemForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_followUpItemWithContext:(id)arg1 ;
-(id)_followUpForOfflineSecretChangeWithContext:(id)arg1 ;
-(id)_followUpForRepairWithContext:(id)arg1 ;
-(void)clearFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_offlineSecretChangeFollowUpAction;
-(void)_postPendingFollowUpsForIdentifiers:(id)arg1 ;
-(void)_processPendingItem:(id)arg1 ;
-(id)_followUpActionForRepair;
-(void)postFollowUpItemForContext:(id)arg1 ;
-(void)clearFollowUpWithContext:(id)arg1 ;
-(id)_launchActionArgsForPrefPaneWithCommandKey:(id)arg1 ;
-(void)deleteFollowUpItemForOfflineLocalSecretChange;
-(id)_localizedStringForKey:(id)arg1 ;
@end

