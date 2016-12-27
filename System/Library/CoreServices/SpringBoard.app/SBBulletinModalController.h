/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <SpringBoard/SBBulletinAlertHandler.h>
#import <SpringBoard/SBBulletinBusyClient.h>

@class BBObserver, NSMutableArray, NSMutableDictionary, NSMapTable, NSString;

@interface SBBulletinModalController : NSObject <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient> {

	BBObserver* _observer;
	NSMutableArray* _incomingBulletinEventQueue;
	NSMutableDictionary* _handlersBySectionID;
	NSMapTable* _handlersByBulletinID;
	NSMapTable* _alertsByBulletinID;
	BOOL _quietModeEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)showTestBulletin;
-(BOOL)isLockScreenActive;
-(BOOL)isDeviceUILocked;
-(void)_dequeuePendedEventsIfPossible;
-(BOOL)isBulletinWindowBusy;
-(BOOL)isDevicePasscodeLocked;
-(BOOL)canShowAlertForFeed:(unsigned long long)arg1 ;
-(void)_syncDismissalForBulletin:(id)arg1 ;
-(void)_executeOrPendEventBlock:(/*^block*/id)arg1 forFeed:(unsigned long long)arg2 bulletin:(id)arg3 ;
-(void)bulletinWindowStoppedBeingBusy;
-(id)attachmentImageForBulletin:(id)arg1 ;
-(void)destroyingAlert:(id)arg1 withBulletin:(id)arg2 ;
-(id)init;
-(BOOL)bindBulletin:(id)arg1 forRegistry:(id)arg2 ;
-(void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
@end

