/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray, UITextField, CNRepeatingGradientSeparatorView, UIImageView, NSDictionary;

@interface CNAddressComponentTextFieldCell : UITableViewCell {

	NSArray* _splitFieldConstraints;
	NSArray* _oneFieldConstraints;
	BOOL _usesSplitTextFields;
	UITextField* _textFieldForChevron;
	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	CNRepeatingGradientSeparatorView* _separator;
	UIImageView* _chevron;
	NSArray* _componentConstraints;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) CNRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                     //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) NSArray * componentConstraints;                            //@synthesize componentConstraints=_componentConstraints - In the implementation block
@property (assign,nonatomic) BOOL usesSplitTextFields;                                  //@synthesize usesSplitTextFields=_usesSplitTextFields - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,retain) UITextField * textFieldForChevron;                         //@synthesize textFieldForChevron=_textFieldForChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(NSArray *)textFields;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)setSeparator:(CNRepeatingGradientSeparatorView *)arg1 ;
-(CNRepeatingGradientSeparatorView *)separator;
-(void)setUsesSplitTextFields:(BOOL)arg1 ;
-(void)setTextFieldForChevron:(UITextField *)arg1 ;
-(id)_addTextField;
-(UITextField *)textFieldLeft;
-(UITextField *)textFieldRight;
-(BOOL)usesSplitTextFields;
-(UITextField *)textFieldForChevron;
-(void)setTextFieldLeft:(UITextField *)arg1 ;
-(void)setTextFieldRight:(UITextField *)arg1 ;
-(NSArray *)componentConstraints;
-(void)setComponentConstraints:(NSArray *)arg1 ;
@end

