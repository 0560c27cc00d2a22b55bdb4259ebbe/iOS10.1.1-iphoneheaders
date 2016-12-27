/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MPAVRoutingViewControllerDelegate;
@class UITableView, MPAVRoutingTableHeaderView, MPAVRoutingEmptyStateView, NSArray, MPAVRoute, MPWeakTimer, MPAVRoutingController, UIColor, NSNumber, NSString;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	MPAVRoutingTableHeaderView* _tableHeaderView;
	MPAVRoutingEmptyStateView* _emptyStateView;
	NSArray* _cachedRoutes;
	BOOL _cachedRoutesHasRoutePickedOnPairedDevice;
	MPAVRoute* _lastPendingPickedRoute;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	long long _routeDiscoveryMode;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _cachedShowAirPlayDebugButton;
	BOOL _hasCachedAirPlayDebugButtonStatus;
	BOOL _needsDisplayedRoutesUpdate;
	BOOL _suspendedDiscoveryModeDueToApplicationState;
	unsigned long long _updatesSincePresentation;
	long long _discoveryModeBeforeEnteringBackground;
	unsigned long long _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	long long _avItemType;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	NSNumber* _discoveryModeOverride;

}

@property (nonatomic,readonly) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) long long avItemType;                         //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                  //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                       //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,nonatomic) BOOL allowMirroring; 
@property (assign,nonatomic) NSNumber * discoveryModeOverride;                                   //@synthesize discoveryModeOverride=_discoveryModeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(unsigned long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_tableView;
-(id)_tableHeaderView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2 ;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(unsigned long long)mirroringStyle;
-(unsigned long long)iconStyle;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(id)_routingController;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(id)_routesWhereMirroringIsPreferred;
-(void)_setNeedsDisplayedRoutesUpdate;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_reloadEmptyStateVisibility;
-(void)_beginRouteDiscovery;
-(void)_updateDisplayedRoutes;
-(void)_endRouteDiscovery;
-(unsigned long long)_tableViewNumberOfRows;
-(double)_tableViewHeightAccordingToDataSource;
-(BOOL)_shouldShowAirPlayDebugButton;
-(id)_displayedRoutes;
-(BOOL)_shouldShowMirroringCellForRoute:(id)arg1 ;
-(void)_showAirPlayDebug;
-(void)_pickRoute:(id)arg1 ;
-(BOOL)_shouldShowAirPlayMirroringCompactDescriptionHeader;
-(double)_normalCellHeight;
-(double)_expandedCellHeight;
-(double)_tableViewHeaderViewHeight;
-(double)_tableViewFooterViewHeight;
-(void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1 ;
-(void)_setRouteDiscoveryMode:(long long)arg1 ;
-(void)_setupUpdateTimerIfNecessary;
-(id)_displayableRoutesInRoutes:(id)arg1 ;
-(void)setAVItemType:(long long)arg1 ;
-(BOOL)allowMirroring;
-(void)setAllowMirroring:(BOOL)arg1 ;
-(void)setDiscoveryModeOverride:(NSNumber *)arg1 ;
-(id)_tableCellsBackgroundColor;
-(id)_tableCellsContentColor;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(long long)avItemType;
-(NSNumber *)discoveryModeOverride;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

