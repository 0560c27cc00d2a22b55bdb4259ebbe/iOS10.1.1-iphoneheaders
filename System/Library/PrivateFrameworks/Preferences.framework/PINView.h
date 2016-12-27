/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PINEntryView.h>

@protocol PSPINEntryViewDelegate;
@class UILabel, FailureBarView, UIButton, NSString;

@interface PINView : UIView <PINEntryView> {

	UILabel* _titleLabel;
	UILabel* _errorTitleLabel;
	FailureBarView* _failureView;
	UILabel* _pinPolicyLabel;
	BOOL _error;
	UIButton* _optionsButton;
	id<PSPINEntryViewDelegate> _delegate;
	/*^block*/id _passcodeOptionsHandler;

}

@property (assign,nonatomic,__weak) id<PSPINEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                 //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setDelegate:(id<PSPINEntryViewDelegate>)arg1 ;
-(id<PSPINEntryViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)showFailedAttempts:(long long)arg1 ;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(id)passcodeOptionsHandler;
-(id)optionsButton;
-(void)optionsButtonTapped;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 font:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)setShowsOptionsButton:(BOOL)arg1 ;
-(void)notifyDelegatePINChanged;
-(void)notifyDelegatePINEntered;
@end

