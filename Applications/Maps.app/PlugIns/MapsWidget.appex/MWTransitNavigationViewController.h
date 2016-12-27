/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MapsWidget/MWWidgetProviding.h>

@class GEOComposedRoute, UITableView, MKArtworkDataSourceCache, NSArray, MWTransitItemArtworkColumnCalculator, NSString;

@interface MWTransitNavigationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MWWidgetProviding> {

	double _previousTableViewWidth;
	GEOComposedRoute* _route;
	unsigned long long _stepIndex;
	long long _currentDisplayMode;
	UITableView* _tableView;
	MKArtworkDataSourceCache* _artworkCache;
	NSArray* _transitItems;
	NSArray* _currentTransitItems;
	NSArray* _shieldAdjustedCurrentTransitItems;
	NSArray* _visibleTransitItems;
	MWTransitItemArtworkColumnCalculator* _artworkColumnCalculator;
	double _artworkColumnWidth;
	unsigned long long _maxNumberOfRows;

}

@property (assign,nonatomic) long long currentDisplayMode;                                                //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;                                     //@synthesize artworkCache=_artworkCache - In the implementation block
@property (nonatomic,copy) NSArray * transitItems;                                                        //@synthesize transitItems=_transitItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentTransitItems;                                        //@synthesize currentTransitItems=_currentTransitItems - In the implementation block
@property (nonatomic,readonly) NSArray * shieldAdjustedCurrentTransitItems;                               //@synthesize shieldAdjustedCurrentTransitItems=_shieldAdjustedCurrentTransitItems - In the implementation block
@property (nonatomic,readonly) NSArray * visibleTransitItems;                                             //@synthesize visibleTransitItems=_visibleTransitItems - In the implementation block
@property (nonatomic,retain) MWTransitItemArtworkColumnCalculator * artworkColumnCalculator;              //@synthesize artworkColumnCalculator=_artworkColumnCalculator - In the implementation block
@property (assign,nonatomic) double artworkColumnWidth;                                                   //@synthesize artworkColumnWidth=_artworkColumnWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfRows;                                          //@synthesize maxNumberOfRows=_maxNumberOfRows - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                                    //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                                                //@synthesize stepIndex=_stepIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long largestAvailableDisplayMode; 
-(BOOL)restoreStateData:(id)arg1 ;
-(id)_initialConstraints;
-(void)_updateMaxNumberOfRowsFromExtensionContext;
-(unsigned long long)maxNumberOfRowsFromAvailableWidgetSize;
-(MWTransitItemArtworkColumnCalculator *)artworkColumnCalculator;
-(void)setTransitItems:(NSArray *)arg1 ;
-(void)setMaxNumberOfRows:(unsigned long long)arg1 ;
-(void)_updateCurrentItemsAndArtworkColumnWidth;
-(NSRange)_rangeOfItemsFromStepIndex:(unsigned long long)arg1 ;
-(ArtworkWidthCalculatorSizeParameter)_sizeParametersForCurrentTableViewWidth;
-(CGSize)_preferredContentSizeFromMaxNumberOfRows;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(NSArray *)transitItems;
-(NSArray *)currentTransitItems;
-(NSArray *)shieldAdjustedCurrentTransitItems;
-(NSArray *)visibleTransitItems;
-(void)setArtworkColumnCalculator:(MWTransitItemArtworkColumnCalculator *)arg1 ;
-(double)artworkColumnWidth;
-(void)setArtworkColumnWidth:(double)arg1 ;
-(unsigned long long)maxNumberOfRows;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)stateData;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(GEOComposedRoute *)route;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(unsigned long long)stepIndex;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)_createSubviews;
-(void)_contentSizeCategoryDidChange;
-(MKArtworkDataSourceCache *)artworkCache;
-(long long)currentDisplayMode;
-(void)setCurrentDisplayMode:(long long)arg1 ;
-(long long)largestAvailableDisplayMode;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
@end

