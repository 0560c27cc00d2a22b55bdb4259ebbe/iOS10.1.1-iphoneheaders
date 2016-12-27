/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView {

	UIView* _contentView;
	double _visibleHeight;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double visibleHeight;              //@synthesize visibleHeight=_visibleHeight - In the implementation block
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)dealloc;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
@end
