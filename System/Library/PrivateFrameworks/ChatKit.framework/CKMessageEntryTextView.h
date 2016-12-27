/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <EmojiKit/EMKTextView.h>

@class UIColor, NSString, UILabel, UIKeyboardInputMode, NSAttributedString;

@interface CKMessageEntryTextView : EMKTextView {

	BOOL _showingDictationPlaceholder;
	BOOL _sendCurrentLocationFromKeyboardEnabled;
	BOOL _updatesFontOnTextChange;
	BOOL _hideCaret;
	BOOL _preventingResignFirstResponder;
	UIColor* _placeholderColor;
	double _placeHolderWidth;
	NSString* _autocorrectionContext;
	NSString* _responseContext;
	UILabel* _placeholderLabel;
	UIKeyboardInputMode* _savedKeyboardInputMode;

}

@property (assign,getter=isShowingDictationPlaceholder,nonatomic) BOOL showingDictationPlaceholder;                    //@synthesize showingDictationPlaceholder=_showingDictationPlaceholder - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                               //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * savedKeyboardInputMode;                                             //@synthesize savedKeyboardInputMode=_savedKeyboardInputMode - In the implementation block
@property (nonatomic,copy) NSAttributedString * compositionText; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) UIColor * placeholderColor;                                                                 //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double placeHolderWidth;                                                                  //@synthesize placeHolderWidth=_placeHolderWidth - In the implementation block
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (nonatomic,copy) NSString * autocorrectionContext;                                                           //@synthesize autocorrectionContext=_autocorrectionContext - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                                 //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) BOOL sendCurrentLocationFromKeyboardEnabled;                                              //@synthesize sendCurrentLocationFromKeyboardEnabled=_sendCurrentLocationFromKeyboardEnabled - In the implementation block
@property (assign,nonatomic) BOOL updatesFontOnTextChange;                                                             //@synthesize updatesFontOnTextChange=_updatesFontOnTextChange - In the implementation block
@property (assign,nonatomic) BOOL hideCaret;                                                                           //@synthesize hideCaret=_hideCaret - In the implementation block
@property (assign,getter=isPreventingResignFirstResponder,nonatomic) BOOL preventingResignFirstResponder;              //@synthesize preventingResignFirstResponder=_preventingResignFirstResponder - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)setFont:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertDictationResultPlaceholder;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)responseContext;
-(NSString *)autocorrectionContext;
-(void)setResponseContext:(NSString *)arg1 ;
-(SEL)_sendCurrentLocationAction;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setPlaceHolderWidth:(double)arg1 ;
-(BOOL)isSingleLine;
-(void)setHideCaret:(BOOL)arg1 ;
-(void)setSendCurrentLocationFromKeyboardEnabled:(BOOL)arg1 ;
-(NSAttributedString *)compositionText;
-(BOOL)isShowingDictationPlaceholder;
-(void)saveKeyboardInputMode;
-(void)restoreKeyboardInputMode;
-(BOOL)hideCaret;
-(void)setCompositionText:(NSAttributedString *)arg1 ;
-(BOOL)isPreventingResignFirstResponder;
-(void)setSavedKeyboardInputMode:(UIKeyboardInputMode *)arg1 ;
-(double)placeHolderWidth;
-(void)updateTextView;
-(void)setShowingDictationPlaceholder:(BOOL)arg1 ;
-(BOOL)updatesFontOnTextChange;
-(UIKeyboardInputMode *)savedKeyboardInputMode;
-(void)updateFontIfNeeded;
-(BOOL)sendCurrentLocationFromKeyboardEnabled;
-(void)setUpdatesFontOnTextChange:(BOOL)arg1 ;
-(void)setPreventingResignFirstResponder:(BOOL)arg1 ;
@end

