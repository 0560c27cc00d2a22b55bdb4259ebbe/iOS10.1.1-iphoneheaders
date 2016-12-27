/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CCUIControlCenterButton, UILabel, NSArray;

@interface HUControlCenterContainerView : UIView {

	long long _layoutStyle;
	UIView* _contentView;
	CCUIControlCenterButton* _pageSwitchButton;
	UILabel* _titleLabel;
	CCUIControlCenterButton* _homeButton;
	NSArray* _contentViewConstraints;
	NSArray* _chromeConstraints;

}

@property (nonatomic,retain) NSArray * contentViewConstraints;                          //@synthesize contentViewConstraints=_contentViewConstraints - In the implementation block
@property (nonatomic,retain) NSArray * chromeConstraints;                               //@synthesize chromeConstraints=_chromeConstraints - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) CCUIControlCenterButton * pageSwitchButton;              //@synthesize pageSwitchButton=_pageSwitchButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) CCUIControlCenterButton * homeButton;                    //@synthesize homeButton=_homeButton - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_updateFonts;
-(void)_invalidateAllConstraints;
-(NSArray *)contentViewConstraints;
-(void)setContentViewConstraints:(NSArray *)arg1 ;
-(CCUIControlCenterButton *)pageSwitchButton;
-(NSArray *)chromeConstraints;
-(void)setChromeConstraints:(NSArray *)arg1 ;
-(UIEdgeInsets)_contentLayoutMargins;
-(CCUIControlCenterButton *)homeButton;
@end

