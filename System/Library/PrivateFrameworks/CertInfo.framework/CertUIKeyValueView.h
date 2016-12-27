/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface CertUIKeyValueView : UIView {

	double _preferredValueLabelOriginX;
	UILabel* _keyLabel;
	UILabel* _valueLabel;
	UIImageView* _verifiedImageView;
	UILabel* _verifiedLabel;

}

@property (nonatomic,retain) UILabel * keyLabel;                             //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
@property (nonatomic,retain) UILabel * verifiedLabel;                        //@synthesize verifiedLabel=_verifiedLabel - In the implementation block
@property (assign,nonatomic) double preferredValueLabelOriginX;              //@synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX - In the implementation block
+(double)defaultPreferredValueLabelOriginX;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)titleFont;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UILabel *)keyLabel;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(void)setPreferredValueLabelOriginX:(double)arg1 ;
-(void)setKey:(id)arg1 value:(id)arg2 ;
-(void)setItemDetail:(id)arg1 ;
-(id)detailFont;
-(double)preferredValueLabelOriginX;
-(UILabel *)verifiedLabel;
-(UIImageView *)verifiedImageView;
-(id)verifiedColor;
-(id)verifiedFont;
-(void)setHighlightTextColor:(id)arg1 ;
-(void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(BOOL)arg3 ;
-(void)_createVerifiedComponentsIfNeeded;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
-(void)setVerifiedLabel:(UILabel *)arg1 ;
@end

