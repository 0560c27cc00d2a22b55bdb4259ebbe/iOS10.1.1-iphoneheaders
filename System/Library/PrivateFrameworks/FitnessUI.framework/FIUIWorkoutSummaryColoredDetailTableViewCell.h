/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIFont, UIView, NSString, UIColor;

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _noDataLabel;
	UIFont* _detailFont;
	UIFont* _suffixFont;
	UIView* _lineView;
	NSString* _detailString;
	NSString* _suffixString;
	UIColor* _textColor;
	BOOL _shouldForceLTRForDetailString;
	UIView* _optionalButtonView;
	UIView* _customAccessoryView;

}

@property (nonatomic,readonly) UIView * optionalButtonView;              //@synthesize optionalButtonView=_optionalButtonView - In the implementation block
@property (nonatomic,retain) UIView * customAccessoryView;               //@synthesize customAccessoryView=_customAccessoryView - In the implementation block
+(double)rowHeightWithNoDataString:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setTitleString:(id)arg1 ;
-(void)_setupUI;
-(void)_resizeFontsIfNeededToFitWidth:(double)arg1 ;
-(void)_formatDetailLabel;
-(void)setCustomAccessoryView:(UIView *)arg1 ;
-(void)setLineHidden:(BOOL)arg1 ;
-(void)setDetailString:(id)arg1 suffixString:(id)arg2 textColor:(id)arg3 shouldForceLTRForDetailString:(BOOL)arg4 ;
-(void)setNoDataString:(id)arg1 textColor:(id)arg2 ;
-(UIView *)optionalButtonView;
-(UIView *)customAccessoryView;
@end
