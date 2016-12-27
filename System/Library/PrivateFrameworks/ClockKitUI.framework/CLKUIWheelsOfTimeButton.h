/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKit/UIButton.h>

@interface CLKUIWheelsOfTimeButton : UIButton {

	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;              //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
-(CGRect)_getMaxTextBounds;
-(CFAttributedStringRef)_newAttributedString:(id)arg1 withFont:(id)arg2 usingKerning:(double)arg3 textColor:(id)arg4 ;
-(id)_createButtonImage:(CFAttributedStringRef)arg1 ;
-(void)setButtonText:(id)arg1 selectedFont:(id)arg2 selectedTextColor:(id)arg3 unselectedFont:(id)arg4 unselectedTextColor:(id)arg5 kerning:(double)arg6 ;
@end

