/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol _UIBasicAnimationFactory;
@class NSString, UIView, NSMutableArray, NSUUID, CAMediaTimingFunction, UIViewPropertyAnimator;

@interface UIViewAnimationState : NSObject <CAAnimationDelegate> {

	UIViewAnimationState* _nextState;
	NSString* _animationID;
	void* _context;
	id _delegate;
	double _duration;
	double _delay;
	double _frameInterval;
	double _start;
	long long _curve;
	float _repeatCount;
	long long _transition;
	UIView* _transitionView;
	int _filter;
	UIView* _filterView;
	float _filterValue;
	SEL _willStartSelector;
	SEL _didEndSelector;
	int _didEndCount;
	CGPoint _position;
	unsigned _willStartSent : 1;
	unsigned _useCurrentLayerState : 1;
	unsigned _cacheTransition : 1;
	unsigned _autoreverses : 1;
	unsigned _roundsToInteger : 1;
	unsigned _preventsAdditive : 1;
	unsigned _layoutSubviews : 1;
	unsigned _hasOuterAnimator : 1;
	unsigned _hasOuterTrackingAnimator : 1;
	NSMutableArray* _trackedAnimations;
	NSUUID* _uuid;
	id<_UIBasicAnimationFactory> _animationFactory;
	CAMediaTimingFunction* _customCurve;
	BOOL _animationFactoryMakesPerAnimationCustomCurves;
	BOOL _disallowAdditiveAnimations;
	/*^block*/id _alongsideAnimations;
	NSMutableArray* _addedCompletions;
	BOOL _animationDidStopSent;
	BOOL _animationDidStopForced;
	BOOL _allowUserInteractionToCutOffEndOfAnimation;
	BOOL _allowsHitTesting;
	UIViewAnimationState* _retainedSelf;
	NSMutableArray* _viewsPendingConstraintBasedAnimation;
	UIViewPropertyAnimator* _propertyAnimator;

}

@property (nonatomic,readonly) BOOL _allowsUserInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_addViewForConstraintBasedAnimation:(id)arg1 ;
+(void)pushViewAnimationState:(id)arg1 context:(void*)arg2 ;
+(void)popAnimationState;
+(void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2 ;
+(void)_addSystemPostAnimationAction:(/*^block*/id)arg1 ;
+(id)originalAnimationForKeyPath:(id)arg1 inLayer:(id)arg2 ;
-(id)init;
-(void)_acceptEarlyAnimationCutoff:(id)arg1 ;
-(void)_runAlongsideAnimations;
-(BOOL)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2 forView:(id)arg3 ;
-(void)_trackAnimation:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 inLayer:(id)arg5 ;
-(void)_setAlongsideAnimations:(/*^block*/id)arg1 ;
-(void)_addAnimationStateForTracking:(id)arg1 ;
-(void)_prepareForViewAnimationAfterPush;
-(void)pushWithViewAnimationID:(id)arg1 context:(void*)arg2 ;
-(void)pop;
-(void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2 forView:(id)arg3 ;
-(id)_defaultAnimationForKey:(id)arg1 ;
-(void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4 ;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(id)_outerPropertyAnimator:(BOOL)arg1 ;
-(id)_trackedAnimations;
-(id)_canonicalTrackedLayerAnimationInLayer:(id*)arg1 ;
-(double)_unpacedFractionCompleteForAnimation:(id)arg1 inLayer:(id)arg2 duration:(double)arg3 ;
-(void)setupCustomTimingCurve;
-(void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 ;
-(void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4 ;
-(void)setAnimationAttributes:(id)arg1 ;
-(void)_runConstraintBasedLayoutAnimations;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 disableTrackingIfNeeded:(BOOL)arg2 ;
-(BOOL)_allowsUserInteraction;
-(BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
-(BOOL)_allowsHitTesting;
-(double)_canonicalTrackedUnpacedFractionComplete;
-(void)_trackObject:(id)arg1 withAnimationPropertyName:(id)arg2 inLayer:(id)arg3 ;
-(void)animationDidStart:(id)arg1 ;
-(void)_transformIntoAdditiveAnimationAndNoteOriginal:(id)arg1 inLayer:(id)arg2 animationKey:(id)arg3 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_setCustomCurve:(id)arg1 ;
-(BOOL)_addCompletion:(/*^block*/id)arg1 ;
-(void)_removeLastCompletion;
-(void)sendDelegateDidStopManually;
-(void)_untrackAnimationsWithIdentifier:(id)arg1 keyPath:(id)arg2 inLayer:(id)arg3 removeFromLayer:(BOOL)arg4 ;
-(void)_removeAnimationStateFromTrackingMap:(BOOL)arg1 ;
@end

