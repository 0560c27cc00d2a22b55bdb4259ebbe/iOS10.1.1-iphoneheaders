/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSArray, NSString;

@interface MFSecureMIMEPersonHeaderView : UIView {

	UIView* _backgroundView;
	UIView* _signedLabel;
	UIView* _secureLabel;
	UIView* _warningLabel;
	UILabel* _label;
	NSArray* _buttons;
	unsigned _editing : 1;

}

@property (nonatomic,copy) NSString * signedLabelText; 
@property (nonatomic,copy) NSString * secureLabelText; 
@property (nonatomic,copy) NSString * warningLabelText; 
@property (nonatomic,copy) NSString * explanationText; 
@property (nonatomic,copy) NSArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL editing; 
+(id)_explanationLabelDefaultAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(NSArray *)buttons;
-(void)setSecureLabelText:(NSString *)arg1 ;
-(void)setWarningLabelText:(NSString *)arg1 ;
-(id)_signedLabel;
-(void)_setText:(id)arg1 forLabel:(id)arg2 ;
-(id)_secureLabel;
-(id)_warningLabel;
-(void)_insert:(BOOL)arg1 subview:(id)arg2 ;
-(double)heightThatFitsSubview:(id)arg1 padding:(double)arg2 ;
-(double)heightThatFitsMainLabel:(CGSize)arg1 ;
-(double)heightThatFitsButtons;
-(double)heightOfBottomMargin;
-(double)widthForSizingToFitSize:(CGSize)arg1 ;
-(BOOL)showsButtons;
-(void)setSignedLabelText:(NSString *)arg1 ;
-(NSString *)signedLabelText;
-(NSString *)secureLabelText;
-(NSString *)warningLabelText;
-(NSString *)explanationText;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setExplanationText:(NSString *)arg1 ;
@end

