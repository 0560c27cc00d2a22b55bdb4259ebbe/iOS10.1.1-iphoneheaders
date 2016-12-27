/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;
	NSDate* m_startDate;

}

@property (readonly) NSDate * _startDate; 
@property (readonly) BOOL _canceled; 
@property (retain) id target; 
@property (retain) id userInfo; 
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)userInfo;
-(double)delay;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)touchWithDelay:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)timerFired:(id)arg1 ;
-(void)unschedule;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(void)touch;
-(BOOL)scheduled;
-(void)setUserInfo:(id)arg1 ;
-(NSDate *)_startDate;
-(BOOL)_canceled;
@end

