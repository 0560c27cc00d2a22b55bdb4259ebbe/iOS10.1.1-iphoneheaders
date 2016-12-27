/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIView, _UIVisualEffectCaptureView, _UIPopoverBackgroundVisualEffectView, UIColor;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

	UIView* _arrowView;
	UIView* _leftCapView;
	UIView* _rightCapView;
	_UIVisualEffectCaptureView* _blurViewCapture;
	_UIPopoverBackgroundVisualEffectView* _blurView;
	UIColor* _popoverBackgroundColor;
	BOOL _popoverBackgroundColorIsOpaque;
	double _arrowOffset;
	unsigned long long _arrowDirection;
	long long _backgroundStyle;
	BOOL _arrowVisible;
	BOOL useShortMode;
	BOOL _debugMode;

}

@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) BOOL useShortMode; 
@property (assign,getter=isDebugModeEnabled,nonatomic) BOOL debugModeEnabled;              //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,readonly) UIColor * contentBlendingColor; 
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(id)backgroundEffect;
-(BOOL)isPinned;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(CGSize)_shadowOffset;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(void)_loadNecessaryViews;
-(double)minNonPinnedOffset;
-(double)maxNonPinnedOffset;
-(BOOL)isRightArrowPinnedToTop;
-(BOOL)isRightArrowPinnedToBottom;
-(BOOL)useShortMode;
-(void)_layoutArrowViewsUpOrDown;
-(void)_layoutArrowViewsLeftOrRight;
-(void)_layoutArrowViewsNone;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPath;
-(BOOL)hasComponentViews;
-(BOOL)wouldPinForOffset:(double)arg1 ;
-(void)_configureEffectView;
-(void)_removeEffectView;
-(BOOL)_needsSeperateBlending;
-(void)_updateChrome;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIColor *)popoverBackgroundColor;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBlendingColor;
-(BOOL)isArrowVisible;
-(void)setArrowVisible:(BOOL)arg1 ;
-(void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseShortMode:(BOOL)arg1 ;
-(BOOL)isDebugModeEnabled;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
@end

