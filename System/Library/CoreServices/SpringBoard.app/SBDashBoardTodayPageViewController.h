/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardPageViewController.h>
#import <SpringBoard/SBDashBoardTodayViewControllerDelegate.h>
#import <SpringBoard/SBDashBoardPageViewControllerProtocol.h>

@class SBDashBoardTodayViewController, NSString, NSSet, _UILegibilitySettings, UIColor, NSArray, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation;

@interface SBDashBoardTodayPageViewController : SBDashBoardPageViewController <SBDashBoardTodayViewControllerDelegate, SBDashBoardPageViewControllerProtocol> {

	SBDashBoardTodayViewController* _todayViewController;

}

@property (nonatomic,retain) SBDashBoardTodayViewController * todayViewController;                              //@synthesize todayViewController=_todayViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) SBDashBoardAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) SBDashBoardBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) SBDashBoardPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewControllerProtocol> dashBoardViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
+(BOOL)isAvailableForConfiguration;
+(unsigned long long)requiredCapabilities;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)displayLayoutElementIdentifier;
-(SBDashBoardTodayViewController *)todayViewController;
-(void)numberOfWidgetsChanged:(id)arg1 ;
-(void)dashBoardTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2 ;
-(void)setTodayViewController:(SBDashBoardTodayViewController *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end

