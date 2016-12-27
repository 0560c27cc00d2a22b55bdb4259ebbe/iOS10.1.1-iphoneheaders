/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUserEventInterfaceObserver.h>
#import <SpringBoard/SBIdleTimer.h>

@protocol SBIdleTimerDelegate;
@class SBUserEventInterface, NSString;

@interface SBAutomaticIdleTimer : NSObject <SBUserEventInterfaceObserver, SBIdleTimer> {

	id<SBIdleTimerDelegate> _delegate;
	SBUserEventInterface* _userEventTimer;
	double _interval;
	long long _mode;
	BOOL _shouldReportUserEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBIdleTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMode:(long long)arg1 interval:(double)arg2 reportUserEvents:(BOOL)arg3 ;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(void)userEventTimerReceivedUserEvent:(id)arg1 ;
-(void)userEventTimerPresenceTriggered:(id)arg1 ;
-(void)userEventTimerPresenceExpired:(id)arg1 ;
-(void)userEventTimerUserIdled:(id)arg1 ;
-(void)userEventTimerUserUnidled:(id)arg1 ;
-(id)idleTimerForExtension;
-(id)initWithMode:(long long)arg1 interval:(double)arg2 reportUserEvents:(BOOL)arg3 userEventInterface:(id)arg4 ;
-(id)init;
-(void)setDelegate:(id<SBIdleTimerDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id<SBIdleTimerDelegate>)delegate;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

