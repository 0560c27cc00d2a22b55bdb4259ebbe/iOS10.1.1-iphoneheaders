/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPress, UIPressesEvent;

@interface UIGestureDelayedPress : NSObject <NSCopying> {

	long long _delayCount;
	BOOL _cloneForSecondDelivery;
	UIPress* _press;
	UIPress* _stateWhenDelayed;
	UIPress* _stateWhenDelivered;
	UIPressesEvent* _event;

}

@property (nonatomic,retain) UIPress * press;                           //@synthesize press=_press - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIPressesEvent * event;                    //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPressesEvent *)event;
-(void)setEvent:(UIPressesEvent *)arg1 ;
-(UIPress *)press;
-(UIPress *)stateWhenDelayed;
-(void)incrementDelayCount;
-(void)setPress:(UIPress *)arg1 ;
-(long long)decrementDelayCount;
-(void)setStateWhenDelayed:(UIPress *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(long long)delayCount;
-(long long)phaseForDelivery;
-(double)timestampForDelivery;
-(UIPress *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UIPress *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
-(void)saveCurrentPressState;
@end

