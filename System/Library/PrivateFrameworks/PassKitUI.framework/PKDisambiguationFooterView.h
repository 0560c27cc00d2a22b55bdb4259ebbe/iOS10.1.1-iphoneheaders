/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {

	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIButton* _secondaryActionButton;
	double _topPadding;
	double _secondaryActionTopPadding;
	double _bottomPadding;

}

@property (nonatomic,retain,readonly) UILabel * descriptionLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIButton * secondaryActionButton; 
@property (assign,nonatomic) double topPadding;                                      //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double secondaryActionTopPadding;                       //@synthesize secondaryActionTopPadding=_secondaryActionTopPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                   //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)topPadding;
-(double)bottomPadding;
-(UIButton *)secondaryActionButton;
-(UIButton *)actionButton;
-(UILabel *)descriptionLabel;
-(void)sizeToFitForTableView:(id)arg1 ;
-(double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(double)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(double)secondaryActionTopPadding;
@end

