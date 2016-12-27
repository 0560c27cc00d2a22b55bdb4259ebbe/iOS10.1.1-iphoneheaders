/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBUIIconForceTouchControllerDelegate.h>
#import <libobjc.A.dylib/SBUIIconForceTouchControllerDataSource.h>
#import <libobjc.A.dylib/SBUIAppIconForceTouchControllerDelegate.h>
#import <libobjc.A.dylib/SBUIAppIconForceTouchControllerDataSource.h>
#import <libobjc.A.dylib/CCUIButtonModuleDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterButtonDelegate.h>

@protocol CCUIButtonControllerDelegate;
@class UIAlertController, SBUIIconForceTouchController, SBUIAppIconForceTouchController, SBUIForceTouchGestureRecognizer, CCUIButtonModule, NSString;

@interface CCUIButtonController : UIViewController <UIGestureRecognizerDelegate, SBUIIconForceTouchControllerDelegate, SBUIIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate, SBUIAppIconForceTouchControllerDataSource, CCUIButtonModuleDelegate, CCUIControlCenterButtonDelegate> {

	UIAlertController* _alertController;
	SBUIIconForceTouchController* _iconForceTouchController;
	SBUIAppIconForceTouchController* _appIconForceTouchController;
	SBUIForceTouchGestureRecognizer* _forceTouchGestureRecognizer;
	id<CCUIButtonControllerDelegate> _delegate;
	CCUIButtonModule* _module;

}

@property (nonatomic,retain) id<CCUIButtonControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CCUIButtonModule * module;                              //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CCUIButtonControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CCUIButtonControllerDelegate>)delegate;
-(id)view;
-(void)buttonTapped:(id)arg1 ;
-(void)viewDidLoad;
-(void)stopHandlingGestureRecognizer:(id)arg1 ;
-(id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2 ;
-(CGRect)appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2 ;
-(UIEdgeInsets)appIconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2 ;
-(double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2 ;
-(BOOL)appIconForceTouchController:(id)arg1 shouldUseSecureWindowForGestureRecognizer:(id)arg2 ;
-(void)startHandlingGestureRecognizer:(id)arg1 ;
-(BOOL)iconForceTouchController:(id)arg1 shouldUseSecureWindowForGestureRecognizer:(id)arg2 ;
-(long long)iconForceTouchController:(id)arg1 layoutStyleForGestureRecognizer:(id)arg2 ;
-(id)iconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2 ;
-(CGRect)iconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2 ;
-(id)iconForceTouchController:(id)arg1 primaryViewControllerForGestureRecognizer:(id)arg2 ;
-(id)iconForceTouchController:(id)arg1 secondaryViewControllerForGestureRecognizer:(id)arg2 ;
-(UIEdgeInsets)iconForceTouchController:(id)arg1 iconImageInsetsForGestureRecognizer:(id)arg2 ;
-(double)iconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2 ;
-(id)glyphImageForState:(int)arg1 ;
-(CCUIButtonModule *)module;
-(BOOL)_usesSmallButtons;
-(id)_createButtonView;
-(void)_updateButtonState;
-(void)setModule:(CCUIButtonModule *)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(void)_presentButtonActionPlatterWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissButtonActionPlatterWithCompletion:(/*^block*/id)arg1 ;
-(void)buttonModule:(id)arg1 willExecuteSecondaryActionWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)buttonModuleStateDidChange:(id)arg1 ;
-(void)buttonModulePropertiesDidChange:(id)arg1 ;
-(void)_updateButtonProperties;
-(void)_tappedOrbingButton;
-(void)_buttonTapped;
-(BOOL)presentConfirmationAlert;
-(id)_buttonViewSnapshot;
-(BOOL)appIconForceTouchController:(id)arg1 isSystemOrInternalApplicationForGestureRecognizer:(id)arg2 ;
-(BOOL)isInternal;
-(id)controlCenterSystemAgent;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterDidDismiss;
@end

