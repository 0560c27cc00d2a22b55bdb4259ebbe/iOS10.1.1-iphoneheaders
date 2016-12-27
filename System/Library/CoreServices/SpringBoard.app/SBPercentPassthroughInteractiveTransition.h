/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBViewControllerInteractiveTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class NSString;

@interface SBPercentPassthroughInteractiveTransition : NSObject <SBViewControllerInteractiveTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	double _completionSpeed;
	long long _completionCurve;

}

@property (assign,nonatomic) double completionSpeed;                    //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) long long completionCurve;                 //@synthesize completionCurve=_completionCurve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(BOOL)supportsRestarting;
-(void)updateTransition:(double)arg1 ;
-(id)init;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)setCompletionSpeed:(double)arg1 ;
-(long long)completionCurve;
-(void)setCompletionCurve:(long long)arg1 ;
-(double)completionSpeed;
-(void)cancelTransition;
@end

