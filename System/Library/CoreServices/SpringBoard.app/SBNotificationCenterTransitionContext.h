/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBViewControllerTransitionContext.h>

@interface SBNotificationCenterTransitionContext : SBViewControllerTransitionContext {

	BOOL _fromCurrentState;
	long long _presentationType;
	/*^block*/id _stepper;
	/*^block*/id _presentationBegunHandler;
	/*^block*/id _pendingTransition;
	/*^block*/id _completion;
	CGPoint _initialTouchLocation;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
@property (assign,nonatomic) long long presentationType;                                   //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,getter=isFromCurrentState,nonatomic) BOOL fromCurrentState;              //@synthesize fromCurrentState=_fromCurrentState - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                 //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (nonatomic,copy) id stepper;                                                     //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,copy) id presentationBegunHandler;                                    //@synthesize presentationBegunHandler=_presentationBegunHandler - In the implementation block
@property (nonatomic,copy) id pendingTransition;                                           //@synthesize pendingTransition=_pendingTransition - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(void)setPresentationType:(long long)arg1 ;
-(BOOL)isFromCurrentState;
-(void)setFromCurrentState:(BOOL)arg1 ;
-(id)presentationBegunHandler;
-(void)setPresentationBegunHandler:(id)arg1 ;
-(id)pendingTransition;
-(void)setPendingTransition:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(long long)presentationType;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(BOOL)isPresenting;
-(void)setStepper:(id)arg1 ;
-(id)stepper;
@end

