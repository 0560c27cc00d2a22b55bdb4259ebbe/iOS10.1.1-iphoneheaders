/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <MapsWidget/NCWidgetProviding.h>
#import <MapsWidget/MWActionRequiredViewControllerDelegate.h>

@class GEONavigationListener, MWSuggestionsViewController, MWTransitNavigationViewController, MWActionRequiredViewController, MWStateData, GEORouteSet, MapsSuggestionsBlockFilter, GEOComposedRoute, NSString;

@interface MapsWidgetViewController : UIViewController <NCWidgetProviding, MWActionRequiredViewControllerDelegate> {

	BOOL _everPresentedNonSuggestionVC;
	long long _latestDisplayMode;
	CGSize _latestMaxSize;
	GEONavigationListener* _navigationListener;
	long long _currentDisplayMode;
	MWSuggestionsViewController* _suggestionsViewController;
	MWTransitNavigationViewController* _transitNavigationViewController;
	MWActionRequiredViewController* _actionRequiredViewController;
	MWStateData* _cachedStateData;
	GEORouteSet* _routeSet;
	unsigned long long _activeRouteIndex;
	unsigned long long _currentRouteStepIndex;
	MapsSuggestionsBlockFilter* _suggestionsFilter;

}

@property (assign,nonatomic) long long currentDisplayMode;                                                     //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,retain) MWSuggestionsViewController * suggestionsViewController;                          //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (nonatomic,retain) MWTransitNavigationViewController * transitNavigationViewController;              //@synthesize transitNavigationViewController=_transitNavigationViewController - In the implementation block
@property (nonatomic,retain) MWActionRequiredViewController * actionRequiredViewController;                    //@synthesize actionRequiredViewController=_actionRequiredViewController - In the implementation block
@property (nonatomic,retain) MWStateData * cachedStateData;                                                    //@synthesize cachedStateData=_cachedStateData - In the implementation block
@property (nonatomic,retain) GEORouteSet * routeSet;                                                           //@synthesize routeSet=_routeSet - In the implementation block
@property (assign,nonatomic) unsigned long long activeRouteIndex;                                              //@synthesize activeRouteIndex=_activeRouteIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentRouteStepIndex;                                         //@synthesize currentRouteStepIndex=_currentRouteStepIndex - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * activeRoute; 
@property (nonatomic,retain) MapsSuggestionsBlockFilter * suggestionsFilter;                                   //@synthesize suggestionsFilter=_suggestionsFilter - In the implementation block
@property (nonatomic,readonly) UIViewController*<MWWidgetProviding> widgetContentViewController; 
@property (nonatomic,retain) GEONavigationListener * navigationListener;                                       //@synthesize navigationListener=_navigationListener - In the implementation block
@property (nonatomic,readonly) long long mapsWidgetMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)mapsWidgetMode;
-(void)userTappedIntroInActionRequredViewController:(id)arg1 ;
-(UIViewController*<MWWidgetProviding>)widgetContentViewController;
-(MWSuggestionsViewController *)suggestionsViewController;
-(MWTransitNavigationViewController *)transitNavigationViewController;
-(MWActionRequiredViewController *)actionRequiredViewController;
-(id)_viewControllerForMode:(long long)arg1 ;
-(void)_transitionToChildViewController:(id)arg1 ;
-(BOOL)isUserActionRequired;
-(BOOL)userTappedOnIntro;
-(void)locationServicesApprovalChangedHandler:(id)arg1 ;
-(void)_updateMainViewControllerIfNecessary;
-(void)_restoreStateFromUserDefaults;
-(id)_loadSavedUIData;
-(void)_saveUIData;
-(void)_stopListeningToNavigationUpdate;
-(void)_startListeningToNavigationUpdate;
-(void)_didReceiveActiveRouteDetailsData:(id)arg1 ;
-(void)_didReceiveUdpatedStepIndex:(unsigned long long)arg1 ;
-(void)setCurrentRouteStepIndex:(unsigned long long)arg1 ;
-(void)setSuggestionsViewController:(MWSuggestionsViewController *)arg1 ;
-(void)setTransitNavigationViewController:(MWTransitNavigationViewController *)arg1 ;
-(void)setActionRequiredViewController:(MWActionRequiredViewController *)arg1 ;
-(MWStateData *)cachedStateData;
-(void)setCachedStateData:(MWStateData *)arg1 ;
-(unsigned long long)activeRouteIndex;
-(void)setActiveRouteIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentRouteStepIndex;
-(MapsSuggestionsBlockFilter *)suggestionsFilter;
-(void)setSuggestionsFilter:(MapsSuggestionsBlockFilter *)arg1 ;
-(void)dealloc;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLoad;
-(GEORouteSet *)routeSet;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(GEOComposedRoute *)activeRoute;
-(long long)currentDisplayMode;
-(void)setCurrentDisplayMode:(long long)arg1 ;
-(GEONavigationListener *)navigationListener;
-(void)setNavigationListener:(GEONavigationListener *)arg1 ;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
@end

