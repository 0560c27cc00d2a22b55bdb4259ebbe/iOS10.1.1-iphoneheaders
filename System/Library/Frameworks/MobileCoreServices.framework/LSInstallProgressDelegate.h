/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/LSInstallProgressProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, LSInstallProgressList, NSMutableOrderedSet, NSMutableSet, LSObserverTimer, NSObject, NSString;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

	NSMutableDictionary* _observers;
	LSInstallProgressList* _progresses;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableDictionary* _installIndexes;
	NSMutableSet* _inactiveInstalls;
	LSObserverTimer* installsStartedTimer;
	LSObserverTimer* iconsUpdatedTimer;
	LSObserverTimer* installsUpdatedTimer;
	LSObserverTimer* installsFinishedTimer;
	LSObserverTimer* didUninstallTimer;
	NSObject*<OS_dispatch_queue> _installControlsQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginListening;
-(void)addObserver:(id)arg1 withUUID:(id)arg2 ;
-(void)removeObserverWithUUID:(id)arg1 ;
-(void)sendInstalledNotificationForApps:(id)arg1 Plugins:(id)arg2 ;
-(void)sendUninstalledNotificationForApps:(id)arg1 Plugins:(id)arg2 ;
-(void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(BOOL)arg3 ;
-(void)beginObservingConnection;
-(void)endObservingConnection;
-(void)sendFailedNotificationForApp:(id)arg1 isUninstall:(BOOL)arg2 ;
-(void)installationEndedForApplication:(id)arg1 ;
-(void)placeholderInstalledForApp:(id)arg1 ;
-(void)sendIconUpdatedNotificationForApp:(id)arg1 ;
-(void)sendChangeNotificationForApp:(id)arg1 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 ;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendInstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendUninstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(BOOL)arg3 ;
-(void)rebuildInstallIndexes;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(void)handleCancelInstallationForApp:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

