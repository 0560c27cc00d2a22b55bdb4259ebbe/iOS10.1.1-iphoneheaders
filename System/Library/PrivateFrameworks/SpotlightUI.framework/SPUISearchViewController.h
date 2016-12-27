/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SPUISearchHeaderDelegate.h>
#import <libobjc.A.dylib/SearchUIFirstTimeExperienceDelegate.h>
#import <libobjc.A.dylib/SPUITableViewDelegate.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>
#import <libobjc.A.dylib/SPUISearchResultHandlerDelegate.h>

@protocol SPUISearchViewControllerDelegate;
@class NSTimer, _UILegibilitySettings, UIView, SPUISearchHeader, SPUISearchFirstTimeViewController, SPUITableViewController, SPUISearchResultHandler, SPUILockScreenFooterView, NSMutableArray, NSString;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUITableViewDelegate, SPSearchAgentDelegate, SPUISearchResultHandlerDelegate> {

	unsigned long long _queryStartTime;
	NSTimer* _queryUpdateTimer;
	BOOL _internetOverrideForPPT;
	BOOL _isBeingPresented;
	BOOL _wasVisibleWhenPresented;
	BOOL _clearSearchFieldAfterDismissal;
	id<SPUISearchViewControllerDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	UIView* _replicatorView;
	SPUISearchHeader* _searchHeader;
	SPUISearchFirstTimeViewController* _firstTimeExperienceViewController;
	SPUITableViewController* _searchTableViewController;
	SPUITableViewController* _zeroKeywordTableViewController;
	SPUISearchResultHandler* _resultHandler;
	SPUILockScreenFooterView* _footerView;
	unsigned long long _presentationMode;
	NSMutableArray* _searchRatingSessionFeedback;
	double _statusBarDismissTime;
	NSTimer* _clearResultsTimer;

}

@property (retain) UIView * replicatorView;                                                            //@synthesize replicatorView=_replicatorView - In the implementation block
@property (retain) SPUISearchHeader * searchHeader;                                                    //@synthesize searchHeader=_searchHeader - In the implementation block
@property (retain) SPUISearchFirstTimeViewController * firstTimeExperienceViewController;              //@synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController - In the implementation block
@property (retain) SPUITableViewController * searchTableViewController;                                //@synthesize searchTableViewController=_searchTableViewController - In the implementation block
@property (retain) SPUITableViewController * zeroKeywordTableViewController;                           //@synthesize zeroKeywordTableViewController=_zeroKeywordTableViewController - In the implementation block
@property (retain) SPUISearchResultHandler * resultHandler;                                            //@synthesize resultHandler=_resultHandler - In the implementation block
@property (retain) SPUILockScreenFooterView * footerView;                                              //@synthesize footerView=_footerView - In the implementation block
@property (assign) unsigned long long presentationMode;                                                //@synthesize presentationMode=_presentationMode - In the implementation block
@property (retain) NSMutableArray * searchRatingSessionFeedback;                                       //@synthesize searchRatingSessionFeedback=_searchRatingSessionFeedback - In the implementation block
@property (assign) BOOL internetOverrideForPPT;                                                        //@synthesize internetOverrideForPPT=_internetOverrideForPPT - In the implementation block
@property (assign) double statusBarDismissTime;                                                        //@synthesize statusBarDismissTime=_statusBarDismissTime - In the implementation block
@property (retain) NSTimer * clearResultsTimer;                                                        //@synthesize clearResultsTimer=_clearResultsTimer - In the implementation block
@property (assign) BOOL isBeingPresented;                                                              //@synthesize isBeingPresented=_isBeingPresented - In the implementation block
@property (assign) BOOL wasVisibleWhenPresented;                                                       //@synthesize wasVisibleWhenPresented=_wasVisibleWhenPresented - In the implementation block
@property (assign) BOOL clearSearchFieldAfterDismissal;                                                //@synthesize clearSearchFieldAfterDismissal=_clearSearchFieldAfterDismissal - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<SPUISearchViewControllerDelegate>)arg1 ;
-(id<SPUISearchViewControllerDelegate>)delegate;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)contentScrollView;
-(BOOL)isBeingPresented;
-(BOOL)isVisible;
-(void)hideKeyboard;
-(void)update:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(SPUILockScreenFooterView *)footerView;
-(void)setFooterView:(SPUILockScreenFooterView *)arg1 ;
-(void)setResultHandler:(SPUISearchResultHandler *)arg1 ;
-(SPUISearchHeader *)searchHeader;
-(SPUISearchResultHandler *)resultHandler;
-(id)currentQuery;
-(id)activeViewController;
-(void)firstTimeExperienceContinueButtonPressed;
-(id)viewControllerForPresenting;
-(void)numberOfRowsDidChange:(id)arg1 ;
-(unsigned long long)presentationMode;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(id)headerNextResponder;
-(void)queryContextDidChange:(id)arg1 allowZKW:(BOOL)arg2 ;
-(void)didBeginEditing;
-(void)cancelButtonPressed;
-(void)searchForSuggestedQuery:(id)arg1 ;
-(void)didTapInEmptyAreaOfTableView;
-(void)didSwipeUpOnTableView;
-(void)didBeginScrollingInTableView;
-(void)didSelectResult:(id)arg1 withFeedback:(id)arg2 wasPop:(BOOL)arg3 ;
-(void)didPullDownTableView;
-(void)setSearchHeader:(SPUISearchHeader *)arg1 ;
-(id)tableViewControllerWithSearchModel:(id)arg1 ;
-(void)setSearchTableViewController:(SPUITableViewController *)arg1 ;
-(void)setZeroKeywordTableViewController:(SPUITableViewController *)arg1 ;
-(void)setReplicatorView:(UIView *)arg1 ;
-(UIView *)replicatorView;
-(SPUITableViewController *)searchTableViewController;
-(void)settingsChanged;
-(void)clearSearchResultsPrefsChanged;
-(void)setClearSearchFieldAfterDismissal:(BOOL)arg1 ;
-(void)setIsBeingPresented:(BOOL)arg1 ;
-(void)setWasVisibleWhenPresented:(BOOL)arg1 ;
-(SPUITableViewController *)zeroKeywordTableViewController;
-(BOOL)queryIsPresent;
-(void)activateViewController:(id)arg1 animate:(BOOL)arg2 ;
-(void)activateFirstTimeExperienceViewIfNecessary;
-(NSTimer *)clearResultsTimer;
-(void)setClearResultsTimer:(NSTimer *)arg1 ;
-(SPUISearchFirstTimeViewController *)firstTimeExperienceViewController;
-(BOOL)wasVisibleWhenPresented;
-(void)clearTimerExpired;
-(BOOL)clearSearchFieldAfterDismissal;
-(void)hideSeparator;
-(void)activateFirstTimeExperienceViewAnimate:(BOOL)arg1 ;
-(void)setFirstTimeExperienceViewController:(SPUISearchFirstTimeViewController *)arg1 ;
-(void)setInternetOverrideForPPT:(BOOL)arg1 ;
-(BOOL)allowInternet;
-(void)enableUpdates:(id)arg1 ;
-(BOOL)internetOverrideForPPT;
-(void)sendRatingFeedback;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
-(void)searchAgentReceivedSuggestions:(id)arg1 ;
-(void)performSearchWithQuery:(id)arg1 ;
-(void)scrollSearchTable:(id)arg1 iterations:(unsigned long long)arg2 delta:(unsigned long long)arg3 ;
-(void)searchViewWillPresentFromSource:(unsigned long long)arg1 ;
-(double)distanceToTopOfAppIcons;
-(void)searchViewDidPresentFromSource:(unsigned long long)arg1 ;
-(void)searchViewWillDismissWithReason:(unsigned long long)arg1 ;
-(void)searchViewDidDismissWithReason:(unsigned long long)arg1 ;
-(void)setInternetOverrideToDisable:(BOOL)arg1 ;
-(NSMutableArray *)searchRatingSessionFeedback;
-(void)setSearchRatingSessionFeedback:(NSMutableArray *)arg1 ;
-(double)statusBarDismissTime;
-(void)setStatusBarDismissTime:(double)arg1 ;
-(void)clearSearchResults;
@end

