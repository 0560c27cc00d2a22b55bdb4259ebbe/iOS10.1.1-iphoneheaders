/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <UIKit/UIApplication.h>
#import <Cydia/ConfirmationControllerDelegate.h>
#import <Cydia/DatabaseDelegate.h>
#import <Cydia/CydiaDelegate.h>

@class Database;

@interface Cydia : UIApplication <ConfirmationControllerDelegate, DatabaseDelegate, CydiaDelegate> {

	MenesObjectHandle<UIWindow, 0> window_;
	MenesObjectHandle<CydiaTabBarController, 0> tabbar_;
	MenesObjectHandle<CyteTabBarController, 0> emulated_;
	MenesObjectHandle<AppCacheController, 0> appcache_;
	MenesObjectHandle<NSMutableArray, 0> essential_;
	MenesObjectHandle<NSMutableArray, 0> broken_;
	Database* database_;
	MenesObjectHandle<NSURL, 0> starturl_;
	unsigned locked_;
	unsigned activity_;
	MenesObjectHandle<StashController, 0> stash_;
	BOOL loaded_;

}
-(void)unloadData;
-(void)releaseNetworkActivityIndicator;
-(id)pageForURL:(id)arg1 forExternal:(char)arg2 withReferrer:(id)arg3 ;
-(void)retainNetworkActivityIndicator;
-(void)setConfigurationData:(id)arg1 ;
-(void)addProgressEventOnMainThread:(id)arg1 forTask:(id)arg2 ;
-(void)repairWithSelector:(SEL)arg1 ;
-(void)reloadDataWithInvocation:(id)arg1 ;
-(char)addTrivialSource:(id)arg1 ;
-(void)installPackages:(id)arg1 ;
-(void)_saveConfig;
-(void)confirmWithNavigationController:(id)arg1 ;
-(void)cancelAndClear:(BOOL)arg1 ;
-(void)returnToCydia;
-(id)addProgressHUD;
-(void)reloadSpringBoard;
-(void)installPackage:(id)arg1 ;
-(void)clearPackage:(id)arg1 ;
-(void)removePackage:(id)arg1 ;
-(void)showActionSheet:(id)arg1 fromItem:(id)arg2 ;
-(void)removeProgressHUD:(id)arg1 ;
-(void)updateDataAndLoad;
-(void)cancelUpdate;
-(void)updateData;
-(void)distUpgrade;
-(void)_loaded;
-(id)queueNavigationController;
-(void)_refreshIfPossible;
-(void)_updateData;
-(void)disemulate;
-(void)presentModalViewController:(id)arg1 force:(char)arg2 ;
-(id)invokeNewProgress:(id)arg1 forController:(id)arg2 withTitle:(id)arg3 ;
-(void)repairWithInvocation:(id)arg1 ;
-(void)update_;
-(void)detachNewProgressSelector:(SEL)arg1 toTarget:(id)arg2 forController:(id)arg3 title:(id)arg4 ;
-(void)_uicache;
-(void)uicache;
-(void)lockSuspend;
-(void)perform_;
-(void)unlockSuspend;
-(char)isSafeToSuspend;
-(void)applicationSuspend:(GSEventRef)arg1 ;
-(void)_animateSuspension:(char)arg1 duration:(double)arg2 startTime:(double)arg3 scale:(float)arg4 ;
-(id)pageForPackage:(id)arg1 withReferrer:(id)arg2 ;
-(char)openCydiaURL:(id)arg1 forExternal:(char)arg2 ;
-(void)system:(id)arg1 ;
-(void)removeStashController;
-(void)_sendMemoryWarningNotification;
-(void)addStashController;
-(void)refreshIfPossible;
-(id)defaultStartPages;
-(void)addProgressEvent:(id)arg1 forTask:(id)arg2 ;
-(void)addProgressEventForTask:(id)arg1 ;
-(void)addSource:(id)arg1 withDistribution:(id)arg2 andSections:(id)arg3 ;
-(void)_sendMemoryWarningNotifications;
-(void)reloadData;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)_setSuspended:(char)arg1 ;
-(void)suspendReturningToLastApp:(char)arg1 ;
-(void)applicationSuspend;
-(void)applicationOpenURL:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)suspend;
-(void)stash;
-(void)loadData;
-(BOOL)perform;
-(void)queue;
-(void)resolve;
-(void)addSource:(id)arg1 ;
-(BOOL)requestUpdate;
-(void)setupViewControllers;
-(void)saveState;
-(void)syncData;
-(char)updating;
-(void)beginUpdate;
@end

