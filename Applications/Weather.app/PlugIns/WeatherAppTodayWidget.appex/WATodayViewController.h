/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Weather.app/PlugIns/WeatherAppTodayWidget.appex/WeatherAppTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherAppTodayWidget/WeatherAppTodayWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <WeatherAppTodayWidget/NCWidgetProviding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/WFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/WATodayModelObserver.h>

@class WATodayModel, NSNumber, WATodayHeaderView, UIView, NSArray, UIStackView, NSMutableArray, NSTimer, NSString;

@interface WATodayViewController : UIViewController <NCWidgetProviding, UIGestureRecognizerDelegate, WFTemperatureUnitObserver, WATodayModelObserver> {

	BOOL _isUpdating;
	BOOL _isInitialDisplayModeChange;
	WATodayModel* _model;
	NSNumber* _destinationDisplayModeValue;
	long long _displayMode;
	WATodayHeaderView* _headerView;
	UIView* _noContentNotificationView;
	UIView* _containerView;
	UIView* _dividerLineView;
	NSArray* _hourlyForecastViews;
	UIStackView* _hourlyBeltView;
	NSMutableArray* _commonConstraints;
	NSMutableArray* _expandedConstraints;
	NSTimer* _updateTimer;
	/*^block*/id _updateCompletionHandler;

}

@property (nonatomic,retain) NSNumber * destinationDisplayModeValue;              //@synthesize destinationDisplayModeValue=_destinationDisplayModeValue - In the implementation block
@property (nonatomic,readonly) long long displayMode;                             //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) WATodayHeaderView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * noContentNotificationView;                  //@synthesize noContentNotificationView=_noContentNotificationView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * dividerLineView;                            //@synthesize dividerLineView=_dividerLineView - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastViews;                       //@synthesize hourlyForecastViews=_hourlyForecastViews - In the implementation block
@property (nonatomic,retain) UIStackView * hourlyBeltView;                        //@synthesize hourlyBeltView=_hourlyBeltView - In the implementation block
@property (nonatomic,retain) NSMutableArray * commonConstraints;                  //@synthesize commonConstraints=_commonConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * expandedConstraints;                //@synthesize expandedConstraints=_expandedConstraints - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                               //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                     //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isInitialDisplayModeChange;                     //@synthesize isInitialDisplayModeChange=_isInitialDisplayModeChange - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                            //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
@property (nonatomic,retain) WATodayModel * model;                                //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAutoupdatingLocationModel;
-(void)setIsInitialDisplayModeChange:(BOOL)arg1 ;
-(void)setNoContentNotificationView:(UIView *)arg1 ;
-(UIView *)noContentNotificationView;
-(void)_setupCommonConstraints;
-(void)_updateViewConstraintsForDisplayMode:(long long)arg1 ;
-(void)_setupViewsForDisplayMode:(long long)arg1 ;
-(void)_widgetTapped:(id)arg1 ;
-(void)_executeUpdateWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isInitialDisplayModeChange;
-(BOOL)_updatePreferredContentSizeForActiveDisplayMode:(long long)arg1 ;
-(void)_transitionToNoContentView;
-(void)_transitionAwayFromNoContentView;
-(NSMutableArray *)expandedConstraints;
-(void)setExpandedConstraints:(NSMutableArray *)arg1 ;
-(BOOL)_isDisplayingNoContentView;
-(NSNumber *)destinationDisplayModeValue;
-(void)setDestinationDisplayModeValue:(NSNumber *)arg1 ;
-(id)init;
-(UIView *)containerView;
-(void)didReceiveMemoryWarning;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(WATodayModel *)model;
-(WATodayHeaderView *)headerView;
-(void)setHeaderView:(WATodayHeaderView *)arg1 ;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(long long)displayMode;
-(void)_updateTimerFired:(id)arg1 ;
-(BOOL)isUpdating;
-(void)setModel:(WATodayModel *)arg1 ;
-(void)todayModelWantsUpdate:(id)arg1 ;
-(void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2 ;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)_contentSizeDidUpdate:(id)arg1 ;
-(void)setHourlyForecastViews:(NSArray *)arg1 ;
-(NSArray *)hourlyForecastViews;
-(void)setHourlyBeltView:(UIStackView *)arg1 ;
-(UIStackView *)hourlyBeltView;
-(void)setDividerLineView:(UIView *)arg1 ;
-(UIView *)dividerLineView;
-(void)_updateViewContent;
-(id)updateCompletionHandler;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2 ;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(NSMutableArray *)commonConstraints;
-(void)setCommonConstraints:(NSMutableArray *)arg1 ;
@end

