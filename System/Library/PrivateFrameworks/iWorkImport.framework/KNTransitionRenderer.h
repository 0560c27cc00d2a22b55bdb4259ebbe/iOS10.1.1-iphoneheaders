/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationRenderer.h>

@class NSMutableArray, NSDictionary, CALayer, TSDFPSCounter, NSString;

@interface KNTransitionRenderer : KNAnimationRenderer {

	NSMutableArray* mTextures;
	long long mNumberOfAnimationsStarted;
	NSDictionary* mAnimatedLayers;
	BOOL mOutgoingSlideRendered;
	BOOL mShouldAnimateTransition;
	BOOL mAnimationsRanToCompletion;
	NSDictionary* mAttributes;
	id mTransitionEndCallbackTarget;
	SEL mTransitionEndCallbackSelector;
	id mTransitionImmediateEndCallbackTarget;
	SEL mTransitionImmediateEndCallbackSelector;
	CALayer* mBackgroundLayer;
	TSDFPSCounter* mFPSCounter;
	NSString* mRenderWaitIdentifier;

}
-(id)initWithEffectClass:(Class)arg1 direction:(unsigned long long)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(void)setupPluginContext;
-(void)removeAnimationsAndFinish:(BOOL)arg1 ;
-(void)updateAnimationTestingLog;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)p_checkForNullTransitions:(Class)arg1 ;
-(void)p_generateLayers;
-(void)waitUntilAsyncRenderingIsComplete;
-(void)setupLayerTreeForTransition;
-(void)renderSlideIndex:(unsigned long long)arg1 ;
-(BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2 ;
-(BOOL)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(BOOL)arg3 ;
-(void)p_removeAnimationsOnAnimatedLayers;
-(void)p_reset;
-(void)teardownTransitionIsExitingShow:(BOOL)arg1 ;
-(void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)registerForTransitionImmediateEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)renderOutgoingSlideAndPrecacheIncomingSlide;
-(void)animateWithDelay:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)teardown;
-(id)plugin;
-(void)stopAnimations;
@end

