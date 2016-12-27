/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class IMViewControllerTransitionContext, NSMutableArray, NSString, UIView;

@interface IMViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	IMViewControllerTransitionContext* __mainContext;
	NSMutableArray* __alongsideAnimations;
	NSMutableArray* __alongsideAnimationViews;
	NSMutableArray* __alongsideCompletions;
	NSMutableArray* __interactiveChangeHandlers;

}

@property (assign,setter=_setMainContext:,nonatomic) IMViewControllerTransitionContext * _mainContext;                       //@synthesize _mainContext=__mainContext - In the implementation block
@property (setter=_setAlongsideAnimations:,nonatomic,retain) NSMutableArray * _alongsideAnimations;                          //@synthesize _alongsideAnimations=__alongsideAnimations - In the implementation block
@property (setter=_setAlongsideAnimationViews:,nonatomic,retain) NSMutableArray * _alongsideAnimationViews;                  //@synthesize _alongsideAnimationViews=__alongsideAnimationViews - In the implementation block
@property (setter=_setAlongsideCompletions:,nonatomic,retain) NSMutableArray * _alongsideCompletions;                        //@synthesize _alongsideCompletions=__alongsideCompletions - In the implementation block
@property (setter=_setInteractiveChangeHandlers:,nonatomic,retain) NSMutableArray * _interactiveChangeHandlers;              //@synthesize _interactiveChangeHandlers=__interactiveChangeHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(void)handlerToInvokeOnInteractivityChanges:(/*^block*/id)arg1 ;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(BOOL)isInteractive;
-(double)percentComplete;
-(long long)presentationStyle;
-(CGAffineTransform)affineTransform;
-(BOOL)isRotating;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAlongsideAnimations:(id)arg1 ;
-(BOOL)isInterruptible;
-(NSMutableArray *)_alongsideAnimations;
-(BOOL)isCancelled;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(IMViewControllerTransitionContext *)_mainContext;
-(double)transitionDuration;
-(long long)completionCurve;
-(NSMutableArray *)_alongsideAnimationViews;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAnimated;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(BOOL)initiallyInteractive;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(CGAffineTransform)targetTransform;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(double)completionVelocity;
-(NSMutableArray *)_alongsideCompletions;
-(id)initWithMainContext:(id)arg1 ;
-(void)_setAlongsideCompletions:(id)arg1 ;
-(void)_setInteractiveChangeHandlers:(id)arg1 ;
-(NSMutableArray *)_interactiveChangeHandlers;
-(void)_setAlongsideAnimationViews:(id)arg1 ;
-(id)_interactiveChangeHandlers:(BOOL)arg1 ;
-(BOOL)isCompleting;
-(void)_setMainContext:(id)arg1 ;
@end

