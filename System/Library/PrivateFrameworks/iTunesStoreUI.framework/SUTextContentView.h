/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextContentView.h>

@class UILabel, NSString;

@interface SUTextContentView : UITextContentView {

	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) NSString * placeholder; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setText:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
@end

