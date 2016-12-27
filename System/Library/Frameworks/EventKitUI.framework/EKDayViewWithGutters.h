/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayAllDayView, UIView, EKDayView;

@interface EKDayViewWithGutters : UIView {

	EKDayAllDayView* _leftAllDayView;
	EKDayAllDayView* _rightAllDayView;
	UIView* _leftGutter;
	UIView* _rightGutter;
	EKDayView* _dayView;
	double _gutterWidth;
	double _allDayHeight;

}

@property (nonatomic,readonly) UIView * leftGutter;               //@synthesize leftGutter=_leftGutter - In the implementation block
@property (nonatomic,readonly) UIView * rightGutter;              //@synthesize rightGutter=_rightGutter - In the implementation block
@property (nonatomic,retain) EKDayView * dayView;                 //@synthesize dayView=_dayView - In the implementation block
@property (assign,nonatomic) double gutterWidth;                  //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (assign,nonatomic) double allDayHeight;                 //@synthesize allDayHeight=_allDayHeight - In the implementation block
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(id)_createAllDayView;
-(void)setDayView:(EKDayView *)arg1 ;
-(UIView *)leftGutter;
-(EKDayView *)dayView;
-(UIView *)rightGutter;
-(void)setAllDayHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dayView:(id)arg2 ;
-(double)allDayHeight;
@end

