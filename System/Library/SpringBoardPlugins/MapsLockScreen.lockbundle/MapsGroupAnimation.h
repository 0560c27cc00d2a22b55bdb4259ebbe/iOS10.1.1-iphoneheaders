/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MapsGroupAnimation : NSObject {

	NSMutableArray* _preparations;
	NSMutableArray* _animations;
	NSMutableArray* _completions;
	BOOL _didPrepare;
	BOOL _didAnimate;
	BOOL _didComplete;
	BOOL _preventsAnimationDuringPreparation;
	BOOL _animated;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL preventsAnimationDuringPreparation;              //@synthesize preventsAnimationDuringPreparation=_preventsAnimationDuringPreparation - In the implementation block
+(id)animationForAnimatedFlag:(BOOL)arg1 ;
+(id)animationForImplicitAnimationState;
+(id)animation;
+(double)defaultAnimationDuration;
-(void)runWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 ;
-(void)addAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasPrepared;
-(void)runWithDefaultOptions;
-(BOOL)preventsAnimationDuringPreparation;
-(void)addPreparation:(/*^block*/id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreventsAnimationDuringPreparation:(BOOL)arg1 ;
-(id)init;
-(void)animate;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)prepare;
-(void)complete:(BOOL)arg1 ;
@end

