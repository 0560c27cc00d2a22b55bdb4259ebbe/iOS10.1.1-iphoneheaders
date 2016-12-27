/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIScalingFlipView : UIView {

	UIView* _backView;
	/*^block*/id _completionBlock;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(id)_timingFunction;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)performFlipWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
@end
