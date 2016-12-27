/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol LPTapToLoadViewDelegate;
@class LPTextView, UIView, LPTapToLoadViewStyle, UILongPressGestureRecognizer, NSString;

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {

	LPTextView* _captionView;
	UIView* _progressView;
	LPTapToLoadViewStyle* _style;
	UIView* _highlightView;
	UILongPressGestureRecognizer* _highlightGestureRecognizer;
	BOOL _wasTapped;
	/*^block*/id _animateOutCompletionHandler;
	id<LPTapToLoadViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<LPTapToLoadViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<LPTapToLoadViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<LPTapToLoadViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_didScroll;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(id)initWithStyle:(id)arg1 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)layoutComponentView;
-(void)animateOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_createIndeterminateProgressIndicator;
-(void)_buildViews;
-(void)_animateToProgressView;
@end

