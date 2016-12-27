/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIBackdropViewGraphicsQualityChangeDelegate.h>

@class UILabel, UIButton, CKBrowserSwitcherScrollBar, _UIBackdropView, UIView;

@interface CKBrowserSwitcherFooterView : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {

	BOOL _dragging;
	long long _barStyle;
	UILabel* _appNameLabel;
	UIButton* _expandButton;
	UIButton* _browserButton;
	CKBrowserSwitcherScrollBar* _switcherScrollBar;
	_UIBackdropView* _backdropView;
	UIView* _grayLine;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILabel * appNameLabel;                                      //@synthesize appNameLabel=_appNameLabel - In the implementation block
@property (nonatomic,retain) UIButton * expandButton;                                     //@synthesize expandButton=_expandButton - In the implementation block
@property (nonatomic,retain) UIButton * browserButton;                                    //@synthesize browserButton=_browserButton - In the implementation block
@property (nonatomic,retain) UIView * grayLine;                                           //@synthesize grayLine=_grayLine - In the implementation block
@property (nonatomic,retain) CKBrowserSwitcherScrollBar * switcherScrollBar;              //@synthesize switcherScrollBar=_switcherScrollBar - In the implementation block
@property (nonatomic,readonly) long long barStyle;                                        //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                             //@synthesize dragging=_dragging - In the implementation block
-(void)layoutSubviews;
-(BOOL)isDragging;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2 ;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2 ;
-(UIButton *)browserButton;
-(void)setBrowserButton:(UIButton *)arg1 ;
-(void)setGrayLine:(UIView *)arg1 ;
-(UIButton *)expandButton;
-(UILabel *)appNameLabel;
-(CKBrowserSwitcherScrollBar *)switcherScrollBar;
-(UIView *)grayLine;
-(void)_animateOutScrollBar;
-(void)_animateInScrollBar;
-(id)initWithFrame:(CGRect)arg1 barStyle:(long long)arg2 ;
-(void)setDragging:(BOOL)arg1 ;
-(void)setAppNameLabel:(UILabel *)arg1 ;
-(void)setExpandButton:(UIButton *)arg1 ;
-(void)setSwitcherScrollBar:(CKBrowserSwitcherScrollBar *)arg1 ;
@end

