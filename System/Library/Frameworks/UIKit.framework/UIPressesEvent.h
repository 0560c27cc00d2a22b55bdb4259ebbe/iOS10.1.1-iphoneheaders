/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIEvent.h>

@class NSMutableSet, NSHashTable, UIPress, NSSet;

@interface UIPressesEvent : UIEvent {

	NSMutableSet* _allPresses;
	NSHashTable* _terminalEventRegistrants;
	UIPress* _triggeringPhysicalButton;

}

@property (nonatomic,retain) UIPress * _triggeringPhysicalButton;              //@synthesize triggeringPhysicalButton=_triggeringPhysicalButton - In the implementation block
@property (nonatomic,readonly) NSSet * allPresses; 
-(id)description;
-(id)_init;
-(long long)type;
-(void)_addPress:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(NSSet *)allPresses;
-(void)set_triggeringPhysicalButton:(UIPress *)arg1 ;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)_windows;
-(id)_cloneEvent;
-(long long)subtype;
-(UIPress *)_triggeringPhysicalButton;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_allPresses;
-(id)physicalButtonsForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)pressesForGestureRecognizer:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(void)_addGesturesForPress:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2 ;
-(id)_directionalPressWithStrongestForce;
-(void)_registerForTerminalEvent:(id)arg1 ;
-(void)_unregisterForTerminalEvent:(id)arg1 ;
-(id)_terminalRegistrantsForPressType:(long long)arg1 ;
@end

