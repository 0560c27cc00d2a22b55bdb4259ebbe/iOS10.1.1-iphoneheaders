/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/TabMergingControllerDelegate.h>
#import <MobileSafari/CloudTabStoreDelegate.h>
#import <MobileSafari/BrowserContainerViewControllerDelegate.h>

@protocol BrowserWindowControllerDelegate, BrowserWindowControllerObserving;
@class NSMutableArray, _SFBrowserSavedState, NSArray, CloudTabStore, NSString;

@interface BrowserWindowController : NSObject <TabMergingControllerDelegate, CloudTabStoreDelegate, BrowserContainerViewControllerDelegate> {

	BOOL _cloudTabStoreNeedsPeriodicUpdates;
	NSMutableArray* _tabMergingControllers;
	_SFBrowserSavedState* _savedState;
	BOOL _cloudTabsEnabled;
	id<BrowserWindowControllerDelegate> _delegate;
	id<BrowserWindowControllerObserving> _changeObserver;
	NSArray* _browserControllers;
	CloudTabStore* _cloudTabStore;

}

@property (assign,nonatomic) BOOL cloudTabsEnabled;                                                   //@synthesize cloudTabsEnabled=_cloudTabsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<BrowserWindowControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<BrowserWindowControllerObserving> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,copy,readonly) NSArray * browserControllers;                                     //@synthesize browserControllers=_browserControllers - In the implementation block
@property (nonatomic,readonly) NSArray * tabMergingControllers; 
@property (nonatomic,readonly) CloudTabStore * cloudTabStore;                                         //@synthesize cloudTabStore=_cloudTabStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)browserControllers;
-(void)updateCloudTabUpdatesEnabled;
-(void)updateCloudTabsForEnteringBackground;
-(void)saveBrowserState;
-(id)initWithBrowserSavedState:(id)arg1 ;
-(void)restoreEducationDeviceTabs;
-(void)cleanUpExtraWindowsIfNeeded;
-(id)openURL:(id)arg1 inNewWindowWithSourceBrowserController:(id)arg2 ;
-(void)containerWillChangeArrangement:(id)arg1 ;
-(void)closeWindow:(id)arg1 ;
-(NSArray *)tabMergingControllers;
-(void)cloudTabStore:(id)arg1 cloudTabsEnabledDidChange:(BOOL)arg2 ;
-(void)cloudTabStore:(id)arg1 didReceiveTabCloseRequest:(id)arg2 ;
-(void)moveTabDocument:(id)arg1 toNewWindowAtPosition:(long long)arg2 withSourceInfo:(id)arg3 ;
-(void)moveTabDocument:(id)arg1 toBrowserController:(id)arg2 withSourceInfo:(id)arg3 ;
-(void)_cloudTabFeatureAvailabilityDidChange:(id)arg1 ;
-(void)_destroyCloudTabsStore;
-(void)_createCloudTabsStore;
-(void)setCloudTabsEnabled:(BOOL)arg1 ;
-(BOOL)_needsCloudTabPeriodicUpdates;
-(id)_mergedNormalTabDocuments;
-(id)openURL:(id)arg1 inNewWindowAtPosition:(long long)arg2 withSourceInfo:(id)arg3 ;
-(id)_otherBrowserControllerWithBrowserController:(id)arg1 ;
-(id)_browserControllerUUIDs;
-(void)_moveTabDocument:(id)arg1 toBrowserController:(id)arg2 withSourceInfo:(id)arg3 replacingActiveTab:(BOOL)arg4 ;
-(void)_saveBrowserStateWithQuickUpdate:(BOOL)arg1 ;
-(void)_mergeTabsBeforeClose:(id)arg1 ;
-(void)_togglePrivateBrowsingOnSplitIfActiveItemChanged:(id)arg1 ;
-(id)_ownerControllerForUUID:(id)arg1 ;
-(void)_closeEmptyController:(id)arg1 reportedByMergingController:(id)arg2 ;
-(void)tabMergingController:(id)arg1 didChangeActiveItem:(id)arg2 ;
-(void)tabMergingController:(id)arg1 didChangeOwnershipOfItem:(id)arg2 fromOwnerUUID:(id)arg3 toOwnerUUID:(id)arg4 ;
-(void)tabMergingControllerDidReconcileItems:(id)arg1 ;
-(void)updateCloudTabStorePeriodicUpdates;
-(void)handlePendingCloseTabRequests;
-(void)saveCloudTabs;
-(void)restoreEducationDeviceCloudTabs:(id)arg1 animated:(BOOL)arg2 ;
-(CloudTabStore *)cloudTabStore;
-(BOOL)cloudTabsEnabled;
-(id)init;
-(void)setDelegate:(id<BrowserWindowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BrowserWindowControllerDelegate>)delegate;
-(unsigned long long)capacity;
-(id<BrowserWindowControllerObserving>)changeObserver;
-(void)setChangeObserver:(id<BrowserWindowControllerObserving>)arg1 ;
@end

