/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPaymentSetupPrivacyFooterViewDelegate;
@class UITextView, UIColor, NSString;

@interface PKPaymentSetupPrivacyFooterView : UIView <UITextViewDelegate> {

	long long _context;
	UITextView* _messageView;
	id<PKPaymentSetupPrivacyFooterViewDelegate> _delegate;
	UIColor* _messageColor;
	UIColor* _linkColor;

}

@property (assign,nonatomic) id<PKPaymentSetupPrivacyFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * messageColor;                                              //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,copy) UIColor * linkColor;                                                 //@synthesize linkColor=_linkColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPaymentSetupPrivacyFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPaymentSetupPrivacyFooterViewDelegate>)delegate;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_textAttributes;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setMessageColor:(UIColor *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(id)pk_childrenForAppearance;
-(id)_linkTextAttributes;
-(id)_defaultMessageColor;
-(id)_defaultLinkColor;
-(void)_loadMessageView;
-(void)_loadMessageViewIfNecessary;
-(UIColor *)messageColor;
-(UIColor *)linkColor;
@end

