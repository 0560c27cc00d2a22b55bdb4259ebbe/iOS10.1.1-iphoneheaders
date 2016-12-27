/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel, UIFont;

@interface SBUIActionViewLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	UILabel* _label;
	UILabel* _emojiLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long numberOfLines; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(id)viewForLastBaselineLayout;
-(long long)lineBreakMode;
-(long long)numberOfLines;
-(id)viewForFirstBaselineLayout;
-(void)nc_applyVibrantStyling:(id)arg1 ;
-(void)nc_removeAllVibrantStyling;
@end

