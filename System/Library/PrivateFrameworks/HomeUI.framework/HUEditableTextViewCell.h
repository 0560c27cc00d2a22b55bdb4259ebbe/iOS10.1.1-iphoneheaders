/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUIconCell.h>

@class NSString, UITextView;

@interface HUEditableTextViewCell : HUIconCell {

	BOOL _showingPlaceholder;
	NSString* _text;
	NSString* _placeholderText;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL showingPlaceholder;                                     //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate; 
@property (nonatomic,copy) NSString * text;                                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                    //@synthesize placeholderText=_placeholderText - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(UITextView *)textView;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)handleUITextViewTextDidBeginEditingNotification:(id)arg1 ;
-(void)handleUITextViewTextDidEndEditingNotification:(id)arg1 ;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(void)updateTextColor;
-(BOOL)showingPlaceholder;
-(id)trimmedStringForText:(id)arg1 ;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
@end

