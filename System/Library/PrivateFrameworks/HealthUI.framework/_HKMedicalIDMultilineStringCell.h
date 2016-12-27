/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextView, NSString;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell {

	UILabel* _titleLabel;
	UITextView* _textLabel;
	NSString* _stringValue;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * stringValue;                                             //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,getter=isBodyTextInteractive,nonatomic) BOOL bodyTextInteractive; 
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)isBodyTextInteractive;
-(void)setBodyTextInteractive:(BOOL)arg1 ;
@end

