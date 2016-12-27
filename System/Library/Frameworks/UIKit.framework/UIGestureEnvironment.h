/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableSet, NSMutableArray, UIGestureGraph, NSMapTable;

@interface UIGestureEnvironment : NSObject {

	CFRunLoopObserverRef _gestureEnvironmentUpdateObserver;
	NSMutableSet* _gestureRecognizersNeedingUpdate;
	NSMutableSet* _gestureRecognizersNeedingReset;
	NSMutableSet* _gestureRecognizersNeedingRemoval;
	NSMutableArray* _dirtyGestureRecognizers;
	NSMutableArray* _delayedTouches;
	NSMutableArray* _delayedTouchesToSend;
	NSMutableArray* _delayedPresses;
	NSMutableArray* _delayedPressesToSend;
	BOOL _dirtyGestureRecognizersUnsorted;
	BOOL _updateExclusivity;
	UIGestureGraph* _dependencyGraph;
	NSMapTable* _nodesByGestureRecognizer;

}

@property (nonatomic,readonly) BOOL _hasGesturesNeedingUpdate; 
-(id)init;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)_cancelGestureRecognizers:(id)arg1 ;
-(void)_updateGesturesForEvent:(id)arg1 window:(id)arg2 ;
-(id)_nodeForGestureRecognizer:(id)arg1 ;
-(id)_gestureRecognizerForNode:(id)arg1 ;
-(void)addRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2 ;
-(void)_queueGestureRecognizerForResetIfFinished:(id)arg1 ;
-(void)_removeNodeFromGestureGraph:(id)arg1 ;
-(void)_deliverEvent:(id)arg1 toGestureRecognizers:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_markGestureAsDirty:(id)arg1 ;
-(void)setGestureNeedsUpdate:(id)arg1 ;
-(void)_queueGestureRecognizersForResetIfFinished:(id)arg1 ;
-(BOOL)_hasGesturesNeedingUpdate;
-(void)_clearGestureNeedsUpdate:(id)arg1 ;
-(void)_notifyDependentsGestureRecognizerHasCompleted:(id)arg1 ;
-(BOOL)_activeRelationshipsForGestureRecognizer:(id)arg1 ;
-(void)_gestureNeedsReset:(id)arg1 ;
-(void)setNeedsExclusivityUpdate;
-(id)_delayedTouchForTouch:(id)arg1 event:(id)arg2 ;
-(id)_delayedPressForPress:(id)arg1 event:(id)arg2 ;
-(void)_removeDelayedTouch:(id)arg1 ;
-(void)_removeDelayedPress:(id)arg1 ;
-(void)_enqueueDelayedTouchToSend:(id)arg1 ;
-(void)_enqueueDelayedPressToSend:(id)arg1 ;
-(BOOL)_touchesBeganWasDelayedForTouch:(id)arg1 ;
-(BOOL)_pressesBeganWasDelayedForPress:(id)arg1 ;
-(void)_addDynamicRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 requiresGestureRecognizerToFail:(id)arg2 ;
-(BOOL)unmetRequirementsForGestureRecognizer:(id)arg1 ;
-(void)removeRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2 ;
-(id)_graphDictionary:(BOOL)arg1 ;
-(void)_clearGestureIsDirty:(id)arg1 ;
-(void)_cancelTouches:(id)arg1 event:(id)arg2 ;
-(void)_cancelPresses:(id)arg1 event:(id)arg2 ;
@end

