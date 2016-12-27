/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/VideoSubscriberAccountDeveloperSettings.bundle/VideoSubscriberAccountDeveloperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountDeveloperSettings/VideoSubscriberAccountDeveloperSettings-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol VSDeveloperAttributeCellDelegate;
@class UILabel, UITextField, NSString;

@interface VSDeveloperAttributeCell : UITableViewCell <UITextFieldDelegate> {

	id<VSDeveloperAttributeCellDelegate> _delegate;
	UILabel* _label;
	UITextField* _textField;

}

@property (nonatomic,retain) UILabel * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                           //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<VSDeveloperAttributeCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * fieldValue; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long returnKeyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nib;
-(void)setDelegate:(id<VSDeveloperAttributeCellDelegate>)arg1 ;
-(void)dealloc;
-(id<VSDeveloperAttributeCellDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)resignFirstResponder;
-(void)awakeFromNib;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UITextField *)textField;
-(NSString *)placeholder;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(NSString *)fieldValue;
-(void)setFieldValue:(NSString *)arg1 ;
@end

