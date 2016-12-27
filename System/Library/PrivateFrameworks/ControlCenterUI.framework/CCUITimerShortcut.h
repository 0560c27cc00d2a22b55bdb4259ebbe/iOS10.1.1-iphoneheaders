/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUIShortcutModule.h>

@class TimerManager;

@interface CCUITimerShortcut : CCUIShortcutModule {

	TimerManager* _timerManager;

}
+(id)identifier;
+(id)displayName;
-(id)init;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(int)orbBehavior;
-(void)scheduleTimerInMinutes:(long long)arg1 ;
-(id)buttonActions;
@end

