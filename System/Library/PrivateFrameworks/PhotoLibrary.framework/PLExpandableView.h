/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@protocol PLExpandableViewDelegate;
@interface PLExpandableView : UIView {

	id<PLExpandableViewDelegate> _delegate;
	/*^block*/id _collapsingCompletionHandler;
	/*^block*/id _expansionCompletionHandler;
	CGRect _contractedFrame;
	CGRect _expandedFrame;
	CGPoint _leftTouchLocation;
	CGPoint _rightTouchLocation;
	CGPoint _previousLeftLocation;
	CGPoint _previousRightLocation;
	unsigned long long _leftTouchIndex;
	unsigned long long _rightTouchIndex;
	double _pinchVelocity;
	double _trackingTimeInterval;
	double _expansionFraction;
	struct {
		unsigned state : 3;
		unsigned prevState : 3;
		unsigned tracking : 1;
		unsigned autorotationDisabled : 1;
		unsigned animationDisabled : 1;
		unsigned updateContractedFrame : 1;
		unsigned updateExpandedFrame : 1;
		unsigned allowsExpansion : 1;
		unsigned delegateWillBeginExpanding : 1;
		unsigned delegateWillCompleteExpanding : 1;
		unsigned delegateDidCompleteExpanding : 1;
		unsigned delegateWillCancelExpanding : 1;
		unsigned delegateDidCancelExpanding : 1;
		unsigned delegateDidBeginCollapsing : 1;
		unsigned delegateWillCompleteCollapsing : 1;
		unsigned delegateDidCompleteCollapsing : 1;
		unsigned delegateWillCancelCollapsing : 1;
		unsigned delegateDidCancelCollapsing : 1;
		unsigned delegateExpandedFractionChanged : 1;
	}  _expandFlags;

}

@property (assign,nonatomic) CGRect contractedFrame; 
@property (assign,nonatomic) CGRect expandedFrame; 
@property (assign,nonatomic) BOOL allowsExpansion; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)delegate;
-(int)state;
-(BOOL)isTracking;
-(void)willMoveToWindow:(id)arg1 ;
-(void)finishTransition;
-(void)_setAutorotationDisabled:(BOOL)arg1 ;
-(void)_notifyWillBeginExpanding;
-(void)_notifyWillCompleteExpandingWithDuration:(double)arg1 ;
-(void)_notifyWillCancelExpandingWithDuration:(double)arg1 ;
-(void)_notifyDidCompleteExpanding;
-(void)_notifyWillBeginCollapsing;
-(void)_notifyDidCancelExpanding;
-(void)_notifyWillCancelCollapsingWithDuration:(double)arg1 ;
-(void)_notifyWillCompleteCollapsingWithDuration:(double)arg1 ;
-(void)_notifyDidCancelCollapsing;
-(void)_notifyDidCompleteCollapsing;
-(void)stateWillChangeTo:(int)arg1 ;
-(void)setContractedFrame:(CGRect)arg1 ;
-(void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2 ;
-(void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2 ;
-(void)stateDidChangeFrom:(int)arg1 ;
-(void)setExpansionFraction:(double)arg1 ;
-(BOOL)_canPinch;
-(void)updatePinchState:(id)arg1 ;
-(void)setState:(int)arg1 withDuration:(double)arg2 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(void)notifyExpansionFraction:(float)arg1 force:(BOOL)arg2 ;
-(float)continueTrackingPinch:(id)arg1 ;
-(int)snapState:(BOOL)arg1 ;
-(float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3 ;
-(void)finishTransitionToState:(int)arg1 ;
-(BOOL)allowsExpansion;
-(void)startedPinch:(id)arg1 ;
-(void)continuedPinch:(id)arg1 ;
-(void)finishedPinch:(id)arg1 ;
-(void)canceledPinch:(id)arg1 ;
-(CGRect)pinchRect:(CGRect)arg1 inView:(id)arg2 insetTouches:(BOOL)arg3 ;
-(void)collapseWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)expandWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)contractedFrame;
-(void)setExpandedFrame:(CGRect)arg1 ;
-(CGRect)expandedFrame;
-(void)setAllowsExpansion:(BOOL)arg1 ;
-(double)expansionFraction;
-(BOOL)canCollapse;
-(int)previousState;
@end

