/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITextField, UIVisualEffectView, UIImageView, NSMutableArray;

@interface AKTextField : UIView {

	BOOL _usesVibrancy;
	UILabel* _entryDescription;
	UITextField* _entryField;
	long long _textFieldStyle;
	long long _rowIdentifier;
	long long _blurEffectStyle;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _backgroundImageView;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) UILabel * entryDescription;                       //@synthesize entryDescription=_entryDescription - In the implementation block
@property (nonatomic,readonly) UITextField * entryField;                         //@synthesize entryField=_entryField - In the implementation block
@property (assign,nonatomic) long long textFieldStyle;                           //@synthesize textFieldStyle=_textFieldStyle - In the implementation block
@property (assign,nonatomic) long long rowIdentifier;                            //@synthesize rowIdentifier=_rowIdentifier - In the implementation block
@property (assign,nonatomic) BOOL usesVibrancy;                                  //@synthesize usesVibrancy=_usesVibrancy - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                          //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(id)_backgroundImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2 ;
+(id)_cachedImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)_commonInit;
-(NSMutableArray *)constraints;
-(UIImageView *)backgroundImageView;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)_setupBackgroundView;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(void)_updateFonts:(id)arg1 ;
-(void)setRowIdentifier:(long long)arg1 ;
-(UITextField *)entryField;
-(void)setUsesVibrancy:(BOOL)arg1 ;
-(BOOL)usesVibrancy;
-(long long)textFieldStyle;
-(void)_setupInlineEntryStyleViews;
-(void)_setupAlertStyleViews;
-(id)_fieldTextColor;
-(void)_setupLabelAndFieldStyles;
-(void)setTextFieldStyle:(long long)arg1 ;
-(long long)rowIdentifier;
-(UILabel *)entryDescription;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

