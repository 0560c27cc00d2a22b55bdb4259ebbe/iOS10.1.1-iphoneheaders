/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBUIActionPlatterViewControllerDelegate;
@class UIStackView, UIView, _UIFeedbackRetargetBehavior, NSArray, UILongPressGestureRecognizer, NSString;

@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate> {

	SCD_Struct_SB1 _delegateRespondsTo;
	UIStackView* _stackView;
	UIView* _keylinesContainerView;
	_UIFeedbackRetargetBehavior* _feedbackRetargetBehavior;
	BOOL _reversesActions;
	NSArray* _actions;
	UILongPressGestureRecognizer* _gestureRecognizer;
	long long _imagePosition;
	id<SBUIActionPlatterViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,__weak,readonly) UILongPressGestureRecognizer * gestureRecognizer;                //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL reversesActions;                                                     //@synthesize reversesActions=_reversesActions - In the implementation block
@property (assign,nonatomic) long long imagePosition;                                                  //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIActionPlatterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBUIActionPlatterViewControllerDelegate>)arg1 ;
-(id<SBUIActionPlatterViewControllerDelegate>)delegate;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSArray *)actions;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithActions:(id)arg1 gestureRecognizer:(id)arg2 ;
-(BOOL)reversesActions;
-(void)_updateKeylineViews;
-(void)setReversesActions:(BOOL)arg1 ;
-(void)setImagePosition:(long long)arg1 ;
-(long long)imagePosition;
-(void)_handleLongPressGestureRecognizer:(id)arg1 ;
@end

