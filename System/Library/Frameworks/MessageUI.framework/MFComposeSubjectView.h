/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, UIButton, NSString;

@interface MFComposeSubjectView : MFComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {

	unsigned _delegateRespondsToTextChange : 1;
	unsigned _delegateRespondsToWillRemoveContent : 1;
	unsigned _notifyButtonSelected : 1;
	unsigned _showNotifyButton : 1;
	UITextView* _textView;
	UIButton* _notifyButton;

}

@property (nonatomic,readonly) UITextView * textView;                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) UIButton * notifyButton;              //@synthesize notifyButton=_notifyButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(BOOL)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)endEditing:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(void)refreshPreferredContentSize;
-(void)notifyButtonClicked:(id)arg1 ;
-(void)updateNotifyButton;
-(void)_updateTextContainerInsets;
-(BOOL)isEndEditingText:(id)arg1 ;
-(void)setShowNotifyButton:(BOOL)arg1 ;
-(BOOL)isNotifyButtonSelected;
-(void)setNotifyButtonSelected:(BOOL)arg1 ;
-(UIButton *)notifyButton;
@end

