/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusMapDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIFocusScrollAnimator, OS_dispatch_queue;
@class _UIFocusEnginePanGestureRecognizer, UITapGestureRecognizer, _UIFocusPressGestureRecognizer, CADisplayLink, NSArray, _UIFocusEngineJoystickGestureRecognizer, NSTimer, NSMapTable, UIScrollView, NSObject, _UIFocusSoundPool, _UIFocusTouchDebugView, UIWindow, UIView, UIMoveEvent, NSString;

@interface _UIFocusEngine : NSObject <_UIFocusMapDelegate, UIGestureRecognizerDelegate> {

	_UIFocusEnginePanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	_UIFocusPressGestureRecognizer* _selectGestureRecognizer;
	CGPoint _touchBeganPoint;
	CGPoint _lastKnownTouchPoint;
	CGVector _progressAccumulator;
	id<_UIFocusScrollAnimator> _scrollViewAnimator;
	CGPoint _firstMomentumTouchPoint;
	CGPoint _lastMomentumTouchPoint;
	CGPoint _momentumVelocity;
	double _momentumFriction;
	unsigned long long _focusUpdateCountSinceLastPanBegan;
	CADisplayLink* _momentumDisplayLink;
	NSArray* _remoteGestures;
	_UIFocusEngineJoystickGestureRecognizer* _joystickGestureRecognizer;
	NSTimer* _joystickModeExitTimer;
	NSTimer* _joystickModeRepeatTimer;
	double _previousJoystickFocusMovementTime;
	double _previousJoystickRegionEntryTime;
	unsigned long long _joystickRepeatingHeading;
	CADisplayLink* _joystickFocusDirectionDisplayLink;
	CGPoint _currentFocusDirection;
	NSMapTable* _focusRollbackAnimations;
	UIScrollView* _peekingScrollView;
	CGSize _peekingScrollViewPeekSize;
	unsigned long long _peekingHeading;
	NSMapTable* _cachedViewSearchResults;
	NSObject*<OS_dispatch_queue> _soundQueue;
	_UIFocusSoundPool* _smallSoundPool;
	_UIFocusSoundPool* _largeSoundPool;
	_UIFocusSoundPool* _appIconSoundPool;
	_UIFocusSoundPool* _keyboardSoundPool;
	unsigned long long _currentGestureID;
	UIScrollView* _lastScrolledScroll;
	double _lastEdgeScrollEdgeValue;
	_UIFocusTouchDebugView* _touchIndicatorView;
	NSMapTable* _activeScrollViewLoadingBounds;
	NSMapTable* _activeScrollViewAnimatingBounds;
	unsigned long long _inputType;
	struct {
		unsigned isSettingFocusedView : 1;
		unsigned isEligibleToCrossSpeedBump : 1;
		unsigned isContinuingTouchWithMomentum : 1;
		unsigned isAnimatingFocusDirectionRollback : 1;
		unsigned isPerformingJoystickRollback : 1;
		unsigned isJoystickInRepeatMode : 1;
		unsigned isPendingJoystickRepeat : 1;
		unsigned isPeekingScrollView : 1;
		unsigned shouldApplyAcceleration : 1;
		unsigned shouldShowDebugOverlays : 1;
	}  _flags;
	BOOL _enabled;
	BOOL _wantsScrollPeeking;
	BOOL _shouldShowDebugOverlays;
	BOOL _sendsFocusDirection;
	BOOL _playsSoundOnFocusChange;
	UIWindow* _targetWindow;
	UIView* _viewForTouchDeferredFocus;
	UIMoveEvent* _moveEvent;

}

@property (nonatomic,retain) UIMoveEvent * moveEvent;                                                                                       //@synthesize moveEvent=_moveEvent - In the implementation block
@property (nonatomic,readonly) double _animationCoefficient; 
@property (assign,setter=_setSendsFocusDirection:,getter=_sendsFocusDirection,nonatomic) BOOL sendsFocusDirection;                          //@synthesize sendsFocusDirection=_sendsFocusDirection - In the implementation block
@property (assign,setter=_setPlaysSoundOnFocusChange:,getter=_playsSoundOnFocusChange,nonatomic) BOOL playsSoundOnFocusChange;              //@synthesize playsSoundOnFocusChange=_playsSoundOnFocusChange - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL wantsScrollPeeking;                                                                                       //@synthesize wantsScrollPeeking=_wantsScrollPeeking - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * targetWindow;                                                                                //@synthesize targetWindow=_targetWindow - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewForTouchDeferredFocus;                                                                     //@synthesize viewForTouchDeferredFocus=_viewForTouchDeferredFocus - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDebugOverlays;                                                                                  //@synthesize shouldShowDebugOverlays=_shouldShowDebugOverlays - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)reset;
-(BOOL)_updateFocusedViewAndScroll:(id)arg1 withSoundVolume:(double)arg2 ;
-(void)_setUpSounds;
-(void)_cleanUpSounds;
-(void)setTargetWindow:(UIWindow *)arg1 ;
-(void)_removeGestureRecognizers;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_addGestureRecognizers;
-(UIView *)viewForTouchDeferredFocus;
-(void)setViewForTouchDeferredFocus:(UIView *)arg1 ;
-(void)setMoveEvent:(UIMoveEvent *)arg1 ;
-(BOOL)moveInDirection:(unsigned long long)arg1 ;
-(BOOL)_allowsFocusMovementAction;
-(BOOL)_sendFocusMovementActionIfPossible:(id)arg1 ;
-(BOOL)_performFocusMovement:(id)arg1 ;
-(void)_resetViewSearchCache;
-(id)_focusedItemInfo;
-(id)_bestCandidateForFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(UIWindow *)targetWindow;
-(BOOL)_updateFocusWithContext:(id)arg1 ;
-(void)_resetFocusDirectionRollbackForAllItems;
-(void)_resetMomentum;
-(void)_resetScrollViewPeek:(BOOL)arg1 ;
-(void)_resetJoystick;
-(void)_panGestureStart:(id)arg1 ;
-(void)_updatePanLocation:(CGPoint)arg1 reportedVelocity:(CGVector)arg2 wantsFocusDirection:(BOOL)arg3 ;
-(void)_panGestureEnd:(id)arg1 ;
-(int)_touchRegionForDigitizerLocation:(CGPoint)arg1 ;
-(void)_joystickGestureBegan:(id)arg1 ;
-(void)_joystickGestureUpdated:(id)arg1 ;
-(void)_joystickGestureEnded:(id)arg1 ;
-(id)_soundQueue;
-(id)_poolForFocusSound:(long long)arg1 ;
-(id)_focusedItem;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleSelectGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_handleJoystickGesture:(id)arg1 ;
-(void)_handleButtonGesture:(id)arg1 ;
-(BOOL)_shouldEagerlyValidateFocusCandidates;
-(CGRect)_minimumSearchAreaForContainerView:(id)arg1 ;
-(id)_findFocusCandidateWithoutLoadingScrollViewContent:(id)arg1 forFocusMovement:(id)arg2 fromItem:(id)arg3 minimumSearchArea:(CGRect)arg4 ;
-(id)_findFocusCandidateByExhaustivelySearchingScrollView:(id)arg1 forFocusMovement:(id)arg2 fromItem:(id)arg3 ;
-(BOOL)_shouldRecordDestinationViewDistanceOffscreen;
-(id)_cachedSearchResultForHeading:(unsigned long long)arg1 ;
-(id)_noCache_bestCandidateForNonLinearFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(BOOL)_wouldCrossSpeedBumpDuringFocusMovement:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)_setCachedSearchResult:(id)arg1 forHeading:(unsigned long long)arg2 ;
-(void)_loadScrollViewContentForFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForMovement:(id)arg1 fromItem:(id)arg2 ;
-(id)_bestCandidateForLinearFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(id)_bestCandidateForNonLinearFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_sendFocusDirectionNotificationWithDirection:(CGPoint)arg1 ;
-(BOOL)_playsSoundOnFocusChange;
-(void)_playFocusSound:(long long)arg1 withPan:(double)arg2 volume:(double)arg3 ;
-(CGPoint)_contentOffsetForScrollView:(id)arg1 toFocusView:(id)arg2 ;
-(void)_scrollView:(id)arg1 toOffset:(CGPoint)arg2 ;
-(CGRect)_visibleBoundsForScrollView:(id)arg1 ;
-(BOOL)_wouldCrossSpeedBumpDuringFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_resetFocusDirectionRollbackForItem:(id)arg1 ;
-(void)_sendGestureBeginNotification;
-(CGSize)_touchSensitivityForView:(id)arg1 ;
-(void)_updateDebugOverlayWithTouchAtNormalizedPoint:(CGPoint)arg1 navigationBoundary:(CGRect)arg2 ;
-(void)_recordMomentumForPoint:(CGPoint)arg1 ;
-(BOOL)_sendsFocusDirection;
-(BOOL)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
-(BOOL)_attemptPanGestureFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_stopMomentumAndPerformRollback;
-(BOOL)wantsScrollPeeking;
-(void)_peekScrollViewStartingAtFocusedItem:(id)arg1 progress:(CGVector)arg2 ;
-(void)_resetProgressAccumulatorForHeading:(unsigned long long)arg1 focusedItem:(id)arg2 ;
-(void)_resetPanGestureState;
-(void)_continueTouchWithMomentum;
-(BOOL)_speedBumpsAllowFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(BOOL)_attemptFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_joystickDisplayLinkHeartbeat:(id)arg1 ;
-(void)_handleJoystickRepeatMode:(id)arg1 ;
-(void)_handleJoystickTiltMode:(id)arg1 ;
-(void)_exitJoystickModeForReal:(id)arg1 ;
-(void)_sendGestureEndNotification;
-(unsigned long long)_headingForJoystickPosition:(CGPoint)arg1 usingMinimumRadius:(double)arg2 ;
-(double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1 ;
-(CGVector)_joystickVelocityForHeading:(unsigned long long)arg1 timeInMovementZone:(double)arg2 ;
-(BOOL)_joystickAttemptFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_joystickPerformRepeat:(id)arg1 ;
-(id)_scrollViewToPeekFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(double)_frictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 slope:(double)arg3 shortDistance:(double)arg4 longDistance:(double)arg5 ;
-(double)_horizontalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 ;
-(double)_verticalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 ;
-(void)_sendMomentumEndNotificationsAndAnimateRollback:(BOOL)arg1 ;
-(void)_momentumHeartbeat:(id)arg1 ;
-(void)_startFocusDirectionRollbackForItem:(id)arg1 ;
-(void)_updateDebugOverlayByRemovingTouchIndicators;
-(void)_ensureFocusedViewIsOnscreen:(id)arg1 ;
-(void)_addVisibleRect:(CGRect)arg1 toScrollViewForAnimation:(id)arg2 ;
-(void)_clearVisibleRectForLoadingScrollViewContent:(id)arg1 ;
-(void)_removeVisibleRect:(CGRect)arg1 fromScrollViewForAnimation:(id)arg2 ;
-(CGPoint)_contentOffsetForScrollView:(id)arg1 toFocusView:(id)arg2 targetOffset:(CGPoint)arg3 targetBounds:(CGRect)arg4 ;
-(void)_setupDebugOverlays;
-(void)_teardownDebugOverlays;
-(id)_closestFocusableViewToRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)_focusMap:(id)arg1 preferredDefaultFocusItemInEnvironment:(id)arg2 ;
-(id)_focusMap:(id)arg1 preferredDestinationItemForFocusMovement:(id)arg2 ;
-(BOOL)moveWithEvent:(id)arg1 ;
-(BOOL)_uiktest_performFocusMovement:(id)arg1 ;
-(BOOL)_uiktest_updateFocusToItem:(id)arg1 ;
-(id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_setPanGestureRecognizer:(id)arg1 ;
-(id)_panGestureRecognizer;
-(BOOL)_isContinuingTouchWithMomentum;
-(BOOL)_isScrollingScrollView:(id)arg1 ;
-(void)_cancelScrollingForScrollView:(id)arg1 ;
-(CGPoint)_targetContentOffsetForScrollView:(id)arg1 ;
-(void)_animateOffsetOfScrollView:(id)arg1 toShowFocusedView:(id)arg2 ;
-(void)_setVisibleRect:(CGRect)arg1 forLoadingScrollViewContent:(id)arg2 ;
-(double)_effortRequiredForFocusMovement:(id)arg1 fromItem:(id)arg2 ;
-(void)_performScrollingIfNeededForFocusUpdateContext:(id)arg1 ;
-(void)setShouldShowDebugOverlays:(BOOL)arg1 ;
-(id)_closestFocusableViewToPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(double)_animationCoefficient;
-(BOOL)isEnabled;
-(void)setWantsScrollPeeking:(BOOL)arg1 ;
-(BOOL)shouldShowDebugOverlays;
-(UIMoveEvent *)moveEvent;
-(void)_setSendsFocusDirection:(BOOL)arg1 ;
-(void)_setPlaysSoundOnFocusChange:(BOOL)arg1 ;
-(void)_runPerformanceTestWithName:(id)arg1 fakeEvents:(SCD_Struct_UI9*)arg2 count:(int)arg3 ;
-(void)_runPerformanceTestWithName:(id)arg1 bySwipingAlongAxis:(int)arg2 ;
@end

